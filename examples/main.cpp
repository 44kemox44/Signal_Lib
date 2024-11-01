#include <iostream>
#include <vector>
#include "SignalProcessor.h"
#include "Filter.h"

int main() {
    std::vector<double> signal = {1.0, 2.0, 3.0, 4.0, 5.0}; // Example signal
    Filter lowPassFilter(Filter::FilterType::LOW_PASS, 1.0);

    // Apply filter
    std::vector<double> filteredSignal = SignalProcessor::applyFilter(signal, lowPassFilter);
    std::cout << "Filtered Signal: ";
    for (double val : filteredSignal) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Compute FFT
    auto fftResult = SignalProcessor::computeFFT(signal);
    std::cout << "FFT Result: ";
    for (const auto& complexNum : fftResult) {
        std::cout << complexNum << " ";
    }
    std::cout << std::endl;

    return 0;
}
