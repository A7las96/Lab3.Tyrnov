
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

//Task 1.
void multi_2(std::vector<int>& input)
{
	for (int i = 0; i < input.size(); i++)
		input[i] *= 2;
}


//Task 1.2
void reduce_a(std::vector<int>& input, int a)
{
	for (int i = 0; i < input.size(); i++)
		input[i] -= a;
}


//Task 1.3
void div_on_first(std::vector<int>& input)
{
	for (int i = 0; i < input.size(); i++)
		input[i] /= input[0];
}



//Task 2.1
int sum(const std::vector<int>& input) {
	int sum = 0;
	for (int i = 0; i < input.size(); i++)
		sum += input[i];
	return(sum);
}



//Task 2.2
int square_sum(const std::vector<int>& input) {
	int square_sum = 0;
	for (int i = 0; i < input.size(); i++)
		square_sum += input[i] * input[i];
	return(square_sum);
}

//Task 2.3
int sum_six(const std::vector<int>& input) {
	int sum_six = 0;
	for (int i = 0; i < 6; i++)
		sum_six += input[i];
	return(sum_six);
}


//Task 2.4
int sum_k(const std::vector<int>& input, int k1, int k2) {
	int sum_k = 0;
	cin >> k1 >> k2;
	for (int i = k1; i <= k2; i++)
		sum_k += input[i];
	return(sum_k);
}


//Task 2.5
int mean(const std::vector<int>& input) {
	float mean = 0.;
	for (int i = 0; i < input.size(); i++)
		mean += input[i];
	return(mean / input.size());
}

//Task 2.6
int mean_k(const std::vector<int>& input, int s1, int s2) {
	int mean_k1 = 0;
	cin >> s1 >> s2;
	for (int i = s1; s1 <= s2; i++)
		mean_k1 += mean_k1 + input[i];
	return(mean_k1 / s2 - s1);
}



//Task 3
void swap_el(std::vector<int>& input) {
	int a1, a2, a3;
	for (int i = 0; i < 20; i++) {
		a1 = input[0];
		a2 = input[1];
		a3 = input[2];
		input[0] = input[17];
		input[1] = input[17];
		input[2] = input[17];
		input[17] = a1;
		input[18] = a2;
		input[19] = a3;
	}
}



// Task 4.1

void remove_negative(std::vector<int>& input)
{
	for (int i = 0; i < input.size(); i++)
		if (input[i] < 0)
		{
			input.erase(input.begin() + i);
			break;
		}
}



//task 4.2
void remove_last_even(std::vector<int>& input)
{
	int c;
	for (int i = 0; i < input.size(); i++)
		if (input[i] % 2 == 0) c = i;
	input.erase(input.begin() + c);
}

void main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	remove_negative(v);
	remove_last_even(v);
}



// Task 5
bool name_is_even(const std::string& name)
{
	if (name.length() % 2 == 0)
		return (true);
	else return (false);
}



// Task 6
bool first_is_longer(const std::string& name_one, const std::string& name_two)
{
	if (name_one.length() > name_two.length())
		return(true);
	else return(false);
}



//Task 7
void longest_shortest(const std::string& name_one, const std::string& name_two, const std::string& name_three, std::string& the_longest, std::string& the_shortest)
{
	if (name_one.length() > name_two.length())
	{
		if (name_two.length() > name_three.length())
		{
			the_longest = name_one;
			the_shortest = name_three;
		}
		else
		{
			the_longest = name_one;
			the_shortest = name_two;
		}
	}
	else
	{
		if (name_two.length() > name_three.length())
		{
			the_longest = name_two;
			the_shortest = name_one;
		}
		else
		{
			the_longest = name_three;
			the_shortest = name_one;
		}
	}
}



// Task 8
std::string sub_str(const std::string& word, int m, int n)
{
	return(word.substr(m, n - m + 1));
}



//Task 9
void add_stars(std::string& word)
{
	string str = "";
	for (int i = 0; i < word.length(); i++)
		str += "*";
	word.insert(0, str).append(str);
}



//Task 10
int percent_of_a(const std::string& word)
{
	int n = 0, p;
	for (int i = 0; i < word.length(); i++)
		if (word[i] == 'a') n++;
	return(100 * n / word.length());
}



//Task 11
std::string replace_can(const std::string& new_word)
{
	string str = "Can you can a can as a canner can can a can?";
	while (str.find("can") != -1)
		str.replace(str.find("can"), 3, new_word);
	return str;
}
