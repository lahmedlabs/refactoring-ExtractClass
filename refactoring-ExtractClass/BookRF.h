#pragma once
#include <iostream>
using namespace std;

class Author {
private:
	string _name;
	string _mail;
public:
	Author(string name, string mail) : _name(name), _mail(mail) {}
	~Author() {}

	string getName() { return _name; }
	string getMail() { return _mail; }
	string setName(string name) { _name = name; };
	string setMail(string mail) { _mail = mail; };
};

class BookRF
{
private:
	string _title;
	string _isbn;
	string _price;

	/* Author class 로 멤버변수 이동 */
	/*
	string _authorName; 
	string _authorMail;
	*/
	Author* _author; // Author 객체 포인터 추가

	string tag(string element, string content) {
		return "<" + element + ">" + content + "</" + element + ">\n";
	}
public:

	BookRF(string title, string isbn, string price, string authorName, string authorMail)
//		: _title(title), _isbn(isbn), _price(price), _authorName(authorName), _authorMail(authorMail) {
		{
		this->_title = title;
		this->_isbn = isbn;
		this->_price = price;
		Author _author = Author(authorName, authorMail); // Author 객체 생성
	}
	~BookRF() {}

	string getTitle() { return _title; };
	string getIsbn() { return _isbn; };
	string getPrice() { return _price; };
	/* Author class 로 멤버함수 이동 */
	
	string getAuthorName() { return _author->getName(); };
	string getAuthorMail() { return _author->getMail(); };
	string setAuthorName(string name) { _author->setName(name); };
	string setAuthorMail(string mail) { _author->setMail(mail); };
	
	string toXml() {
		string author =
//			tag("author", tag("name", _authorName) + tag("amil", _authorMail));
			tag("author", tag("name", _author->getName()) + tag("mail", _author->getMail()));
		string book =
			tag("book", tag("title", _title) + tag("isbn", _isbn) + tag("price", _price) + author);
		return book;
	}
};


