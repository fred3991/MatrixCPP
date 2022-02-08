#include <iostream>
#include <vector>
#include <string>

using namespace std;
using matrix = vector<vector<double>>;

void
print_matrix(string name, matrix A)
{
	unsigned int i, j;
	const auto nr = A.size();					// Number of rows in A.
	const auto nc = A[0].size();				// Number of columns in A.

	cout << "Matrix " << name << endl;
	for (i = 0; i < nr; ++i) {
		for (j = 0; j < nc; ++j) {
			cout << '\t' << name << '[' << i << ']' << '[' << j << ']'
				<< " = " << A[i][j];
		};
		cout << endl;
	}
}

matrix
multiply(matrix A, matrix B)
{
	matrix C;
	unsigned int i, j, k;

	if ((A.size() == 0) || (B.size() == 0) || (A[0].size() != B.size())) {
		printf("Cannot multiply matricies of dimensions %luX%lu and %luX%lu\n",
			A.size(), A[0].size(), B.size(), B[0].size());
	}

	const auto nr = A.size();					// Number of rows in C.
	const auto nc = B[0].size();				// Number of columns in C.
	const auto np = A[0].size();				// Number of pairs to sum.

	// Preallocate vectors of C.
	for (i = 0; i < nr; ++i) {
		C.push_back({});						// Empty vectors.
	}

	for (i = 0; i < nr; ++i) {
		for (j = 0; j < nc; ++j) {
			C[i].push_back(0.0);				// Add 0 element.
			for (k = 0; k < np; ++k) {
				C[i][j] += A[i][k] * B[k][j];	// Calculate element.
			}
		}
	}

	return C;
}

int
main()
{
	matrix A{ {1.0, 2.0 } };
	matrix B{ {3.0, 2.0, 1.0}, {3.0, 2.0, 1.0} };
	matrix C{ {3.0}, {2.0}, {1.0} };

	print_matrix("A", A);
	print_matrix("B", B);

	auto D = multiply(A, B);

	print_matrix("D", D);

	auto E = multiply(D, C);

	print_matrix("E", E);

	return 0;
}
