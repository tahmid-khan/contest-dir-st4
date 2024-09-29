#include <cassert>
#include <cstddef>
#include <iostream>
#include <map>
#include <string>
#include <tuple>
#include <vector>

#include "to_string.h"

using namespace std;


int main()
{
	vector<map<int,set<int>>> vec_of_maps_to_sets {
		{
			{0, {1, 2, 3}},
			{4, {5, 6, 7}},
		},
		{
			{1, {2, 3, 4}},
			{5, {6, 7, 8}},
		},
	};

	{
		string got {to_string(vec_of_maps_to_sets)};
		string want {
			"[{0: {1, 2, 3}#3, 4: {5, 6, 7}#3}#2, "
			"{1: {2, 3, 4}#3, 5: {6, 7, 8}#3}#2]#2"
		};
		cerr << got << '\n';
		cerr << want << '\n';
		assert(got == want);
	}


	auto t1 = make_tuple(1, '2', "3");
	{
		string got {to_string(t1)};
		string want {"(1, '2', \"3\")"};
		cerr << got << '\n';
		cerr << want << '\n';
		assert(got == want);
	}
}
