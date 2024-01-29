/*
 * File: Factorial_While.h
 *
 * Code generated for Simulink model 'Factorial_While'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 04:44:27 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Factorial_While_h_
#define RTW_HEADER_Factorial_While_h_
#include <string.h>
#include <stddef.h>
#ifndef Factorial_While_COMMON_INCLUDES_
#define Factorial_While_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_While_COMMON_INCLUDES_ */

#include "Factorial_While_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
  uint8_T Input1;                      /* '<Root>/Input1' */
} ExtU_Factorial_While_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Output;                      /* '<Root>/Output' */
} ExtY_Factorial_While_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_While_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Factorial_While_T Factorial_While_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_While_T Factorial_While_Y;

/* Model entry point functions */
extern void Factorial_While_initialize(void);
extern void Factorial_While_step(void);
extern void Factorial_While_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_While_T *const Factorial_While_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Factorial_While'
 * '<S1>'   : 'Factorial_While/While Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_Factorial_While_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
