#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> tasks; // Here we store tasks as text
    int choice;

    while (true)
    {
        // 1. Display the menu to the user
        cout << "\n--- Task Management System ---" << endl;
        cout << "1. Add a new task" << endl;
        cout << "2. View all tasks" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose an option (1-3): ";
        cin >> choice;

        // 2. Execute action based on the choice
        if (choice == 1)
        {
            string newTask;
            cout << "Enter the task: ";
            cin.ignore(); // Clears the input buffer
            getline(cin, newTask); // Reads the whole line including spaces

            tasks.push_back(newTask); // Adds the task to the vector

            cout << "Task added successfully!" << endl;
        }
        else if (choice == 2)
        {
            cout << "\n--- Your Current Tasks ---" << endl;

            // Checked if the vector is empty
            if (tasks.empty())
            {
                cout << "There are no tasks currently available." << endl;
            }
            else
            {
                // This Loop goes through the vector and prints tasks line by line
                for (int i = 0; i < tasks.size(); i++)
                {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Thank you for using the program. Goodbye!" << endl;
            break; // Breaks the loop and closes the program
        }
        else
        {
            cout << "Invalid choice, please try again!" << endl;
        }
    }

    return 0;
}
