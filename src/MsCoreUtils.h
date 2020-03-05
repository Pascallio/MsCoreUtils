#ifndef MSCOREUTILS_H
#define MSCOREUTILS_H

#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

extern SEXP C_localMaxima(SEXP, SEXP);

extern SEXP C_impNeighbourAvg(SEXP, SEXP);

extern SEXP _MsCoreUtils_imp_neighbour_avg(SEXP, SEXP);

#endif /* end of MSCOREUTILS_H */
