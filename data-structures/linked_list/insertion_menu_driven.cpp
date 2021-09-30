#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define pb push_back
#define MOD 1000000007
#define MAX 1000000

class double_link
{

public:
    int data;
    double_link *next;
    double_link *prev;

    double_link(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// Insertion at the beginning
double_link *insert_begin(double_link *head, int x)
{
    double_link *new_node = new double_link(x);

    if (head == NULL)
    {
        return new_node;
    }
    new_node->next = head;
    new_node->prev = NULL;

    head->prev = new_node; // this is done when head is not null
    return new_node;
}
double_link *insert_elements_begin(double_link *head)
{
    int n;
    cout << "Enter the elements to be inserted:" << endl;
    cin >> n;
    cout << "Enter The elements\n";
    for (int i = 0; i < n; i++)
    {
        int enter_the_number;
        cin >> enter_the_number;

        head = insert_begin(head, enter_the_number);
    }
    return head;
}
// Insertion at the end
double_link *insert_end(double_link *head, int x)
{
    double_link *new_node = new double_link(x);
    double_link *curr = head;

    if (curr == NULL)
    {
        new_node->next = NULL;
        new_node->prev = NULL;
        return new_node;
    }
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;
    new_node->prev = curr;
    // new_node->next = NULL;   by default

    return head;
}
double_link *insert_element_end(double_link *head)
{

    int x;
    cout << "Enter the number of elements to be inserted :";
    cin >> x;
    cout << "Enter the elements :";
    for (int i = 0; i < x; i++)
    {

        int k;
        cin >> k;
        head = insert_end(head, k);
    }
    return head;
}

// Insertion after a node
double_link *insert_after(double_link *head, double_link *prev_node, int x)
{
    if (head == NULL)
        return NULL;
    double_link *new_node = new double_link(x);

    new_node->next = prev_node->next;

    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next != NULL)
    {
        new_node->next->prev = new_node;
    }
    return head;
}
double_link *insert_elements_after(double_link *head)
{
    head = insert_element_end(head);

    double_link *temp = head;
    int x;
    cout << "Enter the element to be inserted :";
    cin >> x;
    int pos;
    cout << "Enter the postion where the element needs to be inserted :";
    cin >> pos;
    int p = pos - 2;
    for (int i = 0; i < p && temp != NULL; i++)
    {
        temp = temp->next;
    }
    head = insert_after(head, temp, x);
    return head;
}

// Insertion before a node
double_link *insert_before(double_link *head, double_link *next_node, int x)
{
    if (head == NULL)
        return NULL;
    double_link *new_node = new double_link(x);

    new_node->prev = next_node->prev;
    next_node->prev->next = new_node;

    next_node->prev = new_node;
    new_node->next = next_node;

    return head;
}
double_link *insert_element_before(double_link *head)
{
    head = insert_element_end(head);
    double_link *temp = head;
    int x;
    cout << "Enter the element to be inserted :";
    cin >> x;
    int pos;
    cout << "Enter the postion where the element needs to be inserted :";
    cin >> pos;
    for (int i = 0; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }
    head = insert_before(head, temp, x);

    return head;
}

// display function
void display(double_link *head)
{
    if (head == NULL)
        return;
    else
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\UDIT KATYAL\\Desktop\\DSA\\input.txt", "r", stdin);
    freopen("C:\\Users\\UDIT KATYAL\\Desktop\\DSA\\output.txt", "w", stdout);
#endif

    double_link *head = NULL;

    int choice;
    char ans;
    do
    {
        cout << "\n\n------------ Insertion of elments in Doubly Linked List ------------\n\n";
        cout << "1. Insertion on the beginning\n";
        cout << "2. Insertion on the end\n";
        cout << "3. Insertion after a given node\n";
        cout << "4. Insertion before the given node\n";
        cout << "5. Quit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            head = insert_elements_begin(head);
            display(head);
            break;
        case 2:
            head = insert_element_end(head);
            display(head);
        case 3:
            head = insert_elements_after(head);
            display(head);
            break;
        case 4:
            head = insert_element_before(head);
            display(head);
            break;
        case 5:
            break;
        }

        cout << "\nDo you want to insert?\n";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}