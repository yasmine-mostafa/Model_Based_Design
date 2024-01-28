/*
 * File: ScalarCalculator.c
 *
 * Code generated for Simulink model 'ScalarCalculator'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 16:30:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ScalarCalculator.h"
#include "ScalarCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ScalarCalculator_T ScalarCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ScalarCalculator_T ScalarCalculator_Y;

/* Real-time model */
static RT_MODEL_ScalarCalculator_T ScalarCalculator_M_;
RT_MODEL_ScalarCalculator_T *const ScalarCalculator_M = &ScalarCalculator_M_;

/* Model step function */
void ScalarCalculator_step(void)
{
  /* Outport: '<Root>/Addition' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Sum: '<S1>/Add'
   */
  ScalarCalculator_Y.Addition = ScalarCalculator_U.Num1 +
    ScalarCalculator_U.Num2;

  /* Outport: '<Root>/Subtraction' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Sum: '<S1>/Subtract'
   */
  ScalarCalculator_Y.Subtraction = ScalarCalculator_U.Num1 -
    ScalarCalculator_U.Num2;

  /* Outport: '<Root>/Multiplication' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Product: '<S1>/Product'
   */
  ScalarCalculator_Y.Multiplication = ScalarCalculator_U.Num1 *
    ScalarCalculator_U.Num2;

  /* Outport: '<Root>/Division' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Product: '<S1>/Divide'
   */
  ScalarCalculator_Y.Division = ScalarCalculator_U.Num1 /
    ScalarCalculator_U.Num2;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/Num2'
   *  Outport: '<Root>/Error'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  if (ScalarCalculator_U.Num2 == 0.0) {
    strncpy(&ScalarCalculator_Y.Error[0],
            &ScalarCalculator_ConstB.StringConstant[0], 255U);
    ScalarCalculator_Y.Error[255] = '\x00';
  } else {
    strncpy(&ScalarCalculator_Y.Error[0],
            &ScalarCalculator_ConstB.StringConstant1[0], 255U);
    ScalarCalculator_Y.Error[255] = '\x00';
  }

  /* End of Switch: '<S1>/Switch' */

  /* Outport: '<Root>/Unary_Minus' incorporates:
   *  Inport: '<Root>/Num3'
   *  UnaryMinus: '<S1>/Unary Minus'
   */
  ScalarCalculator_Y.Unary_Minus = -ScalarCalculator_U.Num3;

  /* Outport: '<Root>/Increment' incorporates:
   *  Constant: '<S3>/FixPt Constant'
   *  Inport: '<Root>/Num3'
   *  Sum: '<S3>/FixPt Sum1'
   */
  ScalarCalculator_Y.Increment = ScalarCalculator_U.Num3 + 1.0;

  /* Outport: '<Root>/Decrement' incorporates:
   *  Constant: '<S2>/FixPt Constant'
   *  Inport: '<Root>/Num3'
   *  Sum: '<S2>/FixPt Sum1'
   */
  ScalarCalculator_Y.Decrement = ScalarCalculator_U.Num3 - 1.0;
}

/* Model initialize function */
void ScalarCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ScalarCalculator_M, (NULL));

  /* external inputs */
  (void)memset(&ScalarCalculator_U, 0, sizeof(ExtU_ScalarCalculator_T));

  /* external outputs */
  (void) memset((void *)&ScalarCalculator_Y, 0,
                sizeof(ExtY_ScalarCalculator_T));
}

/* Model terminate function */
void ScalarCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
