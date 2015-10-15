#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class ColorCode {
public:
	long long getOhms(vector <string> code) {
		long long int i,ans = 0;
		for(i = 1;i <= 1;++i){
			if(code[0] == "black")
				ans = 0;
			else if(code[0] == "brown")
				ans = 10;
			else if(code[0] == "red")
				ans = 20;
			else if(code[0] == "orange")
				ans = 30;
			else if(code[0] == "yellow")
				ans = 40;
			else if(code[0] == "green")
				ans = 50;
			else if(code[0] == "blue")
				ans = 60;
			else if(code[0] == "violet")
				ans = 70;
			else if(code[0] == "grey")
				ans = 80;
			else if(code[0] == "white")
				ans = 90;
				}
		for(i = 1;i <= 1;++i){
			if(code[1] == "black")
				ans = ans+0;
			else if(code[1] == "brown")
				ans = ans+1;
			else if(code[1] == "red")
				ans = ans+2;
			else if(code[1] == "orange")
				ans = ans+3;
			else if(code[1] == "yellow")
				ans = ans+4;
			else if(code[1] == "green")
				ans = ans+5;
			else if(code[1] == "blue")
				ans = ans+6;
			else if(code[1] == "violet")
				ans = ans+7;
			else if(code[1] == "grey")
				ans = ans+8;
			else if(code[1] == "white")
				ans = ans+9;
			}
			for(i = 1;i <= 1;++i){
				if(code[2] == "black")
				ans = ans*1;
			else if(code[2] == "brown")
				ans = ans*10;
			else if(code[2] == "red")
				ans = ans*100;
			else if(code[2] == "orange")
				ans = ans*1000;
			else if(code[2] == "yellow")
				ans = ans*10000;
			else if(code[2] == "green")
				ans = ans*100000;
			else if(code[2] == "blue")
				ans = ans*1000000;
			else if(code[2] == "violet")
				ans = ans*10000000;
			else if(code[2] == "grey")
				ans = ans*100000000;
			else if(code[2] == "white")
				ans = ans*1000000000;

			}
			return ans;

	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, long long p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	ColorCode *obj;
	long long answer;
	obj = new ColorCode();
	clock_t startTime = clock();
	answer = obj->getOhms(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;

	vector <string> p0;
	long long p1;

	{
	// ----- test 0 -----
	string t0[] = {"yellow","violet","red"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4700ll;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	string t0[] = {"orange","red","blue"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 32000000ll;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	string t0[] = {"white","white","white"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 99000000000ll;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	string t0[] = {"{ \"yellow\", \"violet\", \"red\" }"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	all_right = KawigiEdit_RunTest(3, p0, false, p1) && all_right;
	// ------------------
	}

	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
