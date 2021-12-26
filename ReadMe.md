# CSE 701 Third Project #

## Introduction ##

This respiratory is for the third project of CSE 701 course in Fall 2021.

This project is applying two different geometric algorithms with considering time complexity of algorithms.

### 1.Closest pair points ###

The problem is that there are several points with two coordinates. The goal is to find the minimum distance between two points. Moreover, return those points with minimum distance. The brute force approach for solving this problem is computing the distance between each two points. Then return the minimum distance. The time complexity of this approach is O(n^2). This is not the ideal approach for sure. With using divide and conquer approach.

### 2.Convex Hull ###

THe problem is there are set of points. The goal is to find sub set of that, the way the result of connecting that subset will be a convex hull and all other points will lie inside the polygons. There are two well-known algorithms for solving this problem. The first one is **Jarvis's algorithm**. The worst time complexity of this algorithm is *O(n^2)*. However, the implemented algorithm **Graham's scan** can solve the problem in *O(n Log n)*.

The motivation behind choosing this title for the project is to experience another context of algorithms which was geometrical ones.

On top of that, Since this project was a practice for writing object oriented programming. Different geometrical classes made this topic a good way in terms of this practice.

## Implementation ##

### Classes ###

* point
  * This class is the main foundation of all the classes. All the input types are based on this class. Consisting of constructors for no variable, one variable, and two variables. Since the point coordinates are private; two methods are needed for setting them and getting them also.

* Utility
  * This class only have static methods. As a result, there is no need to have specific type of object. In this class different methods is implemented which were used in different classes.
    * Read points from a file.

    * Square distance, distance between two points.

    * Return_part, get a vector and a nonnegative integer. return part of a vector starting from the n index.

    * Line_slope, return the slope between two given points.

* Graphic

* This class is for visualizing the result of algorithms. The visualization without using any third party libraries. Using bitmap files. The other class is Color class which has only a constructor and three inputs meaning the red, green, and blue in the picture. There are five methods
  * Get_color, get a triple vector as a color.
  * Set_color, gets the triple vector color and coordinates to set that pixel in the frame to the color.
  * draw_point, draw a pixel and it's neighbors for better visualization.
  * Draw_line, gets to point and draw a line between them.
  * Export, to export the output as .bmp file.

* GeometryAlgorithm
  * This class is a parent class with only to method reading input and solve. No definition is needed for this class because each algorithm inherit from this class and the definition of this two methods will be override in those classes.

* Convex_hull
  * This class solve the problem of finding the convex hull of n given points with using graham scan. In the lower time complexity in comparison with other well-known algorithms. There are several method in this class
  * Read_points, call read point method from Utility class.
  * Swap, change index of two points in a vector.
  * next_to_top, with getting an stack return the second top point of the stack.
  * compare, gets two point and compare it with the most left down point of the vector, which is a public variable in this class.
  * orientation, gets three different point and return the position of these three points. Three different position collinear, clockwise, and counter clockwise.

* Closest pair
  * This class find the closest distance of two points in a given set of points. Different methods are in this class
    * read points, call the method from Utility class.
    * min, find the minimum of two points based on the coordinates.
    * dist, return the sqrt of called method of Utility.

Main function
The main function only make the variables and check the input file to be appropriate for the algorithms.

### Needed Improvement for the Code ###

* Fix conversion warnings.
* Better visualization for convex hull
* Correct visualization for the closest points.
* Other fixes related to the feedback I will get.
* Add another algorithm if its needed.
* Check the input file to each row does not have more than two numbers. each should be integer number.

## Output ##

### How to use the code ###

write down ./CSE701 and after that two file address is needed.

* First points for convex hull
* Second for the closest pair

the input file should be a txt file each line at max has two integer values.

with "," separated

>like this:

    12,30
    11,7
    .
    .
    .

### some sample outputs ###

```

./CSE701 convex_hull_points.txt closest_pair_points.txt

```

|Points|
|------|
(0, 0)
(30, 10)
(10, 10)
(20, 20)
(30, 30)
(40, 40)
(10, 20)
(0, 30)

|Convex_hull|
|-----------|
(0, 30)
(40, 40)
(30, 10)
(0, 0)
File created

The points for the closest pair the output is the distance
>9.43398

* if any negative input is in file.
  * > input must be nonnegative integer
* if double input is in file
  * > input must be nonnegative integer

* number of inputs something not equal two
  * > "Usage: ./CSE701  closest pair file address convex hull points address"
