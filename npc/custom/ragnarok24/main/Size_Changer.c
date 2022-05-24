prontera,164,170,4	script	Size changer	4_F_DOGTRAVELER,{
set .NPCNAME$,"[Изменю размер]";
mes .NPCNAME$;
mes "Привет я могу изменить твой размер";
mes "Это обойдётся тебе в 1000 Зени";
next;
mes .NPCNAME$;
mes "Каким ты хочешь стать?";
switch(select("Большой","Маленький","Верни мне нормальный размер")){
next;
case 1:
if(Zeny < 1000){
mes .NPCNAME$;
mes "У тебя не хватает Зени";
close;
}

mes .NPCNAME$;
mes "Готово";
set Zeny,Zeny-1000;
atcommand "@size 2";
close;

case 2:
if(Zeny < 1000){
mes .NPCNAME$;
mes "У тебя не хватает Зени";
close;
}

mes .NPCNAME$;
mes "Готово";
atcommand "@size 1";
close;

case 3:
if(Zeny < 1000){
mes .NPCNAME$;
mes "У тебя не хватает Зени";
close;
}

mes .NPCNAME$;
mes "Готово";
atcommand "@size 0";
close;
}
}