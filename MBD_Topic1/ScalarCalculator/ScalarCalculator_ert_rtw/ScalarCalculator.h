/*
 * File: ScalarCalculator.h
 *
 * Code generated for Simulink model 'ScalarCalculator'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 16:30:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ScalarCalculator_h_
#define RTW_HEADER_ScalarCalculator_h_
#include <string.h>
#include <stddef.h>
#ifndef ScalarCalculator_COMMON_INCLUDES_
#define ScalarCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ScalarCalculator_COMMON_INCLUDES_ */

#include "ScalarCalculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S1>/String Constant' */
  const char_T StringConstant1[256];   /* '<S1>/String Constant1' */
} ConstB_ScalarCalculator_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Num1;                         /* '<Root>/Num1' */
  real_T Num2;                         /* '<Root>/Num2' */
  real_T Num3;                         /* '<Root>/Num3' */
} ExtU_ScalarCalculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Addition;                     /* '<Root>/Addition' */
  real_T Subtraction;                  /* '<Root>/Subtraction' */
  real_T Multiplication;               /* '<Root>/Multiplication' */
  real_T Division;                     /* '<Root>/Division' */
  char_T Error[256];                   /* '<Root>/Error' */
  real_T Unary_Minus;                  /* '<Root>/Unary_Minus' */
  real_T Increment;                    /* '<Root>/Increment' */
  real_T Decrement;                    /* '<Root>/Decrement' */
} ExtY_ScalarCalculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_ScalarCalculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_ScalarCalculator_T ScalarCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ScalarCalculator_T ScalarCalculator_Y;
extern const ConstB_ScalarCalculator_T ScalarCalculator_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void ScalarCalculator_initialize(void);
extern void ScalarCalculator_step(void);
extern void ScalarCalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ScalarCalculator_T *const ScalarCalculator_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S3>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S2>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S3>/FixPt Gateway In' : Eliminate redundant data type conversion
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
 * '<Root>' : 'ScalarCalculator'
 * '<S1>'   : 'ScalarCalculator/Subsystem'
 * '<S2>'   : 'ScalarCalculator/Subsystem/Decrement Stored Integer'
 * '<S3>'   : 'ScalarCalculator/Subsystem/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_ScalarCalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
