#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct MARSH
{
	string start_point;
	string end_point;
	string way_number;
};

void AddMarsh(MARSH *M,int const size) {
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". Marsh\n";
		cout << "Enter START POINT of the marsh -> ";
		getline(cin, M[i].start_point);
		cout << "Enter END POINT of the marsh -> ";
		getline(cin, M[i].end_point);
		cout << "Enter WAY NUMBER of the marsh(e.g. 120) -> ";
		getline(cin, M[i].way_number);
		cout << endl;
	}
}

void SortMarsh(MARSH *M, int const size) {
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (M[j].way_number.compare(M[j + 1].way_number) > 0)
				swap(M[j], M[j + 1]);
		}
	}
}

void PrintMArsh(MARSH M[],int const size) {
	cout << string(61, '-') << endl;
	cout << "|" << setw(21) << "Start point";
	cout << "|" << setw(21) << "End point";
	cout << "|" << setw(15) << "Way number";
	cout << "|\n";
	cout << string(61, '-') << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "|" << setw(21) << M[i].start_point;
		cout << "|" << setw(21) << M[i].end_point;
		cout << "|" << setw(15) << M[i].way_number;
		cout << "|\n";
	}
	cout << string(61, '-') << endl;
}

void PrintFindMarsh(MARSH M[],int const size, string find) {
	bool finded = false;
	for (int i = 0; i < size; i++)
	{
		if (M[i].start_point == find ||
			M[i].end_point == find) {
			finded = true;
			cout << "|" << setw(21) << M[i].start_point;
			cout << "|" << setw(21) << M[i].end_point;
			cout << "|" << setw(15) << M[i].way_number;
			cout << "|\n";
		}
	}
	if (!finded)
		cout << "No " << find << " point in MARSH!\n\n";
}

int main() {
	int const kSize = 8;
	MARSH M[kSize];
	
	AddMarsh(M, kSize);
	PrintMArsh(M, kSize);

	cout << "Sorted MARSH:\n";
	SortMarsh(M, kSize);
	PrintMArsh(M, kSize);

	cout << "Enter point name for find ->";
	string find;
	cin >> find;
	PrintFindMarsh(M, kSize, find);

	return 0;
}