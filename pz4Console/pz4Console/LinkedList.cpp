#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList<int> list;
    
    setlocale(LC_ALL, "RUSSIAN");

    string command;
    while (true) {
        cout << "0. ������� ������.\n1. �������� ������� � ������ ������.\n2. �������� ������� � ����� ������.\n3. �������� ������� � ������� n.\n4. ������� �������.\n.5. ��������� ������ � ����.\n6. ��������� ������ �� �����.\n7. ����������� �������� �������.\n8. �����.\n";
        cin >> command;
        if (command == "0") {
            cout << "\n" << list << "\n";
        }
        else if (command == "1") {
            cout << "\t������� ������� ";
            int a;
            cin >> a;
            list.PushFront(a);
        }
        else if (command == "2") {
            cout << "\t������� ������� ";
            int a;
            cin >> a;
            list.PushBack(a);
        }
        else if (command == "3") {
            cout << "\t������� ������� ";
            int a;
            cin >> a;
            cout << "\t������� ������� ";
            int b;
            cin >> b;
            list.Insert(a, b);
        }
        else if (command == "4") {
            cout << "\t������� �������, ������� ������ ������� ";
            int b;
            cin >> b;
            list.Remove(b);
        }
        else if (command == "5") {
            // save
            cout << "\t������� ������ ����� ";
            string b;
            cin >> b;
            ofstream fout(b);
            fout << list;
            fout.close();
        }
        else if (command == "6") {
            //load
            cout << "\t������� ������ ����� ";
            string b;
            cin >> b;
            ifstream fin(b);
            fin >> list;
            fin.close();
        }
        else if (command == "7") {
            cout << "\t������� ������� ������� �������a ";
            int a;
            cin >> a;
            cout << "\t������� ������� ������� �������� ";
            int b;
            cin >> b;
            list.Swap(a, b);
        }
        else if (command == "8") {
            break;
        }
        else { cout << "�������� �������"; }

    }
    
}
