#include <stdio.h>    
#define MAX_STEP 3000  
typedef struct {  
    int x;  
    int y;  
} Point;  
char maze[50][50];  
int N, M, Q;  
Point move(Point p, int step) {  
    while (step > 0) {  
        switch (maze[p.x][p.y]) {  
            case 'U':  
                p.x = (p.x == 1) ? N : p.x - 1;  
                break;  
            case 'D':  
                p.x = (p.x == N) ? 1 : p.x + 1;  
                break;  
            case 'L':  
                p.y = (p.y == 1) ? M : p.y - 1;  
                break;  
            case 'R':  
                p.y = (p.y == M) ? 1 : p.y + 1;  
                break;  
        }  
        step--;  
    }  
    return p;  
}  
int main() {  
    scanf("%d %d", &N, &M);  
    for (int i = 1; i <= N; i++) {  
        for (int j = 1; j <= M; j++) {  
            scanf(" %c", &maze[i][j]); 
        }  
    }  
    scanf("%d", &Q);  
    Point start;  
    int step;  
    for (int i = 0; i < Q; i++) {  
        scanf("%d %d %d", &start.x, &start.y, &step);  
        Point end = move(start, step);  
        printf("%d %d\n", end.x, end.y);  
    }  
    return 0;  
}
