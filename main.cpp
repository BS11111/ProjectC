#include <iomanip>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <Windows.h>
using namespace std;
int main(){
    SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
     int numRows;
     int numCols;
     cout << "Кількість строк ="<<endl;
     cin >> numRows ;
     cout << "Кількість стовбців ="<<endl;
     cin >> numCols;
     int str = numRows;
     int stl = numCols;
    int max, min ;
    int product[numRows][numCols] = { 0 };
    float l[str][stl] = {0.0};
    max=product[0][0];
    for (int row = 0; row < numRows; row++)
        for (int col = 0; col < numCols; col++)
        product[row][col] = 1 + rand() % 1000;
        cout << "Випадковий масив: " <<endl;
         for (int row = 0; row < numRows; ++row)
    {
        for (int col = 0; col < numCols; ++col)
            cout << product[row][col] << "\t";
 
        cout << '\n';
    }
    max=product[0][0];
   for (int row = 0; row < numRows; row++)
   {
      for (int col = 0; col < numCols; col++)
      {
         if (product[row][col]>max)
         {
            max=product[row][col];
           
         }
      }
   }

min=product[0][0];
   for (int row = 0; row < numRows; row++)
   {
      for (int col = 1; col < numCols; col++)
      {
         if (product[row][col]<min)
         {
           min=product[row][col];
           
         }
      }
   }
   cout << "Максимальне число масиву =" << max <<endl;
   cout<< "Мінімальне число масиву =" << min <<endl;
   cout << "Прорахований масив: " <<endl;
 for (int row = 0; row < numRows; row++){
    for (int col = 0; col < numCols; col++)
 {
 
    l[row][col] = ((2*product[row][col] + min)/max)+((2*product[row][col] + min)*0.1/max);
    cout << setprecision(3) 
    <<fixed
  << setw(7)  << l[row][col] << "\t";
}
        cout << '\n';
}
    return 0;
}
