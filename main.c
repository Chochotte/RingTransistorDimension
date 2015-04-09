#include <stdio.h>
#include <math.h>

#define N 5
#define L 10.0
#define W 50.0

int main() {
    int k;
    float w = 0, l, l_carre = 0, w_carre;

    printf("Le transistor en anneau de dimension %.2f/%.2f um peut se decomposer approximativement en :\n", W, L);
    printf("\t- 4 principaux transistors de dimensions w/l = %.2f/%.2f um\n \
                \t\t ou 1 unique de dimensions %.2f/%.2f um;", W/4, L, W, L);
    printf("\t- ainsi que des transistors equivalents aux 4 coins (decoupe %d fois) :\n", N);

    // On calcul le petit w d'un des coins du transistor en anneau
    w_carre = L / (2 * N);
    for (k=1; k<=N; k++) {
        l_carre = sqrt(pow(L,2)+ pow(((k-1)*L/N) + (L/(2*N)), 2));
        printf("\t\t-> 4 mini tr de dimensions w/l = %.2f/%.2f um \
                \n\t\t\t ou 1 de %.2f/%.2f um;\n", w_carre, l_carre, 4 * w_carre, l_carre);
    }

    return 0;
}
