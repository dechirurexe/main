#include"user.h"

User::User() {
	login = nullptr;
	password = nullptr;
	email = nullptr;
	phone = nullptr;
}

User::User(string* login) : User() {
	this->login = login;
}