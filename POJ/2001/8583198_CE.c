#include<stdio.h>
#include<string.h>

const int MAX = 1010;

char result[MAX][22];
char s[MAX][22];

class TrieNode
{
public:
int value;
TrieNode *num[26];
TrieNode(void)
{
   value=-1;
   int i;
   for(i=0;i<26;i++)
    num[i] = NULL;
}
};

class Trie
{
public:
TrieNode *root;
Trie(void)
{
   root = new TrieNode;
}
void insert(char *str)
{
   TrieNode *p = root;
   int i,len = strlen(str);
   for(i=0;i<len;i++)
   {
    if(p->num[str[i]-'a'] == NULL)
    {
     p->num[str[i]-'a'] = new TrieNode;
     p = p->num[str[i]-'a'];
    }
    else
    {
     p = p->num[str[i]-'a'];
    }
    p->value++;
   }
}
void check(int ind)
{
   TrieNode *p = root;
   int i;
   for(i=0;s[ind][i];i++)
   {
    if(p->value == 0)
    {
     result[ind][i] = '\0';
     return;
    }
    p = p->num[s[ind][i]-'a'];
    result[ind][i] = s[ind][i];
   }
   result[ind][i] = '\0';
}
};

int main(void)
{
Trie *my = new Trie;
int n=0;
char ss[21];
while(scanf("%s",ss)!=EOF)
{
   strcpy(s[n++],ss);
   my->insert(ss);
}
int i;
for(i=0;i<n;i++)
{
   my->check(i);
   printf("%s %s\n",s[i],result[i]);
}
return 0;
}
