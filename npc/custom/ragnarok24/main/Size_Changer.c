prontera,164,170,4	script	Size changer	4_F_DOGTRAVELER,{
set .NPCNAME$,"[������ ������]";
mes .NPCNAME$;
mes "������ � ���� �������� ���� ������";
mes "��� �������� ���� � 1000 ����";
next;
mes .NPCNAME$;
mes "����� �� ������ �����?";
switch(select("�������","���������","����� ��� ���������� ������")){
next;
case 1:
if(Zeny < 1000){
mes .NPCNAME$;
mes "� ���� �� ������� ����";
close;
}

mes .NPCNAME$;
mes "������";
set Zeny,Zeny-1000;
atcommand "@size 2";
close;

case 2:
if(Zeny < 1000){
mes .NPCNAME$;
mes "� ���� �� ������� ����";
close;
}

mes .NPCNAME$;
mes "������";
atcommand "@size 1";
close;

case 3:
if(Zeny < 1000){
mes .NPCNAME$;
mes "� ���� �� ������� ����";
close;
}

mes .NPCNAME$;
mes "������";
atcommand "@size 0";
close;
}
}