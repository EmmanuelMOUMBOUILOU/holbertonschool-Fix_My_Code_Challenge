#!/usr/bin/env python3
import hashlib

class User:
    """User class"""

    def __init__(self, name, password):
        self.name = name
        self._password_hash = self._hash_password(password)

    def _hash_password(self, password):
        return hashlib.sha256(password.encode()).hexdigest()

    def is_valid_password(self, password):
        return self._password_hash == self._hash_password(password)
