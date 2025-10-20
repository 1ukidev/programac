#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
    const int width = 80, height = 22;
    const float cubeSize = 20;
    const float dist = 100;
    const float A = 0.6, B = 0.8;

    char buffer[width * height];
    float zbuffer[width * height];

    for (int i = 0; i < width * height; i++) {
        buffer[i] = ' ';
        zbuffer[i] = 0;
    }

    for (int cubeX = -1; cubeX <= 1; cubeX += 2)
        for (int cubeY = -1; cubeY <= 1; cubeY += 2)
            for (int cubeZ = -1; cubeZ <= 1; cubeZ += 2) {
                float x = cubeX * cubeSize;
                float y = cubeY * cubeSize;
                float z = cubeZ * cubeSize;

                float x1 = cos(A) * x - sin(A) * z;
                float z1 = sin(A) * x + cos(A) * z;
                float y1 = cos(B) * y - sin(B) * z1;
                float z2 = sin(B) * y + cos(B) * z1 + dist;

                int xp = width / 2 + (int)(x1 * 40 / z2);
                int yp = height / 2 + (int)(y1 * 20 / z2);

                if (xp >= 0 && xp < width && yp >= 0 && yp < height) {
                    int idx = xp + yp * width;
                    if (z2 > zbuffer[idx]) {
                        zbuffer[idx] = z2;
                        buffer[idx] = '#';
                    }
                }
            }

    for (int i = 0; i < width * height; i++) {
        if (i % width == 0) std::cout << '\n';
        std::cout << buffer[i];
    }

    std::cout << '\n';
}

