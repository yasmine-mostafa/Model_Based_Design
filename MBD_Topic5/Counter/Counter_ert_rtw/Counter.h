/*
 * File: Counter.h
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

#ifndef RTW_HEADER_Counter_h_
#define RTW_HEADER_Counter_h_
#include <stddef.h>
#include <string.h>
#ifndef Counter_COMMON_INCLUDES_
#define Counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Counter_COMMON_INCLUDES_ */

#include "Counter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Counter;        /* '<Root>/Chart' */
  uint8_T is_c3_Counter;               /* '<Root>/Chart' */
} DW_Counter_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
} ExtY_Counter_T;

/* Real-time Model Data Structure */
struct tag_RTM_Counter_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Counter_T Counter_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Counter_T Counter_Y;

/* Model entry point functions */
extern void Counter_initialize(void);
extern void Counter_step(void);
extern void Counter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Counter_T *const Counter_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 */

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
 * '<Root>' : 'Counter'
 * '<S1>'   : 'Counter/Chart'
 */
#endif                                 /* RTW_HEADER_Counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
