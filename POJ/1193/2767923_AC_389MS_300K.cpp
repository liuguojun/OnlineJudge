#include<iostream>
#include<queue>
using namespace std;
const int Max=1000000000;
int Memory_Length,first_endtime=Max,last_endtime=0,Count=0;
struct Process_list{
	int endtime;
	int len;
	int pos;
    Process_list *next;
};
struct Wait{
	int T;
	int M;
	int P;
};

Process_list *head=NULL;
queue<Wait>waitting_list;

void Time_Process()
{
	if(head==NULL)
	{
		first_endtime=Max;
		last_endtime=0;
		return;
	}
	else {
		Process_list *temp;
		temp=head;
		first_endtime=Max;
		last_endtime=0;
		while(temp!=NULL)
		{
			if(temp->endtime < first_endtime)
				
				first_endtime=temp->endtime;
			
			if(temp->endtime > last_endtime)
				
				last_endtime=temp->endtime;
			
			temp=temp->next;
		}
		
	}
}

void Delete_Node(int firsr_endtime)
{
	Process_list *temp1=head,*temp2;
	
	while(temp1!=NULL){
		
		temp2=temp1;
		temp1=temp1->next;
		
		if(temp1!=NULL&&temp1->endtime==first_endtime){
			
			temp2->next=temp1->next;
			delete temp1;
			temp1=temp2;
		}
	}
	
	if(head->endtime==first_endtime){
		
		temp2=head;
		head=head->next;
		delete temp2;
	}
}

bool Insert(int T,int M,int P)
{
	if(head==NULL)
	{
		head=new Process_list;
		head->endtime=T+P;
		head->pos=0;
		head->len=M;
		head->next=NULL;
		return true;
	}
	if(head->pos>=M)
	{
		Process_list *temp;
		temp=new Process_list;
		temp->next=head;
		head=temp;
		head->endtime=T+P;
		head->pos=0;
		head->len=M;		
		return true;
	}
	
	Process_list *temp1,*temp2;
	temp1=head;
	
	while(temp1->next!=NULL)
	{
		if(temp1->next->pos-(temp1->pos+temp1->len)>=M)	{
			
			temp2=new Process_list;
			temp2->next=temp1->next;
			temp1->next=temp2;
			temp2->endtime=T+P;
			temp2->len=M;
			temp2->pos=temp1->pos+temp1->len;
			return true;
		}
		temp1=temp1->next;
	}
	
	if(Memory_Length-(temp1->pos+temp1->len)>=M)
	{
		Process_list *temp3;
		temp3=new Process_list;
		temp1->next=temp3;
		temp3->next=NULL;
		temp3->endtime=T+P;
		temp3->len=M;
		temp3->pos=temp1->pos+temp1->len;
		return true;
	}
	return false;
}


int main()
{
	int T,M,P,j=0;
	cin>>Memory_Length;
	while(cin>>T>>M>>P)
	{
		if(T==0&&M==0&&P==0)break;
		while(T>=first_endtime)
		{
			Delete_Node(first_endtime);
			
			while(!waitting_list.empty())
			{
				Wait node;
				node=waitting_list.front();
				node.T=first_endtime;
				if(Insert(node.T,node.M,node.P))
					waitting_list.pop();
				else
					break;
			}
			Time_Process();
		}
		if(T<first_endtime)
		{			
			if(Insert(T,M,P))	Time_Process();

			else{
				
				Wait node;
				node.T=T;
				node.M=M;
				node.P=P;
				waitting_list.push(node);
				Count++;
			
			}
		}		
	}
	
	Delete_Node(first_endtime);
	while(!waitting_list.empty())
	{
		Wait node;
		node=waitting_list.front();
		node.T=first_endtime;
		if(Insert(node.T,node.M,node.P))
			waitting_list.pop();
		else 
		{			
			Time_Process();
			Delete_Node(first_endtime);
		}
	}
	
	Time_Process();
	cout<<last_endtime<<endl<<Count<<endl;
	return 0;
}		






