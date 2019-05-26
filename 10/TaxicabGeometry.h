
#include "interface.Metric.h"

class TaxicabGeometry : public IMetric {
public:
    TaxicabGeometry();

    ~TaxicabGeometry();

    double getDistance(int x1, int y1, int x2, int y2) override;

};