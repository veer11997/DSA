#include<iostream>
#include<map>
#include<vector>


using namespace std;


class node
{
public:

 int data;
 node *left;
 node * right;


 node(int d)
 {

      data =d;
      left=right=NULL;
 }




};


void verticleorderprint(node * root ,int d,map<int,vector<int>> &m)//stl container pass by value
{

     // now we have to pass by reference

     if(root==NULL){
          return ;

     }


     //otherwise
     m[d].push_back(root->data);
     verticleorderprint(root->left,d-1,m);
     verticleorderprint(root->right,d+1,m);
     return ;


}



int main()
{

     node * root =new node(1);
     root->left =new node(2);
     root->right =new node(3);
     root->left->left =new node(4);
     root->left->right= new node(5);

     root->right->left =new node(6);
     root->right->right= new node(7);

     root->right->right->right =new node(9);
     root->left->right->right= new node(8);

     map<int,vector<int>> m;
     int d=0;
     verticleorderprint(root,d,m);

     //keys are already sorted

     for(auto p : m)
     {
      //    cout<<p.first<<"->";
          for(int x : p.second)
          {

          cout<<x<<",";
          }
          cout<<endl;
     }

}
