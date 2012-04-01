#include <stdio.h>
#include <stack>
using namespace std;
 
const int RANGE = 26;
 
int graph[RANGE][RANGE] = {0};
int inDegree[RANGE] = {0};
int list[RANGE] = {0};
 
int TOPOLOGICAL_SORT(int n)
{
    int i, j = 0, u;
    bool multiSolution = false;
    stack<int> stack;
    int in[RANGE];
    memcpy(in, inDegree, sizeof(in));
    memset(list, 0, sizeof(list));
    for (i = 0; i < n; i++)
    {
        if (inDegree[i]==0)
        {
            stack.push(i);
        }
    }
 
    while(!stack.empty())
    {
        if (stack.size() > 1)
        {
            multiSolution = true;
        }
        u = stack.top();
        stack.pop();
        list[j++] = u;
        for (i = 0; i < n; i++)
        {
            if (graph[u][i])
            {
                if (--in[i] == 0)
                {
                    stack.push(i);
                }
            }
        }
    }
    if (j != n)
        return 1; // 有环
    if (multiSolution)
        return 2;
    return 0;
}
 
int main(void)
{
    int i, result, k, n, m;
    char first = 0, second = 0;
    int determined = 0, inconsistency = 0;
    while(scanf("%d %d", &n, &m)!=EOF)
    {
        if (n == 0 && m == 0) break;
        memset(graph, 0, sizeof(graph));
        memset(inDegree, 0, sizeof(inDegree));
        determined = 0;
        inconsistency = 0;
        for (i = 1; i <= m; i++)
        {
            scanf("\n%c<%c", &first, &second);
            if (!inconsistency && !determined)
            {
                if (graph[second-'A'][first-'A'] == 1)
                {
                    // Inconsistency found
                    printf("Inconsistency found after %d relations.\n", i);
                    inconsistency = 1;
                    continue;
                }
                graph[first-'A'][second-'A'] = 1;
                inDegree[second-'A']++;
                result = TOPOLOGICAL_SORT(n);
                if (result == 0)
                {
                    printf("Sorted sequence determined after %d relations: ", i);
                    for (k = 0; k < n; k++)
                    {
                        printf("%c", list[k]+'A');
                    }
                    printf(".\n");
                    determined = 1;
                }
                else if (result == 1)
                {
                    // Inconsistency found
                    printf("Inconsistency found after %d relations.\n", i);
                    inconsistency = 1;
                }
            }
        }
        if (!determined && !inconsistency)
        {
            printf("Sorted sequence cannot be determined.\n");
        }
    }
    return 0;
}