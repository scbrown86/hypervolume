// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// kdtree_build_intl
SEXP kdtree_build_intl(SEXP d, SEXP nr, SEXP nc);
RcppExport SEXP _hypervolume_kdtree_build_intl(SEXP dSEXP, SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type d(dSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    rcpp_result_gen = Rcpp::wrap(kdtree_build_intl(d, nr, nc));
    return rcpp_result_gen;
END_RCPP
}
// kdtree_ball_query_multiple
SEXP kdtree_ball_query_multiple(SEXP tr, SEXP ptlist, SEXP nr, SEXP nc, SEXP r, SEXP verb);
RcppExport SEXP _hypervolume_kdtree_ball_query_multiple(SEXP trSEXP, SEXP ptlistSEXP, SEXP nrSEXP, SEXP ncSEXP, SEXP rSEXP, SEXP verbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type tr(trSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptlist(ptlistSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< SEXP >::type r(rSEXP);
    Rcpp::traits::input_parameter< SEXP >::type verb(verbSEXP);
    rcpp_result_gen = Rcpp::wrap(kdtree_ball_query_multiple(tr, ptlist, nr, nc, r, verb));
    return rcpp_result_gen;
END_RCPP
}
// kdtree_ball_query_id_multiple
SEXP kdtree_ball_query_id_multiple(SEXP tr, SEXP ptlist, SEXP nr, SEXP nc, SEXP r, SEXP verb);
RcppExport SEXP _hypervolume_kdtree_ball_query_id_multiple(SEXP trSEXP, SEXP ptlistSEXP, SEXP nrSEXP, SEXP ncSEXP, SEXP rSEXP, SEXP verbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type tr(trSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptlist(ptlistSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< SEXP >::type r(rSEXP);
    Rcpp::traits::input_parameter< SEXP >::type verb(verbSEXP);
    rcpp_result_gen = Rcpp::wrap(kdtree_ball_query_id_multiple(tr, ptlist, nr, nc, r, verb));
    return rcpp_result_gen;
END_RCPP
}
// kdtree_range_query_multiple
SEXP kdtree_range_query_multiple(SEXP tr, SEXP pminlist, SEXP pmaxlist, SEXP nr, SEXP nc, SEXP verb);
RcppExport SEXP _hypervolume_kdtree_range_query_multiple(SEXP trSEXP, SEXP pminlistSEXP, SEXP pmaxlistSEXP, SEXP nrSEXP, SEXP ncSEXP, SEXP verbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type tr(trSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pminlist(pminlistSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pmaxlist(pmaxlistSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< SEXP >::type verb(verbSEXP);
    rcpp_result_gen = Rcpp::wrap(kdtree_range_query_multiple(tr, pminlist, pmaxlist, nr, nc, verb));
    return rcpp_result_gen;
END_RCPP
}
// fastPdist2
NumericMatrix fastPdist2(NumericMatrix Ar, NumericMatrix Br);
RcppExport SEXP _hypervolume_fastPdist2(SEXP ArSEXP, SEXP BrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ar(ArSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Br(BrSEXP);
    rcpp_result_gen = Rcpp::wrap(fastPdist2(Ar, Br));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hypervolume_kdtree_build_intl", (DL_FUNC) &_hypervolume_kdtree_build_intl, 3},
    {"_hypervolume_kdtree_ball_query_multiple", (DL_FUNC) &_hypervolume_kdtree_ball_query_multiple, 6},
    {"_hypervolume_kdtree_ball_query_id_multiple", (DL_FUNC) &_hypervolume_kdtree_ball_query_id_multiple, 6},
    {"_hypervolume_kdtree_range_query_multiple", (DL_FUNC) &_hypervolume_kdtree_range_query_multiple, 6},
    {"_hypervolume_fastPdist2", (DL_FUNC) &_hypervolume_fastPdist2, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_hypervolume(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
