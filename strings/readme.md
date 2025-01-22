# String and Bit Manipulation Code in C++

This repository demonstrates various functionalities in C++ related to string manipulation and bit-level operations. Below is the explanation of the code and its components.

---

## Code Breakdown

### 1. Finding All Occurrences of a Pattern in a String

```cpp
void printoccurance(string text , string pattern){
    int found = text.find(pattern);
    while(found != string::npos){
        cout << found << endl;
        // Finding next occurrence from found + 1
        found = text.find(pattern, found + 1);
    }
}
```
### How It Works:
This function searches for all occurrences of a given substring (pattern) within a string (text).

It uses string::find to locate the first occurrence.

Then it continues searching for the next occurrence starting from found + 1.
### Example:
Input:
printoccurance("hey how are you hey", "hey");

Output:
0
15

Explanation:

The substring "hey" occurs at positions 0 and 15 in the given string.

## 2. Finding the Extra Character Between Two Strings
```
char findcharacter(string str1 , string str2){
    int arr[26] = {0};
    for(int i = 0; i < 26; i++){
        arr[str2[i] - 'a']++;
    }
    for(int i = 0; i < str1.length(); i++){
        arr[str1[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] != 0){
            return i + 'a';
        }
    }
    return '\0'; // No extra character found
}
```
How It Works:

This function identifies the extra character in str2 compared to str1.

It assumes that both strings contain lowercase English letters and str2 has exactly one extra character.

It uses an array to count character occurrences.

## Example:
### Input:

findcharacter("praveen", "praveenk");

Output:
k

### Explanation:

The character 'k' is the extra character in "praveenk" compared to "praveen".

# 3. Finding the Number of Set Bits in an Integer
```
cout << __builtin_popcount(34) << endl;
```
How It Works:

The __builtin_popcount function is a GCC-specific built-in that counts the number of set bits (1s in the binary representation) of a number.

## Example:
### Input:

cout << __builtin_popcount(34) << endl;
### Output:

2
Explanation:

The binary representation of 34 is 100010, which contains 2 set bits.
# 4. Additional String Operations
## a. Extracting Substring
```
cout << str.substr(0, 3);
```
substr(pos, len) extracts a substring starting at position pos with a length of len.

Example:
Input: string str = "praveen";
Output: pra
## b. Finding a Substring
```
cout << str.find("ee");
```
find(pattern) returns the position of the first occurrence of pattern.

### Example:
Input: "praveen", "ee"

Output: 4 (substring "ee" starts at index 4)

### c. Comparing Strings
```
cout << (a == b);
```
This checks if two strings a and b are equal.
### Example:
Input: string a = "pk", b = "kr";

Output: 0 (false, as "pk" is not equal to "kr")

### d. Using getline with Delimiters
```
getline(cin, name);
getline(cin, name, 'm');
```

Reads a string from input until:

The newline character (\n) is encountered.

A specified delimiter (e.g., 'm') is encountered.

