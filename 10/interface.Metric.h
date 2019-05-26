#pragma once

class IMetric {
public:
    virtual ~IMetric() {};

    virtual double getDistance(int x1, int y1, int x2, int y2) = 0;
};