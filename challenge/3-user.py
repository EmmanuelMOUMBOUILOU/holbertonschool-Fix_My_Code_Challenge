#!/usr/bin/python3

class User:
    def __init__(self, first_name, last_name, password):
        self.first_name = first_name
        self.last_name = last_name
        self.__password = password

    def is_valid_password(self, password):
        return password == self.__password

if __name__ == "__main__":
    user = User("Test", "User", "my_password")
    print(user.is_valid_password("my_password"))  # True
    print(user.is_valid_password("wrong_password"))  # False
