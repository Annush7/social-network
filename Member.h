#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>
#include <iostream>

class Member 
{
public:
    Member(const std::string& name);
    const std::string& getName() const;
    void addFriend(Member* newFriend);
    void removeFriend(Member* exFriend);
    const std::vector<Member*>& getFriends() const;
    bool isFriend(const Member* member) const;

private:
    std::string name;
    std::vector<Member*> friends;
};

#endif // MEMBER_H