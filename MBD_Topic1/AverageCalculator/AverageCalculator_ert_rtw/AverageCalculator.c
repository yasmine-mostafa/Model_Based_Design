/*
 * File: AverageCalculator.c
 *
 * Code generated for Simulink model 'AverageCalculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 16:58:37 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AverageCalculator.h"
#include "AverageCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_AverageCalculator_T AverageCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AverageCalculator_T AverageCalculator_Y;

/* Real-time model */
static RT_MODEL_AverageCalculator_T AverageCalculator_M_;
RT_MODEL_AverageCalculator_T *const AverageCalculator_M = &AverageCalculator_M_;

/* Model step function */
void AverageCalculator_step(void)
{
  /* Outport: '<Root>/Sum' incorporates:
   *  Inport: '<Root>/Array'
   */
  AverageCalculator_Y.Sum = AverageCalculator_U.Array;

  /* Outport: '<Root>/Min' incorporates:
   *  Inport: '<Root>/Array'
   */
  AverageCalculator_Y.Min = AverageCalculator_U.Array;

  /* Outport: '<Root>/Max' incorporates:
   *  Inport: '<Root>/Array'
   */
  AverageCalculator_Y.Max = AverageCalculator_U.Array;
}

/* Model initialize function */
void AverageCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(AverageCalculator_M, (NULL));

  /* external inputs */
  AverageCalculator_U.Array = 0.0;

  /* external outputs */
  (void) memset((void *)&AverageCalculator_Y, 0,
                sizeof(ExtY_AverageCalculator_T));
}

/* Model terminate function */
void AverageCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
