//=========================================================================//
// || Эвент был создан Руками: Мерлин.                                   ||
// || По вопросам касающимся Эвента можно обратиться в ВК или в Скайп.   ||
// || skype: goodman2601                                                 ||
// || Vkontakte: https://vk.com/id84357331                               ||
//=========================================================================//

-	script	event_start	-1,{
OnMinute00:			// Редактируем Время начала анонса на Эвент
announce "ПВП Эвент 1х1 Начинается",0;
sleep 5000;				// Редактируем через сколько после первого анонса появится нпц что бы пропустить на эвент
announce "У вас осталось 2 Минуты что бы зарегистрироваться у нпц (Dead Match)",0;
pvpoff "guild_vs2";
enablenpc "Death Match";
donpcevent "merlin_dm::OnDM";
end;
}
prontera,150,170,5	script	Death Match	811,{
mes "[ Death Match ]";
mes "Привет, "+strcharinfo(0)+"!";
mes "Цена регистрации: ^ff0000"+$reg_price+"^000000 Тцг Карта!";
if(select("Согласен:Выход")==2){ close; }
if(BaseClass==Job_Novice){ next; mes "[ Death Match ]";  mes "Новички не могут участвовать в ПВП Эвенте"; close; }
if(countitem (7227) < $reg_price){ next; mes "[ Death Match ]";  mes "Хочешь обмануть? Давай Тцг карту!"; close; }
delitem 7227,1;
set $players,$players+1;
sc_end 30; //Blessing
sc_end 32; //Increaseagi
sc_end 40;  //Magnificat
warp "guild_vs2",50,50;
close;
OnInit:
set $reg_price,1;			// Необходимое кол-во зени на регистрацию, Если захотите переделать на что то типо ТЦГ обратитесь к создателю Эвента!
set $players,0;
disablenpc "Death Match";
end;
}
-	script	merlin_dm	-1,{
OnDM:
sleep 120000;
disablenpc "Death Match";
if(getmapusers("guild_vs2")<2){ announce "Эвент был отменён потому-что на эвент пришёл только 1 человек",0; set $players,0; mapwarp "guild_vs2","prontera",150,170; end; }
announce "Эвент 'Death Match' Стартовал!",0;
pvpon "guild_vs2";
initnpctimer;
end;
OnTimer5000:
if(getmapusers("guild_vs2")==0){ announce "Эвент 'Death Match' Отменён так как не пришли игроки",0; stopnpctimer; set $players,0; end; }
if(getmapusers("guild_vs2")>1){ mapannounce "guild_vs2",getmapusers("guild_vs2")+" Игроков осталось живых",0; initnpctimer; end; }
if(getmapusers("guild_vs2")<2){ goto OnWin; end; }
end;
OnPCKillEvent:
OnWin:
getmapxy .@emap$,.@ex,.@ey,0;
if(.@emap$=="guild_vs2" && getmapusers("guild_vs2")<2){
stopnpctimer;
announce "Игрок "+strcharinfo(0)+" Победил в Эвенте 'Death Match' И получает "+$reg_price*$players+" Тцг Карт!",0;
getitem 7227,$reg_price*$players;
message strcharinfo(0),"Вы получаете "+$reg_price*$players+" Тцг карт!";
warp "SavePoint",0,0;
set $players,0;
}
end;
OnPCDieEvent:
getmapxy .@emap$,.@ex,.@ey,0;
if(.@emap$=="guild_vs2"){ warp "SavePoint",0,0; atcommand "@alive"+strcharinfo(0); dispbottom "[Death Match]: Вы проиграли =("; }
end;
}
guild_vs2	mapflag	noteleport
guild_vs2	mapflag	nowarp
guild_vs2	mapflag	nowarpto
guild_vs2	mapflag	nobranch
guild_vs2	mapflag	noicewall
guild_vs2	mapflag	pvp_noguild
guild_vs2	mapflag	pvp_noparty
guild_vs2	mapflag	nomemo
guild_vs2	mapflag	nodrop
guild_vs2	mapflag	restirected 6