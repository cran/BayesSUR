// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// BayesSUR_internal
int BayesSUR_internal(const std::string& dataFile, const std::string& mrfGFile, const std::string& blockFile, const std::string& structureGraphFile, const std::string& hyperParFile, const std::string& outFilePath, unsigned int nIter, unsigned int burnin, unsigned int nChains, const std::string& covariancePrior, const std::string& gammaPrior, const std::string& gammaSampler, const std::string& gammaInit, const std::string& betaPrior, const int maxThreads, bool output_gamma, bool output_beta, bool output_Gy, bool output_sigmaRho, bool output_pi, bool output_tail, bool output_model_size, bool output_CPO, bool output_model_visit);
RcppExport SEXP _BayesSUR_BayesSUR_internal(SEXP dataFileSEXP, SEXP mrfGFileSEXP, SEXP blockFileSEXP, SEXP structureGraphFileSEXP, SEXP hyperParFileSEXP, SEXP outFilePathSEXP, SEXP nIterSEXP, SEXP burninSEXP, SEXP nChainsSEXP, SEXP covariancePriorSEXP, SEXP gammaPriorSEXP, SEXP gammaSamplerSEXP, SEXP gammaInitSEXP, SEXP betaPriorSEXP, SEXP maxThreadsSEXP, SEXP output_gammaSEXP, SEXP output_betaSEXP, SEXP output_GySEXP, SEXP output_sigmaRhoSEXP, SEXP output_piSEXP, SEXP output_tailSEXP, SEXP output_model_sizeSEXP, SEXP output_CPOSEXP, SEXP output_model_visitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type dataFile(dataFileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type mrfGFile(mrfGFileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type blockFile(blockFileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type structureGraphFile(structureGraphFileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type hyperParFile(hyperParFileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type outFilePath(outFilePathSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nIter(nIterSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nChains(nChainsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type covariancePrior(covariancePriorSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type gammaPrior(gammaPriorSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type gammaSampler(gammaSamplerSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type gammaInit(gammaInitSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type betaPrior(betaPriorSEXP);
    Rcpp::traits::input_parameter< const int >::type maxThreads(maxThreadsSEXP);
    Rcpp::traits::input_parameter< bool >::type output_gamma(output_gammaSEXP);
    Rcpp::traits::input_parameter< bool >::type output_beta(output_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type output_Gy(output_GySEXP);
    Rcpp::traits::input_parameter< bool >::type output_sigmaRho(output_sigmaRhoSEXP);
    Rcpp::traits::input_parameter< bool >::type output_pi(output_piSEXP);
    Rcpp::traits::input_parameter< bool >::type output_tail(output_tailSEXP);
    Rcpp::traits::input_parameter< bool >::type output_model_size(output_model_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type output_CPO(output_CPOSEXP);
    Rcpp::traits::input_parameter< bool >::type output_model_visit(output_model_visitSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesSUR_internal(dataFile, mrfGFile, blockFile, structureGraphFile, hyperParFile, outFilePath, nIter, burnin, nChains, covariancePrior, gammaPrior, gammaSampler, gammaInit, betaPrior, maxThreads, output_gamma, output_beta, output_Gy, output_sigmaRho, output_pi, output_tail, output_model_size, output_CPO, output_model_visit));
    return rcpp_result_gen;
END_RCPP
}
// randU01
double randU01();
RcppExport SEXP _BayesSUR_randU01() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(randU01());
    return rcpp_result_gen;
END_RCPP
}
// randLogU01
double randLogU01();
RcppExport SEXP _BayesSUR_randLogU01() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(randLogU01());
    return rcpp_result_gen;
END_RCPP
}
// randIntUniform
int randIntUniform(const int a, const int b);
RcppExport SEXP _BayesSUR_randIntUniform(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(randIntUniform(a, b));
    return rcpp_result_gen;
END_RCPP
}
// randExponential
double randExponential(const double lambda);
RcppExport SEXP _BayesSUR_randExponential(SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(randExponential(lambda));
    return rcpp_result_gen;
END_RCPP
}
// randVecExponential
arma::vec randVecExponential(const unsigned int n, const double lambda);
RcppExport SEXP _BayesSUR_randVecExponential(SEXP nSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(randVecExponential(n, lambda));
    return rcpp_result_gen;
END_RCPP
}
// randBinomial
unsigned int randBinomial(const unsigned int n, const double p);
RcppExport SEXP _BayesSUR_randBinomial(SEXP nSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(randBinomial(n, p));
    return rcpp_result_gen;
END_RCPP
}
// randMultinomial
arma::uvec randMultinomial(unsigned int n, const arma::vec prob);
RcppExport SEXP _BayesSUR_randMultinomial(SEXP nSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(randMultinomial(n, prob));
    return rcpp_result_gen;
END_RCPP
}
// randNormal
double randNormal(const double m, const double sigmaSquare);
RcppExport SEXP _BayesSUR_randNormal(SEXP mSEXP, SEXP sigmaSquareSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type sigmaSquare(sigmaSquareSEXP);
    rcpp_result_gen = Rcpp::wrap(randNormal(m, sigmaSquare));
    return rcpp_result_gen;
END_RCPP
}
// randVecNormal
arma::vec randVecNormal(const unsigned int n, const double m, const double sigmaSquare);
RcppExport SEXP _BayesSUR_randVecNormal(SEXP nSEXP, SEXP mSEXP, SEXP sigmaSquareSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type sigmaSquare(sigmaSquareSEXP);
    rcpp_result_gen = Rcpp::wrap(randVecNormal(n, m, sigmaSquare));
    return rcpp_result_gen;
END_RCPP
}
// randT
double randT(const double nu);
RcppExport SEXP _BayesSUR_randT(SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(randT(nu));
    return rcpp_result_gen;
END_RCPP
}
// randVecT
arma::vec randVecT(const unsigned int n, const double nu);
RcppExport SEXP _BayesSUR_randVecT(SEXP nSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(randVecT(n, nu));
    return rcpp_result_gen;
END_RCPP
}
// randMvT
arma::vec randMvT(const double& nu, const arma::vec& m, const arma::mat& Sigma);
RcppExport SEXP _BayesSUR_randMvT(SEXP nuSEXP, SEXP mSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(randMvT(nu, m, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// randGamma
double randGamma(double shape, double scale);
RcppExport SEXP _BayesSUR_randGamma(SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(randGamma(shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// randIGamma
double randIGamma(double shape, double scale);
RcppExport SEXP _BayesSUR_randIGamma(SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(randIGamma(shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// randWishart
arma::mat randWishart(double df, const arma::mat& S);
RcppExport SEXP _BayesSUR_randWishart(SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(randWishart(df, S));
    return rcpp_result_gen;
END_RCPP
}
// randBeta
double randBeta(double a, double b);
RcppExport SEXP _BayesSUR_randBeta(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(randBeta(a, b));
    return rcpp_result_gen;
END_RCPP
}
// randBernoulli
unsigned int randBernoulli(double pi);
RcppExport SEXP _BayesSUR_randBernoulli(SEXP piSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pi(piSEXP);
    rcpp_result_gen = Rcpp::wrap(randBernoulli(pi));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesSUR_BayesSUR_internal", (DL_FUNC) &_BayesSUR_BayesSUR_internal, 24},
    {"_BayesSUR_randU01", (DL_FUNC) &_BayesSUR_randU01, 0},
    {"_BayesSUR_randLogU01", (DL_FUNC) &_BayesSUR_randLogU01, 0},
    {"_BayesSUR_randIntUniform", (DL_FUNC) &_BayesSUR_randIntUniform, 2},
    {"_BayesSUR_randExponential", (DL_FUNC) &_BayesSUR_randExponential, 1},
    {"_BayesSUR_randVecExponential", (DL_FUNC) &_BayesSUR_randVecExponential, 2},
    {"_BayesSUR_randBinomial", (DL_FUNC) &_BayesSUR_randBinomial, 2},
    {"_BayesSUR_randMultinomial", (DL_FUNC) &_BayesSUR_randMultinomial, 2},
    {"_BayesSUR_randNormal", (DL_FUNC) &_BayesSUR_randNormal, 2},
    {"_BayesSUR_randVecNormal", (DL_FUNC) &_BayesSUR_randVecNormal, 3},
    {"_BayesSUR_randT", (DL_FUNC) &_BayesSUR_randT, 1},
    {"_BayesSUR_randVecT", (DL_FUNC) &_BayesSUR_randVecT, 2},
    {"_BayesSUR_randMvT", (DL_FUNC) &_BayesSUR_randMvT, 3},
    {"_BayesSUR_randGamma", (DL_FUNC) &_BayesSUR_randGamma, 2},
    {"_BayesSUR_randIGamma", (DL_FUNC) &_BayesSUR_randIGamma, 2},
    {"_BayesSUR_randWishart", (DL_FUNC) &_BayesSUR_randWishart, 2},
    {"_BayesSUR_randBeta", (DL_FUNC) &_BayesSUR_randBeta, 2},
    {"_BayesSUR_randBernoulli", (DL_FUNC) &_BayesSUR_randBernoulli, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesSUR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
