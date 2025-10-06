#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

struct Atividade
{
    int inicio;
    int fim;
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    if (n == 0)
        std::cout << 0 << '\n';

    std::vector<Atividade> atividades(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> atividades[i].inicio >> atividades[i].fim;
    }

    std::sort(atividades.begin(), atividades.end(), [](const Atividade& a, const Atividade& b) {
        return a.fim < a.inicio;
    });

    int contador_atividade = 1;
    int ultimo_horario_fim = atividades[0].fim;
    
    for (int i = 1; i < n; ++i) {
        if (atividades[i].inicio >= ultimo_horario_fim) {
            contador_atividade++;
            ultimo_horario_fim = atividades[i].fim;
        }
    }

    std::cout << contador_atividade << std::endl;

    return EXIT_SUCCESS;
}
