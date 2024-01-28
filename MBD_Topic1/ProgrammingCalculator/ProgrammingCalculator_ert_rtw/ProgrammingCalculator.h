/*
 * File: ProgrammingCalculator.h
 *
 * Code generated for Simulink model 'ProgrammingCalculator'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 16:52:16 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ProgrammingCalculator_h_
#define RTW_HEADER_ProgrammingCalculator_h_
#include <string.h>
#include <stddef.h>
#ifndef ProgrammingCalculator_COMMON_INCLUDES_
#define ProgrammingCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                              /* ProgrammingCalculator_COMMON_INCLUDES_ */

#include "ProgrammingCalculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Num1;                        /* '<Root>/Num1' */
  uint8_T Num2;                        /* '<Root>/Num2' */
} ExtU_ProgrammingCalculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T AND;                         /* '<Root>/AND' */
  uint8_T OR;                          /* '<Root>/OR' */
  uint8_T XOR;                         /* '<Root>/XOR' */
  uint8_T XNOR;                        /* '<Root>/XNOR' */
  uint8_T NOTNum1;                     /* '<Root>/NOTNum1' */
  uint8_T NOTNum2;                     /* '<Root>/NOTNum2' */
} ExtY_ProgrammingCalculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_ProgrammingCalculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_ProgrammingCalculator_T ProgrammingCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ProgrammingCalculator_T ProgrammingCalculator_Y;

/* Model entry point functions */
extern void ProgrammingCalculator_initialize(void);
extern void ProgrammingCalculator_step(void);
extern void ProgrammingCalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ProgrammingCalculato_T *const ProgrammingCalculator_M;

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
 * '<Root>' : 'ProgrammingCalculator'
 * '<S1>'   : 'ProgrammingCalculator/Subsystem'
 */
#endif                                 /* RTW_HEADER_ProgrammingCalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
