/*
 * File: INC_Counter.c
 *
 * Code generated for Simulink model 'INC_Counter'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 15:54:26 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "INC_Counter.h"
#include "INC_Counter_private.h"

/* Block states (default storage) */
DW_INC_Counter_T INC_Counter_DW;

/* External inputs (root inport signals with default storage) */
ExtU_INC_Counter_T INC_Counter_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_INC_Counter_T INC_Counter_Y;

/* Real-time model */
static RT_MODEL_INC_Counter_T INC_Counter_M_;
RT_MODEL_INC_Counter_T *const INC_Counter_M = &INC_Counter_M_;

/* Model step function */
void INC_Counter_step(void)
{
  real_T rtb_Add;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_Add = INC_Counter_DW.UnitDelay_DSTATE + 1.0;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/Num'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  Sum: '<S1>/Add'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (INC_Counter_DW.UnitDelay_DSTATE + 1.0 > INC_Counter_U.Num) {
    rtb_Add = 0.0;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Outport: '<Root>/Output' */
  INC_Counter_Y.Output = rtb_Add;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  INC_Counter_DW.UnitDelay_DSTATE = rtb_Add;
}

/* Model initialize function */
void INC_Counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(INC_Counter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&INC_Counter_DW, 0,
                sizeof(DW_INC_Counter_T));

  /* external inputs */
  INC_Counter_U.Num = 0.0;

  /* external outputs */
  INC_Counter_Y.Output = 0.0;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  INC_Counter_DW.UnitDelay_DSTATE = -1.0;
}

/* Model terminate function */
void INC_Counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
