#include<stdlib.h>
#include<stdio.h>
int a [20][20],q[20]= {0},visited[20]= {0},n,i,j,f=0,r=-1;
void bfs(sv)
{
    for(i=0; i<n; i++)
    {
        if(a[sv][i]==1 && visited[i]==0)
            q[++r]=1;
        if(f<=r)
        {
            visited[q[f]]=1;
            bfs (q[f++]);
        }

    }
}
int main()
{
    int sv;
    printf("\nEnter the number of vertex: ");
    scanf("%d",&n);
    printf("\nEnter the graph data in matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the starting vertex: ");
    scanf("%d",&sv);
    bfs(sv);
    printf("\nthe node which is reachable are:\n");
    for(i=0;i<n;i++){
        if(visited[i]==1)
            printf("%d\t",i);

        else;

    }
    printf("\n");
        {
            printf("not reachable all node:\n");
        }

    return 0;
}
