/*
 * File: INC_Counter.h
 *
 * Code generated for Simulink model 'INC_Counter'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 15:54:26 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_INC_Counter_h_
#define RTW_HEADER_INC_Counter_h_
#include <stddef.h>
#include <string.h>
#ifndef INC_Counter_COMMON_INCLUDES_
#define INC_Counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* INC_Counter_COMMON_INCLUDES_ */

#include "INC_Counter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
} DW_INC_Counter_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Num;                          /* '<Root>/Num' */
} ExtU_INC_Counter_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_INC_Counter_T;

/* Real-time Model Data Structure */
struct tag_RTM_INC_Counter_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_INC_Counter_T INC_Counter_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_INC_Counter_T INC_Counter_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_INC_Counter_T INC_Counter_Y;

/* Model entry point functions */
extern void INC_Counter_initialize(void);
extern void INC_Counter_step(void);
extern void INC_Counter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_INC_Counter_T *const INC_Counter_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'INC_Counter'
 * '<S1>'   : 'INC_Counter/Subsystem'
 */
#endif                                 /* RTW_HEADER_INC_Counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
