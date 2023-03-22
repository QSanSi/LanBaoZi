#include <iostream>
using namespace std;

struct Node{
	int n;
	Node *next;
};

//该创建方式的头节点为空节点，数据节点从头节点的后一个开始，方便统一操作
Node *create(Node *head){
	Node *p,*real;
	int n;
	head=real=new Node;
	cout<<"num(0时结束)=";
	cin>>n;
	while(n!=0){
		p=new Node;
		p->n=n;
		real->next=p;
		real=p;
		cout<<"num(0时结束)=";
		cin>>n;
	}
	real->next=NULL;
	return head;
}

//打印
void print(Node *head){
	Node *p=head->next;
	while(p!=NULL){
		cout<<"num="<<p->n<<" ";
		p=p->next;
	}
	cout<<endl;
}

//删除
Node *del(Node *head,int n){
	Node *p=head,*temp;
	if(p->next==NULL){
		cout<<"It's NULL."<<endl;
		return head;
	}
	while(p->next!=NULL){
		if(p->next->n==n)
			break;
		p=p->next;
	}
	if(p->next==NULL){
		cout<<"Didn't find it."<<endl;
		return head;
	}
	else{
		temp=p->next;
		p->next=temp->next;
		delete temp;
		return head;
	}
}

//插入
Node *insert(Node *head,Node *node){
	Node *p=head,*temp;
	while(p->next!=NULL){
		if(p->next->n>node->n)
			break;
		p=p->next;
	}
	if(p->next==NULL){
		p->next=node;
		node->next=NULL;
	}
	else{
		temp=p->next;
		p->next=node;
		node->next=temp;
	}
	return head;
}

int main(){
	int n;
	Node *head,*node;
	head=new Node;
	node=new Node;
	head=create(head);
	print(head);
	cout<<"删除节点号:";
	cin>>n;
	head=del(head,n);
	print(head);
	cout<<"插入节点数据:";
	cin>>node->n;
	head=insert(head,node);
	print(head);
	return 0;
}