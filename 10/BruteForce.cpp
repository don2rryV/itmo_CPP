#include "BruteForce.h"
#include <algorithm>

BruteForce::BruteForce() {}

BruteForce::~BruteForce() {}


std::vector<int> BruteForce::start(std::vector<std::vector<double>> &dist, int k) {
    std::vector<int> perm(dist.size());
    std::vector<int> ans(dist.size());
    for (int i = 0; i < perm.size(); i++) perm[i] = i;
    double sum = 0;
    double ans_sum = 0;
    for (int j = 1; j < perm.size(); j++) {
        if (j % k == k - 1) {
            sum += dist[perm[j - 1]][perm[j]];
            if (sum > ans_sum) ans_sum = sum;
            sum = 0;
        } else if (j % k == 0) {
        } else {
            sum += dist[perm[j - 1]][perm[j]];
        }
    }
    if (sum != 0 && sum > ans_sum) ans_sum = sum;
    ans = perm;
    while (next_permutation(perm.begin(), perm.end())) {
        double max_sum = 0;
        for (int j = 1; j < perm.size(); j++) {

            if (j % k == k - 1) {
                sum += dist[perm[j - 1]][perm[j]];
                if (sum > max_sum) max_sum = sum;
                sum = 0;
            } else if (j % k == 0) {
            } else {
                sum += dist[perm[j - 1]][perm[j]];
            }
        }
        if (sum != 0 && sum > max_sum) max_sum = sum;
        if (max_sum < ans_sum) {
            ans_sum = max_sum;
            ans = perm;
        }
    }
    return ans;
}
