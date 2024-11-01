#include "SignalProcessor.h"

std::vector<double> SignalProcessor::applyFilter(const std::vector<double>& signal, const Filter& filter) {
    std::vector<double> filteredSignal;
    // Implement filtering logic based on the filter type and coefficients
    // Placeholder for filter logic:
    filteredSignal = signal; // No filtering for now
    return filteredSignal;
}

std::vector<std::complex<double>> SignalProcessor::computeFFT(const std::vector<double>& signal) {
    return FourierTransform::FFT(signal);
}
