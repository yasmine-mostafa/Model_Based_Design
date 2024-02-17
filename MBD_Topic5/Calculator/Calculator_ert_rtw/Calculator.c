/*
 * File: Calculator.c
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 17 03:30:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator.h"
#include "Calculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
static RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Forward declaration for local functions */
static void Calculator_div(real_T n1, real_T n2);
static void Calculator_mul(real_T n1, real_T n2);
static void Calculator_sub(real_T n1, real_T n2);
static void Calculator_add(real_T n1, real_T n2);

/*
 * Function for Chart: '<Root>/Chart'
 * function div(n1,n2)
 */
static void Calculator_div(real_T n1, real_T n2)
{
  /* Outport: '<Root>/Output' */
  /* MATLAB Function 'div': '<S1>:70' */
  /* Graphical Function 'div': '<S1>:70' */
  /* Transition: '<S1>:72' */
  /* '<S1>:72:1' result=n1/n2; */
  Calculator_Y.Output = n1 / n2;
}

/*
 * Function for Chart: '<Root>/Chart'
 * function mul(n1,n2)
 */
static void Calculator_mul(real_T n1, real_T n2)
{
  /* Outport: '<Root>/Output' */
  /* MATLAB Function 'mul': '<S1>:62' */
  /* Graphical Function 'mul': '<S1>:62' */
  /* Transition: '<S1>:64' */
  /* '<S1>:64:1' result=n1*n2; */
  Calculator_Y.Output = n1 * n2;
}

/*
 * Function for Chart: '<Root>/Chart'
 * function sub(n1,n2)
 */
static void Calculator_sub(real_T n1, real_T n2)
{
  /* Outport: '<Root>/Output' */
  /* MATLAB Function 'sub': '<S1>:57' */
  /* Graphical Function 'sub': '<S1>:57' */
  /* Transition: '<S1>:59' */
  /* '<S1>:59:1' result=n1-n2; */
  Calculator_Y.Output = n1 - n2;
}

/*
 * Function for Chart: '<Root>/Chart'
 * function add(n1,n2)
 */
static void Calculator_add(real_T n1, real_T n2)
{
  /* Outport: '<Root>/Output' */
  /* MATLAB Function 'add': '<S1>:52' */
  /* Graphical Function 'add': '<S1>:52' */
  /* Transition: '<S1>:54' */
  /* '<S1>:54:1' result=n1+n2; */
  Calculator_Y.Output = n1 + n2;
}

/* Model step function */
void Calculator_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:2' */
  /*  Calculator */
  /* '<S1>:3:1' sf_internal_predicateOutput = Operand == 1; */
  if (Calculator_U.Input2 == 1.0) {
    /* Transition: '<S1>:3' */
    /* Transition: '<S1>:5' */
    /* '<S1>:5:1' add(num1,num2); */
    Calculator_add(Calculator_U.Input, Calculator_U.Input1);

    /* Transition: '<S1>:6' */
    /* Transition: '<S1>:7' */
    /* Transition: '<S1>:12' */
    /* Transition: '<S1>:17' */
    /* Transition: '<S1>:22' */
    /* Transition: '<S1>:23' */

    /* Transition: '<S1>:4' */
    /* '<S1>:8:1' sf_internal_predicateOutput = Operand == 2; */
  } else if (Calculator_U.Input2 == 2.0) {
    /* Transition: '<S1>:8' */
    /* Transition: '<S1>:10' */
    /* '<S1>:10:1' sub(num1,num2); */
    Calculator_sub(Calculator_U.Input, Calculator_U.Input1);

    /* Transition: '<S1>:11' */
    /* Transition: '<S1>:12' */
    /* Transition: '<S1>:17' */
    /* Transition: '<S1>:22' */
    /* Transition: '<S1>:23' */

    /* Transition: '<S1>:9' */
    /* '<S1>:13:1' sf_internal_predicateOutput = Operand == 3; */
  } else if (Calculator_U.Input2 == 3.0) {
    /* Transition: '<S1>:13' */
    /* Transition: '<S1>:15' */
    /* '<S1>:15:1' mul(num1,num2); */
    Calculator_mul(Calculator_U.Input, Calculator_U.Input1);

    /* Transition: '<S1>:16' */
    /* Transition: '<S1>:17' */
    /* Transition: '<S1>:22' */
    /* Transition: '<S1>:23' */

    /* Transition: '<S1>:14' */
    /* '<S1>:18:1' sf_internal_predicateOutput = Operand == 4; */
  } else if (Calculator_U.Input2 == 4.0) {
    /* Transition: '<S1>:18' */
    /* Transition: '<S1>:20' */
    /* '<S1>:20:1' div(num1,num2); */
    Calculator_div(Calculator_U.Input, Calculator_U.Input1);

    /* Transition: '<S1>:21' */
    /* Transition: '<S1>:22' */
    /* Transition: '<S1>:23' */
  } else {
    /* Transition: '<S1>:19' */
  }

  /* End of Chart: '<Root>/Chart' */
  /* Transition: '<S1>:24' */
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_M, (NULL));

  /* external inputs */
  (void)memset(&Calculator_U, 0, sizeof(ExtU_Calculator_T));

  /* external outputs */
  Calculator_Y.Output = 0.0;

  /* SystemInitialize for Outport: '<Root>/Output' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Calculator_Y.Output = 0.0;
}

/* Model terminate function */
void Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
