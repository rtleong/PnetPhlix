#include "User.h"

#include <string>
#include <vector>
using namespace std;

User::User(const string& full_name, const string& email,
           const vector<string>& watch_history)
{
    m_fullname = fullname;
    m_email = email;
    for (vector<string>::iterator it = watch_history.begin(); it != watch_history.end(); it++)
        m_watchHistory.push_back(watch_history[it]);
}

string User::get_full_name() const
{
    return m_fullname;;  // Replace this line with correct code.
}

string User::get_email() const
{
    return m_email;  // Replace this line with correct code.
}

vector<string> User::get_watch_history() const
{
    return m_watchHistory;
}
