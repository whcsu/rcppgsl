// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// colNorm_old2
Rcpp::NumericVector colNorm_old2(Rcpp::NumericMatrix M);
RcppExport SEXP RcppGSLExample_colNorm_old2(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type M(MSEXP);
    __result = Rcpp::wrap(colNorm_old2(M));
    return __result;
END_RCPP
}
// colNorm
Rcpp::NumericVector colNorm(const RcppGSL::matrix<double> &G);
RcppExport SEXP RcppGSLExample_colNorm(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const RcppGSL::matrix<double> & >::type G(GSEXP);
    __result = Rcpp::wrap(colNorm(G));
    return __result;
END_RCPP
}
