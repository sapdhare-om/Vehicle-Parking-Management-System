#include <iostream>
using namespace std;

// STACK (EXIT HISTORY)
class Stack
{
    int top;
    string arr[50];

public:
    Stack()
    {
        top = -1;
    }

    void push(string x)
    {
        if(top == 49)
        {
            cout << "Stack Full\n";
        }
        else
        {
            arr[++top] = x;
        }
    }

    void displayAll()
    {
        if(top == -1)
        {
            cout << "No Exit History\n";
        }
        else
        {
            cout << "Exit History: ";
            for(int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

// -------- QUEUE (ENTRY SYSTEM) --------
class Queue
{
    int front, rear;
    string arr[50];

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(string x)
    {
        if(rear == 49)
        {
            cout << "Queue Full\n";
            return;
        }

        if(front == -1)
            front = 0;

        arr[++rear] = x;
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Entry Queue: ";
        for(int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// -------- PARKING SYSTEM --------
class Parking
{
    string vehicle[3][5];
    Queue q;
    Stack s;

public:
    Parking()
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                vehicle[i][j] = "EMPTY";
            }
        }
    }

    // Display Parking Status
    void display()
    {
        cout << "\n----- Parking Status -----\n";

        for(int i = 0; i < 3; i++)
        {
            cout << "Floor " << i + 1 << ": ";

            for(int j = 0; j < 5; j++)
            {
                if(vehicle[i][j] == "EMPTY")
                    cout << "[Free] ";
                else
                    cout << "[Booked] ";
            }

            cout << endl;
        }
    }

    // Book Slot
    void book()
    {
        string num;
        int f, s1;

        cout << "Enter Vehicle Number: ";
        cin >> num;

        // Duplicate Check
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(vehicle[i][j] == num)
                {
                    cout << "Vehicle Already Parked\n";
                    return;
                }
            }
        }

        cout << "Enter Floor (1-3): ";
        cin >> f;

        cout << "Enter Slot (1-5): ";
        cin >> s1;

        if(f < 1 || f > 3 || s1 < 1 || s1 > 5)
        {
            cout << "Invalid Floor or Slot\n";
            return;
        }

        if(vehicle[f-1][s1-1] == "EMPTY")
        {
            vehicle[f-1][s1-1] = num;

            q.enqueue(num);

            cout << "Booked Successfully\n";

            int h;
            cout << "Enter Hours: ";
            cin >> h;

            cout << "Payment = " << h * 20 << " Rs\n";
        }
        else
        {
            cout << "Slot Already Booked\n";
        }
    }

    // Exit Vehicle
    void exitVehicle()
    {
        string num;

        cout << "Enter Vehicle Number: ";
        cin >> num;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(vehicle[i][j] == num)
                {
                    vehicle[i][j] = "EMPTY";

                    s.push(num);

                    cout << "Vehicle Exited Successfully\n";
                    return;
                }
            }
        }

        cout << "Vehicle Not Found\n";
    }

    // Search Vehicle
    void search()
    {
        string num;

        cout << "Enter Vehicle Number: ";
        cin >> num;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(vehicle[i][j] == num)
                {
                    cout << "Vehicle Found at Floor "
                         << i + 1
                         << " Slot "
                         << j + 1
                         << endl;
                    return;
                }
            }
        }

        cout << "Vehicle Not Found\n";
    }

    void showExitHistory()
    {
        s.displayAll();
    }

    void showQueue()
    {
        q.display();
    }
};

// -------- MAIN --------
int main()
{
    cout << "=====================================\n";
    cout << "     Parking Management System\n";
    cout << "=====================================\n";

    cout << "\nTeam Members:\n";
    cout << "1) Nakul Nitesh Lachure (202502070024)\n";
    cout << "2) Om Gajanan Sapdhare (202502070030)\n";

    cout << "\nLocation: Phoenix Mall Pune\n";
    cout << "=====================================\n";

    Parking p;
    int ch;

    do
    {
        cout << "\n1. Display Parking Status";
        cout << "\n2. Book Parking Slot";
        cout << "\n3. Exit Vehicle";
        cout << "\n4. Search Vehicle";
        cout << "\n5. Exit History";
        cout << "\n6. Entry Queue";
        cout << "\n7. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                p.display();
                break;

            case 2:
                p.book();
                break;

            case 3:
                p.exitVehicle();
                break;

            case 4:
                p.search();
                break;

            case 5:
                p.showExitHistory();
                break;

            case 6:
                p.showQueue();
                break;

            case 7:
                cout << "Program Terminated\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(ch != 7);

    return 0;
}
