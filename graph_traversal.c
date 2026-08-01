// Wap of graph traversal depth first search and breadth first search

//depth first search(DFS)
#include <stdio.h>

int a[10][10], v[10], n;

void dfs(int i){
    int j;
    printf("%d ", i);
    v[i]=1;
    for(j=0;j<n;j++)
        if(a[i][j] && !v[j])
            dfs(j);
}

int main(){
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    dfs(0);
    return 0;
}

//breadth first search(BFS)
#include <stdio.h>

int a[10][10], v[10], q[10], n;

int main(){
    int i,j,f=0,r=0,x;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    q[r++]=0;
    v[0]=1;

    while(f<r){
        x=q[f++];
        printf("%d ",x);
        for(j=0;j<n;j++)
            if(a[x][j] && !v[j]){
                v[j]=1;
                q[r++]=j;
            }
    }
    return 0;
}