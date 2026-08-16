#include "Login.h"

bool Login::authenticate(
    const std::string& username,
    const std::string& password) {

    if (username.empty() || password.empty()) {
        return false;
    }

    return username == "student" && password == "portal123";
}
