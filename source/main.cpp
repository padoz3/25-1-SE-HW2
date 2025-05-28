#include <fstream>
#include "SignUpUI.h"
#include "SignInUI.h"
#include "SignOutUI.h"
#include "RegisterBicycleUI.h"
#include "RentBicycleUI.h"
#include "CheckRentalInfoUI.h"
#include "ShutDownUI.h"
#include "MemberCollection.h"
#include "BicycleCollection.h"
#include "MemberSession.h"

ifstream in_fp("input.txt");
ofstream out_fp("output.txt");

MemberCollection memberCollection;
BicycleCollection bicycleCollection;
MemberSession memberSession;

void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        in_fp >> menu_level_1 >> menu_level_2;

        switch (menu_level_1) {
            case 1:
                switch (menu_level_2) {
                    case 1: {
                        SignUpUI signupUI(&memberCollection);
                        signupUI.startInterface();
                        signupUI.enterSignUpInformation();
                        break;
                    }
                }
                break;

            case 2:
                switch (menu_level_2) {
                    case 1: {
                        SignInUI signinUI(memberCollection, memberSession);
                        signinUI.startInterface();
                        signinUI.SignIn();
                        break;
                    }
                    case 2: {
                        SignOutUI signoutUI(memberSession, out_fp);
                        signoutUI.signOut();
                        break;
                    }
                }
                break;

            case 3:
                switch (menu_level_2) {
                    case 1: {
                        RegisterBicycleUI registerBicycleUI;
                        registerBicycleUI.startInterface();

                        string input;
                        getline(in_fp >> ws, input);
                        registerBicycleUI.registerWithBicycleInfo(input);
                        break;
                    }
                }
                break;

            case 4:
                switch (menu_level_2) {
                    case 1: {
                        // Pass addresses of bicycleCollection and memberSession
                        RentBicycleUI rentBicycleUI(&bicycleCollection, &memberSession); // << MODIFIED LINE
                        rentBicycleUI.startInterface();

                        string input;
                        in_fp >> input; // Consider using getline if IDs can have spaces, though unlikely
                        rentBicycleUI.rentBicycleById(input);
                        break;
                    }
                }
                break;

            case 5:
                switch (menu_level_2) {
                    case 1: {
                        CheckRentalInfo control(memberSession);
                        CheckRentalInfoUI checkRentalInfoUI(control);
                        checkRentalInfoUI.displayRentalInfo();
                        break;
                    }
                }
                break;

            case 6:
                switch (menu_level_2) {
                    case 1: {
                        ShutDown shutDown(in_fp, out_fp); // 이제 이 줄에서 오류가 발생하지 않아야 합니다.
                        ShutDownUI shutDownUI(in_fp, out_fp);
                        shutDownUI.startInterface(&shutDown);
                        shutDownUI.exitProgram();
                        is_program_exit = 1;
                        break;
                    }
                }
                break;
        }
    }
}

int main() {
    doTask();
    in_fp.close();
    out_fp.close();
    return 0;
}
