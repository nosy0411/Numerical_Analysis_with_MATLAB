/*
 * File: _coder_bisect_api.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Apr-2019 21:24:20
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_bisect_api.h"
#include "_coder_bisect_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "bisect", NULL,
  false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *func, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *func
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *func, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(func), &thisId);
  emlrtDestroyArray(&func);
  return y;
}

/*
 * Arguments    : const real_T u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const mxArray * const prhs[5]
 *                const mxArray *plhs[4]
 * Return Type  : void
 */
void bisect_api(const mxArray * const prhs[5], const mxArray *plhs[4])
{
  real_T func;
  real_T xl;
  real_T xu;
  real_T es;
  real_T maxit;
  real_T root;
  real_T fx;
  real_T ea;
  real_T iter;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  func = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "func");
  xl = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "xl");
  xu = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "xu");
  es = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "es");
  maxit = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "maxit");

  /* Invoke the target function */
  bisect(func, xl, xu, es, maxit, &root, &fx, &ea, &iter);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(root);
  plhs[1] = emlrt_marshallOut(fx);
  plhs[2] = emlrt_marshallOut(ea);
  plhs[3] = emlrt_marshallOut(iter);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void bisect_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  bisect_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void bisect_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void bisect_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_bisect_api.c
 *
 * [EOF]
 */
