#include <iostream>
#include <cmath>

double gridpi( unsigned npoints ) {
    double insidecircle = 0;  // Points found to be inside circle
    double totalpoints = npoints*npoints;  // Total number of points
    for ( unsigned x = 0; x < npoints; x++){  // Range through x
        for (unsigned y = 0; y < npoints; y++){  // Range through y
            double xadjusted = (double)x/(double)npoints;  // Adjust so we can use unit circle
            double yadjusted = (double)y/(double)npoints;
            if (std::hypot(xadjusted,yadjusted) <= 1) {  // If hypot of 0,0 and x,y < 1 it is inside the circle
                insidecircle += 1;
            }
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
