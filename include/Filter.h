#ifndef FILTER_H
#define FILTER_H

#include <vector>

class Filter {
public:
    enum class FilterType { LOW_PASS, HIGH_PASS };

private:
    FilterType type;
    double cutoffFrequency;

public:
    Filter(FilterType t, double freq) : type(t), cutoffFrequency(freq) {}

    const std::vector<double> getCoefficients() const;
    FilterType getType() const { return type; }
    double getCutoffFrequency() const { return cutoffFrequency; }
};

#endif // FILTER_H
