/*
 * File: Factorial.h
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

#ifndef RTW_HEADER_Factorial_h_
#define RTW_HEADER_Factorial_h_
#include <stddef.h>
#ifndef Factorial_COMMON_INCLUDES_
#define Factorial_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_COMMON_INCLUDES_ */

#include "Factorial_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint32_T Input1;                     /* '<Root>/Input1' */
} ExtU_Factorial_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Output;                     /* '<Root>/Output' */
} ExtY_Factorial_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Factorial_T Factorial_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_T Factorial_Y;

/* Model entry point functions */
extern void Factorial_initialize(void);
extern void Factorial_step(void);
extern void Factorial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_T *const Factorial_M;

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
 * '<Root>' : 'Factorial'
 * '<S1>'   : 'Factorial/Chart'
 */
#endif                                 /* RTW_HEADER_Factorial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
