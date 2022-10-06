//2. Escreva um programa em C++ que tenha uma função que recebe um inteiro
// n e retorna a soma de todos os inteiros ímpares menores que n.
#include <cstdlib>
#include <iostream>
using namespace std;

int funcsoma(int n, int soma)
{
    
    for (size_t i = 0; i < n; i++)
    {
        soma = i+n;
        if (i % 2 != 0 )
        {
            cout << n <<" + "<< i <<" = "<< soma <<endl;
        }
        
    }
    return soma;
}

int main( )
{
   int n, soma;
   cout << "Digite um número: ";
   cin >> n;
   cout << "A soma de todos os números ímpares menores que: "<< n << " é:"<< endl;
   funcsoma(n, soma);

 
   return EXIT_SUCCESS;
}