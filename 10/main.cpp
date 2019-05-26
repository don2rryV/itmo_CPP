#include <iostream>
#include <vector>
#include "EuclideanDistance.h"
#include "TaxicabGeometry.h"
#include "ChebyshevDistance.h"
#include "interface.Algorithm.h"
#include "BruteForce.h"
#include "KruskalAlgo.h"
#include "SortAlgo.h"

int INF = 10000000;

std::vector<std::vector<double>> preProcessing(IMetric *metric, const std::vector<std::pair<int, int>> &c) {
    int n = c.size();
    std::vector<std::vector<double>> dist(n, std::vector<double>(n));
    for (int i = 0; i < c.size(); i++) {
        for (int j = i; j < c.size(); j++) {
            dist[i][j] = dist[j][i] = (i == j ? INF : metric->getDistance(c[i].first, c[i].second,
                                                                          c[j].first, c[j].second));
        }
    }
    return dist;
}

void print(std::vector<int> &ans, int k) {
    int tmpK = 0;
    for (auto i : ans) {
        std::cout << i + 1 << " ";
        if (tmpK % k == (k - 1)) std::cout << std::endl;
        tmpK++;
    }
}

int main() {
    int n, k;
    std::cout << "count of vertices = ";
    std::cin >> n;
    std::cout << "k = ";
    std::cin >> k;
    std::vector<std::pair<int, int>> coor(n);
    for (int i = 0, u, v; i < n; i++) {
        std::cin >> coor[i].first >> coor[i].second;
    }
    std::vector<std::vector<double>> dist;

    std::cout << "change metric" << std::endl;
    std::cout << "1. Euclidean" << std::endl;
    std::cout << "2. Taxicab" << std::endl;
    std::cout << "3. Chebyshev" << std::endl;
    int numbMetric;
    std::cin >> numbMetric;
    if (numbMetric == 1) {
        EuclideanDistance *metric = new EuclideanDistance();
        dist = preProcessing(metric, coor);
    } else if (numbMetric == 2) {
        TaxicabGeometry *metric = new TaxicabGeometry();
        dist = preProcessing(metric, coor);
    } else {
        ChebyshevDistance *metric = new ChebyshevDistance();
        dist = preProcessing(metric, coor);
    }

   // algo cur = new BruteForce(metric, gr)
   // algo.start();
    std::cout << "change algo" << std::endl;
    std::cout << "1. BruteForce" << std::endl;
    std::cout << "2. Prim" << std::endl;
    std::cout << "3. SortAlgo" << std::endl;
    int numbAlgo;
    std::cin >> numbAlgo;
    std::vector<int> ans;
    if (numbAlgo == 1) {
        BruteForce *algo1 = new BruteForce();
        ans = algo1->start(dist, k);
        print(ans, k);
    } else if (numbAlgo == 2) {
        KruskalAlgo *algo2 = new KruskalAlgo();
        ans = algo2->start(dist, k);
        print(ans, k);
    } else {
        SortAlgo *algo3 = new SortAlgo();
        ans = algo3->start(dist, k);
        print(ans, k);
    }
}


/*
0 0
2 0
2 6
4 1
1 1
 */