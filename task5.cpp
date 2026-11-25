#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point* points = new Point[3];

    points[0] = {1, 0};
    points[1] = {2, 0};
    points[2] = {3, 0};

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += points[i].x;
    }

    std::cout << sum << '\n';

    delete[] points;
    points = nullptr;
}