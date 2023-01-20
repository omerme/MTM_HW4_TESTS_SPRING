//
// Created by alex on 1/15/23.
//

#ifndef HW3_CLION_EXCEPTION_H
#define HW3_CLION_EXCEPTION_H

#include <exception>
#include <string>

//class InvalidNameException : public std::exception {};
class InvalidUserPlayerName : public std::exception {};
class InvalidUserPlayerClass : public std::exception {};
class EmptyUserPlayerLine : public std::exception {};


class DeckFileNotFound : public std::exception
{
public:
    const char * what () const throw () override
    {
        return "Deck File Error: File not found";
    }
};

class DeckFileFormatError : public std::exception
{
private:
    //const int m_lineError;
    std::string m_msg;

public:
    explicit DeckFileFormatError(const int &lineError) // : m_lineError(lineError)
    {
        m_msg = "Deck File Error: File format error in line " + std::to_string(lineError);
    };

    const char * what () const throw () override
    {
    return m_msg.c_str();
    }
};

class DeckFileInvalidSize : public std::exception
{
public:
    const char * what () const throw () override
    {
        return "Deck File Error: Deck size is invalid";
    }

};

#endif //HW3_CLION_EXCEPTION_H

