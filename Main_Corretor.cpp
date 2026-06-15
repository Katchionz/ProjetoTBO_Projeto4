#include <iostream>
#include "Corretor.hpp"

using namespace std;

int main() {
    Corretor meuCorretor;
    
    cout << "Carregando dicionario (isso pode levar alguns segundos)..." << endl;
    // Utilize o mesmo words.txt / dicionario.txt do projeto anterior
    meuCorretor.carregarDicionario("Base de dados/words.txt"); 

    string palavraErrada = "sistemaz"; // Forçando um erro
    cout << "\nPalavra com erro: " << palavraErrada << endl;
    cout << "Buscando sugestoes...\n" << endl;
    

    vector<string> sugestoes = meuCorretor.sugerir(palavraErrada, 3);

    cout << "Voce quis dizer:" << endl;
    for (size_t i = 0; i < sugestoes.size(); i++) {
        cout << i + 1 << ". " << sugestoes[i] << endl;
    }

    return 0;
}
