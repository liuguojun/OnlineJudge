#include <iostream>
#include <deque>

using namespace std;
int relation1[30][30];
int relation2[30][30];
int node1[30] = {0};
int node2[30] = {0};
deque <char> toplist;
int n,m;

int topsort(int size)
{
    toplist.clear();
    int i,j, status=0, zero=0, curr=-1;
   // for(i=0;i<26;i++)
  //  {
    //    cout<<node2[i]<<" ";
   // }
    //cout<<endl;
    for(i=0; i<26; i++)
        if(node2[i]>0)
            status++;
        else if(node2[i]==0)
        {
            zero++;
            if(curr==-1)
                curr = i;
        }
    //ÅÐ¶ÏÊÇ·ñÓÐ»·

    if(zero>1)
    {
           return -1;
    }
    else if(zero==0)
        return 1;


    while(status)
    {
       // cout<<"curr:"<<curr<<endl;
        node2[curr] = -1;
        toplist.push_back(char('A'+curr));

        int found=0,next=-1;
        for(j=0; j<26; j++)
            if(relation2[curr][j]==1)
            {
                node2[j]--;
                if(node2[j]==0)
                {
                    status--;
                    if(found==0)
                    {
                        found++;
                        next=j;
                    }
                    else return -1;
                }
            }
            curr = next;

        if(status && found==0)
            return 1;

    }

    if(status==0)
        toplist.push_back(char('A'+curr));
    if(toplist.size()==size)
        return 0;
    else return -1;

}
int main()
{
   // int n, m;

    while( cin >> n >> m )
    {
        if( n==0 && m==0)
            break;
        int i,j, errorcode=0;

        for( i=0; i<26; i++)
        {
            node1[i] = -1;
            for(j=0; j<26; j++)
                relation1[i][j] = 0;
        }

        char input[20];
        int k;
        for(k=0; k<m; k++)
        {
            cin >> input;
            if(node1[ input[0] - 'A' ]==-1)
                node1[ input[0] - 'A' ] = 0;
            if(node1[ input[2] - 'A' ]==-1)
                node1[ input[2] - 'A' ] = 0;

            if(relation1[input[0] - 'A'][input[2] - 'A'] !=1)
                node1[ input[2] - 'A' ] ++;


            relation1[input[0] - 'A'][input[2] - 'A'] = 1;
            for(i=0; i<26;i++)
            {
                if(relation1[i][input[0]-'A'] > 0)
                {
                    if(relation1[i][input[2]-'A']==0)
                        relation1[i][input[2]-'A'] = 2;
                    if(relation1[i][input[2]-'A'] * relation1[input[2]-'A'][i] > 0 )
                    {
                       errorcode = 1;
                       goto l1;
                    }
                }

                if(relation1[input[2]-'A'][i] > 0)
                {
                    if(relation1[input[0]-'A'][i] ==0)
                        relation1[input[0]-'A'][i] = 2;
                    if(relation1[input[0]-'A'][i]*relation1[i][input[0]-'A']>0)
                    {
                        errorcode = 1;
                        goto l1;
                    }
                }
            }


            for( i=0; i<26; i++)
            {
                    node2[i] = node1[i];

                    for(j=0; j<26; j++)
                        relation2[i][j] = relation1[i][j];
            }

            errorcode = topsort(n);
           // cout<<errorcode<<endl;

            if( errorcode==1 || errorcode==0 )
                break;

        }

l1:       for(j=k+1;j<m;j++)
       {
      //  cout<<j<<endl;
           cin>>input;
       }
        if(errorcode == 1)
            cout << "Inconsistency found after "<<k+1<<" relations."<<endl;
        else if(errorcode==0)
        {
            cout<<"Sorted sequence determined after "<<k+1<<" relations: ";
            while(!toplist.empty())
            {
                cout<<toplist.front();
                toplist.pop_front();
            }
            cout<<"."<<endl;
        }
        else if(errorcode==-1)
            cout<<"Sorted sequence cannot be determined."<<endl;

    }
    return 0;
}
