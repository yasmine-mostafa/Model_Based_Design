/*
 * File: TrafficLight.c
 *
 * Code generated for Simulink model 'TrafficLight'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 17 01:25:55 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TrafficLight.h"
#include "TrafficLight_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define TrafficLight_IN_Green          ((uint8_T)1U)
#define TrafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define TrafficLight_IN_Red            ((uint8_T)2U)
#define TrafficLight_IN_Yellow         ((uint8_T)3U)

/* Block states (default storage) */
DW_TrafficLight_T TrafficLight_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TrafficLight_T TrafficLight_Y;

/* Real-time model */
static RT_MODEL_TrafficLight_T TrafficLight_M_;
RT_MODEL_TrafficLight_T *const TrafficLight_M = &TrafficLight_M_;

/* Model step function */
void TrafficLight_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (TrafficLight_DW.temporalCounter_i1 < 15U) {
    TrafficLight_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (TrafficLight_DW.is_active_c3_TrafficLight == 0U) {
    /* Entry: Chart */
    TrafficLight_DW.is_active_c3_TrafficLight = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_Red;
    TrafficLight_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Output' */
    /* Entry 'Red': '<S1>:1' */
    /* '<S1>:1:2' RedLight=1; */
    TrafficLight_Y.Output = 1.0;

    /* Outport: '<Root>/Output1' */
    /* '<S1>:1:3' YellowLight=0; */
    TrafficLight_Y.Output1 = 0.0;

    /* Outport: '<Root>/Output2' */
    /* '<S1>:1:4' GreenLight=0; */
    TrafficLight_Y.Output2 = 0.0;
  } else {
    switch (TrafficLight_DW.is_c3_TrafficLight) {
     case TrafficLight_IN_Green:
      /* During 'Green': '<S1>:7' */
      /* '<S1>:10:1' sf_internal_predicateOutput = after(2,sec); */
      if (TrafficLight_DW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:10' */
        TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_Red;
        TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output' */
        /* Entry 'Red': '<S1>:1' */
        /* '<S1>:1:2' RedLight=1; */
        TrafficLight_Y.Output = 1.0;

        /* Outport: '<Root>/Output1' */
        /* '<S1>:1:3' YellowLight=0; */
        TrafficLight_Y.Output1 = 0.0;

        /* Outport: '<Root>/Output2' */
        /* '<S1>:1:4' GreenLight=0; */
        TrafficLight_Y.Output2 = 0.0;
      } else {
        /* Outport: '<Root>/Output' */
        /* '<S1>:7:2' RedLight=0; */
        TrafficLight_Y.Output = 0.0;

        /* Outport: '<Root>/Output1' */
        /* '<S1>:7:3' YellowLight=0; */
        TrafficLight_Y.Output1 = 0.0;

        /* Outport: '<Root>/Output2' */
        /* '<S1>:7:4' GreenLight=1; */
        TrafficLight_Y.Output2 = 1.0;
      }
      break;

     case TrafficLight_IN_Red:
      /* During 'Red': '<S1>:1' */
      /* '<S1>:8:1' sf_internal_predicateOutput = after(2,sec); */
      if (TrafficLight_DW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:8' */
        TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_Yellow;
        TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output' */
        /* Entry 'Yellow': '<S1>:6' */
        /* '<S1>:6:2' RedLight=0; */
        TrafficLight_Y.Output = 0.0;

        /* Outport: '<Root>/Output1' */
        /* '<S1>:6:3' YellowLight=1; */
        TrafficLight_Y.Output1 = 1.0;

        /* Outport: '<Root>/Output2' */
        /* '<S1>:6:4' GreenLight=0; */
        TrafficLight_Y.Output2 = 0.0;
      } else {
        /* Outport: '<Root>/Output' */
        /* '<S1>:1:2' RedLight=1; */
        TrafficLight_Y.Output = 1.0;

        /* Outport: '<Root>/Output1' */
        /* '<S1>:1:3' YellowLight=0; */
        TrafficLight_Y.Output1 = 0.0;

        /* Outport: '<Root>/Output2' */
        /* '<S1>:1:4' GreenLight=0; */
        TrafficLight_Y.Output2 = 0.0;
      }
      break;

     default:
      /* During 'Yellow': '<S1>:6' */
      /* '<S1>:9:1' sf_internal_predicateOutput = after(2,sec); */
      if (TrafficLight_DW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:9' */
        TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_Green;
        TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output' */
        /* Entry 'Green': '<S1>:7' */
        /* '<S1>:7:2' RedLight=0; */
        TrafficLight_Y.Output = 0.0;

        /* Outport: '<Root>/Output1' */
        /* '<S1>:7:3' YellowLight=0; */
        TrafficLight_Y.Output1 = 0.0;

        /* Outport: '<Root>/Output2' */
        /* '<S1>:7:4' GreenLight=1; */
        TrafficLight_Y.Output2 = 1.0;
      } else {
        /* Outport: '<Root>/Output' */
        /* '<S1>:6:2' RedLight=0; */
        TrafficLight_Y.Output = 0.0;

        /* Outport: '<Root>/Output1' */
        /* '<S1>:6:3' YellowLight=1; */
        TrafficLight_Y.Output1 = 1.0;

        /* Outport: '<Root>/Output2' */
        /* '<S1>:6:4' GreenLight=0; */
        TrafficLight_Y.Output2 = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void TrafficLight_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TrafficLight_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TrafficLight_DW, 0,
                sizeof(DW_TrafficLight_T));

  /* external outputs */
  (void) memset((void *)&TrafficLight_Y, 0,
                sizeof(ExtY_TrafficLight_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  TrafficLight_DW.temporalCounter_i1 = 0U;
  TrafficLight_DW.is_active_c3_TrafficLight = 0U;
  TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void TrafficLight_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
