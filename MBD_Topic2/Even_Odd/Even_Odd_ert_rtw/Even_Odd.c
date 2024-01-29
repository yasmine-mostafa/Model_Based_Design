/*
 * File: Even_Odd.c
 *
 * Code generated for Simulink model 'Even_Odd'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 05:17:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Even_Odd.h"
#include "Even_Odd_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Even_Odd_T Even_Odd_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Even_Odd_T Even_Odd_Y;

/* Real-time model */
static RT_MODEL_Even_Odd_T Even_Odd_M_;
RT_MODEL_Even_Odd_T *const Even_Odd_M = &Even_Odd_M_;
real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  boolean_T yEq;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Model step function */
void Even_Odd_step(void)
{
  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/Num'
   *  Math: '<S1>/Mod'
   *  Outport: '<Root>/Output'
   */
  if (rt_modd_snf(Even_Odd_U.Num, 2.0) > 0.0) {
    strncpy(&Even_Odd_Y.Output[0], &Even_Odd_ConstB.StringConstant[0], 255U);
    Even_Odd_Y.Output[255] = '\x00';
  } else {
    strncpy(&Even_Odd_Y.Output[0], &Even_Odd_ConstB.StringConstant1[0], 255U);
    Even_Odd_Y.Output[255] = '\x00';
  }

  /* End of Switch: '<S1>/Switch' */
}

/* Model initialize function */
void Even_Odd_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Even_Odd_M, (NULL));

  /* external inputs */
  Even_Odd_U.Num = 0.0;

  /* external outputs */
  (void) memset(&Even_Odd_Y.Output[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void Even_Odd_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
