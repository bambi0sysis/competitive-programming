from string import ascii_letters, digits


def isPalindrome(s: str) -> bool:
    string = s.lower()
    print(string)
    for s in string:
        if s not in ascii_letters and s not in digits:
            string = string.replace(s, "")
    for i in range(len(string) // 2):
        if string[i] != string[len(string) - i - 1]:
            return False
    return True


def Palindrome(s: str) -> bool:
    string = s.lower()
    print(string)
    for i in s:
        if not i.isalnum():
            string = string.replace(i, "")
    return string == string[::-1]
