#pragma once
#include <iostream>
using namespace std;
class Book
{
private: 
	string _title;
	string _isbn;
	string _price;
	string _authorName;
	string _authorMail;

	string tag(string element, string content) {
		return "<" + element + ">" + content + "</" + element + ">\n" ;
	}
public:
	Book(string title, string isbn, string price, string authorName, string authorMail) 
		: _title(title), _isbn(isbn), _price(price), _authorName(authorName), _authorMail(authorMail) {}
	~Book() {}

	string getTitle() { return _title; };
	string getIsbn() { return _isbn; };
	string getPrice() { return _price; };
	string getAuthorName() { return _authorName; };
	string getAuthorMail() { return _authorMail; };
	string setAuthorName(string name) { _authorName = name; };
	string setAuthorMail(string mail)  { _authorMail = mail; };
	string toXml() {
		string author =
			tag("author", tag("name", _authorName) + tag("amil", _authorMail));
		string book =
			tag("book", tag("title", _title) + tag("isbn", _isbn) + tag("price", _price) + author);
		return book;
	}
};

