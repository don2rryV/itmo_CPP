cmake_minimum_required(VERSION 3.9)
project(hw10)

set(CMAKE_CXX_STANDARD 11)

add_executable(hw10 main.cpp interface.Metric.h EuclideanDistance.h EuclideanDistance.cpp ChebyshevDistance.cpp ChebyshevDistance.h TaxicabGeometry.cpp TaxicabGeometry.h interface.Algorithm.h BruteForce.h BruteForce.cpp KruskalAlgo.cpp KruskalAlgo.h SortAlgo.h SortAlgo.cpp)