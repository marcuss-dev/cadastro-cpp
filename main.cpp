#include <iostream>
#include <vector>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    vector<Pessoa> pessoas;
    int opcao;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Cadastrar pessoa\n";
        cout << "2 - Listar pessoas\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            Pessoa p;
            cout << "Nome: ";
            cin >> p.nome;
            cout << "Idade: ";
            cin >> p.idade;
            pessoas.push_back(p);
            cout << "Pessoa cadastrada com sucesso!\n";
        }
        else if (opcao == 2) {
            cout << "\n--- Lista de Pessoas ---\n";
            for (int i = 0; i < pessoas.size(); i++) {
                cout << "Nome: " << pessoas[i].nome 
                     << " | Idade: " << pessoas[i].idade << endl;
            }
        }

    } while (opcao != 0);

    cout << "Programa encerrado.\n";
    return 0;
}
