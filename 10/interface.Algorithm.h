#pragma once

#include "interface.Metric.h"
#include <vector>



class Algorithm {
public:
    virtual ~Algorithm() {};

    virtual std::vector<int> start(std::vector<std::vector<double>> &, int) = 0;
};