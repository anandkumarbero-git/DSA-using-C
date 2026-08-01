//Write a program to implement kruskal algorithm


#include <stdio.h>
#define MAX 10

int p[MAX];

int find(int x){
    while(p[x]) x=p[x];
    return x;
}

int main(){
    int a[MAX][MAX],n,i,j,min,u,v,cost=0,e=1;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    while(e<n){
        min=999;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(a[i][j] && a[i][j]<min){
                    min=a[i][j];
                    u=i; v=j;
                }

        i=find(u);
        j=find(v);

        if(i!=j){
            p[j]=i;
            printf("%d-%d = %d\n",u,v,min);
            cost+=min;
            e++;
        }

        a[u][v]=a[v][u]=999;
    }

    printf("Cost = %d",cost);
    return 0;
}