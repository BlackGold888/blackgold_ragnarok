//=========================================================================//
// || ����� ��� ������ ������: ������.                                   ||
// || �� �������� ���������� ������ ����� ���������� � �� ��� � �����.   ||
// || skype: goodman2601                                                 ||
// || Vkontakte: https://vk.com/id84357331                               ||
//=========================================================================//

-	script	event_start	-1,{
OnMinute00:			// ����������� ����� ������ ������ �� �����
announce "��� ����� 1�1 ����������",0;
sleep 5000;				// ����������� ����� ������� ����� ������� ������ �������� ��� ��� �� ���������� �� �����
announce "� ��� �������� 2 ������ ��� �� ������������������ � ��� (Dead Match)",0;
pvpoff "guild_vs2";
enablenpc "Death Match";
donpcevent "merlin_dm::OnDM";
end;
}
prontera,150,170,5	script	Death Match	811,{
mes "[ Death Match ]";
mes "������, "+strcharinfo(0)+"!";
mes "���� �����������: ^ff0000"+$reg_price+"^000000 ��� �����!";
if(select("��������:�����")==2){ close; }
if(BaseClass==Job_Novice){ next; mes "[ Death Match ]";  mes "������� �� ����� ����������� � ��� ������"; close; }
if(countitem (7227) < $reg_price){ next; mes "[ Death Match ]";  mes "������ ��������? ����� ��� �����!"; close; }
delitem 7227,1;
set $players,$players+1;
sc_end 30; //Blessing
sc_end 32; //Increaseagi
sc_end 40;  //Magnificat
warp "guild_vs2",50,50;
close;
OnInit:
set $reg_price,1;			// ����������� ���-�� ���� �� �����������, ���� �������� ���������� �� ��� �� ���� ��� ���������� � ��������� ������!
set $players,0;
disablenpc "Death Match";
end;
}
-	script	merlin_dm	-1,{
OnDM:
sleep 120000;
disablenpc "Death Match";
if(getmapusers("guild_vs2")<2){ announce "����� ��� ������ ������-��� �� ����� ������ ������ 1 �������",0; set $players,0; mapwarp "guild_vs2","prontera",150,170; end; }
announce "����� 'Death Match' ���������!",0;
pvpon "guild_vs2";
initnpctimer;
end;
OnTimer5000:
if(getmapusers("guild_vs2")==0){ announce "����� 'Death Match' ������ ��� ��� �� ������ ������",0; stopnpctimer; set $players,0; end; }
if(getmapusers("guild_vs2")>1){ mapannounce "guild_vs2",getmapusers("guild_vs2")+" ������� �������� �����",0; initnpctimer; end; }
if(getmapusers("guild_vs2")<2){ goto OnWin; end; }
end;
OnPCKillEvent:
OnWin:
getmapxy .@emap$,.@ex,.@ey,0;
if(.@emap$=="guild_vs2" && getmapusers("guild_vs2")<2){
stopnpctimer;
announce "����� "+strcharinfo(0)+" ������� � ������ 'Death Match' � �������� "+$reg_price*$players+" ��� ����!",0;
getitem 7227,$reg_price*$players;
message strcharinfo(0),"�� ��������� "+$reg_price*$players+" ��� ����!";
warp "SavePoint",0,0;
set $players,0;
}
end;
OnPCDieEvent:
getmapxy .@emap$,.@ex,.@ey,0;
if(.@emap$=="guild_vs2"){ warp "SavePoint",0,0; atcommand "@alive"+strcharinfo(0); dispbottom "[Death Match]: �� ��������� =("; }
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