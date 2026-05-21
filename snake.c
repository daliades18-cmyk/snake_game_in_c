#include <stdio.h>
#include <stdlib.h>

int width = 20, height = 20;
int x, y, fruitX, fruitY, score;
int gameOver;

enum Direction {STOP = 0, LEFT, RIGHT, UP, DOWN};
enum Direction dir;

void setup() {
    gameOver = 0;
    dir = STOP;

    x = width / 2;
    y = height / 2;

    fruitX = rand() % width;
    fruitY = rand() % height;

    score = 0;
}

void draw() {
    system("clear"); // For Linux/Mac/OnlineGDB

    int i, j;

    for(i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    for(i = 0; i < height; i++) {
        for(j = 0; j < width; j++) {

            if(j == 0)
                printf("#");

            if(i == y && j == x)
                printf("O"); // Snake head

            else if(i == fruitY && j == fruitX)
                printf("F"); // Fruit

            else
                printf(" ");

            if(j == width - 1)
                printf("#");
        }
        printf("\n");
    }

    for(i = 0; i < width + 2; i++)
        printf("#");

    printf("\nScore = %d\n", score);

    printf("Controls:\n");
    printf("1 = LEFT\n");
    printf("2 = RIGHT\n");
    printf("3 = UP\n");
    printf("4 = DOWN\n");
    printf("0 = EXIT\n");
}

void input() {
    int choice;

    printf("\nEnter move: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            dir = LEFT;
            break;
        case 2:
            dir = RIGHT;
            break;
        case 3:
            dir = UP;
            break;
        case 4:
            dir = DOWN;
            break;
        case 0:
            gameOver = 1;
            break;
    }
}

void logic() {

    switch(dir) {
        case LEFT:
            x--;
            break;

        case RIGHT:
            x++;
            break;

        case UP:
            y--;
            break;

        case DOWN:
            y++;
            break;

        default:
            break;
    }

    // Wall collision
    if(x < 0 || x >= width || y < 0 || y >= height)
        gameOver = 1;

    // Fruit collision
    if(x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
    }
}

int main() {

    setup();

    while(!gameOver) {
        draw();
        input();
        logic();
    }

    printf("\nGame Over!\n");
    printf("Final Score = %d\n", score);

    return 0;
}