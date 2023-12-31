#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> s;

void insert(){
    int a;
    cout<<"Enter no to inseert : ";
    cin>>a;
    s.push_back(a);
}

void getsize(){
    cout<<"\nSize of the vector is "<<s.size()<<endl;
}

void resize(){
    int size;
    cout<<"\nEnter the size to resize vector : ";
    cin>>size;
    s.resize(size,0);
}

void clear(){
    s.clear();
}

void displayRecord(int num){
    cout<<num<<" ";
}
void display(){
    for_each(s.begin(),s.end(),displayRecord);
    cout<<endl;
}

void deleteRecord(){
    if(s.empty()){
        cout<<"\nvector is empty \n";
        return;
    }
    cout<<"Enter no to delete : ";
    int a;
    cin>>a;
    vector<int>::iterator i=find(s.begin(),s.end(),a);
    if(i==s.end()) cout<<"\nNot found\n";
    else{
        s.erase(i);
        cout<<"\nRecords after deletion\n";
        display();
    }
}
void sort(){
    sort(s.begin(),s.end());
    cout<<"\nSorted Records\n";
    display();
}
void search(){
    int rec;
    cout<<"Enter no to search : ";
    cin>>rec;
    vector<int>::iterator i=find(s.begin(),s.end(),rec);
    if(i==s.end()) cout<<"\nNot found\n";
    else{
        cout<<"\nfound\n";
        displayRecord(*i);
    }
}

int main(){
    int choice;
    do{
        cout<<"\n1.Insert"
            <<"\n2.Display"
            <<"\n3.Search"
            <<"\n4.Sort"
            <<"\n5.Delete"
            <<"\n6.Get size"
            <<"\n7.Resize"
            <<"\n8.Clear"
            <<"\n9.Exit"
            <<"\nEnter choice : "
            <<endl;
            cin>>choice;
            switch (choice)
            {
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:
            search();
            break;
            case 4:
            sort();
            break;
            case 5:
            deleteRecord();
            break;
            case 6:
            getsize();
            break;
            case 7:
            resize();
            break;
            case 8:
            clear();
            break;
            default:
                break;
            }
    }while(choice!=9);
    return 0;
}