#include "matrix.h"
#include "functions.h"
using namespace std;
int main()
{
	int m, n, k ;
	cout << "input m,n,k where m,n are sizes of matrixes A and B, and n,k are sizes of matrixes C and D" << endl;
	cout << "input m" << endl;
	cin >> m ;
	cout << "input n" << endl;
	cin >> n ;
	cout << "input k" <<endl;
	cin >> k ;

	Generate_matrix ( m , n , "a.txt" );
	Generate_matrix ( m , n , "b.txt" );
	Generate_matrix ( n , k , "c.txt" );
	Generate_matrix ( n , k , "d.txt" );

	Matrix A( m , n );
	Matrix B( m , n );
	Matrix C( n , k );
	Matrix D( n , k );

	Matrix t1( m , n );
	Matrix t2( n , k );

	Matrix res( n , k );


	read_matrix ( A, "a.txt" );
	read_matrix ( B, "b.txt" );
	read_matrix ( C, "c.txt" );
	read_matrix ( D, "d.txt" );


	sum_matrix ( A , B , t1 );
	sum_matrix ( C , D , t2 );
	mult_matrix ( t1 , t2 , res );
	write_matrix ( res , "result.txt");

	return 0;
}