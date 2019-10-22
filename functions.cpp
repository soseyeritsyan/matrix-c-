// This function is generate random matrix and saves the result in file
void Generate_matrix ( int n , int m , string s )
{
    srand(time(NULL));
    ofstream output(s, ios::app);
    int **mat = new int *[n];
    for( int i = 0; i < n; i++ ) {
        mat[i] = new int [m];
    }
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                mat[i][j] = rand() % 20;
                output << mat[i][j] << " ";
            }
            output << endl;
        }
        output << endl;   
    }
//this function reads the information from file and saves in matrix
void read_matrix ( Matrix & mat, string s )
{
    int n = mat.get_row();
    int m = mat.get_col();

    ifstream q;
    int x;
    q.open(s);
    if ( !q.is_open() ) {
        cout << "I can't open this file :'(" << endl;
    }
    else {
        for (int i = 0; i < n ; ++i) {
            for (int j = 0; j < m ; ++j) {
                q >> x;
                mat.set_matrix_element (i, j, x );
            }
        }
    }
}
//This function writes matrix in file
void write_matrix ( Matrix & m, string s )
{
    ofstream p;
    p.open(s, ofstream::app);
    for( int i = 0; i < m.get_row(); ++i ) {
        for( int j = 0; j < m.get_col(); j++ ) {
                p << m.get_matrix_element (i, j)<<" ";
            }
        p << endl;
    }
}
//This function prints matrix
void print_martrix( Matrix & a )
{
    for ( int i = 0; i < a.get_row(); i++ ) {
        for ( int j=0; j < a.get_col(); j++ ) {
            cout << a.get_matrix_element (i, j) << " ";
        }
    cout << endl;
    }
}
// This function counts sum of matrixes a and b and the result saves in t1 matrix
void sum_matrix( Matrix & a , Matrix & b , Matrix & t1 )
{
    int r1 = a.get_row();
    int r2 = b.get_row();
    int c1 = a.get_col();
    int c2 = b.get_col();
    int m = 0;
    if ( r1 == r2 && c1 == c2 ){

        for ( int i = 0; i < r1; i++ ) {
            for ( int j = 0; j < c1; j++ ) {
                m = a.get_matrix_element (i, j) + b.get_matrix_element (i, j);
                t1.set_matrix_element (i, j, m); 
            }
        }    
    }
}
// This function counts multiplication of matrixes a and b and the result saves in t2 matrix
void mult_matrix( Matrix & a , Matrix & b , Matrix & t2 )
{
    int r1 = a.get_row();
    int c1 = a.get_col();
    int r2 = b.get_row();
    int c2 = b.get_col();
    int x = 0;
    if ( c1 == r2 ) {
        for( int i = 0; i < r1; i++ ) {
            for ( int j = 0; j < c2; ++j ) {
                int s = 0;
                for ( int k = 0; k < c1; ++k ) {
                    s += a.get_matrix_element (i, j) * b.get_matrix_element(i, j);
                }
                t2.set_matrix_element( i, j, s );
            }
        }

    }
    else {
        cout << "Size of matrixes are wrong" << endl;
    }
}