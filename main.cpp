#include <iostream>
#include <string>
std::string cipherworker(std::string text, std::string Key) {
  int size = text.length();
  std::string cipher_text = text;
  // std::cout<<size;
  for (int i = 0; i < size; i++) {
    cipher_text[i] = text[i] ^ Key[i];
  }
  return cipher_text;
}
void displayarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << char(arr[i]);
  }
}
int main() {
  std::string text, key;
  std::cout << "Greeting!! This is an Xor encryptor/decryptor porgram.\n";
  std::cout << "\t\t\t************************\n";
    std::cout << "Enter the text you would like to encrypt or decrypt : ";
    std::cin >> text;
    std::cout << "Enter the key you would like to use (The key should be of "
                 "same length as Text).";
    std::cout << "Idealy use special chacater like !@#$% as key : ";
    std::cin >> key;
    std::string ptext;
    ptext = cipherworker(text, key);
    std::cout << "The encrypted/Decrypted text is ";
    int arr[ptext.length()];
    for (int i = 0; i < ptext.length(); i++) {
      arr[i] = int(ptext[i]);
    }
    displayarr(arr, ptext.length());
    return 0;
  }