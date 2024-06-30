#ifndef SOCIALNETWORK_H
#define SOCIALNETWORK_H

#include "Member.h"
#include <vector>

class SocialNetwork 
{
public:
    void addMember(const std::string& name);
    Member* findMember(const std::string& name) const;
    void addFriendship(const std::string& memberName1, const std::string& memberName2);
    void removeFriendship(const std::string& memberName1, const std::string& memberName2);
    void listFriends(const std::string& memberName) const;

private:
    std::vector<Member> members;
};

#endif // SOCIALNETWORK_H