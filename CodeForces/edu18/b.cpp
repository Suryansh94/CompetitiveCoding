// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define null NULL
struct node 
{
	node(int dval)
	{
		prev=null;
		next=null;
		data=dval;
	}
	node * prev;
	node * next;
	int data;
};
node * head=null;
void insert(node * ptr,int val)
{
	if(ptr==null)
	{
		ptr=new node(val);
		head=ptr;
	}
	else
	{
		node * ptr = new node(val);
		node * temp = head;
		while(temp->next!=null and temp->next!=head  )
		{
			temp=temp->next;
		}
		temp->next=ptr;
		ptr->prev=temp;
		ptr->next=head;
		head->prev=ptr;
	}
}
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n,k;
	cin>>n>>k;
	int a[k];
	for(int i=0;i<k;i++)cin>>a[i];

	
	for(int i=1;i<=n;i++)
	{
		insert(head,i);
	}
	int sz = n;

	for(int i=0;i<k;i++)
	{

		int steps = a[i]%sz;
		int k = 0;
		node * temp = head,*prev=head;
		while(k<steps)
		{
			temp=temp->next;
			k++;
			// cout<<"here\n";
		}
		cout<<temp->data<<" ";
		prev=temp->prev;
		head=temp->next;
		prev->next=head;
		head->prev=prev;
		free(temp);
		sz--;
		// cout<<"hi\n";
	}
	return 0;
}