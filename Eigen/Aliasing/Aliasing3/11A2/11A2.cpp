//#include "stdafx.h" //Visual Studio icin.
#include <iostream>
#include <Eigen>
using namespace std;
using namespace Eigen;

int main()
{
	MatrixXi mat(3, 3);
	mat << 1, 2, 3, 
		   4, 5, 6, 
		   7, 8, 9;
	cout << "Here is the matrix mat:\n" << mat << endl;
	mat.bottomRightCorner(2, 2) = mat.topLeftCorner(2, 2).eval();
	//eval(): Ortusme hatas
	cout << "After the assignment, mat = \n" << mat << endl;
	cin.get();
    return 0;
}

