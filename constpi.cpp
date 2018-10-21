#include <iostream>
#include <cmath>

constexpr double gridpi( unsigned npoints ) {
    double insidecircle = 0;  // Points found to be inside circle
    double totalpoints = npoints*npoints;  // Total number of points
    double x = 0;
    double y = 0;
    while (x<npoints){  // Range through x
        while (y<npoints){  // Range through y
            double xadjusted = x/(double)npoints;  // Adjust so we can use unit circle
            double yadjusted = y/(double)npoints;
            if (std::hypot(xadjusted,yadjusted) <= 1) {  // If hypot of 0,0 and x,y < 1 it is inside the circle
                insidecircle += 1;
            y += 1;
            }
        x += 1;
        }
    }
    double piestimate = (insidecircle/totalpoints) * 4;  // Calculate estimate
    return piestimate;
}

int main(){
    int npoints;
    std::cin>>npoints;
    std::cout<<gridpi(npoints)<<"\n";
    return 0;
}
