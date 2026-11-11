#include <iostream> 
#include <cmath>
#include <vector>

// defining function to calculate magnitude
double magnitude(double x, double y){
    return sqrt(x*x + y*y);
}

// defining main function
int main(){
    std::cout << "Hello World!" << std::endl;

    double x = 7.5;   // defining x and y 
    double y = 3.4; 

    // calculating magnitude manually 
    double mag = sqrt(x*x + y*y);  

    std::cout << "The magnitude of the vector is: " << mag << std::endl;   // printing magnitude

    std::vector<double> vec = {x, y};  // defining x and y as a vector

    double mag_vec = sqrt(vec[0]*vec[0] + vec[1]*vec[1]);  // defining magnitude using vector entries

    std::cout << "The magnitude of the vector is: " << mag_vec << std::endl;  // printing magnitude again

    // calculating magnitude using function
    double mag_func = magnitude(vec[0], vec[1]);
    
    std::cout << "The magnitude of the vector is: " << mag_func << std::endl;

    return 0; // compulsory return

    }

