#include <cstdlib>
#include <iostream>
using namespace std;

int fsoma(int n, int somat)
{
    int s;
    somat=0;
    for (size_t i = 0; i < n; i++)
    {
        s = i+n;
        cout << n <<" + "<< i <<" = "<< s <<endl;
        somat = i+somat;    
    }
    return somat;
}

int main( )
{
   int n, s, resul, somat;
   cout << "Digite um número: ";
   cin >> n;
   resul = fsoma(n, somat);
   cout << "A soma dos números menores é:"<< n << " é: "<<resul<< endl;

   return EXIT_SUCCESS;
}