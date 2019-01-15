#include "../mba/mba.hpp"

int main() {
    // Coordinates of data points.
    std::vector<mba::point<2>> coo = {
        {0.0, 0.0},
        {0.0, 1.0},
        {1.0, 0.0},
        {1.0, 1.0},
        {0.4, 0.4},
        {0.6, 0.6}
    };

    // Data values.
    std::vector<double> val = {
        0.2, 0.0, 0.0, -0.2, -1.0, 1.0
    };

    // Bounding box containing the data points.
    mba::point<2> lo = {-0.1, -0.1};
    mba::point<2> hi = { 1.1,  1.1};

    // Initial grid size.
    mba::index<2> grid = {3, 3};

    // Algorithm setup.
    mba::MBA<2> interp(lo, hi, grid, coo, val);

    // Get interpolated value at arbitrary location.
    double w = interp(mba::point<2>{0.3, 0.7});
    printf("w=%d\n",w);
}
