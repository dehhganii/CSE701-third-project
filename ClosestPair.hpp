/**
 * @file ClosestPair.hpp
 * @author dehghh1@mcmaster.ca
 * @brief 
 * @version 0.1
 * @date 2021-12-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ClosestPair_HPP

#define ClosestPair_HPP

#include "point.hpp"
#include "GeometryAlgorithms.hpp"
#include "Graphic.hpp"
#include <vector>

/**
 * @brief class for solving the closest pair problem
 * 
 */
class ClosestPair : public GeometryAlgorithms
{
public:
    //The main method of solving the problem
    void solve() override;
    //Reading points from a file
    void read_points(std::string address) override;
    //Return the distanceof two points
    double dist(const point &p1, const point &p2) const;
    //Compare two number and return the minimum one
    double min(double x, double y);
    //The brute force approach to solve the problem
    double brute_force(std::vector<point> ps, uint64_t n);
    //Compare distance of sorted points
    double strip_closest(std::vector<point> strip,uint64_t size, double d);
    //Recursive function to find the minimum distance between points
    double closest_util(std::vector<point> px, std::vector<point> py, uint64_t n);
private:
    std::vector<point> points;
};

#endif