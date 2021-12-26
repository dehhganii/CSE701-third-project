#include<iostream>
#include <vector>
#include "point.hpp"
#include "GeometryAlgorithms.hpp"
#include "Utility.hpp"
#include "ConvexHull.hpp"
#include "graphic.hpp"
#include "ClosestPair.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    // The number of inputs should be 3 in other case return -1 with proper message
    if(argc != 3)
    {
        cout << "Usage: ./CSE701  <closest pair file address> <convex hull points address>"<< endl;
        return -1;
    }

    
    GeometryAlgorithms* alg;

    ConvexHull convex_hull;

    alg = &convex_hull;
    alg->read_points(argv[1]);
    alg->solve();
    
    
    
    GeometryAlgorithms* alg1;
    ClosestPair closest_pair;

    alg1 = &closest_pair;
    alg1->read_points(argv[2]);
    alg1->solve();
    

    
}

