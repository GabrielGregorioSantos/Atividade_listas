
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

class Lista {
private:
    list<string> palavras;  // usando a lista do C++ para armazenar as palavras.

public:
    // Fun��o para inserir uma palavra na lista de forma ordenada e sem repeti��o.
    bool inserirPalavra(const string& palavra);

    // Fun��o para exibir todas as palavras armazenadas.
    void exibirLista() const;

    // Fun��o para remover uma palavra da lista.
    bool removerPalavra(const string& palavra);
};

#endif // LISTA_H
