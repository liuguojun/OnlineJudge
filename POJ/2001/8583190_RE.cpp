#include <cstdio>
#include <cstring>

//using namespace std;

const int SIZE = 26;

struct TrieNode {

    int count;
    TrieNode *children[SIZE];
};

void TrieInsert( TrieNode *root, char *word )
{
    if( root == NULL )
    {
        return;

    }

    int len = strlen( word );

    TrieNode *current = root;

    char *pos = word;

    while( *pos )
    {
     current->count++;
        if( current->children[ *pos - 'a' ] == NULL )
        {
            TrieNode *tmp = new TrieNode();
            tmp->count = 0;

            for( int i=0; i < SIZE; i++)
                tmp->children[i] = NULL;

            current->children[ *pos - 'a' ] = tmp;

            current = current->children[ *pos - 'a' ];
            
        }

        else 
        {
           
            current = current->children[ *pos - 'a' ];
        }

        pos++;
    }
}

int TrieSearch( TrieNode *root, char *word )
{

    int depth = 0;
 
    TrieNode *current = root;

    char *pos = word;

    while( *pos )
    {
         
        if( (current->count == 1) || (current->children[ *pos -'a' ] == NULL ) )
        {
           
            return depth;
        }
        
        else 
        {
            current = current->children[ *pos -'a' ];
          //  printf("%d\n", current->count);
            depth++;
        }
        pos++;
    }

    return depth;
}

int main()
{
    char words[1010][22];
    char temp[25];
    int num = 0;

    TrieNode *root = new TrieNode();

    root->count = 1;
    for( int i=0; i < SIZE; i++)
        root->children[i] = NULL;

    while( scanf("%s", words+num) )
    {     
      
        TrieInsert( root, words[num] );
        num++;  
         // printf("%d:%s\n", num, words[num-1]);
    }

   // printf("Start search\n");
    for( int i = 0; i < num; i++)
    {

        int retValue = TrieSearch( root, words[i] );
        printf("%s ", words[i]);

        for(int j = 0; j< retValue; j++)
            printf("%c", words[i][j]);
        printf("\n");
    }
    return 0;
}


    



















