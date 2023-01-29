#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define num_players 5
#define num_properties 20

struct Property{
    char name[20];
    int property_id;
    int value;
    bool mort;
    int group;

    int owner_id; 
};

struct Player{
    char name[20];
    int player_id;
    int money;

    bool owned_properties[num_properties]; //propertie ids as index
};

struct Player* generate_player(char* name, int player_id, int money){

    struct Player* p1 = malloc(sizeof(struct Player));

    strcpy(p1->name, name);
    p1->player_id = player_id;
    p1->money = money;

    return p1;
}

struct Property* generate_property(char* name, int property_id, int value, int group){
    struct Property* prop1 = malloc(sizeof(struct Property));

    strcpy(prop1->name,name);
    prop1->property_id = property_id;
    prop1->value = value;
    prop1-> group = group;
}

bool player_purchase_property(struct Player* p1, struct Property* prop1){
    if(p1->money < prop1->value){
	return false;
    }
    else{
	p1->money -= prop1->value;
	p1->owned_properties[prop1->property_id] = true;

	prop1-> owner_id = p1->player_id;

	return true;
    }
}

void property_action(struct Player* p1, struct Property* prop1){

}





int main(){

    struct Player players[num_players];




    return 0;

}
