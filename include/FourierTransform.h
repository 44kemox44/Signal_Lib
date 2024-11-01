#ifndef FOURIER_TRANSFORM_H
#define FOURIER_TRANSFORM_H

#include <vector>
#include <complex>

class FourierTransform {
public:
    static std::vector<std::complex<double>> FFT(const std::vector<double>& signal);
};

#endif // FOURIER_TRANSFORM_H
