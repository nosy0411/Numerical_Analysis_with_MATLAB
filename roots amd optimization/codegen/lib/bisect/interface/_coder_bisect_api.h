/*
 * File: _coder_bisect_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Apr-2019 21:24:20
 */

#ifndef _CODER_BISECT_API_H
#define _CODER_BISECT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_bisect_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void bisect(real_T func, real_T xl, real_T xu, real_T es, real_T maxit,
                   real_T *root, real_T *fx, real_T *ea, real_T *iter);
extern void bisect_api(const mxArray * const prhs[5], const mxArray *plhs[4]);
extern void bisect_atexit(void);
extern void bisect_initialize(void);
extern void bisect_terminate(void);
extern void bisect_xil_terminate(void);

#endif

/*
 * File trailer for _coder_bisect_api.h
 *
 * [EOF]
 */
