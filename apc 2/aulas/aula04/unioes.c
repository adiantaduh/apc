#include <stdio.h>

union RGBA_Pixel {
    int pixel;
    unsigned char rgba[4];
};

int main() {
    union RGBA_Pixel pixel1;
    pixel1.pixel = 0xAAFF00CC; // vermelho

    printf("Pixel: %X\n", pixel1.pixel);
    printf("R: %X\n", pixel1.rgba[0]);
    printf("G: %X\n", pixel1.rgba[1]);
    printf("B: %X\n", pixel1.rgba[2]);
    printf("A: %X\n", pixel1.rgba[3]);

    

    union RGBA_Pixel pixel1;
    union RGBA_Pixel *ponteiro_pixel = &pixel1;

    (*ponteiro_pixel).pixel = 0x00FF0000; // vermelho

    printf("Pixel: %X\\n", (*ponteiro_pixel).pixel);
    printf("R: %d\\n", (*ponteiro_pixel).rgba[0]);
    printf("G: %d\\n", (*ponteiro_pixel).rgba[1]);
    printf("B: %d\\n", (*ponteiro_pixel).rgba[2]);
    printf("A: %d\\n", (*ponteiro_pixel).rgba[3]);

    return 0;
}