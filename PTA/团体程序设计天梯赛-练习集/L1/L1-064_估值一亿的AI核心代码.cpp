#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	cin.get();
	while (N--) {
		string s;
		getline(cin, s);
		cout << s << endl;

		s.erase(0, s.find_first_not_of(" "));
		s.erase(s.find_last_not_of(" ") + 1);

		int index = 0;
		while ((index = s.find(' ', index + 1)) != string::npos)
			if (isblank(s[index - 1]) || ispunct(s[index + 1]))
				s.erase(index--, 1);

        index = 0;
		while ((index = s.find(' ', index + 1)) != string::npos)
			if (isalnum(s[index - 1]) && ispunct(s[index + 1]))
				s.erase(index--, 1);

		for (auto& c : s)
			if (isupper(c) && c != 'I')
				c = tolower(c);

		string src[4] = {"can you", "could you", "I", "me"};
		string dest[4] = {"I can", "I could", "you", "you"};
		string tmp = "";
		for (int i = 0; i < s.size();){
			int flag = 0;
			for (int j = 0; j < 4; ++j) {
				if ((i + src[j].size() - 1 < s.size()) && (s.substr(i, src[j].size()) == src[j])) {
					if ((i == 0 || !isalnum(s[i - 1])) && (i + src[j].size() == s.size() || !isalnum(s[i + src[j].size()]))) {
						tmp += dest[j];
						i += src[j].size();
					    flag = 1;
					}
				}
			}
            if (!flag)
                tmp += s[i++];
		}
		s = tmp;

		index = 0;
		while ((index = s.find('?', index)) != string::npos)
			s.replace(index, 1, "!");

		cout << "AI: " << s << endl;
	}
    
	return 0;
}