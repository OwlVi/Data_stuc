#include <stdio.h>

int isValid(int x, int y, int rows, int cols) {
    return (x >= 0 && x < rows && y >= 0 && y < cols);
}

int maze(int x, int y, int rows, int cols, int grid[rows][cols], int visited[rows][cols]) {
    if (!isValid(x, y, rows, cols) || visited[x][y] || grid[x][y] == 1) {
        return 0;
    }

    visited[x][y] = 1;

    if (x == rows - 1 && y == cols - 1) {
        return 1;
    }

    if (maze(x + 1, y, rows, cols, grid, visited) || maze(x, y + 1, rows, cols, grid, visited) || maze(x - 1, y, rows, cols, grid, visited) || maze(x, y - 1, rows, cols, grid, visited)) {
        return 1;
    }

    return 0;
}

int main() {
    int size;
    scanf("%d", &size);

    int grid[size][size];
    int visited[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &grid[i][j]);
            visited[i][j] = 0;
        }
    }

    if (maze(0, 0, size, size, grid, visited)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
