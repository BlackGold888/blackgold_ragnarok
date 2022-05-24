prontera,150,150,4	script	Job Changer	515,{
set .NPC$,"[Job Master]";
if(profession == 1){
mes .NPC$;
mes "Ты уже выбрал свою профессию.";
close;
}
mes "Привет, выбери профессию";
switch(select("Lord Knight","Paladin","High Wizard","Professor","Sniper","Clown - Gypsy","Champion","High Priest","Stalker","Assasin Cross","White Smith","Creator","Super Novice","Taekwoon","Star Gladiator","Soul linker","Gunslinger","Ninja","Отмена")){
next;
case 1:
			mes .NPC$;
			mes "Готово";
			jobchange 4008;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;

case 2:
			mes .NPC$;
			mes "Готово";
			jobchange 4015;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;

case 3:
			mes .NPC$;
			mes "Готово";
			jobchange 4010;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 4:
			mes .NPC$;
			mes "Готово";
			jobchange 4017;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 5:
			mes .NPC$;
			mes "Готово";
			jobchange 4012;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 6:
			mes .NPC$;
			mes "Готово";
			jobchange 4020;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;

case 7:
			mes .NPC$;
			mes "Готово";
			jobchange 4016;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 8:
			mes .NPC$;
			mes "Готово";
			jobchange 4009;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 9:
			mes .NPC$;
			mes "Готово";
			jobchange 4018;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 10:
			mes .NPC$;
			mes "Готово";
			jobchange 4013;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 11:
			mes .NPC$;
			mes "Готово";
			jobchange 4011;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 12:
			mes .NPC$;
			mes "Готово";
			jobchange 4019;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 13:
			mes .NPC$;
			mes "Готово";
			jobchange 23;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 14:
			mes .NPC$;
			mes "Готово";
			jobchange 4046;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 15:
			mes .NPC$;
			mes "Готово";
			jobchange 4047;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 16:
			mes .NPC$;
			mes "Готово";
			jobchange 4049;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 17:
			mes .NPC$;
			mes "Готово";
			jobchange 24;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 18:
			mes .NPC$;
			mes "Готово";
			jobchange 25;
			atcommand "@lvup 99";
			atcommand "@joblvup 70";
			atcommand "@allskills";
			set profession,1;
	close;
	
case 19:
			mes .NPC$;
			mes "Всего хорошего";
	close;
}
}