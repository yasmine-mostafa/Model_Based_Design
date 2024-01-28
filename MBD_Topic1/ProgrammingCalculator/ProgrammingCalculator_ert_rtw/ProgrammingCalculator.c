/*
 * File: ProgrammingCalculator.c
 *
 * Code generated for Simulink model 'ProgrammingCalculator'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 16:52:16 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ProgrammingCalculator.h"
#include "ProgrammingCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ProgrammingCalculator_T ProgrammingCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ProgrammingCalculator_T ProgrammingCalculator_Y;

/* Real-time model */
static RT_MODEL_ProgrammingCalculato_T ProgrammingCalculator_M_;
RT_MODEL_ProgrammingCalculato_T *const ProgrammingCalculator_M =
  &ProgrammingCalculator_M_;

/* Model step function */
void ProgrammingCalculator_step(void)
{
  uint8_T rtb_BitwiseXOR;

  /* Outport: '<Root>/AND' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
   */
  ProgrammingCalculator_Y.AND = (uint8_T)(ProgrammingCalculator_U.Num1 &
    ProgrammingCalculator_U.Num2);

  /* Outport: '<Root>/OR' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise OR'
   */
  ProgrammingCalculator_Y.OR = (uint8_T)(ProgrammingCalculator_U.Num1 |
    ProgrammingCalculator_U.Num2);

  /* S-Function (sfix_bitop): '<S1>/Bitwise XOR' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   */
  rtb_BitwiseXOR = (uint8_T)(ProgrammingCalculator_U.Num1 ^
    ProgrammingCalculator_U.Num2);

  /* Outport: '<Root>/XOR' */
  ProgrammingCalculator_Y.XOR = rtb_BitwiseXOR;

  /* Outport: '<Root>/XNOR' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT'
   */
  ProgrammingCalculator_Y.XNOR = (uint8_T)~rtb_BitwiseXOR;

  /* Outport: '<Root>/NOTNum1' incorporates:
   *  Inport: '<Root>/Num1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT1'
   */
  ProgrammingCalculator_Y.NOTNum1 = (uint8_T)~ProgrammingCalculator_U.Num1;

  /* Outport: '<Root>/NOTNum2' incorporates:
   *  Inport: '<Root>/Num2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT2'
   */
  ProgrammingCalculator_Y.NOTNum2 = (uint8_T)~ProgrammingCalculator_U.Num2;
}

/* Model initialize function */
void ProgrammingCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ProgrammingCalculator_M, (NULL));

  /* external inputs */
  (void)memset(&ProgrammingCalculator_U, 0, sizeof(ExtU_ProgrammingCalculator_T));

  /* external outputs */
  (void) memset((void *)&ProgrammingCalculator_Y, 0,
                sizeof(ExtY_ProgrammingCalculator_T));
}

/* Model terminate function */
void ProgrammingCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
