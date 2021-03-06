#ifndef TEAM_H
#define TEAM_H
#include"Player.h"
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Team
{
    public:
        Team(int no);
       // void TableRead(Team*,char*);
        char* Getteam_name() { return team_name; }
        void Setteam_name(char* val) { strcpy(team_name,val); }
        char* Getteam_code() { return team_code; }
        void Setteam_code(char* val) { strcpy(team_code,val); }
        /*Player Getp() { return *p; }
        void Setp(Player val) { *p = val; }
        */int Getpts() { return pts; }
        void Setpts(int val) { pts = val; }

        int Getwin() { return wins; }
        void Setwin(int val) { wins = val; }

        int Getdraw() { return draw; }
        void Setdraw(int val) { draw = val; }

        int Getloss() { return loss; }
        void Setloss(int val) { loss = val; }

        int Getgoals_for() { return goals_for; }
        void Setgoals_for(int val) { goals_for=val; }
        void inc_goals_for() { goals_for++; }

        int Getgoals_against() { return goals_against; }
        void Setgoals_against(int val) { goals_against=val; }
        void inc_goals_against() { goals_against++; }

        int Getgoals_diff() { return goals_diff; }
        void Setgoals_diff(int val) { goals_diff = val; }

        int Getmatches() { return matches; }
        void inc_matches() { matches++; }

        int get_start11(int val) { return start11[val]; }
        //void Setstart11[11](int val) { start11[11] = val; }
        int Get_attack_style() { return attack_style; }
        void Set_attack_style(int val) { attack_style = val; }
        int Get_defence_style() { return defence_style; }
        void Set_defence_style(int val) { defence_style = val; }
        int Get_attack_width() { return attack_width; }
        void Set_attack_width(int val) { attack_width= val; }
        int Get_defence_width() { return defence_width; }
        void Set_defence_width(int val) { defence_width= val; }
        int start11[11];
        Player player(int val){return p[val];}
    protected:
        char *team_name;
        char *team_code;
        Player *p;
        int pts;
        int wins;
        int draw;
        int loss;
        int goals_for;
        int goals_against;
        int goals_diff;
        int matches;

        int attack_style;
        int defence_style;
        int attack_width;
        int defence_width;
};

#endif // TEAM_H
