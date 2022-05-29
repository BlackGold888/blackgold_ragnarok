//================= Hercules Script =======================================
//=       _   _                     _
//=      | | | |                   | |
//=      | |_| | ___ _ __ ___ _   _| | ___  ___
//=      |  _  |/ _ \ '__/ __| | | | |/ _ \/ __|
//=      | | | |  __/ | | (__| |_| | |  __/\__ \
//=      \_| |_/\___|_|  \___|\__,_|_|\___||___/
//================= License ===============================================
//= This file is part of Hercules.
//= http://herc.ws - http://github.com/HerculesWS/Hercules
//=
//= Copyright (C) 2012-2022 Hercules Dev Team
//= Copyright (C) L0ne_W0lf
//=
//= Hercules is free software: you can redistribute it and/or modify
//= it under the terms of the GNU General Public License as published by
//= the Free Software Foundation, either version 3 of the License, or
//= (at your option) any later version.
//=
//= This program is distributed in the hope that it will be useful,
//= but WITHOUT ANY WARRANTY; without even the implied warranty of
//= MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//= GNU General Public License for more details.
//=
//= You should have received a copy of the GNU General Public License
//= along with this program.  If not, see <http://www.gnu.org/licenses/>.
//=========================================================================
//= iRO Repeatable EXP Quests.
//================= Description ===========================================
//= Repeatable EXP Quest (Anolian Skins)
//================= Current Version =======================================
//= 1.0
//=========================================================================

prt_fild08,152,364,3	script	Poring Quest#Gator_Hunt	1_M_MOC_LORD,{
	if (questprogress(60311)) {
		if (questprogress(60311,HUNTING) != 2) {
			mes "[Cuir]";
			mes "Have you finished hunting the 50 Poring?";
			next;
			switch(select("Yes", "No", "I want to quit")) {
			case 1:
				mes "[Cuir]";
				mes "Hmm, I don't think you've hunted 50 yet...";
				close;
			case 2:
				mes "[Cuir]";
				mes "Remember, I need help hunting Poring so go and hunt 50 of them.";
				close;
			case 3:
				mes "[Cuir]";
				mes "Are you sure that you want to stop hunting?";
				mes "Any progress that you've made will be erased";
				next;
				switch(select("Yes", "No")) {
				case 1:
					mes "[Cuir]";
					mes "Ok then, well come back here if you change your mind.";
					erasequest 60311;
					close;
				case 2:
					mes "[Cuir]";
					mes "Please kill 50 Poring.";
					close;
				}
			}
		}
		else {
			mes "[Cuir]";
			mes "Amazing, you did that with speed.";
			getexp 6895,4330;
			erasequest 60311;
			close;
		}
	}
	if (questprogress(60312)) {
		if (questprogress(60312,HUNTING) != 2) {
			mes "[Cuir]";
			mes "Have you finished hunting the 50 Poring?";
			next;
			switch(select("Yes", "No", "I want to quit")) {
			case 1:
				mes "[Cuir]";
				mes "Hmm, I don't think you've hunted 100 yet...";
				close;
			case 2:
				mes "[Cuir]";
				mes "Remember, I need help hunting Poring so go and hunt 100 of them.";
				close;
			case 3:
				mes "[Cuir]";
				mes "Are you sure that you want to stop hunting?";
				mes "Any progress that you've made will be erased";
				next;
				switch(select("Yes", "No")) {
				case 1:
					mes "[Cuir]";
					mes "Ok then, well come back here if you change your mind.";
					erasequest 60312;
					close;
				case 2:
					mes "[Cuir]";
					mes "Please kill 100 Poring.";
					close;
				}
			}
		}
		else {
			mes "[Cuir]";
			mes "Amazing, you did that with speed.";
			getexp 6895,4330;
			getexp 6895,4330;
			erasequest 60312;
			close;
		}
	}
	if (questprogress(60313)) {
		if (questprogress(60313,HUNTING) != 2) {
			mes "[Cuir]";
			mes "Have you finished hunting the 150 Poring?";
			next;
			switch(select("Yes", "No", "I want to quit")) {
			case 1:
				mes "[Cuir]";
				mes "Hmm, I don't think you've hunted 150 yet...";
				close;
			case 2:
				mes "[Cuir]";
				mes "Remember, I need help hunting Poring so go and hunt 150 of them.";
				close;
			case 3:
				mes "[Cuir]";
				mes "Are you sure that you want to stop hunting?";
				mes "Any progress that you've made will be erased";
				next;
				switch(select("Yes", "No")) {
				case 1:
					mes "[Cuir]";
					mes "Ok then, well come back here if you change your mind.";
					erasequest 60313;
					close;
				case 2:
					mes "[Cuir]";
					mes "Please kill 150 Poring.";
					close;
				}
			}
		}
		else {
			mes "[Cuir]";
			mes "Amazing, you did that with speed.";
			getexp 6895,4330;
			getexp 6895,4330;
			getexp 6895,4330;
			erasequest 60313;
			close;
		}
	}
	//for minimum level
	if (BaseLevel >= 1) {
		//for maximum level
		if (BaseLevel < 15) {
			mes "[Cuir]";
			mes "You look like a sturdy adventurer!";
			next;
			mes "[Cuir]";
			mes "I was sent here to minimize the Alligator population but the task is proving to be quite difficult for just me to complete.";
			mes "How'd you like to help me out?";
			next;
			switch(select("Sure", "No")) {
			case 1:
				mes "[Cuir]";
				mes "You can help me out by either hunting Poring or by gathering items for me.";
				mes "Which would you like to do?";
				next;
				switch(select("Hunt Poring", "Cancel")) {
				case 1:
					// Kill Count Quest
					mes "[Cuir]";
					mes "Ah, ok I think you can help me out by hunting some Poring.";
					mes "How many would you like to hunt?";
					next;
					switch(select("10 Poring")) {
					case 1:
						mes "[Cuir]";
						mes "Come back when you've finished your task and I will give you a small reward.";
						setquest 60311;
						close;
					case 2:
						mes "[Cuir]";
						mes "Come back when you've finished your task and I will give you a small reward.";
						setquest 60312;
						close;
					case 3:
						mes "[Cuir]";
						mes "Come back when you've finished your task and I will give you a small reward.";
						setquest 60313;
						close;
					}
				case 3:
					mes "[Cuir]";
					mes "If you change your mind, please come back.";
					close;
				}
			case 2:
				mes "[Cuir]";
				mes "If you change your mind, please come back.";
				close;
			}
		}
		else {
			mes "[Cuir]";
			mes "You are too powerful for this task, I need the skins in fair condition, not exploded!";
			next;
			close;
		}
	}
	else {
		mes "[Cuir]";
		mes "You certainly are brave, but bravery turns to foolishness if you continue going East.";
		mes "Perhaps when you are stronger you and I can do business.";
		close;
	}
}
