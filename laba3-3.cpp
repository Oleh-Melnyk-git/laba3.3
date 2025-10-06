#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	 	double x; 
 	double R1; 
 	double R2; 
 	double y;

 	cout << "R = "; cin >> R1;
 	cout << "R2 = "; cin >> R2;
 	cout << "x = "; cin >> x;
    if (x <= -6)
 		y = R2 / 2;

              if (-6 < x && x <= -2 * R2)
	 	         y = -1./2.*x;

                             if (-2 * R2 < x && x <= 0)
	 	     	   y = sqrt(R2 * R2 - (x + R2) * (x + R2));

                        if (0 < x && x <= 2 * R1)
 	          	        y = sqrt(R1 * R1 - (x - R1) * (x - R1));

                        else 
 	     	            y = -(-R1 - (x - (2 * R1)) / ((2 * R1 + 1) - (2 * R1))); 

 	cout << "y = " << y << endl;

 	return 0;
}
