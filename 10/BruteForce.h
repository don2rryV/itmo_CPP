#include "interface.Algorithm.h"

class BruteForce : public Algorithm {
public:
    BruteForce();

    ~BruteForce();

    std::vector<int> start(std::vector<std::vector<double>> &, int) override;
};