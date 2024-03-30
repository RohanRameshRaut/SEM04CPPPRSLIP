#include <iostream>
// #include <conio.h>
using namespace std;

class MyMatrix
{
   int m, n, i, j, mtx[100][100], tmtx[100][100], imtx[100][100], smtx[100][100];

public:
   void getData()
   {
      cout << "Enter the value of m: ";
      cin >> m;
      cout << "Enter the value of n: ";
      cin >> n;
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            cout << "Enter element " << i << "," << j << ": ";
            cin >> mtx[i][j];
         }
      }
   }
   void display()
   {
      cout << "The matrix" << endl;
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            cout << mtx[i][j] << "\t";
         }
         cout << "\n";
      }
   }
   void operator*()
   {
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            tmtx[j][i] = mtx[i][j];
         }
      }
   }
   void Tdisplay()
   {
      cout << "The matrix" << endl;
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            cout << tmtx[i][j] << "\t";
         }
         cout << "\n";
      }
   }
   void operator++()
   {
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            mtx[i][j]++;
         }
      }
   }
   void idisplay()
   {
      cout << "The matrix" << endl;
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            cout << mtx[i][j] << "\t";
         }
         cout << "\n";
      }
   }
   void getData2()
   {
      cout << "Enter the value of m: ";
      cin >> m;
      cout << "Enter the value of n: ";
      cin >> n;
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            cout << "Enter element " << i << "," << j << ": ";
            cin >> imtx[i][j];
         }
      }
   }
   void operator-()
   {
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            smtx[i][j] = mtx[i][j] - imtx[i][j];
         }
      }
   }
   void sdisplay();
};
void MyMatrix::sdisplay()
{
   cout << "The matrix" << endl;
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         cout << smtx[i][j] << "\t";
      }
      cout << "\n";
   }
}

int main()
{
   // clrscr();
   MyMatrix m1;
   m1.getData();
   m1.display();
   *m1;
   m1.Tdisplay();
   ++m1;
   m1.display();
   m1.getData2();
   -m1;
   m1.sdisplay();

   // getch();
   return 0;
}
