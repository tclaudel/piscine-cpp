#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std; 

int		ft_strcmp(string s1, string s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

string	ft_toupper(string s)
{
	size_t	i = 0;

	while(s[i])
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}

string	ft_shake(string s)
{
	int		ssize;
	ssize = s.size();
	char	dest[ssize + 1];
	int		pos;
	size_t	i = 0;

	srand(time(0));
	while (i < ssize)
	{
		pos = rand() % s.size();
		dest[i] = s[pos];
		s.erase(pos, 1);
		i++;
	}
	dest[ssize] = 0;
	return (string(dest));
}

int main()
{

	string	str;
	string	guess;
	size_t	i = 0;

	cout << "Hey, welcome to Guess my word" << endl;
	cin >> str;
	str = ft_toupper(str);
	cout << str << endl;
	printf("\033[H\033[2J");
	while (1)
	{
		cout << "GUESS : ";
		cout << ft_shake(str) << endl;
		cout << "What's that word ?" << endl;
		cin >> guess;
		guess = ft_toupper(guess);
		if (guess == str)
			break;
		cout << "Not exactly\n" << endl;
	}
	cout << "You found it !" << endl;
	return 0;
}