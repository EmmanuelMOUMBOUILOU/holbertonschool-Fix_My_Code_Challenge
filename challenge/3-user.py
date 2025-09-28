#!/usr/bin/python3
""" User class
"""

import hashlib
import uuid


class User:
    """ User class
    """

    def __init__(self):
        """ Initialize a new user
        """
        self.__email = None
        self.__password = None
        self.id = str(uuid.uuid4())

    def set_email(self, email):
        """ Set user email
        """
        self.__email = email

    def get_email(self):
        """ Get user email
        """
        return self.__email

    def set_password(self, password):
        """ Set hashed password
        """
        if password is None or not isinstance(password, str):
            self.__password = None
        else:
            # Properly hash the password
            self.__password = hashlib.sha256(password.encode()).hexdigest()

    def is_valid_password(self, password):
        """ Check if password is valid
        """
        if self.__password is None:
            return False
        if password is None or not isinstance(password, str):
            return False
        # Compare hash of input password with stored hash
        return hashlib.sha256(password.encode()).hexdigest() == self.__password


if __name__ == "__main__":
    print("Test User")

    user = User()
    user.set_email("test@test.com")
    user.set_password("mySecuredPwd")
    print(user.get_email())

    if user.is_valid_password("mySecuredPwd"):
        print("is_valid_password should return True if it's the right password")
    else:
        print("is_valid_password failed test 😓")
