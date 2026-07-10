# 1 "data/maps/Route1_Frlg/scripts.pory"

# 2 "data/maps/Route1_Frlg/scripts.pory"
Route1_Frlg_MapScripts::
# 3 "data/maps/Route1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route1_Frlg/scripts.pory"

# 5 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1_Frlg/scripts.pory"
	lock
# 7 "data/maps/Route1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/Route1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/Route1_Frlg/scripts.pory"
	checkitemspace ITEM_POTION
# 12 "data/maps/Route1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/Route1_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 14 "data/maps/Route1_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 15 "data/maps/Route1_Frlg/scripts.pory"
	message gText_ObtainedTheItem
# 16 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
# 17 "data/maps/Route1_Frlg/scripts.pory"
	waitfanfare
# 18 "data/maps/Route1_Frlg/scripts.pory"
	additem ITEM_POTION
# 19 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 20 "data/maps/Route1_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 21 "data/maps/Route1_Frlg/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 22 "data/maps/Route1_Frlg/scripts.pory"
	release
# 23 "data/maps/Route1_Frlg/scripts.pory"
	end
# 24 "data/maps/Route1_Frlg/scripts.pory"

# 25 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 26 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 27 "data/maps/Route1_Frlg/scripts.pory"
	release
# 28 "data/maps/Route1_Frlg/scripts.pory"
	end
# 29 "data/maps/Route1_Frlg/scripts.pory"

# 30 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_Boy::
# 31 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 32 "data/maps/Route1_Frlg/scripts.pory"
	end
# 33 "data/maps/Route1_Frlg/scripts.pory"

# 34 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_RouteSign::
# 35 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route1_Frlg/scripts.pory"
	end
# 37 "data/maps/Route1_Frlg/scripts.pory"

# 38 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_WorkAtPokeMartTakeSample::
# 39 "data/maps/Route1_Frlg/scripts.pory"
	.string "Hi!\n"
# 40 "data/maps/Route1_Frlg/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 41 "data/maps/Route1_Frlg/scripts.pory"
	.string "It's part of a convenient chain\n"
# 42 "data/maps/Route1_Frlg/scripts.pory"
	.string "selling all sorts of items.\p"
# 43 "data/maps/Route1_Frlg/scripts.pory"
	.string "Please, visit us in VIRIDIAN CITY.\p"
# 44 "data/maps/Route1_Frlg/scripts.pory"
	.string "I know, I'll give you a sample.\n"
# 45 "data/maps/Route1_Frlg/scripts.pory"
	.string "Here you go!$"
# 46 "data/maps/Route1_Frlg/scripts.pory"

# 47 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
# 48 "data/maps/Route1_Frlg/scripts.pory"
	.string "Please come see us if you need\n"
# 49 "data/maps/Route1_Frlg/scripts.pory"
	.string "POKé BALLS for catching POKéMON.$"
# 50 "data/maps/Route1_Frlg/scripts.pory"

# 51 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_PutPotionAway::
# 52 "data/maps/Route1_Frlg/scripts.pory"
	.string "{PLAYER} put the POTION away in\n"
# 53 "data/maps/Route1_Frlg/scripts.pory"
	.string "the BAG's ITEMS POCKET.$"
# 54 "data/maps/Route1_Frlg/scripts.pory"

# 55 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_CanJumpFromLedges::
# 56 "data/maps/Route1_Frlg/scripts.pory"
	.string "See those ledges along the road?\p"
# 57 "data/maps/Route1_Frlg/scripts.pory"
	.string "It's a bit scary, but you can jump\n"
# 58 "data/maps/Route1_Frlg/scripts.pory"
	.string "from them.\p"
# 59 "data/maps/Route1_Frlg/scripts.pory"
	.string "You can get back to PALLET TOWN\n"
# 60 "data/maps/Route1_Frlg/scripts.pory"
	.string "quicker that way.$"
# 61 "data/maps/Route1_Frlg/scripts.pory"

# 62 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_RouteSign::
# 63 "data/maps/Route1_Frlg/scripts.pory"
	.string "ROUTE 1\n"
# 64 "data/maps/Route1_Frlg/scripts.pory"
	.string "PALLET TOWN - VIRIDIAN CITY$"

Route1_EventScript_JoeyBattle::
# 80 "data/maps/Route1_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOEY, Route1_Text_JoeyIntro, Route1_Text_JoeyDefeat
# 81 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
	end


Route1_EventScript_SallyBattle::
# 99 "data/maps/Route1_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_SALLY, Route1_Text_SallyIntro, Route1_Text_SallyDefeat
# 100 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
	end


Route1_EventScript_KevinBattle::
# 116 "data/maps/Route1_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_KEVIN, Route1_Text_KevinIntro, Route1_Text_KevinDefeat
# 117 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
	end


Route1_EventScript_JamesBattle::
# 133 "data/maps/Route1_Frlg/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_JAMES, Route1_Text_JamesIntro, Route1_Text_JamesDefeat
# 134 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_JamesPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
	end


Route1_EventScript_SalBattle::
# 149 "data/maps/Route1_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_SAL, Route1_Text_SalIntro, Route1_Text_SalDefeat
# 150 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_SalPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
	end


Route1_Text_JoeyIntro::
# 67 "data/maps/Route1_Frlg/scripts.pory"
	.string "My Rattata is different from regular\n"
	.string "Rattata. It’s like my Rattata is in the\p"
	.string "top percentage of all Rattata.$"

Route1_Text_JoeyDefeat::
# 72 "data/maps/Route1_Frlg/scripts.pory"
	.string "Oh... looks like I need to train more.$"

Route1_Text_JoeyPostBattle::
# 75 "data/maps/Route1_Frlg/scripts.pory"
	.string "Next time you'll see me, me and my Rattata\n"
	.string "will be much stronger.$"

Route1_Text_SallyIntro::
# 86 "data/maps/Route1_Frlg/scripts.pory"
	.string "Look at this cute bird Pokemon I caught\p"
	.string "Huh, Battle?$"

Route1_Text_SallyDefeat::
# 90 "data/maps/Route1_Frlg/scripts.pory"
	.string "Didn't expect a battle this soon after\n"
	.string "catching a Pokemon.\p"
	.string "Huh, give money?$"

Route1_Text_SallyPostBattle::
# 95 "data/maps/Route1_Frlg/scripts.pory"
	.string "I'm never battling again.$"

Route1_Text_KevinIntro::
# 105 "data/maps/Route1_Frlg/scripts.pory"
	.string "You can't beat me, I have 2 Pokemon!$"

Route1_Text_KevinDefeat::
# 108 "data/maps/Route1_Frlg/scripts.pory"
	.string "You beat me...$"

Route1_Text_KevinPostBattle::
# 111 "data/maps/Route1_Frlg/scripts.pory"
	.string "Looks I need to catch more Pokemon\p"
	.string "Then I'll be unstoppable!$"

Route1_Text_JamesIntro::
# 121 "data/maps/Route1_Frlg/scripts.pory"
	.string "I love to fish, don't you too?$"

Route1_Text_JamesDefeat::
# 124 "data/maps/Route1_Frlg/scripts.pory"
	.string "I expected a little bit more\n"
	.string "struggle...$"

Route1_Text_JamesPostBattle::
# 128 "data/maps/Route1_Frlg/scripts.pory"
	.string "When your Pokemon runs out of PP\p"
	.string "They struggle.$"

Route1_Text_SalIntro::
# 138 "data/maps/Route1_Frlg/scripts.pory"
	.string "Fairy Pokemon are my favorite!$"

Route1_Text_SalDefeat::
# 141 "data/maps/Route1_Frlg/scripts.pory"
	.string "Audino isn't fairy type?$\n$"

Route1_Text_SalPostBattle::
# 144 "data/maps/Route1_Frlg/scripts.pory"
	.string "I heard that it can become a fairy\p"
	.string "maybe through evolution?$"
