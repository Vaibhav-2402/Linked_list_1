#include<iostream>
using namespace std;
//////////////////////////////////////

struct link
{
    int data;
    link* next;
};

class linklist
{
    private:
    link* first;
    public:
    linklist()
    { first = NULL;}
    void add_item(int d);
    void display();
};
/////////////////////////////////////////////////////

void linklist::add_item(int d)
{
    link* str = new link;
    str->data = d;
    str->next = first;
    first = str;
}
///////////////////////////////////

void linklist::display()
{
    link* current = first;
    while(current != NULL)
    {
        cout<<current->data<<endl;
        current = current->next;
    }
}
//////////////////////////////////////

int main()
{
    linklist li;
    li.add_item(34);
    li.add_item(45);
    li.display();
    return 0;
}