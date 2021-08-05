#include<bits/stdc++.h>
using namespace std;

class myStructure
{
	
	vector <int> arr;

	map <int, int> Map;

	public:
	
	void add(int x)
	{
		
		if(Map.find(x) != Map.end())
			return;
		int index = arr.size();
		arr.push_back(x);
		Map.insert(std::pair<int,int>(x, index));
	}
	void remove(int x)
	{
		if(Map.find(x) == Map.end())
			return;
		int index = Map.at(x);
		Map.erase(x);
			
		int last = arr.size() - 1;
		swap(arr[index], arr[last]);
		arr.pop_back();
		Map.at(arr[index]) = index;
	}

	int search(int x)
	{
		if(Map.find(x) != Map.end())
		return Map.at(x);
		return -1;
	}
	int getRandom()
	{
		srand (time(NULL));
		int random_index = rand() % arr.size();
		return arr.at(random_index);
	}	
};

int main()
{
	myStructure ds;
	ds.add(10);
	ds.add(20);
	ds.add(30);
	ds.add(40);
	cout << ds.search(30) << endl;
	ds.remove(20);
	ds.add(50);
	cout << ds.search(50) << endl;
	cout << ds.getRandom() << endl;
}

