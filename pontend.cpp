#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Classe para armazenar os dados de um endereço
class Endereco {
public:
    string rua;
    int numero;
    string cep;
    string estado;
    string cidade;
    string bairro;
    string complemento;

    // Método para exibir os dados
    void mostrarEndereco() {
        cout << "\nRua: " << rua << endl;
        cout << "Numero: " << numero << endl;
        cout << "CEP: " << cep << endl;
        cout << "Estado: " << estado << endl;
        cout << "Cidade: " << cidade << endl;
        cout << "Bairro: " << bairro << endl;
        cout << "Complemento: " << complemento << endl;
    }
};

int main() {
    vector<Endereco*> enderecos; // Lista para armazenar ponteiros para Endereco
    int quantidade;

    cout << "Quantos enderecos voce deseja registrar? ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        auto* e = new Endereco(); // Cria um novo objeto Endereco e um ponteiro para ele
        cout << "\nDigite os dados do endereco " << i + 1 << ":" << endl;
        cout << "Rua: ";
        cin.ignore(); // Ignorar o caractere de nova linha
        getline(cin, e->rua);
        cout << "Numero: ";
        cin >> e->numero;
        cin.ignore(); // Ignorar o caractere de nova linha
        cout << "CEP: ";
        getline(cin, e->cep);
        cout << "Estado: ";
        getline(cin, e->estado);
        cout << "Cidade: ";
        getline(cin, e->cidade);
        cout << "Bairro: ";
        getline(cin, e->bairro);
        cout << "Complemento: ";
        getline(cin, e->complemento);

        enderecos.push_back(e); // Adiciona o ponteiro do endereco à lista
    }

    // Mostrando os endereços registrados
    for (auto* endereco : enderecos) {
        endereco->mostrarEndereco();
    }

    // Liberando a memória alocada
    for (auto* endereco : enderecos) {
        delete endereco;
    }
    
    return 0;
}
