#include <iostream>
#include <string>

using namespace std;

string caesarCipherEncrypt(string text, int shift) {
    string result = "";

    for (char c : text) {
        // Encrypt uppercase letters
        if (isupper(c)) {
            result += char(int(c + shift - 65) % 26 + 65);
        }
        // Encrypt lowercase letters
        else if (islower(c)) {
            result += char(int(c + shift - 97) % 26 + 97);
        }
        // Keep non-alphabetic characters unchanged
        else {
            result += c;
        }
    }

    return result;
}

int main() {
    string plaintext;
    int shift;

    cout << "Enter the plaintext to encrypt: ";
    getline(cin, plaintext);

    cout << "Enter the shift value (0-25): ";
    cin >> shift;

    // Ensure the shift value is within the valid range
    shift %= 26;

    string encryptedText = caesarCipherEncrypt(plaintext, shift);

    cout << "Encrypted text: " << encryptedText << endl;

    return 0;
}
