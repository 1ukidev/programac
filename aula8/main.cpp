#include <cstdlib>
#include <iostream>
#include <vector>

int main()
{
    int n;
    double x;

    std::cout << "Tamanho do vetor e valor para achar: ";
    std::cin >> n >> x;
    std::vector<double> v(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Digite o valor " << (i + 1) << ": ";
        std::cin >> v[i];
    }

    bool valor = false;
    for (int i = 0; i < n; ++i) {
        if (v[i] == x) {
            std::cout << "Valor encontrado na posição " << i << '\n';
            valor = true;
            break;
        }
    }
    
    if (!valor) {
        std::cout << "Valor não encontrado\n";
    }

    return EXIT_SUCCESS;
}
