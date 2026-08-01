//Write a program to implement prims algorithm

#include <stdio.h>
#define INF 999

int main() {
    int a[10][10], n, i, j, min, u, v, visited[10]={0}, cost=0, e=1;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0) a[i][j]=INF;
        }

    visited[0]=1;

    while(e<n){
        min=INF;
        for(i=0;i<n;i++)
            if(visited[i])
                for(j=0;j<n;j++)
                    if(!visited[j] && a[i][j]<min){
                        min=a[i][j];
                        u=i; v=j;
                    }

        printf("%d-%d = %d\n",u,v,min);
        cost+=min;
        visited[v]=1;
        e++;
    }

    printf("Cost = %d",cost);
    return 0;
}