#include "BinaryTree.h"

int main()
{
	BinaryTree<int> tree;
	setlocale(LC_ALL, "RUSSIAN");

	string command;
	while (true) {
		cout << "0. ������� ������.\n1. �������� �������.\n2. ������� �������.\n3. ��������� ������ � ����.\n4. ��������� ������ �� �����.\n5. ����� ������ � �������.\n6. ����� ������ � ������.\n7. ���������� � ������� ������ �� �����������.\n8. ���������� � ������� ������ �� ��������.\n9. ����� ����.\n10. �����.\n";
		cin >> command;
		if (command == "0") {
			if (tree.Empty()) cout << "";
			else
				tree.Output();
		}
		else if (command == "1") {
			cout << "\t������� ������� ";
			int a;
			cin >> a;
			tree.Insert(a);
		}
		else if (command == "2") {
			cout << "\t������� ������� ";
			int a;
			cin >> a;
			tree.Remove(a);
		}
		else if (command == "3") {
			// save
			cout << "\t������� ������ ����� ";
			string b;
			cin >> b;
			ofstream fout(b);
			fout << tree;
			fout.close();
		}
		else if (command == "4") {
			//load
			cout << "\t������� ������ ����� ";
			string b;
			cin >> b;
			ifstream fin(b);
			fin >> tree;
			fin.close();
		}
		else if (command == "5") {
			cout << "\n";
			tree.DeepOut();
			cout << "\n";
		}
		else if (command == "6") {
			cout << "\n";
			tree.WideOut();
			cout << "\n";
		}
		else if (command == "7") {
			vector<int> tt = tree.RoundLrootR();
			cout << "\n";
			for (int i = 0; i < tt.size(); ++i) {
				cout << tt[i] << " ";
			}
			cout << "\n";
		}
		else if (command == "8") {
			vector<int> tt = tree.RoundRrootL();
			cout << "\n";
			for (int i = 0; i < tt.size(); ++i) {
				cout << tt[i] << " ";
			}
			cout << "\n";
		}
		else if (command == "9") {
			cout << "\t������� ������ ������� ";
			int a;
			cin >> a;
			cout << "\t������� ������ ������� ";
			int b;
			cin >> b;
			vector<int> path = tree.Path(a, b);
			for (int i = 0; i < path.size(); ++i) {
				cout << path[i] << " ";
			}
			cout << "\n";
		}
		else if (command == "10") {
			break;
		}
		else { cout << "�������� �������"; }
	}

}
