
#include <algorithm>
#include <afxres.h>
#include "KruskalAlgo.h"


KruskalAlgo::KruskalAlgo() {};

KruskalAlgo::~KruskalAlgo() {};
int n;
int MIN = 1000000;
std::vector<int> pozMin;
std::vector<int> ansKruskal;
std::vector<bool> usedKruskal;

void next(int v, int cnt) {
    if (cnt == n) {
        return;
    } else {
        cnt++;
        ansKruskal.push_back(v);
        usedKruskal[v] = true;
        if (!usedKruskal[pozMin[v]]) {
            next(pozMin[v], cnt);
        } else {
            for (int i = 0; i < n; i++) {
                if (!usedKruskal[i]) next(i, cnt);
            }
        }
    }

}

std::vector<int> KruskalAlgo::start(std::vector<std::vector<double>> &dist, int k) {
    pozMin.resize(dist.size());
    n = dist.size();
    usedKruskal.resize(n, false);
    for (int i = 0; i < dist.size(); i++) {
        double mintmp = MIN;
        for (int j = 1; j < dist.size(); j++) {
            if (dist[i][j] < mintmp) {
                mintmp = dist[i][j];
                pozMin[i] = j;
            }
        }
    }

    next(0, 0);
    return ansKruskal;

}


