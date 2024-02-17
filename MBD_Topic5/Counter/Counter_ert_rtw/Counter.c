/*
 * File: Counter.c
 *
 * Code generated for Simulink model 'Counter'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 17 03:01:55 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Counter.h"
#include "Counter_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Counter_IN_NO_ACTIVE_CHILD     ((uint8_T)0U)
#define Counter_IN_Name                ((uint8_T)1U)
#define Counter_IN_Name1               ((uint8_T)2U)

/* Block states (default storage) */
DW_Counter_T Counter_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Counter_T Counter_Y;

/* Real-time model */
static RT_MODEL_Counter_T Counter_M_;
RT_MODEL_Counter_T *const Counter_M = &Counter_M_;

/* Model step function */
void Counter_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Outport: '<Root>/Output'
   */
  /* Gateway: Chart */
  /* During: Chart */
  if (Counter_DW.is_active_c3_Counter == 0U) {
    /* Entry: Chart */
    Counter_DW.is_active_c3_Counter = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:45' */
    Counter_DW.is_c3_Counter = Counter_IN_Name;

    /* Outport: '<Root>/Output' */
    /* Entry 'Name': '<S1>:44' */
    /* '<S1>:44:2' IncCounter=0; */
    Counter_Y.Output = 0.0;

    /* Outport: '<Root>/Output1' */
    /* '<S1>:44:3' DecCounter=10; */
    Counter_Y.Output1 = 10.0;
  } else if (Counter_DW.is_c3_Counter == Counter_IN_Name) {
    /* During 'Name': '<S1>:44' */
    /* Transition: '<S1>:47' */
    Counter_DW.is_c3_Counter = Counter_IN_Name1;

    /* Outport: '<Root>/Output' */
    /* Entry 'Name1': '<S1>:46' */
    /* '<S1>:46:2' IncCounter=IncCounter+1; */
    Counter_Y.Output++;

    /* Outport: '<Root>/Output1' */
    /* '<S1>:46:3' DecCounter=DecCounter-1; */
    Counter_Y.Output1--;

    /* During 'Name1': '<S1>:46' */
    /* '<S1>:48:1' sf_internal_predicateOutput = IncCounter==10; */
  } else if (Counter_Y.Output == 10.0) {
    /* Transition: '<S1>:48' */
    Counter_DW.is_c3_Counter = Counter_IN_Name;

    /* Entry 'Name': '<S1>:44' */
    /* '<S1>:44:2' IncCounter=0; */
    Counter_Y.Output = 0.0;

    /* Outport: '<Root>/Output1' */
    /* '<S1>:44:3' DecCounter=10; */
    Counter_Y.Output1 = 10.0;
  } else {
    /* Transition: '<S1>:50' */
    Counter_DW.is_c3_Counter = Counter_IN_Name1;

    /* Entry 'Name1': '<S1>:46' */
    /* '<S1>:46:2' IncCounter=IncCounter+1; */
    Counter_Y.Output++;

    /* Outport: '<Root>/Output1' */
    /* '<S1>:46:3' DecCounter=DecCounter-1; */
    Counter_Y.Output1--;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Counter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Counter_DW, 0,
                sizeof(DW_Counter_T));

  /* external outputs */
  (void) memset((void *)&Counter_Y, 0,
                sizeof(ExtY_Counter_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Counter_DW.is_active_c3_Counter = 0U;
  Counter_DW.is_c3_Counter = Counter_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Outport: '<Root>/Output' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Counter_Y.Output = 0.0;

  /* SystemInitialize for Outport: '<Root>/Output1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Counter_Y.Output1 = 10.0;
}

/* Model terminate function */
void Counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
