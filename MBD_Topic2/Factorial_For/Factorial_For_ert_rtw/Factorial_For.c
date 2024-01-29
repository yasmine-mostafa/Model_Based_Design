/*
 * File: Factorial_For.c
 *
 * Code generated for Simulink model 'Factorial_For'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 04:10:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_For.h"
#include "Factorial_For_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_For_T Factorial_For_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_For_T Factorial_For_Y;

/* Real-time model */
static RT_MODEL_Factorial_For_T Factorial_For_M_;
RT_MODEL_Factorial_For_T *const Factorial_For_M = &Factorial_For_M_;

/* Model step function */
void Factorial_For_step(void)
{
  int32_T tmp_0;
  uint8_T UnitDelay_DSTATE;
  uint8_T s1_iter;
  uint8_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1U;

  /* Inport: '<Root>/Input' */
  tmp = Factorial_For_U.Input;
  if (Factorial_For_U.Input > 254) {
    tmp = 254U;
  }

  /* End of Inport: '<Root>/Input' */
  for (s1_iter = 1U; s1_iter <= tmp; s1_iter++) {
    /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
     *  UnitDelay: '<S1>/Unit Delay'
     */
    /* MATLAB Function 'For Iterator Subsystem/MATLAB Function': '<S2>:1' */
    /* '<S2>:1:4' y = u_prev*u; */
    tmp_0 = (int32_T)((uint32_T)UnitDelay_DSTATE * s1_iter);
    if ((uint32_T)tmp_0 > 255U) {
      tmp_0 = 255;
    }

    /* Outport: '<Root>/Output' incorporates:
     *  MATLAB Function: '<S1>/MATLAB Function'
     */
    Factorial_For_Y.Output = (uint8_T)tmp_0;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    UnitDelay_DSTATE = Factorial_For_Y.Output;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_For_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_For_M, (NULL));

  /* external inputs */
  Factorial_For_U.Input = 0U;

  /* external outputs */
  Factorial_For_Y.Output = 0U;
}

/* Model terminate function */
void Factorial_For_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
