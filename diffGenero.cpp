#include <iostream>

int main(void) {
    char sigla;
    std::cout << "Digite a sigla: ";
    std::cin >> sigla;
    (sigla == 'm' || sigla == 'M') ? std::cout << "Masculino" : (sigla == 'f' || sigla == 'F') ? std::cout << "Feminino" : std::cout << "Inválido";
}