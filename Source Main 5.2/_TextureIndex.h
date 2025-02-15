
#ifndef _TEXTURE_INDEX_H_
#define _TEXTURE_INDEX_H_

#pragma once

enum
{
	BITMAP_UNKNOWN = 30000,
	//. Basic Texture 0x0001 ~ 0x00FE

	BITMAP_FONT_BEGIN,
	BITMAP_FONT,
	BITMAP_FONT_END = BITMAP_FONT_BEGIN + 2,

	BITMAP_GAME_CENSORSHIP_BEGIN,
	BITMAP_GAME_CENSORSHIP_END = BITMAP_GAME_CENSORSHIP_BEGIN + 5,

	BITMAP_CURSOR_BEGIN,
	BITMAP_CURSOR2,
	BITMAP_CURSOR,
	BITMAP_CURSOR_END = BITMAP_CURSOR_BEGIN + 10,

	//. World Texture	0x00FF ~ 0x02FE (511개)
	BITMAP_MAPTILE_BEGIN = 30255,	// 255

	BITMAP_MAPTILE,
	BITMAP_MAPTILE_END = BITMAP_MAPTILE_BEGIN+30,

	BITMAP_MAPGRASS_BEGIN,
	BITMAP_MAPGRASS,
	BITMAP_MAPGRASS_END = BITMAP_MAPGRASS_BEGIN+30,

	BITMAP_WATER_BEGIN,
	BITMAP_WATER,
	BITMAP_WATER_END = BITMAP_WATER_BEGIN+35,

	BITMAP_RAIN_CIRCLE_BEGIN,
	BITMAP_RAIN_CIRCLE,
	BITMAP_RAIN_CIRCLE_END = BITMAP_RAIN_CIRCLE_BEGIN+2,

	BITMAP_SHINES,
	BITMAP_LEAF1,
	BITMAP_LEAF2,
	BITMAP_RAIN,

	BITMAP_PLAYER_TEXTURE_BEGIN = 30500,	// 0x02FF

	BITMAP_SKIN_BEGIN = BITMAP_PLAYER_TEXTURE_BEGIN,	
    BITMAP_SKIN,
	BITMAP_SKIN_END = BITMAP_SKIN_BEGIN+20,
	BITMAP_HAIR_BEGIN,
	BITMAP_HAIR,
	BITMAP_HAIR_END	= BITMAP_HAIR_BEGIN+20,

	BITMAP_ROBE_BEGIN,
    BITMAP_ROBE,
	BITMAP_ROBE_END             = BITMAP_ROBE_BEGIN+15,			

	BITMAP_HIDE,
	
	BITMAP_DARKLOAD_SKIRT_3RD,

	BITMAP_INVEN_ARMOR_BEGIN,
	BITMAP_INVEN_ARMOR,
	BITMAP_INVEN_ARMOR_END		= BITMAP_INVEN_ARMOR_BEGIN+8,

	BITMAP_INVEN_PANTS_BEGIN,
	BITMAP_INVEN_PANTS,
	BITMAP_INVEN_PANTS_END		= BITMAP_INVEN_PANTS_BEGIN+8,

#ifdef ADD_SOCKET_ITEM
	BITMAP_SKIN_ARMOR_DEVINE,
	BITMAP_SKIN_PANTS_DEVINE,
	BITMAP_SKIN_ARMOR_SUCCUBUS,
	BITMAP_SKIN_PANTS_SUCCUBUS,
#endif // ADD_SOCKET_ITEM
		
	BITMAP_PLAYER_TEXTURE_END = 31000,		// 0x40FE
	BITMAP_INTERFACE_TEXTURE_BEGIN = 31001,	// 0x0040FF
	
	BITMAP_LOG_IN_BEGIN = BITMAP_INTERFACE_TEXTURE_BEGIN,
	BITMAP_LOG_IN,
	BITMAP_LOG_IN_END = BITMAP_LOG_IN_BEGIN + 20,

	BITMAP_INTERFACE_BEGIN,
	BITMAP_INTERFACE,
	BITMAP_INTERFACE_END = BITMAP_INTERFACE_BEGIN+30,

	BITMAP_INVENTORY_BEGIN,
	BITMAP_INVENTORY,
	BITMAP_INVENTORY_BUTTON = BITMAP_INVENTORY + 20,
	BITMAP_INVENTORY_END = BITMAP_INVENTORY_BEGIN + 40,

	BITMAP_SKILL_INTERFACE_BEGIN,
	BITMAP_SKILL_INTERFACE,
	BITMAP_SKILL_INTERFACE_END = BITMAP_SKILL_INTERFACE_BEGIN + 10,

	BITMAP_EXT_LOG_IN_BEGIN,
	BITMAP_EXT_LOG_IN,
	BITMAP_EXT_LOG_IN_END = BITMAP_EXT_LOG_IN_BEGIN + 10,

	BITMAP_TITLE_BEGIN,
	BITMAP_TITLE,
#ifdef PBG_ADD_NEWLOGO_IMAGECHANGE
	BITMAP_TITLE_END = BITMAP_TITLE_BEGIN + 13,
#else //PBG_ADD_NEWLOGO_IMAGECHANGE
	BITMAP_TITLE_END = BITMAP_TITLE_BEGIN + 10,
#endif //PBG_ADD_NEWLOGO_IMAGECHANGE

	BITMAP_BUTTON_BEGIN,
	BITMAP_BUTTON,
	BITMAP_BUTTON_END = BITMAP_BUTTON_BEGIN + 5,

	BITMAP_MESSAGE_WIN,
	BITMAP_MSG_WIN_INPUT,

	BITMAP_SYS_WIN_BEGIN,
	BITMAP_SYS_WIN,
	BITMAP_SYS_WIN_END = BITMAP_SYS_WIN_BEGIN+5,

	BITMAP_MVP_INTERFACE_BEGIN,
	BITMAP_MVP_INTERFACE,
	BITMAP_MVP_INTERFACE_END = BITMAP_MVP_INTERFACE_BEGIN+50,	//  

	BITMAP_INTERFACE_MAP_BEGIN,
    BITMAP_INTERFACE_MAP,
	BITMAP_INTERFACE_MAP_END = BITMAP_INTERFACE_MAP_BEGIN+12,

	BITMAP_INTERFACE_EX_BEGIN,
	BITMAP_INTERFACE_EX,
	BITMAP_INTERFACE_EX_END = BITMAP_INTERFACE_EX_BEGIN+60,

	BITMAP_INTERFACE_NEW_CHATLOGWND_BEGIN,
	BITMAP_INTERFACE_NEW_CHATLOGWND_END = BITMAP_INTERFACE_NEW_CHATLOGWND_BEGIN + 8,

	BITMAP_INTERFACE_NEW_CHATINPUTBOX_BEGIN,
	BITMAP_INTERFACE_NEW_CHATINPUTBOX_END = BITMAP_INTERFACE_NEW_CHATINPUTBOX_BEGIN + 12, 

	BITMAP_INTERFACE_NEW_MAINFRAME_BEGIN,
	BITMAP_INTERFACE_NEW_MAINFRAME_END = BITMAP_INTERFACE_NEW_MAINFRAME_BEGIN + 15,
	BITMAP_INTERFACE_NEW_SKILLICON_BEGIN,
#ifdef KJH_ADD_SKILLICON_RENEWAL
#ifdef PBG_ADD_NEWCHAR_MONK_SKILL
	BITMAP_INTERFACE_NEW_SKILLICON_END = BITMAP_INTERFACE_NEW_SKILLICON_BEGIN + 10,
#else //PBG_ADD_NEWCHAR_MONK_SKILL
	BITMAP_INTERFACE_NEW_SKILLICON_END = BITMAP_INTERFACE_NEW_SKILLICON_BEGIN + 8,
#endif //PBG_ADD_NEWCHAR_MONK_SKILL
#else // KJH_ADD_SKILLICON_RENEWAL
	BITMAP_INTERFACE_NEW_SKILLICON_END = BITMAP_INTERFACE_NEW_SKILLICON_BEGIN + 4,
#endif // KJH_ADD_SKILLICON_RENEWAL

	BITMAP_INTERFACE_NEW_MESSAGEBOX_BEGIN,
	BITMAP_INTERFACE_NEW_MESSAGEBOX_END = BITMAP_INTERFACE_NEW_MESSAGEBOX_BEGIN + 17,

	BITMAP_INTERFACE_NEW_NUMBER_BEGIN,
	BITMAP_INTERFACE_NEW_NUMBER_END = BITMAP_INTERFACE_NEW_NUMBER_BEGIN + 1,

	BITMAP_INTERFACE_NEW_INVENTORY_BASE_BEGIN,
#ifdef LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY
	BITMAP_INTERFACE_NEW_INVENTORY_BASE_END = BITMAP_INTERFACE_NEW_INVENTORY_BASE_BEGIN + 13,
#else  //LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY
	BITMAP_INTERFACE_NEW_INVENTORY_BASE_END = BITMAP_INTERFACE_NEW_INVENTORY_BASE_BEGIN + 10,
#endif //LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY
	
	BITMAP_INTERFACE_NEW_PERSONALINVENTORY_BEGIN,
	BITMAP_INTERFACE_NEW_PERSONALINVENTORY_END = BITMAP_INTERFACE_NEW_PERSONALINVENTORY_BEGIN + 20,

	BITMAP_MYSHOPINTERFACE_NEW_PERSONALINVENTORY_BEGIN,
	BITMAP_MYSHOPINTERFACE_NEW_PERSONALINVENTORY_END = BITMAP_MYSHOPINTERFACE_NEW_PERSONALINVENTORY_BEGIN + 18,

	BITMAP_INTERFACE_NEW_NPCSHOP_BEGIN,
	BITMAP_INTERFACE_NEW_NPCSHOP_END,
	
	BITMAP_INTERFACE_NEW_CHAINFO_WINDOW_BEGIN,
	BITMAP_INTERFACE_NEW_CHAINFO_WINDOW_END = BITMAP_INTERFACE_NEW_CHAINFO_WINDOW_BEGIN + 5,
	
	BITMAP_INTERFACE_MYQUEST_WINDOW_BEGIN,
#ifdef ASG_MOD_UI_QUEST_INFO
	BITMAP_INTERFACE_MYQUEST_WINDOW_END = BITMAP_INTERFACE_MYQUEST_WINDOW_BEGIN + 5,
#else	// ASG_MOD_UI_QUEST_INFO
	BITMAP_INTERFACE_MYQUEST_WINDOW_END = BITMAP_INTERFACE_MYQUEST_WINDOW_BEGIN + 1,
#endif	// ASG_MOD_UI_QUEST_INFO

	BITMAP_INTERFACE_NEW_PETINFO_WINDOW_BEGIN,
	BITMAP_INTERFACE_NEW_PETINFO_WINDOW_END = BITMAP_INTERFACE_NEW_PETINFO_WINDOW_BEGIN + 5,
	
	BITMAP_INTERFACE_NEW_STORAGE_BEGIN,
	BITMAP_INTERFACE_NEW_STORAGE_END = BITMAP_INTERFACE_NEW_STORAGE_BEGIN + 5,

	BITMAP_INTERFACE_NEW_MIXINVENTORY_BEGIN,
	BITMAP_INTERFACE_NEW_MIXINVENTORY_END = BITMAP_INTERFACE_NEW_MIXINVENTORY_BEGIN + 1,
	
	BITMAP_INTERFACE_NEW_CASTLE_WINDOW_BEGIN,
	BITMAP_INTERFACE_NEW_CASTLE_WINDOW_END = BITMAP_INTERFACE_NEW_CASTLE_WINDOW_BEGIN + 2,

	BITMAP_GUILDMAKE_BEGIN,
	BITMAP_GUILDMAKE_END = BITMAP_GUILDMAKE_BEGIN + 30,

	BITMAP_GUILDINFO_BEGIN,
	BITMAP_GUILDINFO_END = BITMAP_GUILDINFO_BEGIN + 30, 

	BITMAP_INTERFACE_CRYWOLF_BEGIN,
	BITMAP_INTERFACE_CRYWOLF_END = BITMAP_INTERFACE_CRYWOLF_BEGIN + 45,

	BITMAP_INTERFACE_MASTER_BEGIN,
	BITMAP_INTERFACE_MASTER_END = BITMAP_INTERFACE_MASTER_BEGIN + 18,

	BITMAP_PARTY_INFO_BEGIN,
	BITMAP_PARTY_INFO_END = BITMAP_PARTY_INFO_BEGIN + 5,
	BITMAP_PARTY_MINILIST_BEGIN,
	BITMAP_PARTY_MINILIST_END = BITMAP_PARTY_MINILIST_BEGIN + 5,

	BITMAP_INTERFACE_NEW_TRADE_BEGIN,
	BITMAP_INTERFACE_NEW_TRADE_END = BITMAP_INTERFACE_NEW_TRADE_BEGIN + 2,

	BITMAP_INTERFACE_NEW_BLOODCASTLE_BEGIN,
	BITMAP_INTERFACE_NEW_BLOODCASTLE_END = BITMAP_INTERFACE_NEW_BLOODCASTLE_BEGIN + 5,

	BITMAP_KANTURU_INFO_BEGIN,
	BITMAP_KANTURU_INFO_END,
	
	BITMAP_CATAPULT_BEGIN,
	BITMAP_CATAPULT_END = BITMAP_CATAPULT_BEGIN + 2,
	
	BITMAP_INTERFACE_NEW_BATTLE_SOCCER_SCORE_BEGIN,
	BITMAP_INTERFACE_NEW_BATTLE_SOCCER_SCORE_END,
	
	BITMAP_WINDOW_MENU_BEGIN,
	BITMAP_WINDOW_MENU_END = BITMAP_WINDOW_MENU_BEGIN + 6,

	BITMAP_QUICKCOMMAND_BEGIN,
	BITMAP_QUICKCOMMAND_END = BITMAP_QUICKCOMMAND_BEGIN + 1,
	
	BITMAP_OPTION_BEGIN,
	BITMAP_OPTION_END = BITMAP_OPTION_BEGIN + 10,
	
	BITMAP_COMMAND_WINDOW_BEGIN,
	BITMAP_COMMAND_WINDOW_END = BITMAP_COMMAND_WINDOW_BEGIN + 2,

	BITMAP_HERO_POSITION_INFO_BEGIN,
	BITMAP_HERO_POSITION_INFO_END = BITMAP_HERO_POSITION_INFO_BEGIN + 2,
	
	BITMAP_NEWBUFF_BEGIN,
	BITMAP_NEWBUFF_END = BITMAP_NEWBUFF_BEGIN + 2,
	
	BITMAP_SIEGEWAR_BEGIN,
	BITMAP_SIEGEWAR_END = BITMAP_SIEGEWAR_BEGIN + 15,

	BITMAP_ITEM_ENDURANCE_INFO_BEGIN,
	BITMAP_ITEM_ENDURANCE_INFO_END = BITMAP_ITEM_ENDURANCE_INFO_BEGIN + 14,
	
#ifdef YDG_ADD_NEW_DUEL_WATCH_BUFF
	BITMAP_BUFFWATCH_MAINFRAME_BEGIN,
	BITMAP_BUFFWATCH_MAINFRAME_END = BITMAP_BUFFWATCH_MAINFRAME_BEGIN + 8,
	
	BITMAP_BUFFWATCH_USERLIST_BEGIN,
	BITMAP_BUFFWATCH_USERLIST_END = BITMAP_BUFFWATCH_USERLIST_BEGIN + 1,
#endif	// YDG_ADD_NEW_DUEL_WATCH_BUFF

#ifdef YDG_ADD_DOPPELGANGER_UI
	BITMAP_DOPPELGANGER_FRAME_BEGIN,
	BITMAP_DOPPELGANGER_FRAME_END = BITMAP_DOPPELGANGER_FRAME_BEGIN + 7,
#endif	// YDG_ADD_DOPPELGANGER_UI

#ifdef ASG_ADD_UI_QUEST_PROGRESS
	BITMAP_INTERFACE_QUEST_PROGRESS_BEGIN,
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	BITMAP_INTERFACE_QUEST_PROGRESS_END = BITMAP_INTERFACE_QUEST_PROGRESS_BEGIN + 1,
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	BITMAP_INTERFACE_QUEST_PROGRESS_END = BITMAP_INTERFACE_QUEST_PROGRESS_BEGIN + 8,
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
#endif	// ASG_ADD_UI_QUEST_PROGRESS

#ifdef ASG_ADD_UI_NPC_DIALOGUE
	BITMAP_INTERFACE_NPC_DIALOGUE_BEGIN,
	BITMAP_INTERFACE_NPC_DIALOGUE_END = BITMAP_INTERFACE_NPC_DIALOGUE_BEGIN + 1,
#endif	// ASG_ADD_UI_NPC_DIALOGUE

#ifdef PBG_ADD_INGAMESHOPMSGBOX
	BITMAP_IGS_CHECK_BUTTON,
	BITMAP_IGS_MSGBOX_BUTTON,
	BITMAP_IGS_MSGBOX_BUY_PACKAGE_ITEM,
	BITMAP_IGS_MSGBOX_BUY_SELECT_ITEM,
	BITMAP_IGS_MGSBOX_BUY_CONFIRM_TEXT_BOX,
	BITMAP_IGS_MSGBOX_SEND_GIFT_FRAME,
	BITMAP_IGS_MSGBOX_SEND_GIFT_DECO,
	BITMAP_IGS_MSGBOX_SEND_GIFT_INPUTTEXT,
	BITMAP_IGS_MSGBOX_STORAGE_ITEM,
	BITMAP_IGS_MSGBOX_GIFT_STORAGE_ITEM,
	
#ifdef KJH_MOD_INGAMESHOP_SELECT_CASHPOINT_SYSYEM_ONLY_GLOBAL
	BITMAP_IGS_MSGBOX_SELECT_CASHPOINT_TYPE,
	BITMAP_IGS_MSGBOX_SELECT_CHECK_BOX,
#endif // KJH_MOD_INGAMESHOP_SELECT_CASHPOINT_SYSYEM_ONLY_GLOBAL

#endif //PBG_ADD_INGAMESHOPMSGBOX

#ifdef LDK_ADD_EMPIREGUARDIAN_UI
	BITMAP_EMPIREGUARDIAN_TIMER_BEGIN,
	BITMAP_EMPIREGUARDIAN_TIMER_END,
#endif //LDK_ADD_EMPIREGUARDIAN_UI
	
	BITMAP_CURSEDTEMPLE_BEGIN,
	BITMAP_CURSEDTEMPLE_END = BITMAP_CURSEDTEMPLE_BEGIN+50,
	
	BITMAP_BUFFWINDOW_BEGIN,
	BITMAP_BUFFWINDOW_END = BITMAP_BUFFWINDOW_BEGIN+1,

	BITMAP_CURSEDTEMPLE_MONSTER_MANTLE,
	BITMAP_CURSEDTEMPLE_NPC_MESH_EFFECT,
	BITMAP_CURSEDTEMPLE_HOLYITEM_MESH_EFFECT,
	BITMAP_CURSEDTEMPLE_ALLIED_PHYSICSCLOTH,
	BITMAP_CURSEDTEMPLE_ILLUSION_PHYSICSCLOTH,
	BITMAP_CURSEDTEMPLE_EFFECT_MASKER,
	BITMAP_CURSEDTEMPLE_EFFECT_WIND,
	BITMAP_GHOST_CLOUD1,
	BITMAP_GHOST_CLOUD2,
	BITMAP_TORCH_FIRE,
	BITMAP_EVENT_CLOUD,

	BITMAP_LOGO,
	BITMAP_GUILD,
	BITMAP_TEXT_BTN,
	BITMAP_OPTION_WIN,
	BITMAP_CHECK_BTN,
	BITMAP_FONT_HIT,

#ifdef ASG_ADD_GENS_MARK
	BITMAP_GENS_MARK_DUPRIAN,
	BITMAP_GENS_MARK_BARNERT,
#endif	// ASG_ADD_GENS_MARK

#ifdef PBG_ADD_PCROOM_NEWUI
	BITMAP_PCROOM_NEWUI,
#endif //PBG_ADD_PCROOM_NEWUI
#ifdef PBG_ADD_GENSRANKING
	BITMAP_GENS_RANKBACK,
#endif //PBG_ADD_GENSRANKING

	BITMAP_INTERFACE_TEXTURE_END = 32000,
	BITMAP_EFFECT_TEXTURE_BEGIN = 32001,

	BITMAP_LIGHT_BEGIN = BITMAP_EFFECT_TEXTURE_BEGIN,
    BITMAP_LIGHT,
	BITMAP_LIGHT_END = BITMAP_LIGHT_BEGIN+15,

	BITMAP_BLUR_BEGIN,
    BITMAP_BLUR,

#ifdef LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS
	BITMAP_BLUR_END = BITMAP_BLUR_BEGIN+20,
#else // LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS
#ifdef PBG_ADD_PKFIELD
	BITMAP_BLUR_END = BITMAP_BLUR_BEGIN+4,
#else //PBG_ADD_PKFIELD
	BITMAP_BLUR_END = BITMAP_BLUR_BEGIN+3,
#endif //PBG_ADD_PKFIELD
#endif // LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS

	BITMAP_SWORD_FORCE_BEGIN,
    BITMAP_SWORD_FORCE,
	BITMAP_SWORD_FORCE_END = BITMAP_SWORD_FORCE_BEGIN+2,

	BITMAP_CHROME_BEGIN,
    BITMAP_CHROME,
	BITMAP_CHROME_END = BITMAP_CHROME_BEGIN+5,

	BITMAP_SPARK_BEGIN,
    BITMAP_SPARK,
	BITMAP_SPARK_END = BITMAP_SPARK_BEGIN+5,

	BITMAP_ENERGY_BEGIN,
    BITMAP_ENERGY,
	BITMAP_ENERGY_END = BITMAP_ENERGY_BEGIN+10,

	BITMAP_LIGHTNING_BEGIN,
    BITMAP_LIGHTNING,
	BITMAP_LIGHTNING_END = BITMAP_LIGHTNING_BEGIN+5,

	BITMAP_FIRE_BEGIN,
    BITMAP_FIRE,
	BITMAP_FIRE_END = BITMAP_FIRE_BEGIN+5,

	BITMAP_FLAME_BEGIN,
    BITMAP_FLAME,
	BITMAP_FLAME_END = BITMAP_FLAME_BEGIN+5,

	BITMAP_BLOOD_BEGIN,
    BITMAP_BLOOD,
	BITMAP_BLOOD_END = BITMAP_BLOOD_BEGIN+5,

	BITMAP_BOSS_LASER_BEGIN,
    BITMAP_BOSS_LASER,
	BITMAP_BOSS_LASER_END = BITMAP_BOSS_LASER_BEGIN+5,

	BITMAP_EXPLOTION_BEGIN,
    BITMAP_EXPLOTION,
	BITMAP_EXPLOTION_END = BITMAP_EXPLOTION_BEGIN+5,

	BITMAP_SMOKE_BEGIN,
    BITMAP_SMOKE,
	BITMAP_SMOKE_END = BITMAP_SMOKE_BEGIN+5,

	BITMAP_SHADOW_BEGIN,
    BITMAP_SHADOW,
	BITMAP_SHADOW_END = BITMAP_SHADOW_BEGIN+5,

	BITMAP_SHINY_BEGIN,
    BITMAP_SHINY,
#ifdef LDS_FIX_ACCESS_INDEXNUMBER_ALREADY_LOADTEXTURE
	BITMAP_SHINY_END = BITMAP_SHINY_BEGIN+7,
#else // LDS_FIX_ACCESS_INDEXNUMBER_ALREADY_LOADTEXTURE
	BITMAP_SHINY_END = BITMAP_SHINY_BEGIN+6,
#endif // LDS_FIX_ACCESS_INDEXNUMBER_ALREADY_LOADTEXTURE

	BITMAP_STONE_BEGIN,
    BITMAP_STONE,
	BITMAP_STONE_END = BITMAP_STONE_BEGIN+5, 

	BITMAP_FLOWER01_BEGIN,
    BITMAP_FLOWER01,
	BITMAP_FLOWER01_END = BITMAP_FLOWER01_BEGIN+4,

	BITMAP_FLARE_BEGIN,
    BITMAP_FLARE,
	BITMAP_FLARE_END = BITMAP_FLARE_BEGIN+2,

	BITMAP_JOINT_THUNDER_BEGIN,
    BITMAP_JOINT_THUNDER,
	BITMAP_JOINT_THUNDER_END = BITMAP_JOINT_THUNDER_BEGIN+2,

	BITMAP_JOINT_LASER_BEGIN,
    BITMAP_JOINT_LASER,
	BITMAP_JOINT_LASER_END = BITMAP_JOINT_LASER_BEGIN+2,

	BITMAP_MAGIC_BEGIN,
    BITMAP_MAGIC,
	BITMAP_MAGIC_END = BITMAP_MAGIC_BEGIN+3,

	BITMAP_OUR_INFLUENCE_GROUND,
	BITMAP_ENEMY_INFLUENCE_GROUND,

	BITMAP_CLOUD_BEGIN,
    BITMAP_CLOUD,
	BITMAP_CLOUD_END = BITMAP_CLOUD_BEGIN+2,

	BITMAP_BLIZZARD_BEGIN,
    BITMAP_BLIZZARD,
	BITMAP_BLIZZARD_END = BITMAP_BLIZZARD_BEGIN+3,

	BITMAP_SPOT_WATER_BEGIN,
	BITMAP_SPOT_WATER,
	BITMAP_SPOT_WATER_END = BITMAP_SPOT_WATER_BEGIN+15,

	BITMAP_DAMAGE_IMPACT_BEGIN,
	BITMAP_DAMAGE_IMPACT    ,
	BITMAP_DAMAGE_IMPACT_END = BITMAP_DAMAGE_IMPACT_BEGIN+2,

	BITMAP_MONSTER_SKIN_BEGIN,
	BITMAP_MONSTER_SKIN     ,
	BITMAP_MONSTER_SKIN_END = BITMAP_MONSTER_SKIN_BEGIN+3,

	BITMAP_TEMP_BEGIN,
	BITMAP_TEMP,
	BITMAP_TEMP_END = BITMAP_TEMP_BEGIN+30,

	BITMAP_SLIDER_BEGIN,
	BITMAP_SLIDER			,
	BITMAP_SLIDER_END = BITMAP_SLIDER_BEGIN + 3, 

    BITMAP_SAND,
    BITMAP_FIRECRACKER,
    BITMAP_FIRECRACKERRISE,
	BITMAP_FOOT,
    BITMAP_BUBBLE,
	BITMAP_JOINT_FORCE,
    BITMAP_CHROME2,
    BITMAP_GATHERING,
    BITMAP_ICE,
    BITMAP_BURN,
    BITMAP_JOINT_SPIRIT,
	BITMAP_JOINT_FIRE,
    BITMAP_JOINT_SPARK,
    BITMAP_JOINT_ENERGY,
    BITMAP_JOINT_HEALING,
    BITMAP_JANUSEXT,
    BITMAP_SKULL,
    BITMAP_PHO_R_HAIR	    ,
    BITMAP_PANTS_G_SOUL	    ,
    BITMAP_FLARE_BLUE       ,
    BITMAP_FLARE_FORCE	    ,
    BITMAP_FLARE_RED        ,
    BITMAP_WHITE_WIZARD     ,
    BITMAP_DEST_ORC_WAR0    ,
    BITMAP_DEST_ORC_WAR1    ,
    BITMAP_DEST_ORC_WAR2    ,
    BITMAP_FLASH            ,
    BITMAP_INFERNO          ,
    BITMAP_LAVA             ,
    BITMAP_FIRE_SNUFF       ,
    BITMAP_CRATER           ,
    BITMAP_FORMATION_MARK   ,
    BITMAP_PLUS             ,
	BITMAP_BLUR2			,
	BITMAP_HGBOSS_PATTERN	,
	BITMAP_HGBOSS_WING		,
	BITMAP_FISSURE_FIRE		,
	BITMAP_NIGHTMARE_EFFECT1,
	BITMAP_NIGHTMARE_EFFECT2,
	BITMAP_NIGHTMARE_ROBE   ,
	BITMAP_FENRIR_THUNDER	,
	BITMAP_FENRIR_FOOT_THUNDER1,
	BITMAP_FENRIR_FOOT_THUNDER2,
	BITMAP_FENRIR_FOOT_THUNDER3,
	BITMAP_FENRIR_FOOT_THUNDER4,
	BITMAP_FENRIR_FOOT_THUNDER5,
	BITMAP_SCOLPION_TAIL	,
	BITMAP_DS_EFFECT		,
	BITMAP_DS_SHOCK			,
	BITMAP_MAGIC_CIRCLE		,
	BITMAP_CLUD64			,
	BITMAP_BLUE_BLUR		,
	BITMAP_DEATH_SKILL		,
	BITMAP_ADV_SMOKE,
	BITMAP_SHOTGUN          ,
	BITMAP_POUNDING_BALL    ,
	BITMAP_HOLE             ,
	BITMAP_CHROME3          ,
	BITMAP_CHROME6			,
	BITMAP_CHROME7			,
	BITMAP_CHROME_ENERGY	,
	BITMAP_CHROME_ENERGY2	,
	BITMAP_3RDWING_LAYER	,
	BITMAP_CHROME8			,
	BITMAP_BLUECHROME		,
	BITMAP_PIERCING	        ,
	BITMAP_MAGIC_EMBLEM     ,
	BITMAP_DARK_LOAD_SKIRT  ,
	BITMAP_SHOCK_WAVE       ,
	BITMAP_DAMAGE_01_MONO,
	BITMAP_SWORD_EFFECT_MONO,			
	BITMAP_FLAMESTANI		,
	BITMAP_TRUE_FIRE        ,
	BITMAP_TRUE_BLUE        ,
	BITMAP_JOINT_SPIRIT2    ,
	BITMAP_PINK_WAVE        ,
	BITMAP_WATERFALL_1      ,
	BITMAP_WATERFALL_2      ,
	BITMAP_WATERFALL_3      ,
	BITMAP_WATERFALL_4      ,  
	BITMAP_WATERFALL_5      ,  
	BITMAP_IMPACT,			
	BITMAP_EFFECT			,
	BITMAP_LIGHTING			,
	BITMAP_WALL_HEAVEN		,
	BITMAP_BERSERK_EFFECT	,
	BITMAP_BERSERK_WP_EFFECT,
	BITMAP_TWINTAIL_EFFECT	,
	BITMAP_PRSONA_EFFECT	,
	BITMAP_PRSONA_EFFECT2	,
	BITMAP_TWINTAIL_WATER	,
	BITMAP_KANTURU_2ND_EFFECT1,
	BITMAP_KANTURU_2ND_NPC1	,
	BITMAP_KANTURU_2ND_NPC2	,
	BITMAP_KANTURU_2ND_NPC3	,
	BITMAP_BLADEHUNTER_EFFECT,
	BITMAP_JACK_1,	
	BITMAP_JACK_2,	
	BITMAP_SNOW_EFFECT_1,
	BITMAP_SNOW_EFFECT_2,
	BITMAP_GM_HAIR_1,
	BITMAP_GM_HAIR_3,
	BITMAP_GM_AURORA,
#ifdef CSK_FREE_TICKET
	BITMAP_FREETICKET_R,
#endif // CSK_FREE_TICKET
#ifdef CSK_CHAOS_CARD
	BITMAP_CHAOSCARD_R,
#endif // CSK_CHAOS_CARD
#ifdef CSK_RARE_ITEM
	BITMAP_RAREITEM1_R,
	BITMAP_RAREITEM2_R,
	BITMAP_RAREITEM3_R,
	BITMAP_RAREITEM4_R,
	BITMAP_RAREITEM5_R,
#endif // CSK_RARE_ITEM
#ifdef CSK_LUCKY_CHARM
	BITMAP_LUCKY_CHARM_EFFECT53,
#endif //CSK_LUCKY_CHARM
#ifdef CSK_LUCKY_SEAL
	BITMAP_LUCKY_SEAL_EFFECT43,
	BITMAP_LUCKY_SEAL_EFFECT44,
	BITMAP_LUCKY_SEAL_EFFECT45,
	BITMAP_LUCKY_SEAL_EFFECT,
#endif //CSK_LUCKY_SEAL
#if defined PSW_CHARACTER_CARD || defined PBG_ADD_CHARACTERCARD
	BITMAP_CHARACTERCARD_R,								// 캐릭터 카드
#endif // defined PSW_CHARACTER_CARD || defined PBG_ADD_CHARACTERCARD
#ifdef PBG_ADD_CHARACTERCARD
	BITMAP_CHARACTERCARD_R_MA,
	BITMAP_CHARACTERCARD_R_DA,
#endif //PBG_ADD_CHARACTERCARD
#ifdef PBG_ADD_INGAMESHOP_UI_ITEMSHOP
	BITMAP_INGAMESHOP_FRAME,
	BITMAP_INGAMESHOP_FRAME_END = BITMAP_INGAMESHOP_FRAME + 20,
	BITMAP_INGAMESHOP_BANNER,
#endif //PBG_ADD_INGAMESHOP_UI_ITEMSHOP
#ifdef PSW_NEW_CHAOS_CARD
	BITMAP_NEWCHAOSCARD_GOLD_R,
	BITMAP_NEWCHAOSCARD_RARE_R,
	BITMAP_NEWCHAOSCARD_MINI_R,
#endif // PSW_NEW_CHAOS_CARD	
#ifdef CSK_EVENT_CHERRYBLOSSOM
	BITMAP_CHERRYBLOSSOM_EVENT_PETAL,
	BITMAP_CHERRYBLOSSOM_EVENT_FLOWER,
#endif // CSK_EVENT_CHERRYBLOSSOM
	BITMAP_MAYA_BODY		,
	BITMAP_EXPLOTION_MONO	,
	BITMAP_KANTURU3RD_OBJECT,
	BITMAP_KANTURU_SUCCESS	,
	BITMAP_KANTURU_FAILED	,
	BITMAP_KANTURU_COUNTER	,
	BITMAP_ENERGY_RING		,
	BITMAP_ENERGY_FIELD		,
	BITMAP_ITEM_EFFECT_DBSTONE_R	,
	BITMAP_ITEM_EFFECT_HELLHORN_R	,
	BITMAP_ITEM_EFFECT_PFEATHER_R	,
	BITMAP_ITEM_EFFECT_DEYE_R	,
	BITMAP_ITEM_NIGHT_3RDWING_R,
	BITMAP_FIRE_RED,
	BITMAP_FIRE_CURSEDLICH,
	BITMAP_LEAF_TOTEMGOLEM,
	BITMAP_SUMMON_IMPACT,
	BITMAP_SUMMON_SAHAMUTT_EXPLOSION,
	BITMAP_ROOLOFPAPER_EFFECT_R,
	BITMAP_PIN_LIGHT,
	BITMAP_DRAIN_LIFE_GHOST,
	BITMAP_MAGIC_ZIN,
	BITMAP_ORORA,
	BITMAP_LIGHT_MARKS,
	BITMAP_TARGET_POSITION_EFFECT1,
	BITMAP_TARGET_POSITION_EFFECT2,
	BITMAP_SHADOW_PAWN_RED,
	BITMAP_SHADOW_KINGHT_BLUE,
	BITMAP_SHADOW_ROOK_GREEN,
	BITMAP_SMOKELINE1,
	BITMAP_SMOKELINE2,
	BITMAP_SMOKELINE3,
	BITMAP_LIGHTNING_MEGA1,
	BITMAP_LIGHTNING_MEGA2,
	BITMAP_LIGHTNING_MEGA3,
	BITMAP_FIRE_HIK1,
	BITMAP_FIRE_HIK3,
	BITMAP_FIRE_HIK1_MONO,
	BITMAP_FIRE_HIK2_MONO,
	BITMAP_FIRE_HIK3_MONO,
	BITMAP_SERUFAN_WAND_R,
	BITMAP_SERUFAN_ARM_R,

#ifdef LDS_RAKLION_ADDMONSTER_ICEWALKER	
	BITMAP_RAKLION_CLOUDS,
#endif // LDS_RAKLION_ADDMONSTER_ICEWALKER
#ifdef ADD_RAKLION_IRON_KNIGHT
	BITMAP_IRONKNIGHT_BODY_BRIGHT,
#endif	// ADD_RAKLION_IRON_KNIGHT
#ifdef ADD_SOCKET_ITEM
	BITMAP_SOCKETSTAFF,
	BITMAP_LIGHTMARKS,
#endif // ADD_SOCKET_ITEM
#ifdef LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE
	BITMAP_LIGHTMARKS_FOREIGN,
#endif //LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE
#ifdef PJH_SEASON4_SPRITE_NEW_SKILL_RECOVER
	BITMAP_TWLIGHT,
#endif //PJH_SEASON4_SPRITE_NEW_SKILL_RECOVER
#ifdef PJH_SEASON4_DARK_NEW_SKILL_CAOTIC
	BITMAP_2LINE_GHOST,
#endif //PJH_SEASON4_DARK_NEW_SKILL_CAOTIC
#ifdef YDG_ADD_FIRECRACKER_ITEM
	BITMAP_FIRECRACKER0001,
	BITMAP_FIRECRACKER0002,
	BITMAP_FIRECRACKER0003,
	BITMAP_FIRECRACKER0004,
	BITMAP_FIRECRACKER0005,
	BITMAP_FIRECRACKER0006,
	BITMAP_FIRECRACKER0007,
#endif	// YDG_ADD_FIRECRACKER_ITEM
#ifdef YDG_ADD_SANTA_MONSTER
	BITMAP_GOOD_SANTA,
	BITMAP_GOOD_SANTA_BAGGAGE,
#endif	// YDG_ADD_SANTA_MONSTER
#ifdef PBG_ADD_PKFIELD
	BITMAP_PKMON01,
	BITMAP_PKMON02,
	BITMAP_PKMON03,
	BITMAP_PKMON04,
	BITMAP_PKMON05,
	BITMAP_PKMON06,
	BITMAP_LAVAGIANT_FOOTPRINT_R,
	BITMAP_LAVAGIANT_FOOTPRINT_V,
	BITMAP_BUGBEAR_R,
#endif //PBG_ADD_PKFIELD
#ifdef PJH_ADD_PANDA_CHANGERING
	BITMAP_PANDABODY_R,
#endif //PJH_ADD_PANDA_CHANGERING
#ifdef YDG_ADD_DOPPELGANGER_MONSTER
	BITMAP_DOPPELGANGER_ICEWALKER0,
	BITMAP_DOPPELGANGER_ICEWALKER1,
	BITMAP_DOPPELGANGER_SNAKE01,
#endif	// YDG_ADD_DOPPELGANGER_MONSTER
#ifdef YDG_ADD_DOPPELGANGER_NPC
	BITMAP_DOPPELGANGER_GOLDENBOX1,
	BITMAP_DOPPELGANGER_GOLDENBOX2,
#endif	// YDG_ADD_DOPPELGANGER_NPC
#ifdef LDK_ADD_EG_MONSTER_DEASULER
	BITMAP_DEASULER_CLOTH,
#endif //LDK_ADD_EG_MONSTER_DEASULER
#ifdef LDS_ADD_RESOURCE_FLARERED
	BITMAP_LIGHT_RED,
#endif // LDS_ADD_RESOURCE_FLARERED
#ifdef KJH_ADD_09SUMMER_EVENT
	BITMAP_GRA,
	BITMAP_RING_OF_GRADATION,
#endif // KJH_ADD_09SUMMER_EVENT
#ifdef PBG_ADD_RAYMOND_GUARDIANPRIEST_MONSTER_EFFECT
	BITMAP_RAYMOND_SWORD,
#endif //PBG_ADD_RAYMOND_GUARDIANPRIEST_MONSTER_EFFECT
#ifdef LDK_ADD_EG_MONSTER_ASSASSINMASTER
	BITMAP_ASSASSIN_EFFECT1,
#endif //LDK_ADD_EG_MONSTER_ASSASSINMASTER
#ifdef PBG_ADD_AURA_EFFECT
	BITMAP_AG_ADDITION_EFFECT,
#endif //PBG_ADD_AURA_EFFECT
#ifdef LDK_ADD_INGAMESHOP_PACKAGE_BOX
	BITMAP_PACKAGEBOX_BLUE,
	BITMAP_PACKAGEBOX_GOLD,
	BITMAP_PACKAGEBOX_GREEN,
	BITMAP_PACKAGEBOX_PUPLE,
	BITMAP_PACKAGEBOX_RED,
	BITMAP_PACKAGEBOX_SKY,
#endif //LDK_ADD_INGAMESHOP_PACKAGE_BOX
#ifdef LDS_ADD_INGAMESHOP_ITEM_PRIMIUMSERVICE6			// MODEL_POTION+114~119
	BITMAP_INGAMESHOP_PRIMIUM6,		
#endif // LDS_ADD_INGAMESHOP_ITEM_PRIMIUMSERVICE6		// MODEL_POTION+114~119
#ifdef LDS_ADD_INGAMESHOP_ITEM_COMMUTERTICKET4			// MODEL_POTION+126~129
	BITMAP_INGAMESHOP_COMMUTERTICKET4,		
#endif // LDS_ADD_INGAMESHOP_ITEM_COMMUTERTICKET4		// MODEL_POTION+126~129
#ifdef LDS_ADD_INGAMESHOP_ITEM_SIZECOMMUTERTICKET3		// MODEL_POTION+130~132
	BITMAP_INGAMESHOP_SIZECOMMUTERTICKET3,		
#endif // LDS_ADD_INGAMESHOP_ITEM_SIZECOMMUTERTICKET3	// MODEL_POTION+130~132
	BITMAP_INGAMESHOP_PASSCHAOSCASTLE,

#ifdef PJH_ADD_MINIMAP
	BITMAP_MINI_MAP_BEGIN,
	BITMAP_MINI_MAP_END = BITMAP_MINI_MAP_BEGIN + 10,
#endif //PJH_ADD_MINIMAP

#ifdef PBG_MOD_STAMINA_UI
	BITMAP_BLUE_STAMINA_FRAME,
	BITMAP_BLUE_STAMINA_GAUGE,
	BITMAP_BLUE_STAMINA_CAUTION,
#endif //PBG_MOD_STAMINA_UI
	
	BITMAP_RGB_MIX,

#ifdef LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12
	BITMAP_RAREITEM7,
	BITMAP_RAREITEM8,
	BITMAP_RAREITEM9,
	BITMAP_RAREITEM10,
	BITMAP_RAREITEM11,
	BITMAP_RAREITEM12,
#endif //LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12

#ifdef LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH
	BITMAP_DOPPLEGANGGER_FREETICKET,
	BITMAP_BARCA_FREETICKET,
	BITMAP_BARCA7TH_FREETICKET,
#endif //LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH
	
#ifdef LJH_ADD_ITEMS_EQUIPPED_FROM_INVENTORY_SYSTEM_PART_2
	BITMAP_ORK_CHAM_LAYER_R,
	BITMAP_MAPLE_CHAM_LAYER_R,
	BITMAP_GOLDEN_ORK_CHAM_LAYER_R,
	BITMAP_GOLDEN_MAPLE_CHAM_LAYER_R,
#endif //LJH_ADD_ITEMS_EQUIPPED_FROM_INVENTORY_SYSTEM_PART_2

#ifdef PBG_ADD_NEWCHAR_MONK_ITEM
	BITMAP_SBUMB,
	BITMAP_FORCEPILLAR,
	BITMAP_SWORDEFF,
	BITMAP_DAMAGE1,
	BITMAP_GROUND_WIND,
	BITMAP_KWAVE2,
	BITMAP_DAMAGE2,
	BITMAP_VOLCANO_CORE,
	BITMAP_NCCAPE,
	BITMAP_MANTO01,
	BITMAP_MANTOE,
	BITMAP_GROUND_SMOKE,
	BITMAP_KNIGHTST_BLUE,
#endif //PBG_ADD_NEWCHAR_MONK_ITEM

#ifdef ASG_ADD_KARUTAN_MONSTERS
	BITMAP_BONE_SCORPION_SKIN_EFFECT,
	BITMAP_KRYPTA_BALL_EFFECT,
	BITMAP_CONDRA_SKIN_EFFECT,
	BITMAP_CONDRA_SKIN_EFFECT2,
	BITMAP_NARCONDRA_SKIN_EFFECT,
	BITMAP_NARCONDRA_SKIN_EFFECT2,
	BITMAP_NARCONDRA_SKIN_EFFECT3,
#endif	// ASG_ADD_KARUTAN_MONSTERS

#ifdef ASG_ADD_KARUTAN_NPC
	BITMAP_VOLO_SKIN_EFFECT,
#endif	// ASG_ADD_KARUTAN_NPC

	BITMAP_EFFECT_TEXTURE_END = 33000,
	BITMAP_NONAMED_TEXTURES_BEGIN = 33001,
	BITMAP_NONAMED_TEXTURES_END = 0x7FFFFFFF,
};

#endif // _TEXTURE_INDEX_H_