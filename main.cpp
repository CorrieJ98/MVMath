#include <iostream>
#include "mvmath.h"

using namespace mv;

MV_Math mv_math;

mat4x4 matrix;

mat4x4 CreateTestMatrix(mv::mat4x4 mat) {
	return mat = mv_math.Matrix_MakeIdentity();
	
}



int main() {
	CreateTestMatrix(matrix);

	for (int i = 0; i < 3; i++){
		std::cout << matrix.m[i] << " \n" << std::endl;
	}

}

