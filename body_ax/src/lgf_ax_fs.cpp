// -*- C++ -*-


//---------------------------------------------------------------------
//  Created:            Tuesday, August 14, 2012
//  Original author:    Alexander Samoilov
//---------------------------------------------------------------------

#include <cmath>
#include "elliptic_integral.hpp"

using namespace std;

void
lgf_ax_fs (int iopt, double x, double s, double x0, double s0,
           double &g, double &gx, double &gs)
{
    /* System generated locals */
    double d__1;

    /* Local variables */
    double e, f, cf, pi, dx, den, ri10, rj10, ri30, rj30, 
	         rj31, ri31, dxs, rks, ss0s, rksc;

/* ========================================= */
/* FDLIB, CFDLAB, BEMLIB */

/* Copyright by C. Pozrikidis, 1999 */
/* All rights reserved. */

/* This program is to be used only under the */
/* stipulations of the licensing agreement. */
/* ========================================= */
/* ----------------------------------------- */
/* Free-space axisymmetric Green's function. */
/* of Laplace's equation */

/*  Iopt =  1 compute only the Green's function */
/*       ne 1 compute Green's function and gradient */
/* ------------------------------------------- */

/* -------- */
/* prepare */
/* -------- */
    dx = x - x0;
    dxs = dx * dx;
/* Computing 2nd power */
    d__1 = s + s0;
    ss0s = d__1 * d__1;
    rks = s * 4.0 * s0 / (dxs + ss0s);
    elliptic_integral(rks, f, e);
/* ----------------- */
/* Green's function */
/* ----------------- */
    rj10 = f;
    den = sqrt(dxs + ss0s);
    ri10 = rj10 * 4.0 / den;
    g = ri10 / M_PI*4;
    if (iopt == 1) {
      return;
    }
/* --------------------- */
/* compute: I30 and I31 */
/* --------------------- */
    rksc = 1.0 - rks;
    rj30 = e / rksc;
    rj31 = (f * -2.0 + (2.0 - rks) * e / rksc) / rks;
// Computing 3rd power
    cf = 4.0 / (den * den * den);
    ri30 = cf * rj30;
    ri31 = cf * rj31;
// ---------
// gradient
// ---------
    gx = -dx * ri30;
    gs = -s * ri30 + s0 * ri31;
    gx /= M_PI*4;
    gs /= M_PI*4;
// -----
// Done
// -----
} // lgf_ax_fs

