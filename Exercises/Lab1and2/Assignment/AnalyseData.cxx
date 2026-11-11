#include <iostream>
#include <vector>
#include<cmath>
#include<fstream>

int main(){

    std::string input_file = "/workspaces/SUPACPP_Labs/Exercises/Lab1and2/input2D_float.txt"; // define file name
    std::ifstream data_file;  

    // open using path to the file
    data_file.open(input_file);

    // check file was opened correctly 
    if (!data_file.is_open()){
        std::cout << "Error opening file: " << input_file << std::endl;
        return -1;
    }
    else{
        std::cout << "File: " << input_file << " opened successfully!" << std::endl;
    }


    // container for x, y data, a vector 
    std::vector<std::pair<double, double>> data_points;

    double x, y;
    char comma;

    // skip header line
    std::string header;
    std::getline(data_file, header);

    while (data_file >> x >> comma >> y){
        data_points.push_back({x, y});
    }

    std::cout << "The data in the file is: " << std::endl;
    for (auto data : data_points){
        std::cout << data.first << ",  " << data.second << std::endl;
    }

    // closing the datafile 
    data_file.close(); 

    return 0;
}