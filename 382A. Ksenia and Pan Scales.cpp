#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, s2;
    cin >> s >> s2;

    // Splitting the input string into two parts
    size_t divider = s.find('|');
    string fst = s.substr(0, divider);
    string snd = s.substr(divider + 1);

    // Calculate lengths
    int fstlen = fst.length();
    int sndlen = snd.length();
    int len2 = s2.length();

    // Check if the arrangement is possible
    if ((fstlen + sndlen + len2) % 2 == 0 && abs(fstlen - sndlen) <= len2) {
        int required = (fstlen + sndlen + len2) / 2;
        while (fst.length() < required && !s2.empty()) {
            fst += s2[0];
            s2.erase(0, 1);
        }
        while (snd.length() < required && !s2.empty()) {
            snd += s2[0];
            s2.erase(0, 1);
        }
        cout << fst << "|" << snd << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
