#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int max_value(int tab[]){
    int max=tab[0];
    int indexMax=0;
    for(int i=1;i<8;i++){
        if(tab[i]>max){
            max=tab[i];
            indexMax=i;
        }
    }
    return indexMax;
}

int main()
{

    // game loop
    while (1) {
        int heights[8];
        for (int i = 0; i < 8; i++) {
            // represents the height of one mountain.
            int mountain_h;
            scanf("%d", &mountain_h);
            heights[i]=mountain_h;
        }
        int indexToFire=max_value(heights);

        printf("%d\n",indexToFire); // The index of the mountain to fire on.
    }

    return 0;
}