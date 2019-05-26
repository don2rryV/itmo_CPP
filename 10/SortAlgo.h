#include "interface.Algorithm.h"

class SortAlgo : public Algorithm {
public:
    SortAlgo();

    ~SortAlgo();

    std::vector<int> start(std::vector<std::vector<double>> &, int) override;
};