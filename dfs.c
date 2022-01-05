#include <stdio.h>
void dfs(int);
int g[10][10],visited[10],n,vertex[10];
void main()
{
int i,j;
printf("enter number of vertices:");
scanf("%d",&n);
printf("enter the val of vertex:");
for(i=0;i<n;i++)
scanf("%d",&vertex[i]);
printf("\n enter adjecency matrix of the graph:");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&g[i][j]);
for(i=0;i<n;i++)
visited[i]=0;
dfs(0);
}
void dfs(int i)
{
int j;
printf("%d",vertex[i]);
visited[i]=1; for(j=0;j<n;j++)
if(!visited[j]&&g[i][j]==1)
dfs(j);
}
