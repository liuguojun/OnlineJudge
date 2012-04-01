
#include <iostream>
#include <stack>
#include <map>
//#include <utility>
#include <string>
using namespace std;

map<char, int> p;

char input[2000];
char output[3000];

void convert(char *input, char *output)
{
    stack<char> s;

    while( *input )
    {
        if(*input=='{')
        {
            input++;

            if(*input == '}')
            {
                *output = '_';
                output++;

                input++;

                *output = ' ';
                output++;
            }

            else
            {
                while(*input && *input!='}')
                {
                    *output = *input;
                    output++;
                    input++;
                }
                input++;
                *output=' ';
                output++;
            }
        }
        else if(*input=='(')
        {
            s.push(*input);
            input++;
        }
        else if(*input==')')
        {
            while(!s.empty() && s.top()!='(')
            {
                *output = s.top();
                s.pop();
                output++;

                *output=' ';
                output++;


            }
            if(s.top()=='(')
                s.pop();

            input++;
        }

        else
        {
            if( s.empty() || p[*input] > p[s.top()] )
                s.push(*input);
            else
            {

                while( (!s.empty()) && (s.top()!='(') && (p[*input] <= p[s.top()]))
                {
                    *output = s.top();
                    output++;
                    s.pop();

                    *output = ' ';
                    output++;
                }
                s.push(*input);
            }

            input++;
        }
    }

    while(!s.empty())
    {
        *output = s.top();
        output++;
        s.pop();

        *output = ' ';
        output++;
    }
    *output = 0;
}

string calculate( char*input)
{
    stack<string> s;
    int i;
    string underline = "_";

    char tmp[100];

    string str1,str2;

    while(*input)
    {
        if(*input==' ')
            input++;
        else if(*input == '_')
        {
            input++;
            s.push(string("_"));
        }
        else if(*input>='A' && *input<='Z')
        {
            i = 0;
            while(*input && *input!=' ' && *input>='A' && *input<='Z')
            {
                tmp[i] = *input;
                input++;
                i++;
            }
            tmp[i] = 0;

            s.push(string(tmp));

        }

        else if(*input=='+')
        {
            str2 = s.top();
            s.pop();
            if(str2 == underline)
                str2 = "";
            const char *temp = str2.c_str();

            str1= s.top();
            s.pop();
               if(str1 == underline)
                str1 = "";

        // + operation
        int i;
        for(i=0; temp[i]!=0; i++ )
        {
            string::size_type pos = str1.find(temp[i]);
            if(pos == string::npos)
                str1 += temp[i];
        }

        s.push(str1);


            input++;
        }
        else if(*input=='-')
        {
            str2 = s.top();
            s.pop();
               if(str2 == underline)
                str2 = "";
            const char *temp = str2.c_str();

            str1 = s.top();
            s.pop();
   if(str1 == underline)
                str1 = "";
            int i;
            for(i=0; temp[i]!=0; i++)
            {
                string::size_type pos = str1.find(temp[i]);
                if(pos != string::npos)
                {
                    str1.replace(pos, 1, "");
                }
            }
            s.push(str1);


            input++;
        }

        else if(*input=='*')
        {
            string t = "";

            str2 = s.top();
            s.pop();
               if(str2 == underline)
                str2 = "";
            const char *temp = str2.c_str();

            str1 = s.top();
            s.pop();
   if(str1 == underline)
                str1 = "";
            int i;
            for(i=0; temp[i]!=0; i++)
            {
                string::size_type pos = str1.find(temp[i]);
                if(pos!=string::npos)
                    t += temp[i];
            }

            s.push(t);

            input++;
        }

    }

    return s.top();
}
int main()
{
    p['+']=1;
    p['-']=1;
    p['*']=2;
    p['/']=2;


    while(cin >> input)
    {
        convert(input, output);
        cout<<"{"<<calculate(output)<<"}"<<endl;;

    }
    return 0;
}
