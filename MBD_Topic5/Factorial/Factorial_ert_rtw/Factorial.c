/*
 * File: Factorial.c
 *
 * Code generated for Simulink model 'Factorial'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 17 01:31:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial.h"
#include "Factorial_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_T Factorial_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_T Factorial_Y;

/* Real-time model */
static RT_MODEL_Factorial_T Factorial_M_;
RT_MODEL_Factorial_T *const Factorial_M = &Factorial_M_;

/* Model step function */
void Factorial_step(void)
{
  real_T i;
  real_T tmp;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/Input1'
   *  Outport: '<Root>/Output'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:42' */
  /*  Factorial for loop  */
  /* Transition: '<S1>:43' */
  for (i = 1.0; i <= Factorial_U.Input1; i++) {
    /* Transition: '<S1>:44' */
    /* Transition: '<S1>:45' */
    tmp = (real_T)Factorial_Y.Output * i;
    if (tmp < 4.294967296E+9) {
      Factorial_Y.Output = (uint32_T)tmp;
    } else {
      Factorial_Y.Output = MAX_uint32_T;
    }

    /* Transition: '<S1>:48' */
    /* Transition: '<S1>:46' */
  }

  /* End of Chart: '<Root>/Chart' */
  /* Transition: '<S1>:47' */
}

/* Model initialize function */
void Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_M, (NULL));

  /* external inputs */
  Factorial_U.Input1 = 0U;

  /* external outputs */
  Factorial_Y.Output = 0U;

  /* SystemInitialize for Outport: '<Root>/Output' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Factorial_Y.Output = 1U;
}

/* Model terminate function */
void Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
