#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Matrix
{
    private:
        int row;
        int col;
        int **matrix;
    public:
        Matrix();
	Matrix (int, int);
        Matrix (int, int, int **);
        Matrix( const Matrix& );
        Matrix & operator=(Matrix &);
	void set_matrix_element ( int i, int j, int m );
        int get_row ();
        int get_col ()
        int get_matrix_element ( int i, int j )
        ~Matrix(void);
};
