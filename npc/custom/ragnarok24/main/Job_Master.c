prontera,150,150,4	script	Job Changer	515,{
mes .NPC$;
if(profession == 1){
mes .NPC$;
mes "Ты уже выбрал свою профессию.";
close;
}
mes "Привет, выбери профессию";
switch(select("Lord Knight","Paladin","High Wizard","Professor","Sniper","Clown - Gypsy","Champion","High Priest","Stalker","Assasin Cross","White Smith","Creator","Super Novice","Taekwoon","Star Gladiator","Soul linker","Gunslinger","Ninja","Отмена")){
next;
Case 1:
			mes .NPC$;
			mes "";
			jobchange 4008;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;

Case 2:
			mes .NPC$;
			mes "";
			jobchange 4015;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;

Case 3:
			mes .NPC$;
			mes "";
			jobchange 4010;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 4:
			mes .NPC$;
			mes "";
			jobchange 4017;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 5:
			mes .NPC$;
			mes "";
			jobchange 4012;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 6:
			mes .NPC$;
			mes "";
			jobchange 4020;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;

Case 7:
			mes .NPC$;
			mes "";
			jobchange 4016;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 8:
			mes .NPC$;
			mes "";
			jobchange 4009;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 9:
			mes .NPC$;
			mes "";
			jobchange 4018;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 10:
			mes .NPC$;
			mes "";
			jobchange 4013;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 11:
			mes .NPC$;
			mes "";
			jobchange 4011;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 12:
			mes .NPC$;
			mes "";
			jobchange 4019;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 13:
			mes .NPC$;
			mes "";
			jobchange 23;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 14:
			mes .NPC$;
			mes "";
			jobchange 4046;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 15:
			mes .NPC$;
			mes "";
			jobchange 4047;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 16:
			mes .NPC$;
			mes "";
			jobchange 4049;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 17:
			mes .NPC$;
			mes "";
			jobchange 24;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 18:
			mes .NPC$;
			mes "";
			jobchange 25;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			set profession,1;
	close;
	
Case 19:
			mes .NPC$;
			mes "Всего хорошего";
	close;
}
}