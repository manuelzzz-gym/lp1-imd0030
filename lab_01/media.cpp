#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    float primeiro_valor, segundo_valor;
    bool repetir = true;

    while (repetir) {
        std::cout << "Entre com o primeiro valor: ";
        std::cin >> primeiro_valor;
        std::cout << "Entre com o segundo valor: ";
        std::cin >> segundo_valor;

        if (primeiro_valor <= segundo_valor) {
            repetir = false;
            break;
        }

        std::cout << "Erro! Entre com um primeiro valor menor ou igual ao segundo." << std::endl;
    }

    float porcentagem = (primeiro_valor / segundo_valor) * 100;
    std::cout << std::fixed << std::setprecision(2) << porcentagem  << "%" << std::endl;

    return 0;
}