
#include "SortAlgo.h"
#include <algorithm>

SortAlgo::SortAlgo() {}

SortAlgo::~SortAlgo() {}

int size;
std::vector<int> ansSort;
std::vector<bool> usedSort;
std::vector<std::vector<std::pair<double, int>>> tmpDist;

void nextVertex(int v, int cnt) {
    if (cnt == size) {
        return;
    } else {
        usedSort[v] = true;
        cnt++;
        ansSort.push_back(v);
        for (int i = 0; i < size; i++) {
            if (!usedSort[tmpDist[v][i].second] && (v != i)) {
                nextVertex(tmpDist[v][i].second, cnt);
            }
        }
    }
}


std::vector<int> SortAlgo::start(std::vector<std::vector<double>> &dist, int k) {
    size = dist.size();
    usedSort.resize(size, false);
    tmpDist.resize(size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            tmpDist[i].push_back({dist[i][j], j});
        }
    }
    for (int i = 0; i < size; i++) {
        std::sort(tmpDist[i].begin(), tmpDist[i].end());
    }

    nextVertex(0, 0);
    return ansSort;
}
