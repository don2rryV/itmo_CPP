#include <algorithm>
#include "ChebyshevDistance.h"

ChebyshevDistance::ChebyshevDistance() {}

ChebyshevDistance::~ChebyshevDistance() {}

double ChebyshevDistance::getDistance(int x1, int y1, int x2, int y2) {
    return std::max(std::abs(x2 - x1), std::abs(y2 - y1));
}




