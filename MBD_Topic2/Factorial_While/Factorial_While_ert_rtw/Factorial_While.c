/*
 * File: Factorial_While.c
 *
 * Code generated for Simulink model 'Factorial_While'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 04:44:27 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_While.h"
#include "Factorial_While_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_While_T Factorial_While_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_While_T Factorial_While_Y;

/* Real-time model */
static RT_MODEL_Factorial_While_T Factorial_While_M_;
RT_MODEL_Factorial_While_T *const Factorial_While_M = &Factorial_While_M_;

/* Model step function */
void Factorial_While_step(void)
{
  uint8_T UnitDelay_DSTATE;
  uint8_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1U;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1U;

  /* Inport: '<Root>/Input1' */
  loopCond = (Factorial_While_U.Input1 != 0);
  while (loopCond) {
    /* Outport: '<Root>/Output' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Factorial_While_Y.Output = (uint8_T)((uint32_T)s1_iter * UnitDelay_DSTATE);

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    UnitDelay_DSTATE = Factorial_While_Y.Output;

    /* RelationalOperator: '<S1>/GreaterThan' incorporates:
     *  Inport: '<Root>/Input'
     */
    loopCond = (Factorial_While_U.Input > s1_iter);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_While_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_While_M, (NULL));

  /* external inputs */
  (void)memset(&Factorial_While_U, 0, sizeof(ExtU_Factorial_While_T));

  /* external outputs */
  Factorial_While_Y.Output = 0U;
}

/* Model terminate function */
void Factorial_While_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
