#include "interface.Metric.h"

class EuclideanDistance : public IMetric {
public:
    EuclideanDistance();

    ~EuclideanDistance();

    double getDistance(int x1, int y1, int x2, int y2) override;

};