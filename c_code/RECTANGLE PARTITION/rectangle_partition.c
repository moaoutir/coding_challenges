#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int compare(int *x,int y,int k,int *i,int tab1[]){
    int cmp = 0;
    if (*x == y) {
        cmp++;
        *i = *i + 1;
        *x = tab1[*i]-tab1[k];
    }
    return cmp;
}

int find (int w,int h,int i,int j,int count_x,int tab1[],int tab2[]){
    int x,y,cmp=0,k;
    k=i-1;
    x = tab1[i]-tab1[i-1];
    y = tab2[j]-tab2[j-1];
    while  ( i<= count_x+1 && y>0) {
        cmp += compare(&x,y,k,&i,tab1);
        if (x > y) {
            j++;
            y += tab2[j] - tab2[j-1];
            cmp += compare(&x,y,k,&i,tab1);
        } else if (x < y) {
            i++;
            x += tab1[i] - tab1[i - 1];
            cmp += compare(&x,y,k,&i,tab1);
        }
    }
    return cmp;
}
int main()
{
    int i,j,x_axis[500],y_axis[500];
    int h,w;
    int count_x;
    int count_y;
    scanf("%d%d%d%d", &w, &h, &count_x, &count_y);
    x_axis[0]=0;
    for (i = 1; i <= count_x; i++) {
        scanf("%d", &x_axis[i]);
    }
    x_axis[count_x+1] = w;


    y_axis[0]=0;
     for (j = 1; j <= count_y; j++) {
        scanf("%d", &y_axis[j]);
    }
    y_axis[count_y+1] = h;
    
    int temp1=1,temp2=1,result=0;
    while (temp2<=count_y+1){
        i=temp1;
        j=temp2;
        result+= find(w,h,i,j,count_x,x_axis,y_axis);
        temp1++;
        if (temp1>count_x+1) {
             temp2++;
             temp1=1;
        }
    }
    printf("%d\n",result);


    return 0;
}