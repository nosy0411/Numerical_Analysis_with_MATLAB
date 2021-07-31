/*
 * File: bisect.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Apr-2019 21:24:20
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "bisect.h"

/* Function Definitions */

/*
 * bisect: root location zeroes
 *  [root,fx,ea,iter]=bisect(func,xl,xu,es,maxit,p1,p2,...):
 *  uses bisection method to find the root of func
 *  input:
 *  func = name of function
 *  xl, xu = lower and upper guesses
 *  es = desired relative error (default = 0.0001%)
 *  maxit = maximum allowable iterations (default = 50)
 *  p1,p2,... = additional parameters used by func
 *  output:
 *  root = real root
 *  fx = function value at root
 *  ea = approximate relative error (%)
 *  iter = number of iterations
 * Arguments    : double func
 *                double xl
 *                double xu
 *                double es
 *                double maxit
 *                double *root
 *                double *fx
 *                double *ea
 *                double *iter
 * Return Type  : void
 */
void bisect(double func, double xl, double xu, double es, double maxit, double
            *root, double *fx, double *ea, double *iter)
{
  (void)xl;
  (void)xu;
  *iter = 0.0;
  do {
    (*iter)++;
    *ea = 0.0;
  } while (!((0.0 <= es) || (*iter >= maxit)));

  *root = 1.0;
  *fx = func;

  /*  ex.  [x_value fx ea iter]=bisect(@(x) sin(10*x)+cos(3*x),0,10,0.0002,200) */
  /*  ex. [mass fx ea iter]=bisect(@(m) sqrt(9.81*m/0.25)*tanh(sqrt(9.81*0.25/m)*4)-36,40,200) */
}

/*
 * File trailer for bisect.c
 *
 * [EOF]
 */
