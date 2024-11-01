#ifndef SIGNAL_PROCESSOR_H
#define SIGNAL_PROCESSOR_H

#include <vector>
#include <complex>
#include "Filter.h"
#include "FourierTransform.h"

class SignalProcessor {
public:
    static std::vector<double> applyFilter(const std::vector<double>& signal, const Filter& filter);
    static std::vector<std::complex<double>> computeFFT(const std::vector<double>& signal);
};

#endif // SIGNAL_PROCESSOR_H
