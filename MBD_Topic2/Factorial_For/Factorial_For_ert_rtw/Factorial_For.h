/*
 * File: Factorial_For.h
 *
 * Code generated for Simulink model 'Factorial_For'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 04:10:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Factorial_For_h_
#define RTW_HEADER_Factorial_For_h_
#include <stddef.h>
#ifndef Factorial_For_COMMON_INCLUDES_
#define Factorial_For_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_For_COMMON_INCLUDES_ */

#include "Factorial_For_types.h"

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
} ExtU_Factorial_For_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Output;                      /* '<Root>/Output' */
} ExtY_Factorial_For_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_For_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Factorial_For_T Factorial_For_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_For_T Factorial_For_Y;

/* Model entry point functions */
extern void Factorial_For_initialize(void);
extern void Factorial_For_step(void);
extern void Factorial_For_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_For_T *const Factorial_For_M;

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
 * '<Root>' : 'Factorial_For'
 * '<S1>'   : 'Factorial_For/For Iterator Subsystem'
 * '<S2>'   : 'Factorial_For/For Iterator Subsystem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Factorial_For_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
