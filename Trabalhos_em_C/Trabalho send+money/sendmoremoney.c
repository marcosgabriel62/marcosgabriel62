#include <stdio.h>

void solve_formula() {
    int S, E, N, D, M, O, R, Y;

    for (S = 0; S <= 9; S++) {
        for (E = 0; E <= 9; E++) {
            for (N = 0; N <= 9; N++) {
                for (D = 0; D <= 9; D++) {
                    for (M = 1; M <= 9; M++) {
                        for (O = 0; O <= 9; O++) {
                            for (R = 0; R <= 9; R++) {
                                for (Y = 0; Y <= 9; Y++) {
                                    int SEND = S * 1000 + E * 100 + N * 10 + D;
                                    int MORE = M * 1000 + O * 100 + R * 10 + E;
                                    int MONEY = M * 10000 + O * 1000 + N * 100 + E * 10 + Y;

                                    if (SEND + MORE == MONEY) {
                                        printf("S = %d\nE = %d\nN = %d\nD = %d\nM = %d\nO = %d\nR = %d\nY = %d\n", S, E, N, D, M, O, R, Y);
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("Não foi possível encontrar uma solução.\n");
}

int main() {
    solve_formula();

    return 0;
}
