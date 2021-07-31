/*
 * File: bisect.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Apr-2019 21:24:20
 */

#ifndef BISECT_H
#define BISECT_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "bisect_types.h"

/* Function Declarations */
extern void bisect(double func, double xl, double xu, double es, double maxit,
                   double *root, double *fx, double *ea, double *iter);

#endif

/*
 * File trailer for bisect.h
 *
 * [EOF]
 */
