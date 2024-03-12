#include "library.h"

class User {
private:
	string* login;
	string* password;
	string* email;
	string* phone;
public:
	User();
	User(string* login);
	User(string* login, string* password);
	/*
	User(string* login, string* password, string* email);
	User(string* login, string* password, string* email, string* phone);

	void SetLogin(string* login);
	void SetPassword(string* password);
	void SetEmail(string* email);
	void SetPhone(string* Phone);

	string* getLogin();
	string* getPassword();
	string* getEmail();
	string* getPhone();
	*/
};