#include <iostream>
#include "SocialNetwork.h"

int main() {
    SocialNetwork network;

    network.addMember("Alice");
    network.addMember("Bob");
    network.addMember("Charlie");
    network.addMember("Luv");
    network.addMember("Markus");
    network.addMember("Tim");
    network.addMember("Emily");
    network.addMember("Polly");

    network.addFriendship("Alice", "Bob");
    network.addFriendship("Alice", "Charlie");
    network.addFriendship("Bob", "Tim");
    network.addFriendship("Bob", "Emily");
    network.addFriendship("Bob", "Luv");
    network.addFriendship("Bob", "Polly");

    network.listFriends("Alice");

    network.removeFriendship("Alice", "Charlie");

    network.listFriends("Alice");
    network.listFriends("Bob");
    network.listFriends("Charlie");
    network.listFriends("Polly");
    network.listFriends("Katy");

    return 0;
}