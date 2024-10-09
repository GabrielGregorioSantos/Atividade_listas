
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
    // Função para inserir uma palavra na lista de forma ordenada e sem repetição.
    bool inserirPalavra(const string& palavra);

    // Função para exibir todas as palavras armazenadas.
    void exibirLista() const;

    // Função para remover uma palavra da lista.
    bool removerPalavra(const string& palavra);
};

#endif // LISTA_H
