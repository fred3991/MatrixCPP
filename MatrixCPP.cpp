#include <iostream>

using namespace std;

double** create2DWeightArrayDouble(int height, int width, double vect[])
{
    double** array2D = 0;
    array2D = new double* [height];
    int iterator = 0;
    for (int h = 0; h < height; h++)
    {
        array2D[h] = new double[width];
        for (int w = 0; w < width; w++)
        {
            array2D[h][w] = *(vect+ iterator);
            iterator++;
        }
    }
    return array2D;
}


int** create2DWeightArrayInt(int height, int width, int vect[])
{
    int** array2D = 0;
    array2D = new int* [height];
    int iterator = 0;
    for (int h = 0; h < height; h++)
    {
        array2D[h] = new int[width];
        for (int w = 0; w < width; w++)
        {
            array2D[h][w] = *(vect + iterator);
            iterator++;
        }
    }
    return array2D;
}




void multiplyMatrices(int *firstMatrix[], int *secondMatrix[])
{
    int i, j, k;

    int** mult = 0;
    mult = new int* [3];


    // print contents of the array2D
    printf("MultiPlay 1: \n");

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << firstMatrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }


    int row_numbers = sizeof(*firstMatrix[0]) / sizeof(*firstMatrix[0]);
    int col_number = sizeof(*firstMatrix[0]) / sizeof(firstMatrix[0][0]);


    printf("Number of rows: %d\n", row_numbers);
    printf("Number of columns: %d\n", col_number);

    //int rowFirst = sizeof firstMatrix / sizeof firstMatrix[0];
    //int column = sizeof(firstMatrix[0]) / sizeof(firstMatrix[0][0]);
    //int columnFirst = sizeof firstMatrix[0] / sizeof firstMatrix[0][0];
    //int rowSecond = sizeof secondMatrix / sizeof secondMatrix[0];
    //int columnSecond = sizeof secondMatrix[0] / sizeof secondMatrix[0][0];


    int rowFirst = 3;
    int columnFirst = 3;
    int rowSecond = 3;
    int columnSecond = 3;


    ////Initializing elements of matrix mult to 0.
    //    for (i = 0; i < rowFirst; ++i)
    //    {
    //        for (j = 0; j < columnSecond; ++j)
    //        {
    //            mult[i][j] = 0;
    //        }
    //    }
    // print contents of the array2D
    printf("MultiPlay 1: \n");

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << firstMatrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    // print contents of the array2D
    printf("MultiPlay 2: \n");

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << secondMatrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    int height = 3;
    int width = 3;

    int** array2D = 0;
    array2D = new int* [height];

    for (int h = 0; h < height; h++)
    {
        array2D[h] = new int[width];
        for (int w = 0; w < width; w++)
        {
            array2D[h][w] += firstMatrix[w][h] * secondMatrix[h][w];
     
        }
    }

 
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {          
            for (k = 0; k < columnFirst; ++k)
            {
                array2D[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }




    // print contents of the array2D
    printf("Result 2: \n");

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << array2D[i][j] << ' ';
        }
        std::cout << std::endl;
    }


}


int main() 
{

    int row = 3;
    int col = 3;


    int vec1[9] = {1,2,3,4,5,5,4,3,2 };
    int** my2DArray1 = create2DWeightArrayInt(row, col, vec1);

    int vec2[9] = { 1,3,4,3,5,3,3,2,1 };
    int** my2DArray2 = create2DWeightArrayInt(row, col, vec2);

    multiplyMatrices(my2DArray1, my2DArray2);

    printf("End");

}

#pragma region MyRegion

//
//void display(int mult[][10], int rowFirst, int columnSecond)
//{
//    int i, j;
//
//    cout << "Output Matrix:" << endl;
//    for (i = 0; i < rowFirst; ++i)
//    {
//        for (j = 0; j < columnSecond; ++j)
//        {
//            cout << mult[i][j] << " ";
//            if (j == columnSecond - 1)
//                cout << endl << endl;
//        }
//    }
//}


//
//double** matrixMultiply(double* mat1[], double* mat2[])
//{
//
//    int rows1 = sizeof mat1 / sizeof mat1[0];
//    int cols1 = sizeof mat1[0] / sizeof mat1[0][0];
//
//    int rows2 = sizeof mat2 / sizeof mat2[0];
//    int cols2 = sizeof mat2[0] / sizeof mat2[0][0];
//
//    double** array2D = 0;
//    array2D = new double* [height];
//
//    double** array2D = 0;
//    array2D = new double* [height];
//    int iterator = 0;
//    for (int h = 0; h < height; h++)
//    {
//        array2D[h] = new double[width];
//        for (int w = 0; w < width; w++)
//        {
//            array2D[h][w] = *(vect + iterator);
//            iterator++;
//        }
//    }
//    return array2D;
//}
//
//void mulMat(int**, int**)
//{
//    int rslt[R1][C2];
//
//    cout << "Multiplication of given two matrices is:\n" << endl;
//
//    for (int i = 0; i < R1; i++) {
//        for (int j = 0; j < C2; j++) {
//            rslt[i][j] = 0;
//
//            for (int k = 0; k < R2; k++) {
//                rslt[i][j] += mat1[i][k] * mat2[k][j];
//            }
//
//            cout << rslt[i][j] << "\t";
//        }
//
//        cout << endl;
//    }
//}
















    //srand(time(0));

    //int m, n;

    //m = 3 + (rand() % 4);
    //n = 4 + (rand() % 4);
    //float** arr = new float* [m]; // создание динамического двумерного массива на m строк
    //for (int i(0); i < m; i++) // создание каждого одномерного массива в динамическом двумерном массиве, или иначе - создание столбцов размерность n
    //    arr[i] = new float[n];


    ////заполнение массива от -10 до 10
    //for (int i = 0; i < m; i++) {
    //    for (int j = 0; j < n; j++) {
    //        arr[i][j] = rand() % 21 - 10;
    //    }
    //}
    ////вывод чисел
    //cout << "Array: " << endl;
    //for (int i = 0; i < m; i++) {
    //    for (int j = 0; j < n; j++) {
    //        cout << arr[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //for (int i(0); i < m; i++) // освобождение памяти каждого одномерного массива в двумерном массиве - удаление столбцов
    //    delete arr[i];
    //delete arr; // освобождение памяти двумерного массива

    //return 0;

    ////const int n = 5;
    //int a[n] = { 1, 2, 3, 4, 5 };

    //for (int i = 0; i < n; i++)
    //{
    //    std::cout << "a[" << i << "]: address=" << a + i << "\tvalue=" << *(a + i) << std::endl;
    //}

    //return 0;
    ////int vec[9] = { 23,2,3,4,5,6,7,8,9 };

    ////int** array2D = 0;
    ////array2D = new int* [5];

    //array2D = passInputVector(vec, 9, 9);

    //cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    //cout << " =====  Program to demonstrate Multiplication of two Matrices ===== \n\n";

    ////loop variable i to iterate rows and j to iterate columns.
    //int row1, col1, row2, col2, i, j, k;

    ////Declaring the 3 matrices (2D arrays) m1-first matrix, m2- second matrix and pro- stores the multiplication of the two matrices
    //int m1[32][32], m2[32][32], pro[32][32];

    //cout << "\n\nEnter the number of Rows and Columns of first matrix : ";
    //cin >> row1 >> col1;

    //cout << "\n\nEnter the number of Rows and Columns of second matrix : ";
    //cin >> row2 >> col2;


    //}
    //else {
    //    cout << "\n\nMatrix multiplication can't be done as the indices do not match!";
    //}

    //cout << "\n\n";












//// MatrixCPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
////
//
////multiply of complex numbers matrix
////programming by : Erfan Nasoori
////Email : ketn68@yahoo.com
////Date of sent : 2009/1/21
//
//
//#include <iostream>
//#include <iomanip>
//#include <conio.h>
//
//using namespace std;
//
//void MultiplyWithOutAMP() 
//{
//	int aMatrix[2][3] = { {3, 4, 5}, 
//						  {2, 5, 4}};
//
//	int bMatrix[3][2] = { {1, 2}, 
//						  {3, 4},  
//						  {5, 6} };
//
//	int aRows = sizeof(aMatrix) / sizeof(aMatrix[0]);
//	int aCols = sizeof(aMatrix[0]) / sizeof(aMatrix[0][0]);
//
//	int bRows = sizeof(bMatrix) / sizeof(bMatrix[0]);
//	int bCols = sizeof(bMatrix[0]) / sizeof(bMatrix[0][0]);
//
//	if (!(aCols == bRows))
//	{
//		std::cout << "Oshibka ";
//		return;
//	}
//
//	int product[3][3] = { {0, 0}, {0, 0} ,{0, 0} };
//
//
//	for (int productRow = 0; productRow < aCols; productRow++)
//	{
//		for (int productCol = 0; productCol < bCols; productCol++)
//		{
//			// Multiply the row of A by the column of B to get the row, column of product.
//			for (int inner = 0; inner < bRows; inner++)
//			{
//				/*std::cout << aMatrix[productRow][inner] << " A ";
//				std::cout << bMatrix[inner][productCol] << " b ";*/
//
//				product[productRow][productCol] += aMatrix[productRow][inner] * bMatrix[inner][productCol];
//			}
//			std::cout << product[productRow][productCol] << "  ";
//		}
//		std::cout << "\n";
//	}
//}
//
///*
// * This C++ program can multiply any two square or rectangular matrices.
// * The below program multiplies two square matrices of size 4 * 4.
// * There is also an example of a rectangular matrix for the same code (commented below).
// * We can change the Matrix value with the number of rows and columns (from MACROs) for Matrix-1
// * and Matrix-2 for different dimensions.
// */
//
// /*
//  * Note:  i- The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2.
//  *       ii- Output of multiplication of Matrix-1 and Matrix-2, results with equal to the number
//  *           of rows of Matrix-1 and the number of columns of Matrix-2 i.e. rslt[R1][C2].
//  */
//
//#include <iostream>
//
//using namespace std;
//
//// Edit MACROs here, according to your Matrix Dimensions for mat1[R1][C1] and mat2[R2][C2]
//#define R1 4            // number of rows in Matrix-1
//#define C1 4            // number of columns in Matrix-1
//#define R2 4            // number of rows in Matrix-2
//#define C2 4            // number of columns in Matrix-2
//
//
//#define R12 3            // number of rows in Matrix-1
//#define C12 4            // number of columns in Matrix-1
//#define R22 4            // number of rows in Matrix-2
//#define C22 3            // number of columns in Matrix-2
//
//
//void mulMat(int mat1[][], int mat2[][], int col1, int col2, int row1, int row2)
//
//{
//
//    int** rstl = new int[row1][col2];
//
//    cout << "Multiplication of given two matrices is:\n" << endl;
//
//    for (int i = 0; i < row1; i++) {
//        for (int j = 0; j < col2; j++) {
//            rslt[i][j] = 0;
//
//            for (int k = 0; k < row2; k++) {
//                rslt[i][j] += mat1[i][k] * mat2[k][j];
//            }
//
//            cout << rslt[i][j] << "\t";
//        }
//
//        cout << endl;
//    }
//}
//
//
//
//void mulMat2(int mat1[][C12], int mat2[][C22]) {
//    int rslt[R12][C22];
//
//    cout << "Multiplication of given two matrices is:\n" << endl;
//
//    for (int i = 0; i < R12; i++) {
//        for (int j = 0; j < C22; j++) {
//            rslt[i][j] = 0;
//
//            for (int k = 0; k < R22; k++) {
//                rslt[i][j] += mat1[i][k] * mat2[k][j];
//            }
//
//            cout << rslt[i][j] << "\t";
//        }
//
//        cout << endl;
//    }
//}
//
//
//int main(void) {
//    // Square Matrices
//    // R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these values in MACROs)
//    int mat1[R1][C1] = {
//            {1, 1, 1, 1},
//            {2, 2, 2, 2},
//            {3, 3, 3, 3},
//            {4, 4, 4, 4}
//    };
//
//    int mat2[R2][C2] = {
//            {1, 1, 1, 1},
//            {2, 2, 2, 2},
//            {3, 3, 3, 3},
//            {4, 4, 4, 4}
//    };
//
//
//    if (C1 != R2) {
//        cout << "The number of columns in Matrix-1  must be equal to the number of rows in "
//            "Matrix-2" << endl;
//        cout << "Please update MACROs according to your array dimension in #define section"
//            << endl;
//
//        exit(EXIT_FAILURE);
//    }
//
//    mulMat(mat1, mat2);
//
//
//
//    
//    // Rectangular Matrices
//    // R1 = 3, C1 = 4 and R2 = 4, C2 = 3 (Update these values in MACROs)
//    int mat12[R12][C12] = {
//                {1, 1, 1, 1},
//                {2, 2, 2, 2},
//                {3, 3, 3, 3}
//    };
//
//    int mat22[R22][C22] = {
//                {1, 1, 1},
//                {2, 2, 2},
//                {3, 3, 3},
//                {4, 4, 4}
//    };
//    
//    mulMat2(mat12, mat22);
//
//    return 0;
//}
////
////
////
////int main() {
////	MultiplyWithOutAMP();
////	getchar();
////}
//
//
//#pragma region MyRegion
//
//
////void MultiplyWithAMP() {
////	int aMatrix[] = { 1, 4, 2, 5, 3, 6 };
////	int bMatrix[] = { 7, 8, 9, 10, 11, 12 };
////	int productMatrix[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
////
////	array_view<int, 2> a(3, 2, aMatrix);
////
////	array_view<int, 2> b(2, 3, bMatrix);
////
////	array_view<int, 2> product(3, 3, productMatrix);
////
////	parallel_for_each(product.extent,
////		[=](index<2> idx) restrict(amp) {
////			int row = idx[0];
////			int col = idx[1];
////			for (int inner = 0; inner < 2; inner++) {
////				product[idx] += a(row, inner) * b(inner, col);
////			}
////		});
////
////	product.synchronize();
////
////	for (int row = 0; row < 3; row++) {
////		for (int col = 0; col < 3; col++) {
////			//std::cout << productMatrix[row*3 + col] << "  ";
////			std::cout << product(row, col) << "  ";
////		}
////		std::cout << "\n";
////	}
////}
////
////void MultiplyWithTiling() {
////    // The tile size is 2.
////    static const int TS = 2;
////
////    // The raw data.
////    int aMatrix[] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8 };
////    int bMatrix[] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8 };
////    int productMatrix[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
////
////    // Create the array_view objects.
////    array_view<int, 2> a(4, 4, aMatrix);
////    array_view<int, 2> b(4, 4, bMatrix);
////    array_view<int, 2> product(4, 4, productMatrix);
////
////    // Call parallel_for_each by using 2x2 tiles.
////    parallel_for_each(product.extent.tile<TS, TS>(),
////        [=](tiled_index<TS, TS> t_idx) restrict(amp)
////        {
////            // Get the location of the thread relative to the tile (row, col)
////            // and the entire array_view (rowGlobal, colGlobal).
////            int row = t_idx.local[0];
////            int col = t_idx.local[1];
////            int rowGlobal = t_idx.global[0];
////            int colGlobal = t_idx.global[1];
////            int sum = 0;
////
////            // Given a 4x4 matrix and a 2x2 tile size, this loop executes twice for each thread.
////            // For the first tile and the first loop, it copies a into locA and e into locB.
////            // For the first tile and the second loop, it copies b into locA and g into locB.
////            for (int i = 0; i < 4; i += TS) {
////                tile_static int locA[TS][TS];
////                tile_static int locB[TS][TS];
////                locA[row][col] = a(rowGlobal, col + i);
////                locB[row][col] = b(row + i, colGlobal);
////                // The threads in the tile all wait here until locA and locB are filled.
////                t_idx.barrier.wait();
////
////                // Return the product for the thread. The sum is retained across
////                // both iterations of the loop, in effect adding the two products
////                // together, for example, a*e.
////                for (int k = 0; k < TS; k++) {
////                    sum += locA[row][k] * locB[k][col];
////                }
////
////                // All threads must wait until the sums are calculated. If any threads
////                // moved ahead, the values in locA and locB would change.
////                t_idx.barrier.wait();
////                // Now go on to the next iteration of the loop.
////            }
////
////            // After both iterations of the loop, copy the sum to the product variable by using the global location.
////            product[t_idx.global] = sum;
////        });
////
////    // Copy the contents of product back to the productMatrix variable.
////    product.synchronize();
////
////    for (int row = 0; row < 4; row++) {
////        for (int col = 0; col < 4; col++) {
////            // The results are available from both the product and productMatrix variables.
////            //std::cout << productMatrix[row*3 + col] << "  ";
////            std::cout << product(row, col) << "  ";
////        }
////        std::cout << "\n";
////    }
////}
//
////
////struct complex
////{
////    float real;
////    float imag;
////};
////
////void plusmat(const complex[][10], const complex[][10], complex[][10], int, int);
////void prodmat(const complex[][10], const complex[][10], complex[][10], int, int, int);
////
////void main()
////{
////    complex m1[10][10], m2[10][10], m3[10][10], k, s;
////
////    int r1, r2, c1, c2, i, j;
////
////    cout << "matrix1: rows=? , cols=?" << endl;
////    cout << "r1:";   cin >> r1;
////    cout << "c1:";   cin >> c1;
////
////    cout << "matrix1 is:" << endl;
////    for (i = 0; i < r1; ++i)
////        for (j = 0; j < c1; ++j)
////        {
////            cout << "real:";   cin >> m1[i][j].real;
////            cout << "imag:";   cin >> m1[i][j].imag;
////        }
////
////
////    cout << "matrix2: rows=? , cols=?" << endl;
////    cout << "r2:";   cin >> r2;
////    cout << "c2:";   cin >> c2;
////
////    cout << "matrix2 is:" << endl;
////    for (i = 0; i < r2; ++i)
////        for (j = 0; j < c2; ++j)
////        {
////            cout << "real:";   cin >> m2[i][j].real;
////            cout << "imag:";   cin >> m2[i][j].imag;
////        }
////
////
////    if (r1 == r2 && c1 == c2)
////    {
////        plusmat(m1, m2, m3, r1, r2);
////        cout << "matrix1+matrix2=" << endl;
////
////        for (i = 0; i < r1; ++i)
////        {
////            for (j = 0; j < c1; ++j)
////                cout << setw(15) << setprecision(10) << m3[i][j].real << "+i(" << m3[i][j].imag << ")";
////      
////            cout << endl;
////        }
////    }
////
////    else
////        cout << "Both of matrixes aren't match to adding together!" << endl;
////
////    if (c1 == r2)
////    {
////        prodmat(m1, m2, m3, r1, c1, c2);
////
////        cout << "matrix1 * matrix2=" << endl;
////        for (i = 0; i < r1; ++i)
////        {
////            for (j = 0; j < c2; ++j)
////                cout << setw(15) << setprecision(10) << m3[i][j].real << "+i(" << m3[i][j].imag << ")";
////            cout << endl;
////        }
////    }
////
////    else
////        cout << "Both of matrixes aren't match to multipling together!" << endl;
////}
////
////
////void plusmat(const complex a[][10], const complex b[][10], complex p[][10], int r1, int c2)
////{
////    int i, j;
////    for (i = 0; i < r1; ++i)
////        for (j = 0; j < c2; ++j)
////        {
////            p[i][j].real = a[i][j].real + b[i][j].real;
////            p[i][j].imag = a[i][j].imag + b[i][j].imag;
////        }
////}
////
////
////void prodmat(const complex a[][10], const complex b[][10], complex z[][10], int r1, int c1r2, int c2)
////{
////    int i, j;
////    for (i = 0; i < r1; ++i)
////        for (j = 0; j < c2; ++j)
////        {
////            z[i][j].real = z[i][j].imag = 0;
////            for (int n = 0; n < c1r2; ++n)
////            {
////                z[i][j].real += (a[i][n].real * b[n][j].real) - (a[i][n].imag * b[n][j].imag);
////                z[i][j].imag += (a[i][n].real * b[n][j].imag) + (a[i][n].imag * b[n][j].real);
////            }
////        }
////}
//
//// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
//// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
//
//// Советы по началу работы 
////   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
////   2. В окне Team Explorer можно подключиться к системе управления версиями.
////   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
////   4. В окне "Список ошибок" можно просматривать ошибки.
////   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
////   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
//
//#pragma endregion
//

#pragma endregion


