#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x, y, z;
    Point(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
    Point operator-(const Point& p) const {
        return Point(x - p.x, y - p.y, z - p.z);
    }
    double dot(const Point& p) const {
        return x * p.x + y * p.y + z * p.z;
    }
    double norm() const {
        return sqrt(x * x + y * y + z * z);
    }
    Point normalize() const {
        double n = norm();
        return Point(x / n, y / n, z / n);
    }
};

// Function to compute the smallest enclosing spherical cap
double smallestEnclosingCap(const vector<Point>& points) {
    if (points.empty()) return 0.0;

    Point center = points[0];
    double radius = 0.0;

    for (size_t i = 1; i < points.size(); ++i) {
        if ((points[i] - center).norm() > radius) {
            center = points[i];
            radius = 0.0;
            for (size_t j = 0; j < i; ++j) {
                if ((points[j] - center).norm() > radius) {
                    center = Point((points[i].x + points[j].x) / 2, 
                                   (points[i].y + points[j].y) / 2, 
                                   (points[i].z + points[j].z) / 2);
                    radius = (points[i] - center).norm();
                }
            }
        }
    }

    // The angle of the cap is the arcsin of the radius
    return asin(radius);
}

int main() {
    int N;
    cin >> N;
    vector<Point> stars(N);

    for (int i = 0; i < N; ++i) {
        cin >> stars[i].x >> stars[i].y >> stars[i].z;
        stars[i] = stars[i].normalize(); // Normalize to unit sphere
    }

    // Compute the smallest enclosing spherical cap
    double smallestCapAngle = smallestEnclosingCap(stars);

    // The largest empty cap is the complement of the smallest enclosing cap
    double largestEmptyCapAngle = M_PI / 2 - smallestCapAngle;

    // Convert to degrees and output with required precision
    double largestEmptyCapDegrees = largestEmptyCapAngle * 180 / M_PI;
    cout << fixed << setprecision(10) << largestEmptyCapDegrees << endl;

    return 0;
}