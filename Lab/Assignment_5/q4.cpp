#include<bits/stdc++.h>
using namespace std;


//  Not Workking
class Matrix;

class Vector
{
    int v[4];
public:
    void setVector(int vec[4])
    {
        for(int i=0;i<4;i++)
            v[i]=vec[i];
    }
    friend Vector operator *(Matrix &,Vector &);
    
    operator float()// Not Working
    {
        float *ft;
        for(int i=0;i<4;i++)
            ft[i]=float(v[i]);
        return *ft;
    }
    friend void operator<<(ostream&,Vector&);

    // operator Matrix()
    // {
    //     Vector a.v[4];
    //     for(int i=0;i<n;i++)
    //     {
    //         a.v[i]=v[i];
    //     }
    //     Vector b.v[4]={0,0,0,0},c.v[4]={0,0,0,0},d.v[4]={0,0,0,0};

    //     return Matrix(a,b,c,d);
    // }

};

class Matrix
{
    Vector m[4];
public:
    void setMat(int[][4]);
    friend Vector operator *(Matrix&, Vector&);
    // friend void operator<<(ostream&,Matrix&);

};
Vector operator *(Matrix& mat, Vector& vec)
{
    Vector res;
    for(int i=0;i<4;i++)
    {
        res.v[i]=0;
        for(int j=0;j<4;j++)
            res.v[i]+=mat.m[i].v[j]*vec.v[j];
    }


return res;
}

void Matrix::setMat(int mat[][4])
{
   for(int i=0;i<4;i++)
   m[i].setVector(mat[i]);
}

void operator<<(ostream& out,Vector &c)
{
    for(int i=0;i<4;i++)
        out<<c.v[i]<<" ";
return;
}
// void operator<<(ostream& out,Matrix &c)
// {
//     for(int i=0;i<4;i++)
//         for(int j=0;j<4;j++)
//             out<<c.v[i][j]<<" ";
//         out<<endl;
// return;
// }


int main()
{

    Matrix mat1;
    Vector vec1,vec2;
    int v[4]={1,1,1,1}, m[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
//input array v and matrix m
    vec1.setVector(v);
    mat1.setMat(m);

    cout << "Result vector" <<endl;
    vec2 = mat1 * vec1;
    cout<<vec2;
   
    float ft=vec2;
    cout<<vec2;
   
    // Matrix mat=vec2;
    // cout<<mat;
return 0;
}
