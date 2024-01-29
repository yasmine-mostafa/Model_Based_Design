/*
 * File: GradingSystem.c
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 05:05:21 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GradingSystem.h"
#include "GradingSystem_private.h"

/* Block signals (default storage) */
B_GradingSystem_T GradingSystem_B;

/* External inputs (root inport signals with default storage) */
ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_GradingSystem_T GradingSystem_Y;

/* Real-time model */
static RT_MODEL_GradingSystem_T GradingSystem_M_;
RT_MODEL_GradingSystem_T *const GradingSystem_M = &GradingSystem_M_;

/* Model step function */
void GradingSystem_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  Merge: '<S1>/Merge'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   *  StringConstant: '<S6>/String Constant'
   */
  if (GradingSystem_U.Input < 50.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if ((GradingSystem_U.Input >= 50.0) && (GradingSystem_U.Input < 65.0))
  {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_j[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if ((GradingSystem_U.Input >= 65.0) && (GradingSystem_U.Input < 75.0))
  {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_o[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if ((GradingSystem_U.Input >= 75.0) && (GradingSystem_U.Input < 85.0))
  {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_a[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if (GradingSystem_U.Input >= 85.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_b[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    GradingSystem_B.Merge[255] = '\x00';
  }

  /* End of If: '<S1>/If' */

  /* Outport: '<Root>/Output' */
  strncpy(&GradingSystem_Y.Output[0], &GradingSystem_B.Merge[0], 255U);
  GradingSystem_Y.Output[255] = '\x00';
}

/* Model initialize function */
void GradingSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(GradingSystem_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &GradingSystem_B), 0,
                sizeof(B_GradingSystem_T));

  /* external inputs */
  GradingSystem_U.Input = 0.0;

  /* external outputs */
  (void) memset(&GradingSystem_Y.Output[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void GradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
