#include "interface.Algorithm.h"

class KruskalAlgo : public Algorithm {
public:
    KruskalAlgo();

    ~KruskalAlgo();

    std::vector<int> start(std::vector<std::vector<double>> &, int) override;
};
