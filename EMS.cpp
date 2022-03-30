/*
                        *******************************************************
                        *              EMPLOY MANAGEMENT SYSTEM               *
                        *******************************************************
                                           SUBMITTED BY

Name....................Muhammad Usman Bin Farid
Roll NO.................2021-CS-142
Section.................C

                        *******************************************************
                        *                  LET'S CODE BEGINS                  *
                        *******************************************************
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
// prototypes of functions
void head();        // HEADER FILE
void clearscreen(); // TO CLEAR SCREEN
string loginMenu();
string adInterface();                                // MAIN MENU OF ADMIN
string empInterface();                               // MAIN MENU FOR EMPLOY
void addEmploy();                                    // TO ADD EMPLOY
void addUser(string user, string pass, string role); // TO ADD USER
void releasePay();                                   // TO RELEASE PAY OF EMPLOY
void empReward();                                    // TO GIVE REWARD OF EMPLOY
void empAttendance();                                // TO MAINTAIN ATTENDANCE
void empDeductions();                                // TO DEDUCT AMOUNT OF ABSENCE
void empRemove();                                    // TO REMOVE EMPLOY
void displayEmploy();                                // TO DISPLAY EMPLOYEES
void empTasks();                                     // TO ASSIGHN TASKS
void empChanges();                                   // CHANGES DONE BY EMPLOY IN PASSWORD
void empCompletedTasks();                            // TO DISPLAY COMPLETED TASK AFTER EMPLOY ENTERED VALUE
void changeEmpPass();                                // TO CHANGE EMPLOY PASSWORD
void empPromotion();                                 // TO GIVE PROMOTIONS
void empPerformance();                               // TO GIVE REMARKS
void changePass();                                   // TO CHANGE PASSWORD BY EMPLOY
void viewSalary();                                   // TO VIEW SALARY
void viewReward();                                   // TO VIEW REWARD
void viewAttendance();                               // TO VIEW ATTENDANCE
void viewDeduct();                                   // TO VIEW DEDUCTIONS
void viewTask();                                     // TO DISPLAY TASKS GIVEN BY ADMIN
void enterCompTask();                                // TO ENTER NO OF COMPLETED TASKS
void viewStatus();                                   // TO VIEW STATUS BY EMPLOY
void viewBalance();                                  // TO VIEW BALZNCE

// end of prototypes
// initializing arrays
const int MAX_RECORDS = 20;
string usernameA[MAX_RECORDS];
string passwordsA[MAX_RECORDS];
string initialPassA[MAX_RECORDS];
string rolesA[MAX_RECORDS];
string emp_nameA[MAX_RECORDS];
string task_1A[MAX_RECORDS];
string task_2A[MAX_RECORDS];
string task_3A[MAX_RECORDS];
string task_4A[MAX_RECORDS];
float emp_payA[MAX_RECORDS];
float emp_rewardA[MAX_RECORDS];
float emp_attendanceA[MAX_RECORDS];
float emp_absenceA[MAX_RECORDS];
float emp_deductA[MAX_RECORDS];
int emp_rankA[MAX_RECORDS];
int emp_perA[MAX_RECORDS];
int task1_timeA[MAX_RECORDS];
int task2_timeA[MAX_RECORDS];
int task3_timeA[MAX_RECORDS];
int task4_timeA[MAX_RECORDS];
int emp_comp_taskA[MAX_RECORDS];
bool payA[MAX_RECORDS];

// end of arrays
// initializing scalar variables
int userCount = 0;
int emp_count = 0;
int n = 0;
string loginusername = " ";
int a = 0;

// end of scalar variables

main()
{
    addUser("admin", "123", "ADMIN");
    string i = " ", j = " ";
    string user = " ";
    string pass = " ";
    string role = " ";
    while (true) // STARTING FIRST WHILE LOOP
    {
        head();          // ADDING HEADER
        i = loginMenu(); // SAVING VALUE OF FUNCTION IN A string
        if (i == "ADMIN")
        {
            while (true)
            {
                clearscreen();
                head();
                j = adInterface();
                clearscreen();
                head();
                if (j == "1") // STARTING MOST NESTED IF
                {
                    addEmploy();
                }                  // END OF MOST NESTED IF
                else if (j == "2") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Add User" << endl;
                    cout << "-----------------------------------------" << endl;
                    cout << "Enter username of User : ";
                    cin >> user;
                    cout << "Enter password of User : ";
                    cin >> pass;
                    cout << "Enter role of User : ";
                    cin >> role;
                    addUser(user, pass, role);
                }                  // END MOST NESTED ELSE IF
                else if (j == "3") // STARTING MOST NESTED ELSE IF
                {
                    releasePay();
                }                  // END MOST NESTED ELSE IF
                else if (j == "4") // STARTING MOST NESTED ELSE IF
                {
                    empReward();
                }                  // END MOST NESTED ELSE IF
                else if (j == "5") // STARTING MOST NESTED ELSE IF
                {
                    empAttendance();
                }                  // END MOST NESTED ELSE IF
                else if (j == "6") // STARTING MOST NESTED ELSE IF
                {
                    empDeductions();
                }                  // END MOST NESTED ELSE IF
                else if (j == "7") // STARTING MOST NESTED ELSE IF
                {
                    empRemove();
                }
                else if (j == "8") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Employ List" << endl;
                    cout << "-----------------------------------------" << endl;
                    cout << "Srno\t"
                         << "Name\t"
                         << "Rank" << endl;
                    displayEmploy();
                }                  // END MOST NESTED ELSE IF
                else if (j == "9") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Assighn Tasks / Duties" << endl;
                    cout << "-----------------------------------------" << endl;
                    empTasks();
                }                   // END MOST NESTED ELSE IF
                else if (j == "10") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Changes by Employ." << endl;
                    cout << "----------------------------" << endl;
                    empChanges();
                }                   // END MOST NESTED ELSE IF
                else if (j == "11") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Employ Performance." << endl;
                    cout << "----------------------------" << endl;
                    empCompletedTasks();
                }                   // END MOST NESTED ELSE IF
                else if (j == "12") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Change Password of employ." << endl;
                    cout << "----------------------------" << endl;
                    changeEmpPass();
                }                   // END MOST NESTED ELSE IF
                else if (j == "13") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Give Promotion." << endl;
                    cout << "----------------------------" << endl;
                    empPromotion();
                } // END MOST NESTED ELSE IF
                else if (j == "14")
                {
                    break;
                }
                else // STARTING MOST NESTED ELSE
                {
                    cout << "Enter valid value.";
                }               // END MOST NESTED ELSE
            }                   // end of nested while
        }                       // END if
        else if (i == "EMPLOY") // START OF ELSE IF
        {
            while (true) // START OF NESTED WHILE
            {
                clearscreen();
                head();
                j = empInterface();
                clearscreen();
                head();
                if (j == "1") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > Change Password" << endl;
                    cout << "----------------------------------" << endl;
                    changePass();
                }                  // END MOST NESTED IF
                else if (j == "2") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > View salary" << endl;
                    cout << "----------------------------------" << endl;
                    viewSalary();
                }                  // END MOST NESTED ELSE IF
                else if (j == "3") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > View Grant / Reward or Bonus." << endl;
                    cout << "--------------------------------------------" << endl;
                    viewReward();
                }                  // END MOST NESTED ELSE IF
                else if (j == "4") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > View Attendance." << endl;
                    cout << "--------------------------------" << endl;
                    viewAttendance();
                }                  // END MOST NESTED ELSE IF
                else if (j == "5") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main Menu > View Deductions." << endl;
                    cout << "--------------------------------" << endl;
                    viewDeduct();
                }                  // END MOST NESTED ELSE IF
                else if (j == "6") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main menu > View assighned Tasks / Duties." << endl;
                    cout << "----------------------------------------------" << endl;
                    cout << "No. task\t\ttime" << endl;
                    viewTask();
                }                  // END MOST NESTED ELSE IF
                else if (j == "7") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main menu > Completed Tasks / Duties." << endl;
                    cout << "-----------------------------------------" << endl;
                    enterCompTask();
                }                  // END MOST NESTED ELSE IF
                else if (j == "8") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main menu > View your Balance." << endl;
                    cout << "-----------------------------------------" << endl;
                    viewBalance();
                }                  // END MOST NESTED ELSE IF
                else if (j == "9") // STARTING MOST NESTED ELSE IF
                {
                    cout << "Main menu > See your Status." << endl;
                    cout << "-----------------------------------------" << endl;
                    viewStatus();
                }                   // END MOST NESTED ELSE IF
                else if (j == "10") // STARTING MOST NESTED ELSE IF
                {
                    break;
                }    // END MOST NESTED ELSE IF
                else // STARTING MOST NESTED ELSE
                {
                    cout << "Enter valid value.";
                } // END MOST NESTED ELSE
            }     // END OF NESTED WHILE
        }         // END OF ELSE IF
        else
        {
            cout << "Enter correct user name or password." << endl;
            cout << "Press any key to continue : ";
            getch();
            system("cls");
        }
    } // END while
}
void head() // HEADER FILE
{
    cout << "*******************************************************" << endl;
    cout << "*              EMPLOY MANAGEMENT SYSTEM               *" << endl;
    cout << "*******************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
void clearscreen() // TO CLEAR SCREEN
{
    cout << "Enter any key to continue : ";
    getch();
    system("cls");
}
string loginMenu()
{ //________Get user credentials and check whether user is present in
    string tempRoll = " ";
    string tempName = " ";
    cout << "Enter user name : ";
    cin >> tempName;
    cout << "Enter Password : ";
    cin >> tempRoll;
    for (int x = 0; x < MAX_RECORDS; x++)
    {
        if (usernameA[x] == tempName && passwordsA[x] == tempRoll)
        {
            loginusername = tempName;
            return rolesA[x];
        }
    }
    loginusername = " ";
    string temp = "EXIT";
    return temp;
}
string adInterface() // ADMIN MAIN MENU
{
    string admin_employ = " ";
    cout << "Main Menu." << endl;
    cout << "--------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1.  Add Employ." << endl;
    cout << "2.  Add User." << endl;
    cout << "3.  Release Pay." << endl;
    cout << "4.  Grant / Reward or Bonus." << endl;
    cout << "5.  Attendance." << endl;
    cout << "6.  Deductions." << endl;
    cout << "7.  Remove Employ" << endl;
    cout << "8.  Employ List" << endl;
    cout << "9.  Assighn Tasks / Duties" << endl;
    cout << "10. Changes by Employ." << endl;
    cout << "11. Employ Performance." << endl;
    cout << "12. Change Password of employ." << endl;
    cout << "13. Give promotion." << endl;
    cout << "14. LogOut." << endl;
    cout << "Select one option : ";
    cin >> admin_employ;
    return admin_employ;
}
string empInterface() // EMPLOY MAIN MENU
{
    string admin_employ = " ";
    cout << "Main Menu." << endl;
    cout << "--------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1.  Change password." << endl;
    cout << "2.  View salary." << endl;
    cout << "3.  View Grant / Reward or Bonus." << endl;
    cout << "4.  View Attendance." << endl;
    cout << "5.  View Deductions." << endl;
    cout << "6.  View assighned Tasks / Duties." << endl;
    cout << "7.  Completed Tasks / Duties." << endl;
    cout << "8.  View your Balance." << endl;
    cout << "9.  View your full status." << endl;
    cout << "10. LogOut." << endl;
    cout << "Select one option : ";
    cin >> admin_employ;
    return admin_employ;
}
void addEmploy()
{
    if (emp_count < MAX_RECORDS)
    {
        cout << "Main Menu > Add Employ." << endl;
        cout << "-----------------------------" << endl;
        cout << "Enter Employ Name : ";
        cin >> emp_nameA[emp_count];
        cout << "Enter Employ rank : ";
        cin >> emp_rankA[emp_count];
        emp_count++;
    }
    else
    {
        cout << "No more space to add employ." << endl;
    }
}
void addUser(string user, string pass, string role)
{
    if (userCount < MAX_RECORDS)
    {
        usernameA[userCount] = user;
        passwordsA[userCount] = pass;
        rolesA[userCount] = role;
        userCount++;
    }
    else
    {
        cout << "No more space to add user." << endl;
    }
}
void releasePay()
{
    string username = " ";
    cout << "Main Menu > Release Pay" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Enter username of employ : ";
    cin >> username;
    for (int y = 0; y < emp_count; y++)
    {
        payA[y] = false;
        if (username == emp_nameA[y])
        {
            cout << "Enter pay of Employ : ";
            cin >> emp_payA[y];
            payA[y] = true;
        }
    }
}
void empReward()
{
    string username = " ";
    cout << "Main Menu > Grant / Reward or Bonus." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Enter username of employ : ";
    cin >> username;
    for (int y = 0; y < emp_count; y++)
    {
        if (username == emp_nameA[y])
        {
            cout << "Enter Reward of Employ 1 : ";
            cin >> emp_rewardA[y];
        }
    }
}
void empAttendance()
{
    string username = " ";
    cout << "Main Menu > Attendance" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Enter username of employ : ";
    cin >> username;
    for (int y = 0; y < emp_count; y++)
    {
        if (username == emp_nameA[y])
        {
            cout << "Enter how many days out 0f 30 employ 1 present : ";
            cin >> emp_attendanceA[y];
            emp_absenceA[y] = 30 - emp_attendanceA[y];
            cout << "employ is absent " << emp_absenceA[y] << " day(s)." << endl;
        }
    }
}
void empDeductions()
{
    string username = " ";
    cout << "Main Menu > Deductions" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Enter username of employ : ";
    cin >> username;
    for (int y = 0; y < emp_count; y++)
    {
        emp_deductA[y] = emp_absenceA[y] * 100;
        if (username == emp_nameA[y])
        {
            cout << "employ is absent " << emp_absenceA[y] << " day(s)." << endl;
            cout << "Employ deductions : " << emp_deductA[y] << endl;
        }
    }
}
void empRemove()
{
    string username = " ";
    char i = ' ';
    cout << "Main Menu > Remove Employ." << endl;
    cout << "----------------------------" << endl;
    cout << "Enter username of employ : ";
    cin >> username;
    cout << "Do you wanna remove employ(y or n) : ";
    cin >> i;

    if (i == 'y') // STARTING IF
    {
        for (int y = 0; y < emp_count; y++)
        {
            if (username == emp_nameA[y])
            {
                for (int x = 0; x < emp_count - 1; x++)
                {
                    emp_nameA[x] = emp_nameA[x + 1];
                    emp_payA[x] = emp_payA[x + 1];
                    emp_rewardA[x] = emp_rewardA[x + 1];
                    emp_rankA[x] = emp_rankA[x + 1];
                    emp_attendanceA[x] = emp_attendanceA[x + 1];
                    emp_deductA[x] = emp_deductA[x + 1];
                    emp_absenceA[x] = emp_absenceA[x + 1];
                }
                emp_count = emp_count - 1;
                cout << "Employ removed." << endl;
                break;
            }
        }
        for (int y = 0; y < userCount; y++)
        {
            if (username == usernameA[y])
            {
                for (int x = 0; x < userCount - 1; x++)
                {
                    passwordsA[x] = passwordsA[x + 1];
                    initialPassA[x] = initialPassA[x + 1];
                    rolesA[x] = rolesA[x + 1];
                }
            }
        }
    }
}
void displayEmploy()
{
    int temp = 0;
    string temp1;
    float temp3;
    for (int x = 0; x < emp_count; x++)
    {
        for (int y = 0; y < emp_count - 1; y++)
        {
            if(emp_rankA[y] < emp_rankA[y + 1])
            {
                temp = emp_rankA[y];
                emp_rankA[y] = emp_rankA[y + 1];
                emp_rankA[y + 1] = temp;

                temp1 = emp_nameA[y];
                emp_nameA[y] = emp_nameA[y + 1];
                emp_nameA[y + 1] = temp1;

                temp1 = task_1A[y];
                task_1A[y] = task_1A[y + 1];
                task_1A[y + 1] = temp1;

                temp1 = task_2A[y];
                task_2A[y] = task_2A[y + 1];
                task_2A[y + 1] = temp1;

                temp1 = task_3A[y];
                task_3A[y] = task_3A[y + 1];
                task_3A[y + 1] = temp1;

                temp1 = task_4A[y];
                task_4A[y] = task_4A[y + 1];
                task_4A[y + 1] = temp1;

                temp3 = emp_payA[y];
                emp_payA[y] = emp_payA[y + 1];
                emp_payA[y + 1] = temp3;

                temp3 = emp_rewardA[y];
                emp_rewardA[y] = emp_rewardA[y + 1];
                emp_rewardA[y + 1] = temp3;

                temp3 = emp_attendanceA[y];
                emp_attendanceA[y] = emp_attendanceA[y + 1];
                emp_attendanceA[y + 1] = temp3;

                temp3 = emp_absenceA[y];
                emp_absenceA[y] = emp_absenceA[y + 1];
                emp_absenceA[y + 1] = temp3;

                temp3 = emp_deductA[y];
                emp_deductA[y] = emp_deductA[y + 1];
                emp_deductA[y + 1] = temp3;

                temp = task1_timeA[y];
                task1_timeA[y] = task1_timeA[y + 1];
                task1_timeA[y + 1] = temp;

                temp = task2_timeA[y];
                task2_timeA[y] = task2_timeA[y + 1];
                task2_timeA[y + 1] = temp;

                temp = task3_timeA[y];
                task3_timeA[y] = task3_timeA[y + 1];
                task3_timeA[y + 1] = temp;

                temp = task4_timeA[y];
                task4_timeA[y] = task4_timeA[y + 1];
                task4_timeA[y + 1] = temp;

                temp = emp_comp_taskA[y];
                emp_comp_taskA[y] = emp_comp_taskA[y + 1];
                emp_comp_taskA[y + 1] = temp;
            }
        }
    }
    for (int x = 0; x < emp_count; x++)
    {
        cout << x + 1 << ".  \t" << emp_nameA[x] << "\t" << emp_rankA[x] << endl;
    }
}
void empTasks()
{
    string task_1, task_2, task_3, task_4;
    int task1_time, task2_time, task3_time, task4_time;
    string username = " ";
    cout << "Enter username of employ : ";
    cin >> username;
    cout << "Enter task 1 : ";
    cin >> task_1;
    cout << "Enter Task 1 time : ";
    cin >> task1_time;
    cout << "Enter task 2 : ";
    cin >> task_2;
    cout << "Enter Task 2 time : ";
    cin >> task2_time;
    cout << "Enter task 3 : ";
    cin >> task_3;
    cout << "Enter Task 3 time : ";
    cin >> task3_time;
    cout << "Enter task 4 : ";
    cin >> task_4;
    cout << "Enter Task 4 time : ";
    cin >> task4_time;
    for (int y = 0; y < emp_count; y++)
    {
        if (username == emp_nameA[y])
        {
            task_1A[y] = task_1;
            task_2A[y] = task_2;
            task_3A[y] = task_3;
            task_4A[y] = task_4;
            task1_timeA[y] = task1_time;
            task2_timeA[y] = task2_time;
            task3_timeA[y] = task3_time;
            task4_timeA[y] = task4_time;
        }
    }
}
void empChanges()
{
    string username = " ";
    int c = 0;
    for (int x = 0; x < userCount; x++)
    {
        initialPassA[x] = passwordsA[x];
    }
    cout << "Enter username of required employ : ";
    cin >> username;
    for (int x = 0; x < userCount; x++)
    {
        if (usernameA[x] == username && initialPassA[x] != passwordsA[x])
        {
            cout << "Employ changed his password to : " << passwordsA[x] << endl;
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "No changes by employ." << endl;
    }
}
void empCompletedTasks()
{
    string username = " ";
    cout << "Enter user name of employ : ";
    cin >> username;
    cout << "No of task completed by employ : ";
    for (int x = 0; x < emp_count; x++)
    {
        if (emp_nameA[x] == username)
        {

            if (emp_comp_taskA[x] != 0)
            {
                cout << emp_comp_taskA[x] << endl;
            }
            else
            {
                cout << "Nil" << endl;
            }
            break;
        }
    }
}
void changeEmpPass()
{
    string username = " ";
    char x = ' ';
    cout << "Enter user name of employ : ";
    cin >> username;
    cout << "Do you wanna change password of employ (y or n) : ";
    cin >> x;
    for (int i = 0; i < userCount; i++)
    {
        if (x == 'y' && usernameA[i] == username && rolesA[i] == "EMPLOY")
        {
            cout << "Enter new employ password : ";
            cin >> passwordsA[i];
            initialPassA[i] == passwordsA[i];
            cout << "Password updated!" << endl;
            break;
        }
    }
}
void empPromotion()
{
    string username;
    cout << "Enter user name : ";
    cin >> username;
    for (int i = 0; i < emp_count; i++)
    {
        if (emp_nameA[i] == username)
        {
            cout << "Enter new employ rank : ";
            cin >> emp_rankA[i];
            break;
        }
    }
}
void changePass()
{
    string previous_pass = " ";

    cout << "Enter Previous Password : ";
    cin >> previous_pass;
    for (int z = 0; z <= userCount; z++) // STARTING MOST NESTED LOOP
    {
        if (previous_pass == passwordsA[z] && usernameA[z] == loginusername) // STARTING MOST MOST NESTED ELSE IF
        {
            cout << "Enter new password : ";
            cin >> passwordsA[z];
            cout << "Password updated." << endl;
            break;
        }    // END MOST MOST NESTED ELSE IF
        else // STARTING MOST MOST NESTED ELSE
        {
            cout << "Again." << endl;
        } // END MOST MOST NESTED ELSE
    }
}
void viewSalary()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x] && payA[x] == true)
        {
            cout << "Your salary status : " << emp_payA[x] << endl;
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}
void viewReward()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x])
        {
            cout << "Your Grant / Reward or bonus : " << emp_rewardA[x] << endl;
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}
void viewAttendance()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x])
        {
            cout << "Your attendance : " << emp_attendanceA[x] << endl;
            cout << "Your absence out of 30 : " << emp_absenceA[x] << endl;
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}
void viewDeduct()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x])
        {
            cout << "Your deduction in salary : " << emp_deductA[x] << endl;
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}
void viewTask()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x])
        {
            cout << "1. " << task_1A[x] << "\t\t" << task1_timeA[x] << endl;
            cout << "2. " << task_2A[x] << "\t\t" << task2_timeA[x] << endl;
            cout << "3. " << task_3A[x] << "\t\t" << task3_timeA[x] << endl;
            cout << "4. " << task_4A[x] << "\t\t" << task4_timeA[x] << endl;
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}
void enterCompTask()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x])
        {
            cout << "Enter no of completed tasks : ";
            cin >> emp_comp_taskA[x];
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}
void viewBalance()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x])
        {
            cout << "Your Salary : " << emp_payA[x] << endl;
            cout << "Your bonus : " << emp_rewardA[x] << endl;
            cout << "your deductions : " << emp_deductA[x] << endl;
            float balance = emp_payA[x] + emp_rewardA[x] - emp_deductA[x];
            cout << "Your balance : " << balance << endl;
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}
void viewStatus()
{
    a = 0;
    for (int x = 0; x < emp_count; x++)
    {
        if (loginusername == emp_nameA[x])
        {
            cout << "Your Salary : " << emp_payA[x] << endl;
            cout << "Your rank : " << emp_rankA[x] << endl;
            cout << "Your bonus : " << emp_rewardA[x] << endl;
            cout << "your deductions : " << emp_deductA[x] << endl;
            float balance = emp_payA[x] + emp_rewardA[x] - emp_deductA[x];
            cout << "Your balance : " << balance << endl;
            a++;
        }
    }
    if (a == 0)
    {
        cout << "NO data entered yet" << endl;
    }
}