#include "interface.Metric.h"

class ChebyshevDistance : public IMetric {
public:
    ChebyshevDistance();

    ~ChebyshevDistance();

    double getDistance(int x1, int y1, int x2, int y2) override;
};