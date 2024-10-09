#include "lista.h"

int main() {
    cout <<"Nome do Aluno:Gabriel Gregorio Santos Marques \n";
    cout <<"Objetivo do Trabalho:Inserir palavras numa lista ordenada \n";


    Lista lista;
    int opcao;
    string palavra;

    do {
        cout << "\nMenu de Operacoes\n";
        cout << "1. Inserir palavra\n";
        cout << "2. Exibir palavras\n";
        cout << "3. Remover palavra\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cout << "Digite a palavra para inserir: ";
            cin >> palavra;
            lista.inserirPalavra(palavra);
            break;
        case 2:
            lista.exibirLista();
            break;
        case 3:
            cout << "Digite a palavra para remover: ";
            cin >> palavra;
            lista.removerPalavra(palavra);
            break;
        case 0:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 0);

    return 0;
}
