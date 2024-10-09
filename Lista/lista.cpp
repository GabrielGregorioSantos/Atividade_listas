
#include "lista.h"

// Função para converter uma palavra para letras minúsculas (não diferencia maiúsculas/minúsculas).
string paraMinusculas(const string& palavra) {
    string palavraMinuscula = palavra;
    transform(palavraMinuscula.begin(), palavraMinuscula.end(), palavraMinuscula.begin(), ::tolower);
    return palavraMinuscula;
}

// Função para inserir uma palavra de forma ordenada e sem duplicatas.
bool Lista::inserirPalavra(const string& palavra) {
    string palavraMinuscula = paraMinusculas(palavra);

    // Verifica se a palavra já existe na lista
    if (find(palavras.begin(), palavras.end(), palavraMinuscula) != palavras.end()) {
        cout << "A palavra '" << palavra << "' ja esta na lista e nao sera inserida novamente." << endl;
        return false;
    }

    // Insere a palavra de forma ordenada
    auto it = palavras.begin();
    while (it != palavras.end() && *it < palavraMinuscula) {
        ++it;
    }
    palavras.insert(it, palavraMinuscula);
    cout << "Palavra '" << palavra << "' inserida com sucesso!" << endl;
    return true;
}

// Função para exibir todas as palavras da lista
void Lista::exibirLista() const {
    cout << "Lista de palavras: ";
    for (const string& palavra : palavras) {
        cout << palavra << " ";
    }
    cout << endl;
}

// Função para remover uma palavra da lista
bool Lista::removerPalavra(const string& palavra) {
    string palavraMinuscula = paraMinusculas(palavra);

    auto it = find(palavras.begin(), palavras.end(), palavraMinuscula);
    if (it != palavras.end()) {
        palavras.erase(it);
        cout << "Palavra '" << palavra << "' removida com sucesso!" << endl;
        return true;
    } else {
        cout << "A palavra '" << palavra << "' nao foi encontrada na lista." << endl;
        return false;
    }
}
