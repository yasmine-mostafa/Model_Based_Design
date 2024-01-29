/*
 * File: DEC_Counter.c
 *
 * Code generated for Simulink model 'DEC_Counter'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 15:55:11 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DEC_Counter.h"
#include "DEC_Counter_private.h"

/* Block states (default storage) */
DW_DEC_Counter_T DEC_Counter_DW;

/* External inputs (root inport signals with default storage) */
ExtU_DEC_Counter_T DEC_Counter_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DEC_Counter_T DEC_Counter_Y;

/* Real-time model */
static RT_MODEL_DEC_Counter_T DEC_Counter_M_;
RT_MODEL_DEC_Counter_T *const DEC_Counter_M = &DEC_Counter_M_;

/* Model step function */
void DEC_Counter_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  DEC_Counter_Y.Output = DEC_Counter_DW.UnitDelay_DSTATE;

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Sum: '<S1>/Subtract1'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (DEC_Counter_DW.UnitDelay_DSTATE - 1.0 >= 0.0) {
    /* Update for UnitDelay: '<S1>/Unit Delay' */
    DEC_Counter_DW.UnitDelay_DSTATE--;
  } else {
    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Inport: '<Root>/Input'
     */
    DEC_Counter_DW.UnitDelay_DSTATE = DEC_Counter_U.Input;
  }

  /* End of Switch: '<S1>/Switch2' */
}

/* Model initialize function */
void DEC_Counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(DEC_Counter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&DEC_Counter_DW, 0,
                sizeof(DW_DEC_Counter_T));

  /* external inputs */
  DEC_Counter_U.Input = 0.0;

  /* external outputs */
  DEC_Counter_Y.Output = 0.0;
}

/* Model terminate function */
void DEC_Counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
