#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void Decomposition(vector <vector <double>> A, vector <vector <double>> &L,
vector <vector <double>> &U, int n)
{
	for (int j = 0; j < n; j++) {
		L[j][0] = A[j][0];
		U[0][j] = A[0][j] / L[0][0];
	}
	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = 0; k < i; k++) {
				U[i][j] += (L[i][k] * U[k][j]);
				L[j][i] += (L[j][k] * U[k][i]);
			}
			L[j][i] = A[j][i] - L[j][i];
			U[i][j] = (1 / L[i][i])*(A[i][j] - U[i][j]);

		}
	}

}
void print_matrix(vector <vector <double>> A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\t" << A[i][j] << "\t";
		}
		cout << endl;
	}
}
void print_matrixv(vector <double> A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << A[i] << "\t";
	}
	cout << endl;
}
void inverse(vector <vector <double>> A, vector <vector <double>> &B, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (i == j) B[i][j] = 1 / A[i][j];
			else {
				if (i < j) B[i][j] = 0;
				else
					for (int k = 0; k < i; k++) {
						B[i][j] += (((-1 / A[i][i])*B[k][j]) * A[i][k]);
					}
			}
		}
}
void inverse2(vector <vector <double>> A, vector <vector <double>> &B, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (i == j) B[i][j] = 1 / A[i][j];
			else {
				if (i > j) B[i][j] = 0;
				else
					for (int k = 0; k < j; k++) {
						B[i][j] += (((-1 / A[i][i])*B[i][k]) * A[k][j]);
					}
			}
		}
}
void monm(vector <vector <double>> A, vector <vector <double>> B,
	vector <vector <double>> &R, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				R[i][j] += A[i][k] * B[k][j];
}
void calc_monv(vector <vector <double>> A, vector <double> B,
	vector <double> &R, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
				R[i] += A[i][j] * B[j];
}
void vonm(vector <double> A, vector <vector <double>> B,
	vector <double> &R, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
				R[i] += A[j] * B[i][j];
}
void vmv(vector<double> b, vector <double> x, vector<double>&r,int n) {
	for (int i = 0; i < n; i++) {
		r[i] = b[i] - x[i];
	}
}
int main()
{
	int n;
	cin >> n;
	double n1;
	vector <vector <double>> A(n), L(n), U(n), R(n), Li(n), Ui(n), E(n);
	vector <double> B(n,0), Y(n,0), X(n,0), r(n,0),r1(n,0);
	for (size_t row = 0; row < n; ++row) {
		A[row].resize(n);
		L[row].resize(n);
		U[row].resize(n);
		R[row].resize(n);
		Li[row].resize(n);
		Ui[row].resize(n);
		E[row].resize(n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> n1;
			A[i][j] = n1;
			L[i][j] = 0;
			U[i][j] = 0;
			R[i][j] = 0;
			Ui[i][j] = 0;
			Li[i][j] = 0;
			E[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		B[i] = n1;
	}
	Decomposition(A, L, U, n);
	cout << "|----- input matrix -----|" << endl;
	print_matrix(A, n);
	cout << "|----- U matrix -----|" << endl;
	print_matrix(U, n);
	cout << "|----- L matrix -----|" << endl;
	print_matrix(L, n);
	monm(L, U, R, n);
	cout << "|----- L*U matrix -----|" << endl;
	print_matrix(R, n);
	inverse(L, Li, n);
	cout << "|----- inverse L matrix -----|" << endl;
	print_matrix(Li, n);
	inverse2(U, Ui, n);
	cout << "|----- inverse U matrix -----|" << endl;
	print_matrix(Ui, n);
	calc_monv(Li,B,Y,n);
	cout << "|----- L^(-1)*b -----|" << endl;
	print_matrixv(Y, n);
	calc_monv(Ui,Y, X, n);
	cout << "|----- solution -----|" << endl;
	print_matrixv(X, n);
	calc_monv(A, X, r, n);
	vmv(B, r, r1, n);
	cout << "|----- residual vector -----|" << endl;
	print_matrixv(r1, n);
	return 0;
}
