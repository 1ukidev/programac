#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>

int main()
{
    constexpr int LARGURA = 40;
    constexpr int ALTURA = 20;
    constexpr float RAIO = 8.0;

    constexpr float CENTRO_X = LARGURA / 2.0;
    constexpr float CENTRO_Y = ALTURA / 2.0;

    std::ofstream img("img.ppm");
    img << "P3\n" << LARGURA << " " << ALTURA << "\n255\n";
    
    for (int y = 0; y < ALTURA; y++) {
        for (int x = 0; x < LARGURA; x++) {
            float dx = x - CENTRO_X;
            float dy = y - CENTRO_Y;
            float distancia = std::sqrt((dx * dx) + (dy * dy));

            bool bordaQuadrado = 
                (std::abs(dx) >= RAIO - 0.5 && std::abs(dx) <= RAIO + 0.5 && std::abs(dy) <= RAIO + 0.5)
                || (std::abs(dy) >= RAIO - 0.5 && std::abs(dy) <= RAIO + 0.5 && std::abs(dx) <= RAIO + 0.5);
            bool bordaCirculo = std::abs(distancia - RAIO) < 0.5;

            if (bordaQuadrado) {
                std::cout << "#";
                img << "255 0 0 ";
            } else if (bordaCirculo) {
                std::cout << '-';
                img << "0 255 0 ";
            } else {
                std::cout << ' ';
                img << "0 0 0 ";
            }
        }

        std::cout << '\n';
        img << '\n';
    }

    img.close();

    return EXIT_SUCCESS;
}

