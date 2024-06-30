#include "SocialNetwork.h"
#include <iostream>

void SocialNetwork::addMember(const std::string& name) 
{
    members.emplace_back(name);
}

Member* SocialNetwork::findMember(const std::string& name) const 
{
    for (auto& member : members) 
    {
        if (member.getName() == name) 
        {
            return const_cast<Member*>(&member);
        }
    }
    return nullptr;
}

void SocialNetwork::addFriendship(const std::string& memberName1, const std::string& memberName2) 
{
    Member* member1 = findMember(memberName1);
    Member* member2 = findMember(memberName2);
    if (member1 && member2) 
    {
        member1->addFriend(member2);
        member2->addFriend(member1);
    }
}

void SocialNetwork::removeFriendship(const std::string& memberName1, const std::string& memberName2) 
{
    Member* member1 = findMember(memberName1);
    Member* member2 = findMember(memberName2);
    if (member1 && member2) 
    {
        if (member1->isFriend(member2)) 
        {
            member1->removeFriend(member2);
        }
        if (member2->isFriend(member1)) 
        {
            member2->removeFriend(member1);
        }
    }
}

void SocialNetwork::listFriends(const std::string& memberName) const 
{
    const Member* member = findMember(memberName);
    if (member) 
    {
        const auto& friends = member->getFriends();
        if (friends.empty()) 
        {
            std::cout << memberName << " has no friends in the list right now.\n";
        }
        else 
        {
            std::cout << "Friends of " << memberName << ":\n";
            for (const auto& friendMember : friends) 
            {
                std::cout << friendMember->getName() << "\n";
            }
        }
    }
    else 
    {
        std::cout << "Member " << memberName << " not found.\n";
    }
}