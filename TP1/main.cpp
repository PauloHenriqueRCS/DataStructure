#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include "Lista.cpp"

using namespace std;

int main()
{

    Lista matriz; //primeiro = NULL


    ifstream ObjectReader("MatrizA.txt",ios_base::in);
    string conteiner;
    int linha=0,coluna=0;
    float valor;

    if (ObjectReader.is_open())
    {
        getline(ObjectReader, conteiner, ',');
        linha = atoi(conteiner.c_str());
        getline(ObjectReader, conteiner);
        coluna = atoi(conteiner.c_str());

    }
    else cout << "Erro na abertura de arquivo!!" << endl;

    matriz.inicializar(linha,coluna);

    if (ObjectReader.is_open())
    {
        for (int i=0; i<=5; i++)
        {
            getline(ObjectReader, conteiner, ',');
            linha = atoi(conteiner.c_str());

            getline(ObjectReader, conteiner, ',');
            coluna = atoi(conteiner.c_str());

            getline(ObjectReader, conteiner);
            valor = atof(conteiner.c_str());

            matriz.inserir(linha,coluna,valor);
        }
        ObjectReader.close();
    }


    //matriz.inicializar(4,4);
    //matriz.inserir(2,2,7);
    //matriz.inserir(2,3,8);
    matriz.imprimirBase();
    matriz.imprimirMatriz();
    /*
        int vetor[] = {77,88,34,2,8,4,6,0,7,9};
        for (int i=0; i< 10; i++)
        {
            numeros.inserirAoFinal(vetor[i]);
        }
        numeros.imprimir();
        */
    return 0;
}
