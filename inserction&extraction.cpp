#include <iostream>

class Point
{
public:
    int x, y, z;
};

class Rectangle
{
public:
    int length, breadth;
};

class Triangle
{
public:
    int base, height;
};

// Overload the insertion operator (<<) for Point
std::ostream& operator<<(std::ostream& os, const Point& point)
{
    os << point.x << ' ' << point.y << ' ' << point.z;
    return os;
}

// Overload the extraction operator (>>) for Point
std::istream& operator>>(std::istream& is, Point& point)
{
    is >> point.x >> point.y >> point.z;
    return is;
}

// Overload the insertion operator (<<) for Rectangle
std::ostream& operator<<(std::ostream& os, const Rectangle& rect)
{
    os << rect.length << ' ' << rect.breadth;
    return os;
}

// Overload the extraction operator (>>) for Rectangle
std::istream& operator>>(std::istream& is, Rectangle& rect)
{
    is >> rect.length >> rect.breadth;
    return is;
}

// Overload the insertion operator (<<) for Triangle
std::ostream& operator<<(std::ostream& os, const Triangle& tri)
{
    os << tri.base << ' ' << tri.height;
    return os;
}

// Overload the extraction operator (>>) for Triangle
std::istream& operator>>(std::istream& is, Triangle& tri)
{
    is >> tri.base >> tri.height;
    return is;
}

int main()
{
    Point point;
    Rectangle rect;
    Triangle tri;

    std::cout << "Enter x, y, z for Point: ";
    std::cin >> point;

    std::cout << "Enter length, breadth for Rectangle: ";
    std::cin >> rect;

    std::cout << "Enter base, height for Triangle: ";
    std::cin >> tri;

    std::cout << "Point: " << point << std::endl;
    std::cout << "Rectangle: " << rect << std::endl;
    std::cout << "Triangle: " << tri << std::endl;

    return 0;
}

