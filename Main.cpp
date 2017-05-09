#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

int main()
{
	string original_filepath;
	string target_filepath;
	string target_name;
	const int HEADER_LENGTH = 5;
	cout<<"What is the location of the file you need to generate Callouts for?"<<endl;
	cin >> original_filepath;
	cout<<"Where would you like your new file to be located?" <<endl;
	cin >> target_filepath;

	set<string> repeats;
	ifstream original_file;
	original_file.open(original_filepath.c_str());
	if (original_file.fail())
	{
		cout<<"ERROR: The file failed to load!" <<endl;
		return 0;
	}
	string line;
	ofstream target_file;
	target_file.open(target_filepath.c_str());
	target_file << "SEQUENCE LISTING CALLOUTS" << endl;
	target_file << "Sequence Listing" << endl;

	while (getline(original_file, line))
	{
		stringstream ss;
		string line_number;
		ss << line;
		ss >> line_number;
		if (line_number == "<110>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<120>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<170>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<212>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<213>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<221>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<223>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<140>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
		else if (line_number == "<141>")
		{
			do
			{
				if(line.length() > HEADER_LENGTH){
					if(repeats.count(line)== 0)
					{
						target_file << line << endl;
						repeats.insert(line);
					}
				}
			}while (getline(original_file, line)&&line != "");
		}
	}
	original_file.close();
	target_file.close();
	cout << "Your file has been Successfully Processed!" <<endl;
	cout << "Find your file at: " << target_filepath<< endl;
	system("pause");
	return 0;
}
