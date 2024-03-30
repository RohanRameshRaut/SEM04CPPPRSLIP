#include <iostream.h>
#include <conio.h>
#include <fstream.h>

class Movie
{
    char M_name[100], director_Name[100];
    int Release_Year, Budget;

public:
    void getData(int size)
    {
	ofstream hout("Movie.txt"); // You can open a file in append mode--> ofstream hout("Movie.txt", ios::app);
	for (int i = 0; i < size; i++)
	{
	    cout << "Enter " << i + 1 << " Movie name: ";
	    cin >> M_name;
	    cout << "Enter director_Name: ";
	    cin >> director_Name;
	    cout << "Enter Release_Year: ";
	    cin >> Release_Year;
	    cout << "Enter Budget: ";
	    cin >> Budget;
	    hout << "\nMovie_name: " << M_name << "\n director_Name: " << director_Name << "\n Release_Year: " << Release_Year << "\n Budget: " << Budget << endl; // keep the object in loop to push the values.
	}
	hout.close(); // Close file after writing
    }

    void display()
    {
	ifstream hin("Movie.txt");
	char content[100];
	while(!hin.eof())
	{

	  hin>>content;
	  cout<<content<<endl;
	}
	hin.close();
    }
};

void main()
{
    clrscr();
    Movie m1;
    int size;
    cout << "Enter the number of movies: ";
    cin >> size;
    m1.getData(size);
    m1.display();

    getch();
}
