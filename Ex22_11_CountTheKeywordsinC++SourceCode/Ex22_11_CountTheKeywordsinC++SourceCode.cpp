// FILE:            Ex22_11_CountTheKeywordsinC++SourceCode
// Written by:      Lucien Maurice
// Email:           luciencmaurice@gmail.com

#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;

int main()
{
	string fname;
	cout << "Enter a file name: ";
	cin >> fname;

	ifstream input(fname.c_str());

	set<string> s;
	s.insert("asm");
	s.insert("auto");
	s.insert("bool");
	s.insert("break");
	s.insert("case");
	s.insert("catch");
	s.insert("char");
	s.insert("class");
	s.insert("const");
	s.insert("const_cast");
	s.insert("continue");
	s.insert("default");
	s.insert("delete");
	s.insert("do");
	s.insert("dynamic_cast");
	s.insert("else");
	s.insert("enum");
	s.insert("explicit");
	s.insert("extern");
	s.insert("false");
	s.insert("float");
	s.insert("for");
	s.insert("friend");
	s.insert("goto");
	s.insert("if");
	s.insert("inline");
	s.insert("int");
	s.insert("log");
	s.insert("long");
	s.insert("mutable");
	s.insert("namespace");
	s.insert("new");
	s.insert("operator");
	s.insert("private");
	s.insert("protected");
	s.insert("public");
	s.insert("register");
	s.insert("reinterpret_cast");
	s.insert("return");
	s.insert("short");
	s.insert("signed");
	s.insert("sizeof");
	s.insert("static");
	s.insert("static_cast");
	s.insert("struct");
	s.insert("switch");
	s.insert("template");
	s.insert("this");
	s.insert("throw");
	s.insert("true");
	s.insert("try");
	s.insert("typeof");
	s.insert("typeid");
	s.insert("typename");
	s.insert("union");
	s.insert("unsigned");
	s.insert("using");
	s.insert("virtual");
	s.insert("void");
	s.insert("volatile");
	s.insert("wchar_t");
	s.insert("while");

	int count = 0;
	string word;
	while (!input.eof())
	{
		input >> word;
		if (s.find(word) != s.end())
		{
			count++;
		}
	}

	cout << "The number of keywords is " << count << " " << endl;

	return 0;
}
