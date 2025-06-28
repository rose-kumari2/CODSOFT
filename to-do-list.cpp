#include <iostream>
using namespace std;

int main (){
    cout << "Welcome to the TO DO LIST program" << endl;
    string tasks[5] = {""};
    int count_task = 0;
    int choice = 0;
    while (choice != 4){
        cout << "--> YOUR TO DO LIST :-" << endl;
        cout << "1. To Add New Task." << endl;
        cout << "2. To View Tasks." << endl;
        cout << "3. Remove the Tasks." << endl;
        cout << "4. Task Completed." << endl;
        cin >> choice;

        if(choice == 1){
            if(count_task >4){
                cout << "--TASK LIST IS FULL--"<< endl;
            }
            else{
                cout<<"Enter A New Task : ";
                cin >> tasks[count_task];
                count_task++;
            }
        }
        else if (choice == 2){
            cout << "Current tasks in the list :" << endl ;
            for(int i=0; i<count_task; i++){
                cout << "Task " << i << " : " << tasks[i] << endl;
            }
        }
        else if (choice == 3){
            int Remove_task;
            cout << "Enter a task to delete: ";
            cin >> Remove_task;
            if(Remove_task < 0 || Remove_task >4){
                cout << "You entered invalid task no." << endl;
            }
            for(int i=0; i<count_task;i++){
                tasks[i] = tasks[i+1];
            }
            count_task = count_task - 1;
        }
        else{
            cout << "Task Completed."<< endl;
        }
    }    
}