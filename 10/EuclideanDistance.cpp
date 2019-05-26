#include <iostream>
#include <cmath>
#include "EuclideanDistance.h"

EuclideanDistance::EuclideanDistance() {}

EuclideanDistance::~EuclideanDistance() {}

double EuclideanDistance::getDistance(int x1, int y1, int x2, int y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}



