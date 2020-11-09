#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){

    // Basic Example of cpp
    // std::cout << "Example of cpp \n";
    // float a = 1.0, b = 2.0;
    // std::cout << a << std::endl;
    // std::cout << a/b << std::endl;
    // std::cout << std::sqrt(b) << std::endl;
    // std::cout << std::acos(-1) << std::endl;
    // std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // // Example of vector
    // std::cout << "Example of vector \n";
    // // vector definition
    // Eigen::Vector3f v(1.0f,2.0f,3.0f);
    // Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // // vector output
    // std::cout << "Example of output \n";
    // std::cout << v << std::endl;
    // // vector add
    // std::cout << "Example of add \n";
    // std::cout << v + w << std::endl;
    // // vector scalar multiply
    // std::cout << "Example of scalar multiply \n";
    // std::cout << v * 3.0f << std::endl;
    // std::cout << 2.0f * v << std::endl;

    // // Example of matrix
    // std::cout << "Example of matrix \n";
    // // matrix definition
    // Eigen::Matrix3f i,j;
    // i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    // j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // // matrix output
    // std::cout << "Example of output \n";
    // std::cout << i << std::endl;
    // std::cout << j << std::endl;
    // std::cout << i * j << std::endl;
    // std::cout << "change" << std::endl;
    // matrix add i + j
    // matrix scalar multiply i * 2.0
    // matrix multiply i * j
    // matrix multiply vector i * v

    float x = 2.0, y = 1.0;
    float angle = 45;
    float seita = angle / 180 * 3.14159;
    Eigen::Vector3f P(2.0f,1.0f,1.0f);
    Eigen::Matrix3f rotMartix, transMartix;
    rotMartix << 
        cos(seita), -sin(seita), 0,
        sin(seita), cos(seita), 0,
        0, 0, 1;
    transMartix << 
            1, 0, 1,
            0, 1, 2,
            0, 0, 1;
    cout << sin(seita) << " " << cos(seita) << endl;
    cout << seita << endl;
    Eigen::Vector3f tmp = rotMartix * P;
    cout << tmp <<endl;
    cout << transMartix * tmp <<endl;

    return 0;
}