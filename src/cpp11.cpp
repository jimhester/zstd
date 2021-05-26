// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// code.cpp
cpp11::writable::raws raw_compression(raws src, int level);
extern "C" SEXP _zstd_raw_compression(SEXP src, SEXP level) {
  BEGIN_CPP11
    return cpp11::as_sexp(raw_compression(cpp11::as_cpp<cpp11::decay_t<raws>>(src), cpp11::as_cpp<cpp11::decay_t<int>>(level)));
  END_CPP11
}
// code.cpp
cpp11::writable::raws decompression(raws src);
extern "C" SEXP _zstd_decompression(SEXP src) {
  BEGIN_CPP11
    return cpp11::as_sexp(decompression(cpp11::as_cpp<cpp11::decay_t<raws>>(src)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _zstd_decompression(SEXP);
extern SEXP _zstd_raw_compression(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_zstd_decompression",   (DL_FUNC) &_zstd_decompression,   1},
    {"_zstd_raw_compression", (DL_FUNC) &_zstd_raw_compression, 2},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_zstd(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
