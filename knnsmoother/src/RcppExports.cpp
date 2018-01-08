// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// freeman_tukey_transform
NumericMatrix freeman_tukey_transform(NumericMatrix X);
RcppExport SEXP _knnsmoother_freeman_tukey_transform(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(freeman_tukey_transform(X));
    return rcpp_result_gen;
END_RCPP
}
// dist_euclidean
NumericMatrix dist_euclidean(NumericMatrix Ar, NumericMatrix Br);
RcppExport SEXP _knnsmoother_dist_euclidean(SEXP ArSEXP, SEXP BrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ar(ArSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Br(BrSEXP);
    rcpp_result_gen = Rcpp::wrap(dist_euclidean(Ar, Br));
    return rcpp_result_gen;
END_RCPP
}
// smoother_calc_distance
NumericMatrix smoother_calc_distance(NumericMatrix X, int verbose);
RcppExport SEXP _knnsmoother_smoother_calc_distance(SEXP XSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(smoother_calc_distance(X, verbose));
    return rcpp_result_gen;
END_RCPP
}
// aggregate_k_nearest
NumericMatrix aggregate_k_nearest(NumericMatrix Xr, NumericMatrix Dr, int k, int verbose);
RcppExport SEXP _knnsmoother_aggregate_k_nearest(SEXP XrSEXP, SEXP DrSEXP, SEXP kSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Dr(DrSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(aggregate_k_nearest(Xr, Dr, k, verbose));
    return rcpp_result_gen;
END_RCPP
}
// knn_smoothing
NumericMatrix knn_smoothing(NumericMatrix X, int k, int verbose);
RcppExport SEXP _knnsmoother_knn_smoothing(SEXP XSEXP, SEXP kSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(knn_smoothing(X, k, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_knnsmoother_freeman_tukey_transform", (DL_FUNC) &_knnsmoother_freeman_tukey_transform, 1},
    {"_knnsmoother_dist_euclidean", (DL_FUNC) &_knnsmoother_dist_euclidean, 2},
    {"_knnsmoother_smoother_calc_distance", (DL_FUNC) &_knnsmoother_smoother_calc_distance, 2},
    {"_knnsmoother_aggregate_k_nearest", (DL_FUNC) &_knnsmoother_aggregate_k_nearest, 4},
    {"_knnsmoother_knn_smoothing", (DL_FUNC) &_knnsmoother_knn_smoothing, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_knnsmoother(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}