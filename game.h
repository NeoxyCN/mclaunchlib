//
// Created by Neoxy on 2023/6/23.
//

#ifndef MCLAUNCHLIB_GAME_H
#define MCLAUNCHLIB_GAME_H

#include <string>

class Game{
public:
    std::string args;

    enum UserType{
        MSA,
        LEGACY,
        MOJANG

    };

    Game &SetUsername(std::string username);
    Game &SetVersion(std::string version);
    Game &SetGameDir(std::string dir);
    Game &SetAssetsDir(std::string dir);
    Game &SetAssetsIndex(std::string dir);
    Game &SetUUID(std::string uuid);
    Game &SetAccessToken(std::string token);
    Game &SetUserType(std::string type);

    //Legacy
    Game &SetTweakClass(std::string name);

};

#endif //MCLAUNCHLIB_GAME_H
