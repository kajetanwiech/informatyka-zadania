#include <iostream>
 
using namespace std;
 
int main()
{
   int n = 10;
   int i, j, suma, macierz[n][n];
 
   cout << "Wpisywanie do tablicy liczby 1-9 na przekątnej, a 0 poza nią." << endl;
   cout << endl;

for (i = 0; i < n; i++) // wpisywanie do tablicy dwuwymiarowej
   {
      for (j = 0; j < n; j++)
      {
         if (i == j)
            macierz[i][j] = i;
         else
            macierz[i][j] = 0;
      }
   }
 
   for (i = 0; i < n; i++)  // wyświetlenie zawartości tablicy dwuwymiarowej
   {
      for (j = 0; j < n; j++)
      {
         cout << macierz[i][j] << " ";
      }
      cout << endl;
   }
 
   // obliczanie sumy liczb znajdujących się na przekątnej
   suma = 0;
   cout << endl;
 
   for (i = 0; i < n; i++)
   {
      suma += macierz[i][i];
   }
 
   cout << "Suma elementów na przekątnej wynosi " << suma << "." << endl;
 
    return 0;
}
