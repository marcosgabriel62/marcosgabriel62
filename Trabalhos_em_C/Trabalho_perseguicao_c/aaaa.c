#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROWS 10
#define COLS 10

void print_board(char board[ROWS][COLS]) {
	int i=0;
	int j=0;
    printf("\n");
    printf("   ");
    for (i = 0; i < COLS; i++) {
        printf("%d ", i);
    }
    printf("\n");
    printf("  ");
    for (i = 0; i < COLS; i++) {
        printf("--");
    }
    printf("\n");
    for (i = 0; i < ROWS; i++) {
        printf("%d| ", i);
        for (j = 0; j < COLS; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void initialize_board(char board[ROWS][COLS]) {
	int i=0;
	int j=0;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            board[i][j] = '.';
        }
    }
}

void place_player(char board[ROWS][COLS], int player_row, int player_col) {
    board[player_row][player_col] = 'P';
}

void place_npc(char board[ROWS][COLS], int npc_row, int npc_col) {
    board[npc_row][npc_col] = 'N';
}

bool is_valid_move(char board[ROWS][COLS], int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        return false;
    }
    if (board[row][col] == '#') {
        return false;
    }
    return true;
}

void move_player(char board[ROWS][COLS], int *player_row, int *player_col, char direction) {
    int new_row = *player_row;
    int new_col = *player_col;
    switch (direction) {
        case 'w':
            new_row--;
            break;
        case 's':
            new_row++;
            break;
        case 'a':
            new_col--;
            break;
        case 'd':
            new_col++;
            break;
        default:
            break;
    }
    if (is_valid_move(board, new_row, new_col)) {
        board[*player_row][*player_col] = '.';
        *player_row = new_row;
        *player_col = new_col;
        place_player(board, *player_row, *player_col);
    }
}

void move_npc(char board[ROWS][COLS], int *npc_row, int *npc_col, int player_row, int player_col) {
    if (*npc_row == player_row && *npc_col == player_col) {
        return;
    }
    if (*npc_row == player_row) {
        if (*npc_col < player_col) {
            int new_col = *npc_col + 1;
            if (is_valid_move(board, *npc_row, new_col)) {
                board[*npc_row][*npc_col] = '.';
                *npc_col = new_col;
                place_npc(board, *npc_row, *npc_col);
            }
        } else {
            int new_col = *npc_col - 1;
            if (is_valid_move(board, *npc_row, new_col)) {
                board[*npc_row][*npc_col] = '.';
                *npc_col = new_col;
                place_npc(board, *npc_row, *
