#include "Member.h"
#include <algorithm>

Member::Member(const std::string& name) : name(name) {}

const std::string& Member::getName() const 
{
    return name;
}

void Member::addFriend(Member* newFriend) 
{
    friends.push_back(newFriend);
}

void Member::removeFriend(Member* exFriend) 
{
    auto it = std::remove(friends.begin(), friends.end(), exFriend);
    if (it != friends.end()) 
    {
        friends.erase(it, friends.end());
        std::cout << "Friend was removed: " << exFriend->getName() << std::endl;
    }
}

const std::vector<Member*>& Member::getFriends() const 
{
    return friends;
}

bool Member::isFriend(const Member* member) const 
{
    return std::find(friends.begin(), friends.end(), member) != friends.end();
}