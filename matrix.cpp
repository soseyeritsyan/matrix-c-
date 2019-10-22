//Default constructor for Matrix
Matrix::Matrix()
{
    row = 3;
    col = 3;
    matrix = new int * [row];
    for ( int i = 0; i < row; ++i ) {
        matrix[i] = new int [col];
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = 0;
        }
    }
}
//This is the constructor where the parameters are row's count and column's count
Matrix::Matrix ( int r, int c )
{
    if(r > 0 && c > 0) {
        row = r;
        col = c;
    }
    else {
        row = 3;
        col = 3;
    }
    matrix = new int * [row];
    for ( int i = 0; i < row; ++i ) {
        matrix[i] = new int [col];
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = 0;
        }
    }
}

//This is a constructor where the parameters are row's count column's count and matrix with values
Matrix::Matrix (int r , int c, int ** p)
{
    row = r;
    col = c;
    matrix = p;
}
//copy constructor
Matrix::Matrix( const Matrix & a)
{
    row = a.row;
    col = a.col;
    matrix = new int* [row];
    for ( int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }
    for (int i = 0; i < a.row; i++ ) {
        for (int j = 0; j < a.col; j++) {
            matrix[i][j] = a.matrix[i][j];
        }
    }
}
//Function where we change row's count
Matrix::void set_row ( int r )
{
    row = r;
    matrix = new int* [row];
    for ( int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }
    for (int i = 0; i < a.row; i++ ) {
        for (int j = 0; j < a.col; j++) {
            matrix[i][j] = a.matrix[i][j];
        }
    }
}
//Function where we change column's count
Matrix::void set_col ( int c )
{
    col = c;
    matrix = new int* [row];
    for ( int i = 0; i < row; i++ ) {
        matrix[i] = new int[col];
    }
    for (int i = 0; i < a.row; i++ ) {
        for (int j = 0; j < a.col; j++) {
            matrix[i][j] = a.matrix[i][j];
        }
    }
}
// This function replaces the i,j element of matrix with m
Matrix::void set_matrix_element ( int i, int j, int m );
{
    matrix[i][j] = m;
}

Matrix::int get_row ()
{
    return row;
}

Matrix::int get_col ()
{
    return col;
}

Matrix::int get_matrix_element ( int i, int j )
{
    return matrix[i][j];
}

Matrix& Matrix::operator=( Matrix &a )
{
    col = a.col;
    row = a.row;
    for( int i = 0; i < row; i++ ) {
        for ( int j = 0; j < col; j++ ) {
            matrix[i][j] = a.matrix[i][j];
            }
        }
     return *this;
}
//Destructor
Matrix::~Matrix()
{
    for( int k = 0; k < row; ++k ) {
        delete [] matrix[k];
    }
    delete[]matrix ;
}
