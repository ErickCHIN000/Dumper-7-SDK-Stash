#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECollisionLimb : uint8
{
	COLLIMB_None                   = 0,
	COLLIMB_Head                   = 1,
	COLLIMB_LArm                   = 2,
	COLLIMB_RArm                   = 3,
	COLLIMB_LLeg                   = 4,
	COLLIMB_RLeg                   = 5,
	COLLIMB_Body                   = 6,
	COLLIMB_LLowArm                = 7,
	COLLIMB_RLowArm                = 8,
	COLLIMB_LLowLeg                = 9,
	COLLIMB_RLowLeg                = 10,
	COLLIMB_LHead                  = 11,
	COLLIMB_RHead                  = 12,
	COLLIMB_MAX                    = 13,
};

enum class EMeleeHitDirection : uint8
{
	HITDIR_None                    = 0,
	HITDIR_Up                      = 1,
	HITDIR_UpRight                 = 2,
	HITDIR_Right                   = 3,
	HITDIR_DownRight               = 4,
	HITDIR_Down                    = 5,
	HITDIR_DownLeft                = 6,
	HITDIR_Left                    = 7,
	HITDIR_UpLeft                  = 8,
	HITDIR_MAX                     = 9,
};

enum class EFPAnimSystemActivity : uint8
{
	None                           = 0,
	Show                           = 1,
	Hide                           = 2,
	Activate                       = 3,
	AlternativeActivate            = 4,
	EFPAnimSystemActivity_MAX      = 5,
};

enum class EState : uint8
{
	Idle                           = 0,
	Using                          = 1,
	Hidden                         = 2,
	Switching                      = 3,
	Disabled                       = 4,
	Other                          = 5,
	EState_MAX                     = 6,
};

enum class EHealthPhase : uint8
{
	PHASE0                         = 0,
	PHASE1                         = 1,
	PHASE2                         = 2,
	MAX                            = 3,
};

enum class EQTEType : uint8
{
	PressButton                    = 0,
	HoldButton                     = 1,
	RotateStick                    = 2,
	PressAxis                      = 3,
	HoldAxis                       = 4,
	EQTEType_MAX                   = 5,
};

enum class EActiveItemActivationType : uint8
{
	ACTIVATIONTYPE_Active          = 0,
	ACTIVATIONTYPE_Alternative     = 1,
	ACTIVATIONTYPE_MAX             = 2,
};

enum class EVirtuaShotType : uint8
{
	VIRTUASHOTTYPE_MIN             = 0,
	VIRTUASHOTTYPE_Normal          = 1,
	VIRTUASHOTTYPE_Super           = 2,
	VIRTUASHOTTYPE_MAX             = 3,
};

enum class ESquadType : uint8
{
	SQUADTYPE_MIN                  = 0,
	SQUADTYPE_Patrol               = 1,
	SQUADTYPE_Alert                = 2,
	SQUADTYPE_Hunt                 = 3,
	SQUADTYPE_Chase                = 4,
	SQUADTYPE_MAX                  = 5,
};

enum class EAlertRaiseReason : uint8
{
	ALERTREASON_HeroPerception     = 0,
	ALERTREASON_DeadBody           = 1,
	ALERTREASON_AIvsAIPerception   = 2,
	ALERTREASON_HeroNoise          = 3,
	ALERTREASON_MAX                = 4,
};

enum class EPropertyLinkResult : uint8
{
	PropertyLinkResult_Good        = 0,
	PropertyLinkResult_Failed      = 1,
	PropertyLinkResult_InvalidFile = 2,
	PropertyLinkResult_MAX         = 3,
};

enum class EEventMap : uint8
{
	BASE                           = 0,
	EYEOFMOSCOW                    = 1,
	KOPACI                         = 2,
	PRIPYAT                        = 3,
	LENINSQUARE                    = 4,
	POWERPLANT                     = 5,
	TRANSITIONAL                   = 6,
	FRACTALTHEATER                 = 7,
	REDFOREST                      = 8,
	FRACTALWORLD                   = 9,
	FRACTALTIMELINE                = 10,
	PRIPYATCENTRAL                 = 11,
	DREAMBEGINNING                 = 12,
	TRANSITIONALOLIVIER            = 13,
	JAILBASE                       = 14,
	HEIST                          = 15,
	FRACTALVR                      = 16,
	COOLINGTOWERS                  = 17,
	MAX                            = 18,
};

enum class EDLCType : uint8
{
	NONE                           = 0,
	DLC_1                          = 1,
	DLC_2                          = 2,
	DLC_3                          = 3,
	DLC_4                          = 4,
	DLC_5                          = 5,
	DLC_6                          = 6,
	DLC_7                          = 7,
	DLC_8_BlueFlames               = 8,
	DLC_9_RedTress                 = 9,
	DLC_10_GreenWalls              = 10,
	MAX                            = 11,
};

enum class EQuickMenuSlot : uint8
{
	UP                             = 0,
	RIGHT                          = 1,
	DOWN                           = 2,
	LEFT                           = 3,
	UP2                            = 4,
	RIGHT2                         = 5,
	DOWN2                          = 6,
	LEFT2                          = 7,
	MAX                            = 8,
};

enum class EAchievementType : uint8
{
	ACHIEVEMENTTYPE_ChernobyliteCommunion = 0,
	ACHIEVEMENTTYPE_BrokenCycle    = 1,
	ACHIEVEMENTTYPE_DarkTourist    = 2,
	ACHIEVEMENTTYPE_QueenOfTheForest = 3,
	ACHIEVEMENTTYPE_ThiefInLaw     = 4,
	ACHIEVEMENTTYPE_KingOfMice     = 5,
	ACHIEVEMENTTYPE_WoundedWarrior = 6,
	ACHIEVEMENTTYPE_ThreeMusketeers = 7,
	ACHIEVEMENTTYPE_NotALittleBoy  = 8,
	ACHIEVEMENTTYPE_ManFromThePastWithAPast = 9,
	ACHIEVEMENTTYPE_BlackMaskWearingMotherfucker = 10,
	ACHIEVEMENTTYPE_YouCannotChangeThePast = 11,
	ACHIEVEMENTTYPE_RatTrap        = 12,
	ACHIEVEMENTTYPE_AndDangerous   = 13,
	ACHIEVEMENTTYPE_IndustrialAge  = 14,
	ACHIEVEMENTTYPE_ChernobyliteAge = 15,
	ACHIEVEMENTTYPE_Conspiracy     = 16,
	ACHIEVEMENTTYPE_WebOfLies      = 17,
	ACHIEVEMENTTYPE_BlackStalker   = 18,
	ACHIEVEMENTTYPE_WomanInRedDress = 19,
	ACHIEVEMENTTYPE_InABind        = 20,
	ACHIEVEMENTTYPE_GuerillaWar    = 21,
	ACHIEVEMENTTYPE_ATurningPoint  = 22,
	ACHIEVEMENTTYPE_LikeMenOfScience = 23,
	ACHIEVEMENTTYPE_AGiantTurtle   = 24,
	ACHIEVEMENTTYPE_HeartIsALonelyHunter = 25,
	ACHIEVEMENTTYPE_FoolsRushIn    = 26,
	ACHIEVEMENTTYPE_AllVolunteers  = 27,
	ACHIEVEMENTTYPE_TinyDancer     = 28,
	ACHIEVEMENTTYPE_TheRatcatcher  = 29,
	ACHIEVEMENTTYPE_LivingDangerously = 30,
	ACHIEVEMENTTYPE_NotEveryoneDeservesToDie = 31,
	ACHIEVEMENTTYPE_AHunterWentForAWalk = 32,
	ACHIEVEMENTTYPE_TheRightCall   = 33,
	ACHIEVEMENTTYPE_BringTheDust   = 34,
	ACHIEVEMENTTYPE_MAX            = 35,
};

enum class EResourceType : uint8
{
	Mushrooms                      = 0,
	Chemicals                      = 1,
	ElectronicalParts              = 2,
	Flammable                      = 3,
	Herbs                          = 4,
	MechanicalParts                = 5,
	FoodRation                     = 6,
	MAX                            = 7,
};

enum class EBuldEntryType : uint8
{
	CORE                           = 0,
	MORALE                         = 1,
	STORAGE                        = 2,
	EBuldEntryType_MAX             = 3,
};

enum class EBuildCategory : uint8
{
	WORKSHOP                       = 0,
	COMMON                         = 1,
	TECHNICAL                      = 2,
	SUPPLY                         = 3,
	MEDICAL                        = 4,
	TRASH                          = 5,
	FIELD                          = 6,
	MAX                            = 7,
};

enum class EBuildSystemStatTier : uint8
{
	BUILDSYSTEMSTATTIER_HighlyNegative = 0,
	BUILDSYSTEMSTATTIER_Negative   = 1,
	BUILDSYSTEMSTATTIER_SlightlyNegative = 2,
	BUILDSYSTEMSTATTIER_Default    = 3,
	BUILDSYSTEMSTATTIER_SlightlyPositive = 4,
	BUILDSYSTEMSTATTIER_MAX        = 5,
};

enum class EBuildSystemStatType : uint8
{
	BUILDSYSTEMSTATTYPE_Comfort    = 0,
	BUILDSYSTEMSTATTYPE_Air        = 1,
	BUILDSYSTEMSTATTYPE_Radiation  = 2,
	BUILDSYSTEMSTATTYPE_Power      = 3,
	BUILDSYSTEMSTATTYPE_Sleeping   = 4,
	BUILDSYSTEMSTATTYPE_MAX        = 5,
};

enum class ETransitionalMode : uint8
{
	TRANSMODE_Normal               = 0,
	TRANSMODE_Damaged              = 1,
	TRANSMODE_TotalDeath           = 2,
	TRANSMODE_MAX                  = 3,
};

enum class ECompanionEquipmentSlotType : uint8
{
	COMPANIONEQUIPMENTTYPE_MIN     = 0,
	COMPANIONEQUIPMENTTYPE_Weapon  = 1,
	COMPANIONEQUIPMENTTYPE_Armor   = 2,
	COMPANIONEQUIPMENTTYPE_MAX     = 3,
};

enum class ECustomSaveType : uint8
{
	CUSTOMSAVETYPE_MIN             = 0,
	CUSTOMSAVETYPE_ManualSave      = 1,
	CUSTOMSAVETYPE_QuickSave       = 2,
	CUSTOMSAVETYPE_AutoSave        = 3,
	CUSTOMSAVETYPE_GateOfMadnessBackup = 4,
	CUSTOMSAVETYPE_MAX             = 5,
};

enum class EQuestCategoryType : uint8
{
	None                           = 0,
	GhostsOfThePast                = 1,
	EQuestCategoryType_MAX         = 2,
};

enum class EMissionResult : uint8
{
	VERYBAD                        = 0,
	BAD                            = 1,
	GOOD                           = 2,
	VERYGOOD                       = 3,
	EMissionResult_MAX             = 4,
};

enum class EBuffGroup : uint8
{
	OTHER                          = 0,
	HEALTH                         = 1,
	MORAL                          = 2,
	EBuffGroup_MAX                 = 3,
};

enum class EBuffType : uint8
{
	NORMAL                         = 0,
	WARNINGBUFF                    = 1,
	ERRORBUFF                      = 2,
	GOOD                           = 3,
	EBuffType_MAX                  = 4,
};

enum class EDayPart : uint8
{
	MORNING                        = 0,
	AFTERNOON                      = 1,
	EVENING                        = 2,
	EDayPart_MAX                   = 3,
};

enum class EDifficultyModifierType : uint8
{
	DIFFICULTYMODIFIER_MIN         = 0,
	DIFFICULTYMODIFIER_SoldierHealth = 1,
	DIFFICULTYMODIFIER_MonsterHealth = 2,
	DIFFICULTYMODIFIER_SoldierLaserLoading = 3,
	DIFFICULTYMODIFIER_SoldierShootingDelayMin = 4,
	DIFFICULTYMODIFIER_SoldierShootingDelayMax = 5,
	DIFFICULTYMODIFIER_SoldierMaxShooters = 6,
	DIFFICULTYMODIFIER_ShadowAttackSpeed = 7,
	DIFFICULTYMODIFIER_ShadowSpawnByThePlayer = 8,
	DIFFICULTYMODIFIER_ChernohostAttackSpeed = 9,
	DIFFICULTYMODIFIER_ChernohostAttraction = 10,
	DIFFICULTYMODIFIER_DusterProjectileSpeed = 11,
	DIFFICULTYMODIFIER_StealthVisibilityRange = 12,
	DIFFICULTYMODIFIER_StealthThreatIncreaseSpeed = 13,
	DIFFICULTYMODIFIER_AdditionalLoot = 14,
	DIFFICULTYMODIFIER_MAX         = 15,
};

enum class EBuildRestrictedGameModes : uint8
{
	NONE                           = 0,
	NORMAL                         = 1,
	GATE_OF_MADNESS                = 2,
	GATE_OF_MADNESS_COMBAT         = 3,
	GATE_OF_MADNESS_SURVIVAL       = 4,
	GATE_OF_MADNESS_MANAGEMENT     = 5,
	EBuildRestrictedGameModes_MAX  = 6,
};

enum class EMonsterEventType : uint8
{
	MIN                            = 0,
	NONE                           = 1,
	BORDERER                       = 2,
	CHERNOHOST                     = 3,
	DUSTER                         = 4,
	MAX                            = 5,
};

enum class ESoliderLevelType : uint8
{
	MIN                            = 0,
	SOLDIER                        = 1,
	COMMANDO                       = 2,
	SHOTGUN                        = 3,
	ELITE                          = 4,
	SUPER_SHOTGUN                  = 5,
	MAX                            = 6,
};

enum class EQuickSaveResult : uint8
{
	QUICKSAVERESULT_SUCCESS        = 0,
	QUICKSAVERESULT_FAILED         = 1,
	QUICKSAVERESULT_ONLY_COPY      = 2,
	QUICKSAVERESULT_MAX            = 3,
};

enum class EPlayerAction : uint8
{
	COMPROMISE                     = 0,
	OPPORTUNISM                    = 1,
	KNOWLEDGE                      = 2,
	GROWTHHIDEOUT                  = 3,
	EPlayerAction_MAX              = 4,
};

enum class EUpgradeType : uint8
{
	None                           = 0,
	Pistol                         = 1,
	Shotgun                        = 2,
	AK47                           = 3,
	Railgun                        = 4,
	Crossbow                       = 5,
	Makarov                        = 6,
	EUpgradeType_MAX               = 7,
};

enum class ECGMap : uint8
{
	CGMAP_None                     = 0,
	CGMAP_Kopachi                  = 1,
	CGMAP_RedForest                = 2,
	CGMAP_MoscowEye                = 3,
	CGMAP_PripyatPort              = 4,
	CGMAP_PripyatCentral           = 5,
	CGMAP_Dream                    = 6,
	CGMAP_Base                     = 7,
	CGMAP_Heist                    = 8,
	CGMAP_Fractal                  = 9,
	CGMAP_Powerplant               = 10,
	CGMAP_Jail                     = 11,
	CGMAP_Fractal1                 = 12,
	CGMAP_Fractal2                 = 13,
	CGMAP_Fractal3                 = 14,
	CGMAP_Fractal4                 = 15,
	CGMAP_FractalTimeline          = 16,
	CGMAP_AriadnaDevice            = 17,
	CGMAP_PripyatResidential       = 18,
	CGMAP_FractalVR                = 19,
	CGMAP_CoolingTowers            = 20,
	CGMAP_MAX                      = 21,
};

enum class EEventType : uint8
{
	PLAYERACTION                   = 0,
	PROBABILITY                    = 1,
	ACTIVATION                     = 2,
	EEventType_MAX                 = 3,
};

enum class EEventCategory : uint8
{
	Crisis                         = 0,
	Mystery                        = 1,
	Joke                           = 2,
	Danger                         = 3,
	Creature                       = 4,
	Mission                        = 5,
	Girl                           = 6,
	Soldiers                       = 7,
	Freestuff                      = 8,
	Weird                          = 9,
	Epic                           = 10,
	Hacking                        = 11,
	Lockpicking                    = 12,
	Reagent                        = 13,
	Trader                         = 14,
	Food                           = 15,
	Hallucination                  = 16,
	Autoclimb                      = 17,
	Gas                            = 18,
	Ammunition                     = 19,
	Badmorale                      = 20,
	Goodmorale                     = 21,
	SmallEvent                     = 22,
	MAX                            = 23,
};

enum class ECategoryForEvent : uint8
{
	NATURALDANGER                  = 0,
	NEUTRAL                        = 1,
	TATYANA                        = 2,
	HORROR                         = 3,
	JUMPSCARES                     = 4,
	MAX                            = 5,
};

enum class EEventOccurrence : uint8
{
	SingleUse                      = 0,
	Repeated                       = 1,
	Periodic                       = 2,
	EEventOccurrence_MAX           = 3,
};

enum class EQuickSaveMode : uint8
{
	QUICKSAVEMODE_CopyLastSave     = 0,
	QUICKSAVEMODE_FullSave         = 1,
	QUICKSAVEMODE_MAX              = 2,
};

enum class EStaticBuff : uint8
{
	CheaperTools                   = 0,
	BetterFilters                  = 1,
	BetterMedkits                  = 2,
	CheaperFoodDoses               = 3,
	BetterBattery                  = 4,
	EStaticBuff_MAX                = 5,
};

enum class EArmorStatType : uint8
{
	ARMORSTATTYPE_Protection       = 0,
	ARMORSTATTYPE_MovementNoise    = 1,
	ARMORSTATTYPE_Camouflage       = 2,
	ARMORSTATTYPE_MAX              = 3,
};

enum class EBuildSystemDecalType : uint8
{
	RANGE                          = 0,
	DAMAGE                         = 1,
	EBuildSystemDecalType_MAX      = 2,
};

enum class EBuildType : uint8
{
	WALL                           = 0,
	FLOOR                          = 1,
	CEIL                           = 2,
	EBuildType_MAX                 = 3,
};

enum class EPerkCategory : uint8
{
	Unity                          = 0,
	Fight                          = 1,
	Survival                       = 2,
	MAX                            = 3,
};

enum class ECompanionDecisionResultType : uint8
{
	COMPANIONDECISIONRESULTTYPE_MIN = 0,
	COMPANIONDECISIONRESULTTYPE_Positive = 1,
	COMPANIONDECISIONRESULTTYPE_Negative = 2,
	COMPANIONDECISIONRESULTTYPE_MAX = 3,
};

enum class ECompanionStatType : uint8
{
	COMPANIONSTATTYPE_MIN          = 0,
	COMPANIONSTATTYPE_Resistance   = 1,
	COMPANIONSTATTYPE_Combat       = 2,
	COMPANIONSTATTYPE_Artifice     = 3,
	COMPANIONSTATTYPE_Perception   = 4,
	COMPANIONSTATTYPE_Intelligence = 5,
	COMPANIONSTATTYPE_MAX          = 6,
};

enum class EDialogueTimelinePayloadNARActivityChangeType : uint8
{
	NONE                           = 0,
	LOWERED                        = 1,
	RAISED                         = 2,
	EDialogueTimelinePayloadNARActivityChangeType_MAX = 3,
};

enum class EDialogueTimelinePayloadCompanionReactionType : uint8
{
	POSITIVE                       = 0,
	NEGATIVE                       = 1,
	EDialogueTimelinePayloadCompanionReactionType_MAX = 2,
};

enum class EItemCategory : uint8
{
	Unspecified                    = 0,
	Gun                            = 1,
	Medicament                     = 2,
	Resource                       = 3,
	Usable                         = 4,
	Amunition                      = 5,
	Armor                          = 6,
	Common                         = 7,
	EItemCategory_MAX              = 8,
};

enum class ESoundCategory : uint8
{
	Default                        = 0,
	Gun                            = 1,
	Book                           = 2,
	Ammo                           = 3,
	Plant                          = 4,
	Bottle                         = 5,
	Chernobylite                   = 6,
	Flammable                      = 7,
	FoodRation                     = 8,
	Medicine                       = 9,
	ESoundCategory_MAX             = 10,
};

enum class EScannableResourceType : uint8
{
	Mushrooms                      = 0,
	Chemicals                      = 1,
	ElectronicalParts              = 2,
	Flammable                      = 3,
	Herbs                          = 4,
	MechanicalParts                = 5,
	FoodRation                     = 6,
	Other                          = 7,
	Soldier                        = 8,
	MAX                            = 9,
};

enum class EAreaID : uint8
{
	A                              = 0,
	B                              = 1,
	C                              = 2,
	D                              = 3,
	E                              = 4,
	F                              = 5,
	G                              = 6,
	H                              = 7,
	I                              = 8,
	J                              = 9,
	K                              = 10,
	MAX                            = 11,
};

enum class EType : uint8
{
	Usable                         = 0,
	NonUsable                      = 1,
	EType_MAX                      = 2,
};

enum class EAIWalkType : uint8
{
	WALKTYPE_None                  = 0,
	WALKTYPE_RunNeutral            = 1,
	WALKTYPE_RunStealth            = 2,
	WALKTYPE_WalkNeutral           = 3,
	WALKTYPE_WalkStealth           = 4,
	WALKTYPE_MAX                   = 5,
};

enum class EAIInnerState : uint8
{
	AISTATE_SOLDIER_HUNT_InterrogationWalkUp = 0,
	AISTATE_SOLDIER_HUNT_InterrogationDialogue = 1,
	AISTATE_SOLDIER_HUNT_Attack    = 2,
	AISTATE_SOLDIER_HUNT_Chase     = 3,
	AISTATE_SOLDIER_HUNT_SquadStandby = 4,
	AISTATE_SOLDIER_PATROL_ReturningToPatrol = 5,
	AISTATE_SOLDIER_PATROL_Patrol  = 6,
	AISTATE_GLOBAL_CustomSequence  = 7,
	AISTATE_GLOBAL_Standby         = 8,
	AISTATE_SHADOW_HUNT_LeftArea   = 9,
	AISTATE_SHADOW_HUNT_Hunt       = 10,
	AISTATE_DSTALKER_PATROL_Initial = 11,
	AISTATE_DSTALKER_PATROL_Patrol = 12,
	AISTATE_DSTALKER_PATROL_Search = 13,
	AISTATE_DSTALKER_HUNT_Attack   = 14,
	AISTATE_DSTALKER_HUNT_FakeAttack = 15,
	AISTATE_DSTALKER_PATROL_InPatrol = 16,
	AISTATE_DSTALKER_PATROL_OutPatrol = 17,
	AISTATE_Reach                  = 18,
	AISTATE_None                   = 19,
	AISTATE_SOLDIER_HUNT_CoverLoop = 20,
	AISTATE_SOLDIER_HUNT_CopAim    = 21,
	AISTATE_SOLDIER_HUNT_CopAimCover = 22,
	AISTATE_SOLDIER_HUNT_MeleeReach = 23,
	AISTATE_SOLDIER_HUNT_MeleeAttack = 24,
	AISTATE_SOLDIER_HUNT_MeleeBack = 25,
	AISTATE_SOLDIER_ALERT_Approach = 26,
	AISTATE_SOLDIER_ALERT_Reached  = 27,
	AISTATE_SOLDIER_ALERT_Blank    = 28,
	AISTATE_SOLDIER_HUNT_ArrestAttempt = 29,
	AISTATE_SOLDIER_HUNT_ArrestAttemptObserver = 30,
	AISTATE_DSTALKER_HUNT_Recovery = 31,
	AISTATE_HUNT_Evade             = 32,
	AISTATE_PATROLLER_HUNT_OpenCrouch = 33,
	AISTATE_PATROL_In              = 34,
	AISTATE_PATROL_Loop            = 35,
	AISTATE_PATROL_Out             = 36,
	AISTATE_CHERNOHOST_HUNT_Hunt   = 37,
	AISTATE_CHERNOHOST_PATROL_InWall = 38,
	AISTATE_CHERNOHOST_PATROL_Patrol = 39,
	AISTATE_CHERNOHOST_PATROL_HeroLost = 40,
	AISTATE_CHERNOHOST_PATROL_Teleporting = 41,
	AISTATE_DUSTER_IDLE_Idle       = 42,
	AISTATE_DUSTER_COMBAT_Combat   = 43,
	AISTATE_DUSTER_TRANS_Base      = 44,
	AISTATE_DUSTER_TRANS_In        = 45,
	AISTATE_DUSTER_TRANS_Trans     = 46,
	AISTATE_DUSTER_TRANS_Out       = 47,
	AISTATE_DUSTER_COMBAT_Attack   = 48,
	AISTATE_CHERNOHOST_PATROL_PortalInto = 49,
	AISTATE_CHERNOHOST_PATROL_PortalIn = 50,
	AISTATE_CHERNOHOST_PATROL_PortalFrom = 51,
	AISTATE_CHERNOHOST_HUNT_Notice = 52,
	AISTATE_CHERNOHOST_HUNT_Approach = 53,
	AISTATE_CHERNOHOST_HUNT_Attack = 54,
	AISTATE_CHERNOHOST_HUNT_Retreat = 55,
	AISTATE_CHERNOHOST_HUNT_RetreatEnter = 56,
	AISTATE_CHERNOHOST_HUNT_RetreatMove = 57,
	AISTATE_CHERNOHOST_HUNT_RetreatPortalIn = 58,
	AISTATE_CHERNOHOST_PATROL_Walk = 59,
	AISTATE_SOLDIER_HUNT_CoverReachBlend = 60,
	AISTATE_SOLDIER_HUNT_CoverTrans = 61,
	AISTATE_SOLDIER_HUNT_CoverToShoot = 62,
	AISTATE_SOLDIER_HUNT_CoverShoot = 63,
	AISTATE_SOLDIER_HUNT_CoverFromShoot = 64,
	AISTATE_SOLDIER_FROZEN_MonsterFrozen = 65,
	AISTATE_DSTALKER_PATROL_TPLoop = 66,
	AISTATE_DSTALKER_PATROL_TPIn   = 67,
	AISTATE_DSTALKER_PATROL_TPOut  = 68,
	AISTATE_DSTALKER_ALERT_Stand   = 69,
	AISTATE_DSTALKER_ALERT_TPIn    = 70,
	AISTATE_DSTALKER_ALERT_TPLoop  = 71,
	AISTATE_DSTALKER_ALERT_TPOut   = 72,
	AISTATE_DSTALKER_HUNT_TPIn     = 73,
	AISTATE_DSTALKER_HUNT_TPLoop   = 74,
	AISTATE_DSTALKER_HUNT_TPOut    = 75,
	AISTATE_SOLDIER_HUNT_ChaseReached = 76,
	AISTATE_MAX                    = 77,
};

enum class EAIStateSoundEventType : uint8
{
	AISTATESOUNDEVENTTYPE_None     = 0,
	AISTATESOUNDEVENTTYPE_Idle     = 1,
	AISTATESOUNDEVENTTYPE_ToAttack = 2,
	AISTATESOUNDEVENTTYPE_Attack   = 3,
	AISTATESOUNDEVENTTYPE_ReceiveDamage = 4,
	AISTATESOUNDEVENTTYPE_Death    = 5,
	AISTATESOUNDEVENTTYPE_MAX      = 6,
};

enum class EAIStateType : uint8
{
	AISTATETYPE_None               = 0,
	AISTATETYPE_HuntAI             = 1,
	AISTATETYPE_Idle               = 2,
	AISTATETYPE_Patrol             = 3,
	AISTATETYPE_Alert              = 4,
	AISTATETYPE_Hunt               = 5,
	AISTATETYPE_Chase              = 6,
	AISTATETYPE_MAX                = 7,
};

enum class EAIState : uint8
{
	AISTATE_Idle                   = 0,
	AISTATE_Stunned                = 1,
	AISTATE_Patrol                 = 2,
	AISTATE_Hunt                   = 3,
	AISTATE_None                   = 4,
	AISTATE_Global                 = 5,
	AISTATE_Cover                  = 6,
	AISTATE_Alert                  = 7,
	AISTATE_Frozen                 = 8,
	AISTATE_MAX                    = 9,
};

enum class EStateAggressivenessOverride : uint8
{
	AGGRESSIVENESSOVERRIDE_None    = 0,
	AGGRESSIVENESSOVERRIDE_NoAggro = 1,
	AGGRESSIVENESSOVERRIDE_MAX     = 2,
};

enum class EFiremode : uint8
{
	FIREMODE_Default               = 0,
	FIREMODE_SemiAutomatic         = 1,
	FIREMODE_FullAutomatic         = 2,
	FIREMODE_Three                 = 3,
	FIREMODE_MAX                   = 4,
};

enum class EDamageCollider : uint8
{
	DMGCOL_LeftArm                 = 0,
	DMGCOL_RightArm                = 1,
	DMGCOL_LeftLeg                 = 2,
	DMGCOL_RightLeg                = 3,
	DMGCOL_Head                    = 4,
	DMGCOL_MAX                     = 5,
};

enum class ECustomMovementMode : uint8
{
	CMOVE_Sprint                   = 0,
	CMOVE_Aim                      = 1,
	CMOVE_Lean                     = 2,
	CMOVE_AimCrouched              = 3,
	CMOVE_MAX                      = 4,
};

enum class ECorsairVolumeType : uint8
{
	INDOORS                        = 0,
	LABS                           = 1,
	ECorsairVolumeType_MAX         = 2,
};

enum class EFadeDirection : uint8
{
	FADE_ToFade                    = 0,
	FADE_OutFade                   = 1,
	FADE_MAX                       = 2,
};

enum class EGibActorType : uint8
{
	EGIBACTORTYPE_Detached         = 0,
	EGIBACTORTYPE_Attached         = 1,
	EGIBACTORTYPE_MAX              = 2,
};

enum class EGibMaterialUpdateMode : uint8
{
	GIBMATERIALUPDATEMODE_None     = 0,
	GIBMATERIALUPDATEMODE_HealthyMesh = 1,
	GIBMATERIALUPDATEMODE_Detached = 2,
	GIBMATERIALUPDATEMODE_MAX      = 3,
};

enum class EPhotoModeUIState : uint8
{
	None                           = 0,
	UI                             = 1,
	FreeCamera                     = 2,
	EPhotoModeUIState_MAX          = 3,
};

enum class EShadowTeleportType : uint8
{
	ESHADOWTELEPORTTYPE_Vertical   = 0,
	ESHADOWTELEPORTTYPE_Horizontal = 1,
	ESHADOWTELEPORTTYPE_MAX        = 2,
};

enum class ENewGameMenuPopupType : uint8
{
	NEWGAMEMENUPOPUP_None          = 0,
	NEWGAMEMENUPOPUP_NewGame       = 1,
	NEWGAMEMENUPOPUP_GateOfMadness = 2,
	NEWGAMEMENUPOPUP_MAX           = 3,
};

enum class ECorsairHookName : uint8
{
	SDKL_PulseStarGreen            = 0,
	SDKL_Corrosive                 = 1,
	SDKL_AlertEdgesRed             = 2,
	SDKL_AlertEdgesGreen           = 3,
	SDKL_BloodSplatter             = 4,
	SDKL_SplashRed                 = 5,
	SDKL_Smoke                     = 6,
	SDKL_Gas                       = 7,
	SDKL_Alarm                     = 8,
	SDKL_EnvAutumn                 = 9,
	SDKL_PulseBarGreen             = 10,
	SDKL_EnvDarkGrey               = 11,
	SDKL_UnderwaterCyan            = 12,
	SDKL_EnvDarkBlue               = 13,
	SDKL_Fog                       = 14,
	SDKL_PulseBarRed               = 15,
	SDKL_MAX                       = 16,
};

enum class ECorsairHookType : uint8
{
	CorsairHook_Event              = 0,
	CorsairHook_State              = 1,
	CorsairHook_MAX                = 2,
};

enum class EBasicResultType : uint8
{
	NONE                           = 0,
	POSITIVE                       = 1,
	NEGATIVE                       = 2,
	EBasicResultType_MAX           = 3,
};

enum class EScalabilityType : uint8
{
	SCALABILITYTYPE_ViewDistanceQuality = 0,
	SCALABILITYTYPE_AntiAliasingQuality = 1,
	SCALABILITYTYPE_ShadowQuality  = 2,
	SCALABILITYTYPE_PostProcessQuality = 3,
	SCALABILITYTYPE_TextureQuality = 4,
	SCALABILITYTYPE_EffectsQuality = 5,
	SCALABILITYTYPE_FoliageQuality = 6,
	SCALABILITYTYPE_ShadingQuality = 7,
	SCALABILITYTYPE_GeometryQuality = 8,
	SCALABILITYTYPE_MAX            = 9,
};

enum class EMissionResultLabelType : uint8
{
	MISSIONRESULTLABEL_Lack        = 0,
	MISSIONRESULTLABEL_Success     = 1,
	MISSIONRESULTLABEL_Fail        = 2,
	MISSIONRESULTLABEL_MAX         = 3,
};

enum class EAITimerCustomFrameType : uint8
{
	AITIMERCUSTOMFRAMETYPE_Red     = 0,
	AITIMERCUSTOMFRAMETYPE_Yellow  = 1,
	AITIMERCUSTOMFRAMETYPE_Green   = 2,
	AITIMERCUSTOMFRAMETYPE_MAX     = 3,
};

enum class EAIScheduledActionType : uint8
{
	SCHEDULEDACTIONTYPE_None       = 0,
	SCHEDULEDACTIONTYPE_AttackPlayer = 1,
	SCHEDULEDACTIONTYPE_MAX        = 2,
};

enum class ECompanionFrameStatusSoundType : uint8
{
	COMPANIONFRAMESTATUSSOUND_Adversarial = 0,
	COMPANIONFRAMESTATUSSOUND_Improvement = 1,
	COMPANIONFRAMESTATUSSOUND_Deteriorate = 2,
	COMPANIONFRAMESTATUSSOUND_MAX  = 3,
};

enum class ECompanionIndicatorType : uint8
{
	COMPANIONINDICATORTYPE_Infiltrator = 0,
	COMPANIONINDICATORTYPE_Spy     = 1,
	COMPANIONINDICATORTYPE_Sniper  = 2,
	COMPANIONINDICATORTYPE_Technician = 3,
	COMPANIONINDICATORTYPE_MAX     = 4,
};

enum class ECGMusicExplorationMode : uint8
{
	CGMUSICEXPLORATIONMODE_None    = 0,
	CGMUSICEXPLORATIONMODE_Neutral = 1,
	CGMUSICEXPLORATIONMODE_Pivot   = 2,
	CGMUSICEXPLORATIONMODE_Dark    = 3,
	CGMUSICEXPLORATIONMODE_MAX     = 4,
};

enum class ECGMapMusicEvent : uint8
{
	CGMAPMUSICEVENT_None           = 0,
	CGMAPMUSICEVENT_Mystery        = 1,
	CGMAPMUSICEVENT_Horror         = 2,
	CGMAPMUSICEVENT_Tatyana        = 3,
	CGMAPMUSICEVENT_MAX            = 4,
};

enum class ECGMapMusicMode : uint8
{
	CGMAPMUSICMODE_None            = 0,
	CGMAPMUSICMODE_Exploration     = 1,
	CGMAPMUSICMODE_Combat          = 2,
	CGMAPMUSICMODE_Event           = 3,
	CGMAPMUSICMODE_Quest           = 4,
	CGMAPMUSICMODE_MAX             = 5,
};

enum class ESprintWWiseState : uint8
{
	SPRINTWWISESTATE_None          = 0,
	SPRINTWWISESTATE_Medium        = 1,
	SPRINTWWISESTATE_Heavy         = 2,
	SPRINTWWISESTATE_MediumToIdle  = 3,
	SPRINTWWISESTATE_HeavyToIdle   = 4,
	SPRINTWWISESTATE_MAX           = 5,
};

enum class EReloadGameType : uint8
{
	CUSTOMSAVETYPE_None            = 0,
	CUSTOMSAVETYPE_LastCheckpoint  = 1,
	CUSTOMSAVETYPE_QuickSave       = 2,
	CUSTOMSAVETYPE_CustomName      = 3,
	CUSTOMSAVETYPE_MAX             = 4,
};

enum class ECompanionEquipmentSlotSelectionType : uint8
{
	COMPANIONEQUIPMENTSELECTIONTYPE_MIN = 0,
	COMPANIONEQUIPMENTSELECTIONTYPE_None = 1,
	COMPANIONEQUIPMENTSELECTIONTYPE_Selected = 2,
	COMPANIONEQUIPMENTSELECTIONTYPE_InvalidSwap = 3,
	COMPANIONEQUIPMENTSELECTIONTYPE_ValidSwap = 4,
	COMPANIONEQUIPMENTSELECTIONTYPE_MAX = 5,
};

enum class EAILogType : uint8
{
	AILOGTYPE_MIN                  = 0,
	AILOGTYPE_Alert                = 1,
	AILOGTYPE_Hunt                 = 2,
	AILOGTYPE_BlackStalker         = 3,
	AILOGTYPE_MAX                  = 4,
};

enum class EDialogueSubtitleType : uint8
{
	DIALOGUESUBTITLETYPE_MIN       = 0,
	DIALOGUESUBTITLETYPE_NONE      = 1,
	DIALOGUESUBTITLETYPE_NORMAL    = 2,
	DIALOGUESUBTITLETYPE_AVATAR    = 3,
	DIALOGUESUBTITLETYPE_MAX       = 4,
};

enum class ERelationshipStatusType : uint8
{
	RELATIONSHIPSTATUSTYPE_MIN     = 0,
	RELATIONSHIPSTATUSTYPE_Great   = 1,
	RELATIONSHIPSTATUSTYPE_Good    = 2,
	RELATIONSHIPSTATUSTYPE_Bad     = 3,
	RELATIONSHIPSTATUSTYPE_Terrible = 4,
	RELATIONSHIPSTATUSTYPE_MAX     = 5,
};

enum class EPerceptionType : uint8
{
	PERCEPTIONTYPE_MIN             = 0,
	PERCEPTIONTYPE_Sight           = 1,
	PERCEPTIONTYPE_Hearing         = 2,
	PERCEPTIONTYPE_Flashlight      = 3,
	PERCEPTIONTYPE_MAX             = 4,
};

enum class EAIWorldType : uint8
{
	AIWORLDTYPE_MIN                = 0,
	AIWORLDTYPE_Human              = 1,
	AIWORLDTYPE_Monster            = 2,
	AIWORLDTYPE_MAX                = 3,
};

enum class EConsumableAnimType : uint8
{
	CONSUMABLEANIMTYPE_MIN         = 0,
	CONSUMABLEANIMTYPE_Eat         = 1,
	CONSUMABLEANIMTYPE_Skin        = 2,
	CONSUMABLEANIMTYPE_Drink       = 3,
	CONSUMABLEANIMTYPE_MAX         = 4,
};

enum class EDashDirection : uint8
{
	DASHDIRECTION_None             = 0,
	DASHDIRECTION_Left             = 1,
	DASHDIRECTION_Right            = 2,
	DASHDIRECTION_MAX              = 3,
};

enum class EDusterSurfaceType : uint8
{
	DSURFACETYPE_Vertical          = 0,
	DSURFACETYPE_Horizontal        = 1,
	DSURFACETYPE_MAX               = 2,
};

enum class EAIType : uint8
{
	AITYPE_None                    = 0,
	AITYPE_ALL                     = 1,
	AITYPE_Patroller               = 2,
	AITYPE_Borderer                = 3,
	AITYPE_BlackStalker            = 4,
	AITYPE_Duster                  = 5,
	AITYPE_Chernohost              = 6,
	AITYPE_MAX                     = 7,
};

enum class EDebugDecoratorType : uint8
{
	DECORATORTYPE_None             = 0,
	DECORATORTYPE_Squad            = 1,
	DECORATORTYPE_IK               = 2,
	DECORATORTYPE_Skeleton         = 3,
	DECORATORTYPE_Gib              = 4,
	DECORATORTYPE_Level            = 5,
	DECORATORTYPE_MAX              = 6,
};

enum class EComfortableCombatRadius : uint8
{
	COMBATRADIUS_None              = 0,
	COMBATRADIUS_Good              = 1,
	COMBATRADIUS_Close             = 2,
	COMBATRADIUS_Far               = 3,
	COMBATRADIUS_MAX               = 4,
};

enum class EEulerRotationOrder : uint8
{
	EULER_XYZ                      = 0,
	EULER_XZY                      = 1,
	EULER_YZX                      = 2,
	EULER_YXZ                      = 3,
	EULER_ZXY                      = 4,
	EULER_ZYX                      = 5,
	EULER_MAX                      = 6,
};

enum class EDirection : uint8
{
	DIRECTION_None                 = 0,
	DIRECTION_FL                   = 1,
	DIRECTION_F                    = 2,
	DIRECTION_FR                   = 3,
	DIRECTION_BL                   = 4,
	DIRECTION_B                    = 5,
	DIRECTION_BR                   = 6,
	DIRECTION_LF                   = 7,
	DIRECTION_L                    = 8,
	DIRECTION_LB                   = 9,
	DIRECTION_RF                   = 10,
	DIRECTION_R                    = 11,
	DIRECTION_RB                   = 12,
	DIRECTION_MAX                  = 13,
};

enum class EClockDirection : uint8
{
	CLOCKDIR_None                  = 0,
	CLOCKDIR_FWD                   = 1,
	CLOCKDIR_FWDR                  = 2,
	CLOCKDIR_R                     = 3,
	CLOCKDIR_BWDR                  = 4,
	CLOCKDIR_BWD                   = 5,
	CLOCKDIR_BWDL                  = 6,
	CLOCKDIR_L                     = 7,
	CLOCKDIR_FWDL                  = 8,
	CLOCKDIR_MAX                   = 9,
};

enum class ELandMovementModeNoStrafe : uint8
{
	LANDMOVEMENTNOSTRAFE_Walk      = 0,
	LANDMOVEMENTNOSTRAFE_Run       = 1,
	LANDMOVEMENTNOSTRAFE_MAX       = 2,
};

enum class ELandMovementMode : uint8
{
	LANDMOVEMENT_Walk              = 0,
	LANDMOVEMENT_Run               = 1,
	LANDMOVEMENT_WalkStrafe        = 2,
	LANDMOVEMENT_RunStrafe         = 3,
	LANDMOVEMENT_MAX               = 4,
};

enum class EPerceptionBlock : uint8
{
	PERCBLOCK_Sight                = 0,
	PERCBLOCK_Hearing              = 1,
	PERCBLOCK_MAX                  = 2,
};

enum class ECoverType : uint8
{
	COVERTYPE_None                 = 0,
	COVERTYPE_Crouch               = 1,
	COVERTYPE_CrouchLeft           = 2,
	COVERTYPE_CrouchRight          = 3,
	COVERTYPE_StandLeft            = 4,
	COVERTYPE_StandRight           = 5,
	COVERTYPE_MAX                  = 6,
};

enum class EApp : uint8
{
	APPLICATION_None               = 0,
	APPLICATION_Inventory          = 1,
	APPLICATION_Map                = 2,
	APPLICATION_Journal            = 3,
	APPLICATION_MAX                = 4,
};

enum class EShakerType : uint8
{
	SHAKER_Sin                     = 0,
	SHAKER_Cos                     = 1,
	SHAKER_MAX                     = 2,
};

enum class EInterpolationCollisionReaction : uint8
{
	INTERPCOL_Interpolation        = 0,
	INTERPCOL_Normal               = 1,
	INTERPCOL_MAX                  = 2,
};

enum class EReactionToVisibleHero : uint8
{
	REACTION_Ignore                = 0,
	REACTION_Passive               = 1,
	REACTION_Aggressive            = 2,
	REACTION_MAX                   = 3,
};

enum class EHeadTracingMode : uint8
{
	HEADTRACING_None               = 0,
	HEADTRACING_StationaryPoint    = 1,
	HEADTRACING_Actor              = 2,
	HEADTRACING_Bone               = 3,
	HEADTRACING_MAX                = 4,
};

enum class EWeaponState : uint8
{
	Normal                         = 0,
	Reloading                      = 1,
	Aiming                         = 2,
	Cooldown                       = 3,
	EWeaponState_MAX               = 4,
};

enum class ECraftingResult : uint8
{
	CanBeCrafted                   = 0,
	NotEnoughResources             = 1,
	InventoryFull                  = 2,
	NoKnownRecipes                 = 3,
	Error                          = 4,
	ECraftingResult_MAX            = 5,
};

enum class ECraftingCategory : uint8
{
	Medicaments                    = 0,
	Weapons                        = 1,
	Gadgets                        = 2,
	Max                            = 3,
};

enum class EAnimationsDirection : uint8
{
	UNIFORM                        = 0,
	FROMCENTER                     = 1,
	FROMTOP                        = 2,
	EAnimationsDirection_MAX       = 3,
};

enum class EScaleCrystalProbability : uint8
{
	UNIFORM                        = 0,
	GAINCDF                        = 1,
	EScaleCrystalProbability_MAX   = 2,
};

enum class EPositionCrystalProbability : uint8
{
	UNIFORM                        = 0,
	NORMAL                         = 1,
	KUMARASWAMY                    = 2,
	GAINCDF                        = 3,
	EPositionCrystalProbability_MAX = 4,
};

enum class EInfluenceTargets : uint8
{
	MaxPower                       = 0,
	MaxCompanions                  = 1,
	EInfluenceTargets_MAX          = 2,
};

enum class EPayloadType : uint8
{
	DEFAULT                        = 0,
	ON_EVERY_MULTIPLEOPTIONS       = 1,
	ON_CUSTOM_REQUEST              = 2,
	EPayloadType_MAX               = 3,
};

enum class EChatterType : uint8
{
	CHATTERTYPE_None               = 0,
	CHATTERTYPE_PatrollerNeutralToAlert_NoticePlayer = 1,
	CHATTERTYPE_PatrollerAlertToHunt_NoticePlayer = 2,
	CHATTERTYPE_PatrollerToHunt_SeeStealthkill = 3,
	CHATTERTYPE_PatrollerToHunt_HearShot = 4,
	CHATTERTYPE_PatrollerToHunt_ReceiveDamage = 5,
	CHATTERTYPE_PatrollerHuntToChase_LostTarget = 6,
	CHATTERTYPE_PatrollerChaseToNeutral_LostTarget = 7,
	CHATTERTYPE_PatrollerToChase_SeeDeadBody = 8,
	CHATTERTYPE_PatrollerToHunt_SeeMonster = 9,
	CHATTERTYPE_PatrollerHunt_Generic = 10,
	CHATTERTYPE_PatrollerHunt_SawDeathBullet = 11,
	CHATTERTYPE_PatrollerNeutralToAlert_HearPlayer = 12,
	CHATTERTYPE_PatrollerAlertToNeutral_Timeout = 13,
	CHATTERTYPE_PatrollerNeutral_Generic = 14,
	CHATTERTYPE_PatrollerHunt_HeroBehindCoverNoShoot = 15,
	CHATTERTYPE_PatrollerHunt_GenericDamage = 16,
	CHATTERTYPE_PatrollerHunt_ArrestAfterTakedown = 17,
	CHATTERTYPE_PatrollerChase_ApproachedDeadBody = 18,
	CHATTERTYPE_DarkStalker_NeutralSpawn = 19,
	CHATTERTYPE_DarkStalker_NeutralGeneric = 20,
	CHATTERTYPE_DarkStalker_NeutralToAlert = 21,
	CHATTERTYPE_DarkStalker_HuntGeneric = 22,
	CHATTERTYPE_DarkStalker_DespawnTimeout50 = 23,
	CHATTERTYPE_DarkStalker_DespawnTimeout70 = 24,
	CHATTERTYPE_DarkStalker_DespawnTimeout100 = 25,
	CHATTERTYPE_DarkStalker_DespawnDeath = 26,
	CHATTERTYPE_DarkStalkerLastFight_PhaseTwoThirds = 27,
	CHATTERTYPE_DarkStalkerLastFight_PhaseOneThird = 28,
	CHATTERTYPE_DarkStalkerLastFight_Generic = 29,
	CHATTERTYPE_DarkStalkerLastFight_GenericDamage = 30,
	CHATTERTYPE_PatrollerAlertToNeutral_BodyTimeout = 31,
	CHATTERTYPE_PatrollerToAlert_HearMine = 32,
	CHATTERTYPE_PatrollerToAlert_SeeTeammateExplode = 33,
	CHATTERTYPE_PatrollerToAlert_FindBlewBody = 34,
	CHATTERTYPE_MAX                = 35,
};

enum class ECompanionConflictType : uint8
{
	None                           = 0,
	LowMorale                      = 1,
	UnfairlyDistributedFoods       = 2,
	ECompanionConflictType_MAX     = 3,
};

enum class EMorningSequenceType : uint8
{
	None                           = 0,
	DeadFromFight                  = 1,
	AlmostDead                     = 2,
	WantToLeave                    = 3,
	EMorningSequenceType_MAX       = 4,
};

enum class ENPC : uint8
{
	NpcName0                       = 0,
	NpcName1                       = 1,
	NpcName2                       = 2,
	NpcName3                       = 3,
	ENPC_MAX                       = 4,
};

enum class ENPCStatus : uint8
{
	NotFound                       = 0,
	Missing                        = 1,
	Healthy                        = 2,
	Sick                           = 3,
	VerySick                       = 4,
	Dead                           = 5,
	ENPCStatus_MAX                 = 6,
};

enum class EPassiveDialogueSteps : uint8
{
	PlayersLowPsyche               = 0,
	PlayerHasDoneTraining          = 1,
	CompanionIsHurt                = 2,
	DislikedBuildEntityInBase      = 3,
	CompanionsLowMorale            = 4,
	CompanionIsInConflict          = 5,
	MAX                            = 6,
};

enum class EPlaySoundWithSubtitlesType : uint8
{
	Sound2D                        = 0,
	AtLocation                     = 1,
	Attached                       = 2,
	EPlaySoundWithSubtitlesType_MAX = 3,
};

enum class EViewSwitchDirection : uint8
{
	VIEWSWITCHDIR_ToCustom         = 0,
	VIEWSWITCHDIR_ToGameplay       = 1,
	VIEWSWITCHDIR_MAX              = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xE0 - 0x10)
// ScriptStruct ChernobylGame.CGDamageEvent
struct FCGDamageEvent : public FDamageEvent
{
public:
	enum class EMeleeHitDirection                MeleeHitDirection;                                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionLimb                    LimbAffected;                                      // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_403C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCGDamageType>             DamageType;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageLocation;                                    // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageDirection;                                   // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            DamageHitResult;                                   // 0x38(0x8C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIgnoreGodmode;                                    // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_403D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CustomBoneNames;                                   // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseCustomBoneNames;                               // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCriticalDamage;                                   // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_403E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct ChernobylGame.CGVirtuaLaserInfo
struct FCGVirtuaLaserInfo
{
public:
	struct FVector                               LaserStart;                                        // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LaserEnd;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaserLength;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtuaShotType                   LaserType;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4040[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LaserColor;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaserTimeNorm;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.CGAlertReason
struct FCGAlertReason
{
public:
	enum class EAlertRaiseReason                 Reason;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4041[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGCharacter*                          CGCharacter;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4042[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.FPReaction
struct FFPReaction
{
public:
	TSubclassOf<class UMatineeCameraShake>       CameraShake;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         CameraShakeAnimBP;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         BodyShake;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.SaveScreenshotData
struct FSaveScreenshotData
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FIntPoint                             Resolution;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.CompanionLoyaltyRevertInfo
struct FCompanionLoyaltyRevertInfo
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LoyaltyTextID;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.ResourcesForMap
struct FResourcesForMap
{
public:
	TMap<enum class EResourceType, float>        Items;                                             // 0x0(0x50)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.BuildStatEntry
struct FBuildStatEntry
{
public:
	struct FDataTableRowHandle                   Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4046[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.ResourcesRequirement
struct FResourcesRequirement
{
public:
	TMap<enum class EResourceType, float>        Resources;                                         // 0x0(0x50)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.BuildGlobalStatValueInternal
struct FBuildGlobalStatValueInternal
{
public:
	class FName                                  StatID;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Delta;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct ChernobylGame.BuildEntryInternal
struct FBuildEntryInternal
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReadableName;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	class FText                                  CompanionBonusText;                                // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x50(0x28)(BlueprintVisible, BlueprintReadOnly, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TierName;                                          // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CatalogPath;                                       // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBuildStatEntry>               Stats;                                             // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	enum class EBuildCategory                    Category;                                          // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuldEntryType                    Type;                                              // 0x99(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumePower;                                      // 0x9A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4048[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConsumedPowerAmount;                               // 0x9C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ABaseBuildSystemEntity>  EntityClass;                                       // 0xA0(0x28)(BlueprintVisible, BlueprintReadOnly, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourcesRequirement                 Requirements;                                      // 0xC8(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FResourcesRequirement                 Scrap;                                             // 0x118(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           AdditionalCraftingRecipies;                        // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        WorkplaceQualityDelta;                             // 0x178(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBuildGlobalStatValueInternal> GlobalStats;                                       // 0x180(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ChernobylGame.BuildCatalogPath
struct FBuildCatalogPath : public FTableRowBase
{
public:
	TArray<struct FDataTableRowHandle>           Path;                                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  ReadableName;                                      // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ChernobylGame.BuildGlobalStat
struct FBuildGlobalStat : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        StartedPercentage;                                 // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartedPercentageGateOfMadness;                    // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  UnitType;                                          // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	int32                                        NeutralValue;                                      // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ValueRange;                                        // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ChernobylGame.InventoryEntry
struct FInventoryEntry
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UniqueItemID;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFill;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Upgrades;                                          // 0x20(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.GameCharacter
struct FGameCharacter : public FTableRowBase
{
public:
	class FName                                  ReadableName;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DialogColor;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        SoundsToPlay;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ChernobylGame.AchievementInfo
struct FAchievementInfo : public FTableRowBase
{
public:
	enum class EAchievementType                  Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AchievementID;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.EventMapIconData
struct FEventMapIconData
{
public:
	class FName                                  AreaName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconID;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CoordsOnMap;                                       // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ChernobylGame.InnerEvent
struct FInnerEvent
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveDays;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AddedDay;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Difficulty;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldBeReported;                                  // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsImportant;                                       // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4050[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RaportID;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventMapIconData>             IconsOnMap;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class FName                                  ParentMan4Work;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         ParentMap;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4051[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParentEventName;                                   // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsGlobal;                                          // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsQuest;                                           // 0x45(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4052[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.ActiveQuestInfo
struct FActiveQuestInfo
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionID;                                       // 0x8(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lifetime;                                          // 0x10(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFinished;                                        // 0x14(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStarted;                                         // 0x15(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4053[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.CompanionEffectiveness
struct FCompanionEffectiveness
{
public:
	float                                        Resistance;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        COMBAT;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Artifice;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Perception;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intelligence;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ChernobylGame.StatsModifier
struct FStatsModifier : public FTableRowBase
{
public:
	class FText                                  BuffName;                                          // 0x8(0x18)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	bool                                         Once;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4054[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoyaltyExp;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoyaltyLevel;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentMorale;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHP;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Resistance;                                        // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        COMBAT;                                            // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Artifice;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Perception;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intelligence;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PreventGoToMission;                                // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Hidden;                                            // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuffType                         Type;                                              // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuffGroup                        Group;                                             // 0x4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4056[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.CompanionEntry
struct FCompanionEntry
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventID;                                           // 0x8(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildCategory                    Specialization;                                    // 0x10(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4058[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LoyaltyLevel;                                      // 0x14(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoyaltyExp;                                        // 0x18(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentMorale;                                     // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHP;                                         // 0x20(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDead;                                            // 0x24(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBusy;                                            // 0x25(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4059[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEffectiveness               BaseEffectiveness;                                 // 0x28(0x14)(BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_405A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Modifiers;                                         // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FStatsModifier>                CurrentOneTimeBuffs;                               // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChernobylGame.ImportantQuestDef
struct FImportantQuestDef
{
public:
	int32                                        Priority;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_405C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Quest;                                             // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            Data;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MetaData;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct ChernobylGame.CompanionDefinition
struct FCompanionDefinition : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EBuildCategory                    Specialization;                                    // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_405D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartLoyaltyLevel;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartLoyaltyExp;                                   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartMorale;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartMoraleGateOfMadness;                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartHP;                                           // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCompanionEffectiveness               StartBaseEffectiveness;                            // 0x50(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_405F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ANPCBase>                  CharacterClass;                                    // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ImageV2;                                           // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Selected;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           FavouriteBuildEntities;                            // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           DislikedBuildEntities;                             // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FImportantQuestDef>            ImportantQuests;                                   // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.Conflict
struct FConflict
{
public:
	class FName                                  CompanionA;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionB;                                        // 0x8(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentDay;                                        // 0x10(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.Item4Mision
struct FItem4Mision
{
public:
	class FName                                  Item;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Count;                                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.CompanionWithPrize
struct FCompanionWithPrize
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItem4Mision>                  Items;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.BuildGlobalStatValue
struct FBuildGlobalStatValue : public FTableRowBase
{
public:
	struct FDataTableRowHandle                   StatID;                                            // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Delta;                                             // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4060[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C0 (0x2C8 - 0x8)
// ScriptStruct ChernobylGame.BuildEntry
struct FBuildEntry : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  CompanionBonusText;                                // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TierName;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   CatalogPath;                                       // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBuildStatEntry>               Stats;                                             // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBuildCategory                    Category;                                          // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuldEntryType                    Type;                                              // 0xA1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumePower;                                      // 0xA2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyOne;                                           // 0xA3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConsumedPowerAmount;                               // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ABaseBuildSystemEntity>  EntityClass;                                       // 0xA8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourcesRequirement                 Requirements;                                      // 0xD0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FResourcesRequirement                 Scrap;                                             // 0x120(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           AdditionalCraftingRecipies;                        // 0x170(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        WorkplaceQualityDelta;                             // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4062[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBuildGlobalStatValue>         GlobalStats;                                       // 0x188(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBuildGlobalStatValue>         CustomStats;                                       // 0x198(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         BlockBuildingOnTopOf;                              // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4064[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationOffset;                                    // 0x1AC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  CustomJournalLabel;                                // 0x1B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   JournalCustomRowHandle;                            // 0x1C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         UseCustomStatWidget;                               // 0x1D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowArrowWhenBuilding;                             // 0x1D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowMinimapTagOnMap;                               // 0x1D2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4065[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class EBuildRestrictedGameModes>   RestrictedGameModes;                               // 0x1D8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSet<enum class EBuildRestrictedGameModes>   WhitelistedGameModes;                              // 0x228(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSet<enum class EDLCType>                    RequiredDLC;                                       // 0x278(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.EventDeactivationTimeStamp
struct FEventDeactivationTimeStamp
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DayAdded;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.ReportReward
struct FReportReward : public FTableRowBase
{
public:
	class FName                                  ReportID;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemsID;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.QuestResultStat
struct FQuestResultStat
{
public:
	float                                        StartPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4067[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReportReward                         ReportReward;                                      // 0x8(0x18)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChernobylGame.MissionReportRequiredInformation
struct FMissionReportRequiredInformation
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestID;                                           // 0x8(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x10(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4068[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Day;                                               // 0x14(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuestResultStat                      Information;                                       // 0x18(0x20)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	enum class EMissionResult                    Result;                                            // 0x38(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4069[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ChernobylGame.DescriptionInfo
struct FDescriptionInfo : public FTableRowBase
{
public:
	class FText                                  Title;                                             // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Brief;                                             // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Long;                                              // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.PermanentQuestDataEntry
struct FPermanentQuestDataEntry : public FTableRowBase
{
public:
	struct FDataTableRowHandle                   Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_406A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.EventInfo
struct FEventInfo
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.EventsOR
struct FEventsOR
{
public:
	TArray<struct FEventInfo>                    EventsOR;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ChernobylGame.QuestResultForNPC
struct FQuestResultForNPC
{
public:
	bool                                         EnableVeryBad;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableVeryGood;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_406C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEffectiveness               Stats;                                             // 0x4(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuestResultStat                      VeryBad;                                           // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQuestResultStat                      Bad;                                               // 0x38(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQuestResultStat                      Good;                                              // 0x58(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQuestResultStat                      VeryGood;                                          // 0x78(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x148 (0x150 - 0x8)
// ScriptStruct ChernobylGame.QuestInfoInput
struct FQuestInfoInput : public FTableRowBase
{
public:
	bool                                         EnabledFromStart;                                  // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLCType                          DLC;                                               // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestCategoryType                Category;                                          // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_406D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Tier;                                              // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartDay;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lifetime;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AdditionalLifeTime;                                // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown;                                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRepetitive;                                      // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPartOfStory;                                     // 0x25(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_406F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DescriptionID;                                     // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventsOR>                     EventsAND;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          BlockedSlots;                                      // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuestResultForNPC                    Results;                                           // 0x50(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  SpawnPoint;                                        // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPermanentQuestDataEntry>      AND_PermanentData;                                 // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPermanentQuestDataEntry>      OR_PermanentData;                                  // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPermanentQuestDataEntry              SuccessedPermanentData;                            // 0x110(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bShowInFreePlay;                                   // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4071[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   QuestType;                                         // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsImmuneToSpaceTimeDistributor;                    // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipsQuestValidation;                              // 0x149(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTotalSuccessRate;                               // 0x14A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAssignable;                                      // 0x14B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasPriorityAsStoryQuest;                           // 0x14C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4072[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.ReportItemsInfo
struct FReportItemsInfo
{
public:
	class FName                                  Items;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.ReportItems
struct FReportItems : public FTableRowBase
{
public:
	TArray<struct FReportItemsInfo>              Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ChernobylGame.ReportsTextsDataTableRow
struct FReportsTextsDataTableRow : public FTableRowBase
{
public:
	class FText                                  Brief;                                             // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGameMetadataInfo
struct FCustomSaveGameMetadataInfo
{
public:
	struct FDateTime                             SaveTimestamp;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TimestampString;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LastMap;                                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestID;                                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Playtime;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4074[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSaveScreenshotData                   ScreenshotData;                                    // 0x30(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        CurrentDay;                                        // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGateOfMadness;                                  // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4075[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ChernobylGame.ActorInfo
struct FActorInfo : public FTableRowBase
{
public:
	class FName                                  ActorName;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          DialogColor;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         PlaceholderVO;                                     // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DialogueAvatar;                                    // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.GlobalSkinInfo
struct FGlobalSkinInfo : public FTableRowBase
{
public:
	class FName                                  SkinID;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReadableName;                                      // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EDLCType                          DLC;                                               // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGlobalSkinType                   Type;                                              // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4076[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ChernobylGame.KnifeSkinInfo
struct FKnifeSkinInfo
{
public:
	TArray<TSoftObjectPtr<class UStaticMesh>>    KnifeMeshToUpdate;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            NewKnifeMesh;                                      // 0x10(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.AttachmentSkinInfo
struct FAttachmentSkinInfo
{
public:
	TArray<TSoftObjectPtr<class UStaticMesh>>    AdditionalMeshsesToReplaceSkinOn;                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> AttachmentMaterials;                               // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct ChernobylGame.WeaponSkinInfo
struct FWeaponSkinInfo : public FTableRowBase
{
public:
	class FName                                  SkinID;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Item;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EWeaponSkinType                   WeaponSkinType;                                    // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLCType                          DLC;                                               // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4078[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKnifeSkinInfo>                KnifeInfo;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> BaseWeaponMaterials;                               // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAttachmentSkinInfo> Attachments;                                       // 0x48(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.MonsterEventLevel
struct FMonsterEventLevel : public FTableRowBase
{
public:
	int32                                        HorrorEventsCountModifier;                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        JumpscareEventsCountModifier;                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMonsterEventType>         AllowedMonsterTypes;                               // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ChernobylGame.SoldierEventLevel
struct FSoldierEventLevel : public FTableRowBase
{
public:
	int32                                        DagnerEventsCountModifier;                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeutralEventsCountModifier;                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ESoliderLevelType, float>    SoldierDistribution;                               // 0x10(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        SquadSize;                                         // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4079[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.BuildingCompanionInfo
struct FBuildingCompanionInfo
{
public:
	class ACGNPC*                                Companion;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnPositionActor;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.UpgradeStat
struct FUpgradeStat : public FTableRowBase
{
public:
	class FName                                  ReadableName;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartedPercentage;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_407A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnitType;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.PropertyLinkActorData
struct FPropertyLinkActorData
{
public:
	TArray<class FName>                          PropertyLink;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ChernobylGame.PropertyLinkData
struct FPropertyLinkData
{
public:
	TMap<class FName, struct FPropertyLinkActorData> Levels;                                            // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FPropertyLinkActorData> Actors;                                            // 0x50(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.UnlockedUpgrades
struct FUnlockedUpgrades : public FTableRowBase
{
public:
	TArray<class FName>                          UnlockedUpgrades;                                  // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct ChernobylGame.PreVRMapData
struct FPreVRMapData : public FTableRowBase
{
public:
	bool                                         bIsValid;                                          // 0x8(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_407C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               Inventory;                                         // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          Perks;                                             // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x30(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Psyche;                                            // 0x34(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Madness;                                           // 0x38(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuickMenu[0x8];                                    // 0x3C(0x40)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EquippedArmor;                                     // 0x7C(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPlates;                                       // 0x84(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, struct FUnlockedUpgrades> CraftedUpgrades;                                   // 0x88(0x50)(SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CharacterSkinMaterials
struct FCharacterSkinMaterials
{
public:
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.CharacterSkinMaterialInfo
struct FCharacterSkinMaterialInfo
{
public:
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCharacterSkinMaterials> CustomSkinPerComponentTag;                         // 0x10(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.EventInfoToUpdate
struct FEventInfoToUpdate
{
public:
	class FName                                  ParentMan4Work;                                    // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentEvent;                                       // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         ParentMap;                                         // 0x10(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_407D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.CategoryStrength
struct FCategoryStrength
{
public:
	enum class EEventCategory                    Name;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_407E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Points;                                            // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.Slots
struct FSlots
{
public:
	TArray<class FName>                          Slots;                                             // 0x0(0x10)(Edit, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.EventChild
struct FEventChild
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct ChernobylGame.OuterEvent
struct FOuterEvent : public FTableRowBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMasterEvent;                                     // 0x10(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActivated;                                       // 0x11(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceActivationAfterExpired;                       // 0x12(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldBeReported;                                  // 0x13(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4080[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCategoryStrength>             Category;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FSlots                                CollisionSlots[0x12];                              // 0x28(0x120)(Edit, SaveGame, NativeAccessSpecifierPublic)
	int32                                        MaxActiveDays;                                     // 0x148(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4081[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EEventMap>                 Maps;                                              // 0x150(0x10)(Edit, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         IsRepetitive;                                      // 0x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4082[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Delay;                                             // 0x164(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown;                                          // 0x168(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x16C(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventChild>                   Children;                                          // 0x170(0x10)(Edit, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	enum class EEventType                        Type;                                              // 0x180(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCumulativeProbability;                           // 0x181(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4083[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CumulativeProbability;                             // 0x184(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Difficulty;                                        // 0x188(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsImportant;                                       // 0x18C(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4084[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RaportID;                                          // 0x190(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReportPerson;                                      // 0x198(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventMapIconData>             IconsOnMap;                                        // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	float                                        ResultGoodness;                                    // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4085[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MansNotHot;                                        // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FItem4Mision>                  Reward;                                            // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FCompanionEffectiveness               MissionStats;                                      // 0x1D8(0x14)(Edit, BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsQuest;                                           // 0x1EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsGlobal;                                          // 0x1ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4086[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.CompanionEquipment
struct FCompanionEquipment
{
public:
	TMap<enum class ECompanionEquipmentSlotType, struct FInventoryEntry> Equipment;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CompanionDecisions
struct FCompanionDecisions
{
public:
	TArray<class FName>                          Decisions;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.BlockedSlots
struct FBlockedSlots
{
public:
	TArray<class FName>                          Slots;                                             // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.CategoriesCurrentCount
struct FCategoriesCurrentCount
{
public:
	TMap<enum class ECategoryForEvent, int32>    Limits;                                            // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.CategoryLimit
struct FCategoryLimit
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.CategoriesInfo
struct FCategoriesInfo
{
public:
	TMap<enum class ECategoryForEvent, struct FCategoryLimit> Limits;                                            // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.PermanentLevelInfo
struct FPermanentLevelInfo
{
public:
	TArray<class FName>                          Levels;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.SavedNameArray
struct FSavedNameArray
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.ActiveEventInfo
struct FActiveEventInfo
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lifetime;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartDay;                                          // 0xC(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventOccurrence                  Occurrence;                                        // 0x10(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_408A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.ActiveEvent4Map
struct FActiveEvent4Map
{
public:
	TArray<struct FActiveEventInfo>              Events;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.CooldownEventInfo
struct FCooldownEventInfo
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CooldownEvent4Map
struct FCooldownEvent4Map
{
public:
	TArray<struct FCooldownEventInfo>            Events;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.PeriodicEventInfo
struct FPeriodicEventInfo
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.PeriodicEvent4Map
struct FPeriodicEvent4Map
{
public:
	TArray<struct FPeriodicEventInfo>            Events;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.HorrorPotentialEventInfo
struct FHorrorPotentialEventInfo
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.HorrorPotentialEvent4Map
struct FHorrorPotentialEvent4Map
{
public:
	TArray<struct FHorrorPotentialEventInfo>     Events;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.PotentialEventInfo
struct FPotentialEventInfo
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventOccurrence                  Occurrence;                                        // 0x8(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_408C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.PotentialEvent4Map
struct FPotentialEvent4Map
{
public:
	TArray<struct FPotentialEventInfo>           Events;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.DelayedFinishedEvents
struct FDelayedFinishedEvents
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_408D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.LastQuestsInfo
struct FLastQuestsInfo : public FTableRowBase
{
public:
	struct FActiveQuestInfo                      QuestInfo;                                         // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifiedPermanentData;                            // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_408E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.DifficultlyModifier
struct FDifficultlyModifier
{
public:
	int32                                        Modifier;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lifetime;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.ActiveQuestDifficulties
struct FActiveQuestDifficulties
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDifficultlyModifier>          Difficulties;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CooldownQuestInfo
struct FCooldownQuestInfo
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0xC(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CooldownQuest4Map
struct FCooldownQuest4Map
{
public:
	TArray<struct FCooldownQuestInfo>            Quests;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.PendingQuestInfo
struct FPendingQuestInfo
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.PotentialQuest4Map
struct FPotentialQuest4Map
{
public:
	TArray<struct FPendingQuestInfo>             Quests;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.TimelinePersistentInventory
struct FTimelinePersistentInventory
{
public:
	TArray<struct FInventoryEntry>               Inventory;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ChernobylGame.SoldierSpawnInfo
struct FSoldierSpawnInfo
{
public:
	TMap<enum class ESoliderLevelType, int32>    SoldierDistribution;                               // 0x0(0x50)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	int32                                        CurrentDay;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDifficultyValue                  CombatDifficultyLevel;                             // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_408F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveInfo
struct FCustomSaveInfo
{
public:
	enum class ECustomSaveType                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4090[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SaveName;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TypeDisplayName;                                   // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        SaveLimit;                                         // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisibleInMenu;                                  // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4091[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.BuildEntityInfo
struct FBuildEntityInfo
{
public:
	class FName                                  BuildID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                MainClass;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        StorID;                                            // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorCols;                                          // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4092[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.BuildEntityInfoContainer
struct FBuildEntityInfoContainer
{
public:
	TArray<struct FBuildEntityInfo>              Entities;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.ArmorInsertInfo
struct FArmorInsertInfo
{
public:
	class FName                                  InsertName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReplenishAmount;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ChernobylGame.ArmorInfo
struct FArmorInfo : public FTableRowBase
{
public:
	struct FDataTableRowHandle                   ArmorItem;                                         // 0x8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FArmorInsertInfo                      InsertInfo;                                        // 0x18(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_409B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EArmorStatType, int32>       Stats;                                             // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.ArmorStatInfo
struct FArmorStatInfo : public FTableRowBase
{
public:
	enum class EArmorStatType                    StatType;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChernobylGame.BuildSystemRangeDecalInfo
struct FBuildSystemRangeDecalInfo
{
public:
	class UMaterialInstance*                     DecalMaterial;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x20(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               DecalSize;                                         // 0x30(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ChernobylGame.TrainingInfo
struct FTrainingInfo : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  NextLevelTraining;                                 // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Perk;                                              // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  CharacterThoughts;                                 // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  RelayName;                                         // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TrainingChosenDialogueRow;                         // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.LocalizedTextInfo
struct FLocalizedTextInfo : public FTableRowBase
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.SubvariableInfo
struct FSubvariableInfo
{
public:
	class FName                                  DisplayText;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ChernobylGame.DebugQuestsDataInfo
struct FDebugQuestsDataInfo : public FTableRowBase
{
public:
	class FName                                  QuestName;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestVariable;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         QuestVariableValue;                                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FSubvariableInfo>   Subvariables;                                      // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FName>                          RequiredQuests;                                    // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      OR_ExcludedBy;                                     // 0x80(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.AudioDeviceInfo
struct FAudioDeviceInfo : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RTCPValue;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ChernobylGame.PlayerPerkCategory
struct FPlayerPerkCategory : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EPerkCategory                     Category;                                          // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct ChernobylGame.PlayerPerkInfo
struct FPlayerPerkInfo : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DescriptionShort;                                  // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Companion;                                         // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Cost;                                              // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPerkCategory                     Category;                                          // 0x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x68(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ImageSmall;                                        // 0x90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValueA;                                       // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValueB;                                       // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisabledInFreeMode;                                // 0xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ChernobylGame.CrisisResult
struct FCrisisResult : public FTableRowBase
{
public:
	class FName                                  CrisisID;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.ExtendEventInformation
struct FExtendEventInformation : public FTableRowBase
{
public:
	int32                                        AdditionalDays;                                    // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventToActivate;                                   // 0xC(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.EventResult
struct FEventResult
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.BuildSystemFallActorOnActorInfo
struct FBuildSystemFallActorOnActorInfo
{
public:
	class AActor*                                FallActor;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                BelowActor;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChernobylGame.BuildSystemFallInfo
struct FBuildSystemFallInfo
{
public:
	class AActor*                                FallActor;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        IgnoreTraceActors;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               LastLocation;                                      // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Tries;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.BuildFolderInfo
struct FBuildFolderInfo : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.BuildStats
struct FBuildStats : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ChernobylGame.BuildCatalogEntry
struct FBuildCatalogEntry : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.CompanionDecisionInfo
struct FCompanionDecisionInfo : public FTableRowBase
{
public:
	class FText                                  Description;                                       // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ECompanionDecisionResultType      DecisionResult;                                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.ItemUpgradeEffectOnCompanion
struct FItemUpgradeEffectOnCompanion
{
public:
	struct FCompanionEffectiveness               Modifiers;                                         // 0x0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RequiredUpgrades;                                  // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.ItemStatEffectOnCompanion
struct FItemStatEffectOnCompanion : public FTableRowBase
{
public:
	struct FCompanionEffectiveness               Modifiers;                                         // 0x8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemUpgradeEffectOnCompanion> UpgradeModifiers;                                  // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.PossibleEveningActivityEntry
struct FPossibleEveningActivityEntry
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40AA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.CurrentEveningActivityEntry
struct FCurrentEveningActivityEntry
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFinished;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40AC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ChernobylGame.EveningActivityDefinition
struct FEveningActivityDefinition : public FTableRowBase
{
public:
	TArray<class FName>                          IncludeCompanions;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Room;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Slot;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRepetitive;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ActiveFromStart;                                   // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          RequiredBuffs;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ForceBuffs;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.QuestsWithTier
struct FQuestsWithTier
{
public:
	int32                                        Tier;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40AE[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.PermanenNextLevel
struct FPermanenNextLevel
{
public:
	struct FDataTableRowHandle                   PermanentVariable;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  Level;                                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiredPermanentDataValue;                        // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40AF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.MapEventPair
struct FMapEventPair
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EventID;                                           // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ChernobylGame.EventInfoInput
struct FEventInfoInput : public FTableRowBase
{
public:
	bool                                         EnabledFromStart;                                  // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLCType                          DLC;                                               // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventOccurrence                  Occurrence;                                        // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldBlockSlot;                                   // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECategoryForEvent                 Type;                                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMonsterEventType                 HorrorEventMonsterType;                            // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LevelName;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PreviousLevelName;                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPermanenNextLevel>            NextLevels;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMapEventPair>                 EventsToDisableWhenCompleted;                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StartDay;                                          // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lifetime;                                          // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown;                                          // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           RequiredGameCharacters;                            // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CanBlockQuickSaveInAreaSlot;                       // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.LevelSlotEventInfo
struct FLevelSlotEventInfo : public FTableRowBase
{
public:
	class FName                                  EventID;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.LevelSlotsInfo
struct FLevelSlotsInfo : public FTableRowBase
{
public:
	TArray<struct FLevelSlotEventInfo>           Events;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.QuestType
struct FQuestType : public FTableRowBase
{
public:
	class UTexture2D*                            TypeIcon;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Type;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.FInishedQuestInfo
struct FFInishedQuestInfo
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionID;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionResult                    Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.ReportText
struct FReportText : public FTableRowBase
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ChernobylGame.PermanentQuestData
struct FPermanentQuestData : public FTableRowBase
{
public:
	bool                                         InitialValue;                                      // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldSave;                                        // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.MoodData
struct FMoodData : public FTableRowBase
{
public:
	TArray<class FName>                          LevelsToStream;                                    // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class FText                                  ReadableName;                                      // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ChernobylGame.DialogueTimelinePayloadCompanionReaction
struct FDialogueTimelinePayloadCompanionReaction
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDialogueTimelinePayloadCompanionReactionType Reaction;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.DialogueTimelinePayloadAffectedQuestInfo
struct FDialogueTimelinePayloadAffectedQuestInfo
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CustomText;                                        // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ChernobylGame.DialogueTimelinePayloadData
struct FDialogueTimelinePayloadData : public FTableRowBase
{
public:
	class FName                                  QuestID;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDialogueTimelinePayloadAffectedQuestInfo> AffectedBy;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDialogueTimelinePayloadCompanionReaction> CompanionReactions;                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EDialogueTimelinePayloadNARActivityChangeType NARActivity;                                       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LeavingCompanions;                                 // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.DialogueActorReference
struct FDialogueActorReference
{
public:
	class AActor*                                SoundSource;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SoundAttachPointName;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorNameColor;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ChernobylGame.DialogueAnimationData
struct FDialogueAnimationData
{
public:
	bool                                         Used;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFullBody;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayInSeconds;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GestureID;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldUseDialogueAnimBP;                          // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRemainIfLast;                               // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         IdlePose;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         IdleAdditive;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Transition;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         CustomGesture;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ChernobylGame.DialogueMetadataV2
struct FDialogueMetadataV2 : public FTableRowBase
{
public:
	class UAkAudioEvent*                         SoundToPlay;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TextForReference;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueAnimationData                AnimToPlay;                                        // 0x20(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ChernobylGame.DialogueDataV2
struct FDialogueDataV2 : public FTableRowBase
{
public:
	class FString                                NodeType;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Args;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Args2;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          Text;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Next;                                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.DialogueItemInfo
struct FDialogueItemInfo
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Items;                                             // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ChernobylGame.DialogueSingleOptionData
struct FDialogueSingleOptionData
{
public:
	class FText                                  Prompt;                                            // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Thoughts;                                          // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisabledText;                                      // 0x30(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogueItemInfo                     ItemInfo;                                          // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.InventoryBelt
struct FInventoryBelt
{
public:
	TArray<struct FInventoryEntry>               Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ChernobylGame.SplitterSettings
struct FSplitterSettings
{
public:
	bool                                         bIsSplittable;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDecimalSplit;                                  // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.StatEntry
struct FStatEntry
{
public:
	struct FDataTableRowHandle                   StatHandle;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x150 - 0x8)
// ScriptStruct ChernobylGame.ItemEntry
struct FItemEntry : public FTableRowBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        MaxStack;                                          // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemCategory                     Category;                                          // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ACGActiveItem>           ActiveItem;                                        // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            InventoryImage;                                    // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            InventoryImageBig;                                 // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePutInQuickMenu;                               // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            Mesh4Drop;                                         // 0x90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableDrop;                                      // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            InventoryImageDisabled;                            // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            Dialogue_Mesh;                                     // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Dialogue_Offset;                                   // 0xF0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                OnUseAction;                                       // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatEntry>                    Statistics;                                        // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EUpgradeType                      UpgradeType;                                       // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESoundCategory                    SoundCategory;                                     // 0x139(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PhysicsDropSoundType;                              // 0x13C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuickMenuSecondaryItem;                            // 0x144(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSplitterSettings                     SplitterSettings;                                  // 0x14C(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseUpgradesPropForItemId;                         // 0x14E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x108 - 0x8)
// ScriptStruct ChernobylGame.UpgradeEntry
struct FUpgradeEntry : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   UpgradeCategory;                                   // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   AdditionalInfo;                                    // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     Cost;                                              // 0x60(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsDefaultUpgrade;                                 // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     Stats;                                             // 0xB8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x190 (0x198 - 0x8)
// ScriptStruct ChernobylGame.UpgradeCategory
struct FUpgradeCategory : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  Category;                                          // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MeshSocketName;                                    // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, struct FVector> MeshSocketOffset;                                  // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, struct FRotator> MeshSocketRotationOffset;                          // 0x80(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, struct FVector> FieldMeshSocketOffset;                             // 0xD0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, struct FRotator> FieldMeshSocketRotationOffset;                     // 0x120(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x170(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x188(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LargeImage;                                        // 0x190(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.StatInfo
struct FStatInfo : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ChernobylGame.ActiveItemLeftHandIKSettings
struct FActiveItemLeftHandIKSettings
{
public:
	struct FTransform                            Offset;                                            // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct ChernobylGame.ActiveItemAnimDatabase
struct FActiveItemAnimDatabase
{
public:
	class UAnimSequence*                         IdlePose;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         IdleAdditive;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 IdleBreaks;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimSequence*                         WalkingPose;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           WalkingAdditiveBlendspace;                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         TransitionToWalk;                                  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         RunningPose;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           RunningAdditiveBlendspace;                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         CrouchingPose;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           CrouchingAdditiveBlendspace;                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           LookAroundBlendspace;                              // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         LookAroundRecover_Left;                            // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         LookAroundRecover_Right;                           // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAroundModifier;                                // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          UnequipMontage;                                    // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         UnequipSequence;                                   // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         UnequipFastSequence;                               // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          EquipMontage;                                      // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         EquipSequence;                                     // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         EquipFastSequence;                                 // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         CrouchAdditive;                                    // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         UncrouchAdditive;                                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchUncrouchBlendIn;                             // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchUncrouchBlendOut;                            // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         CloseCollisionAdditivePose;                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AimPose;                                           // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AimAdditiveAmbient;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           AimLookAroundBlendspace;                           // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           AimAdditiveLocomotionBlendspace;                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AimAdditiveCrouch;                                 // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AimAdditiveUncrouch;                               // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         TransitionToAim;                                   // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         TransitionToIdle;                                  // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ReloadMontage;                                     // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ShootArray;                                        // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimSequence*                         NoAmmo;                                            // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          SwitchAmmoMontage;                                 // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         JumpAdditive;                                      // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         FallAdditive;                                      // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         LandAdditive;                                      // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeftHandIK;                                       // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveItemLeftHandIKSettings         LeftHandIKSettings;                                // 0x150(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                         AimZPoseOffset;                                    // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 HipDamageReactions;                                // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 HipDamageCameraReactions;                          // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 AimDamageReactions;                                // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 AimDamageCameraReactions;                          // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Camera_ToReload;                                   // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Camera_ReloadLoop;                                 // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Camera_FromReload;                                 // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Camera_EquipOverride;                              // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Camera_UnequipOverride;                            // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ChernobylGame.CGAttachmentProperties
struct FCGAttachmentProperties : public FTableRowBase
{
public:
	float                                        DamageModifier;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeModifier;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecoilReductionLevel;                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwayModifier;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageModifier_UI;                                 // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeModifier_UI;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecoilModifier_UI;                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SwayModifier_UI;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttachmentIndex;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AdditionalBulletCost;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x50 - 0x38)
// ScriptStruct ChernobylGame.CGMagazineProperties
struct FCGMagazineProperties : public FCGAttachmentProperties
{
public:
	class UStaticMesh*                           MagazineMesh;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClipAdditionalSize;                                // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeModifier_UI;                                   // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MagazineID;                                        // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableDefaultCamReload;                          // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingAmmo;                                        // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DA[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x48 - 0x38)
// ScriptStruct ChernobylGame.CGTriggerProperties
struct FCGTriggerProperties : public FCGAttachmentProperties
{
public:
	class UStaticMesh*                           TriggerMesh;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutomatic;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFiremode                         Firemode;                                          // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x48 - 0x38)
// ScriptStruct ChernobylGame.CGBarrelProperties
struct FCGBarrelProperties : public FCGAttachmentProperties
{
public:
	class UStaticMesh*                           BarrelMesh;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoudnessModifier;                                  // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BarrelIndex;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x50 - 0x38)
// ScriptStruct ChernobylGame.CGHandleProperties
struct FCGHandleProperties : public FCGAttachmentProperties
{
public:
	class UStaticMesh*                           HandleMesh;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ToAimLengthReductionLevel;                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalMelee;                                       // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MeleeDamageMultiplier;                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x50 - 0x38)
// ScriptStruct ChernobylGame.CGScopeProperties
struct FCGScopeProperties : public FCGAttachmentProperties
{
public:
	float                                        AimPoseOffsetZ;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimFOV;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ScopeMesh;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSniperScope;                                      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bThermalScope;                                     // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimRotateScale;                                    // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.EOSEntitlement
struct FEOSEntitlement
{
public:
	class FString                                EOSEntitlementId;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EOSEntitlementNamespace;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ChernobylGame.DLCInfo
struct FDLCInfo : public FTableRowBase
{
public:
	class FString                                ValidatorObjectPath;                               // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLCType                          DLCType;                                           // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamAppID;                                        // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GOGAppID;                                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEOSEntitlement                       EOSEntitlement;                                    // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         LoadedInEditor;                                    // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LoadedInCGGame;                                    // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LoadedAlways;                                      // 0x4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChernobylGame.BenchmarkHardware
struct FBenchmarkHardware
{
public:
	class FString                                CPU;                                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GPU;                                               // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RAM;                                               // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.BenchmarkFinalResult
struct FBenchmarkFinalResult
{
public:
	float                                        AvarageFPS;                                        // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFPS;                                            // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFPS;                                            // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinOnePerFPS;                                      // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.NPCBuildingInteractionStats
struct FNPCBuildingInteractionStats
{
public:
	bool                                         bCurrentlyInteractingWithBuilding;                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     CurrentInteractionAnimation;                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.WidgetInfoCache
struct FWidgetInfoCache
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.TeleportationRoutePair
struct FTeleportationRoutePair
{
public:
	class ACGShadowTeleportBase*                 TpFrom;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGShadowTeleportBase*                 TpTo;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cost;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ChernobylGame.DisplacementMeshInfo
struct FDisplacementMeshInfo : public FTableRowBase
{
public:
	TSoftObjectPtr<class UStaticMesh>            DefaultStaticMesh;                                 // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            DisplacementStaticMesh;                            // 0x30(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ChernobylGame.CharacterStaticMeshSkinInfo
struct FCharacterStaticMeshSkinInfo : public FTableRowBase
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCharacterSkinMaterialInfo> SkinMaterials;                                     // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ChernobylGame.CharacterSkinInfo
struct FCharacterSkinInfo : public FTableRowBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCharacterSkinMaterialInfo> SkinMaterials;                                     // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.NotesCountMemoryOfYou
struct FNotesCountMemoryOfYou
{
public:
	int32                                        Current;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ChernobylGame.CorsairHookProfile
struct FCorsairHookProfile : public FTableRowBase
{
public:
	enum class ECorsairHookType                  HookType;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECorsairHookName                  HookName;                                          // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.NoteExperienceHandle
struct FNoteExperienceHandle
{
public:
	class FName                                  BoardID;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   CustomExperienceHandle;                            // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.ScalabilityClampInfo
struct FScalabilityClampInfo : public FTableRowBase
{
public:
	enum class EScalabilityType                  Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             GlobalClamp;                                       // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             AdvancedClamp;                                     // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ChernobylGame.KeyNameInfo
struct FKeyNameInfo : public FTableRowBase
{
public:
	class FName                                  EnglishDisplayName;                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.EntityDistanceInfo
struct FEntityDistanceInfo
{
public:
	class AActor*                                Entity;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40ED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ChernobylGame.CGAIScheduledAction
struct FCGAIScheduledAction
{
public:
	enum class EAIScheduledActionType            Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ChernobylGame.PhysicsItemSoundType
struct FPhysicsItemSoundType : public FTableRowBase
{
public:
	class FName                                  VelocityRTCP;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          Event;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.PermanentDataBooleanPair
struct FPermanentDataBooleanPair
{
public:
	struct FDataTableRowHandle                   PermamentDataHandle;                               // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         RequiredValue;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.HeistBoardDescriptionData
struct FHeistBoardDescriptionData : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FPermanentDataBooleanPair>     Data;                                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ChernobylGame.WorldStatTooltipInfo
struct FWorldStatTooltipInfo : public FTableRowBase
{
public:
	struct FDataTableRowHandle                   WorldStatHandle;                                   // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   TooltipAlreadyShownPermanentDataHandle;            // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   TooltipTextHandle;                                 // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ValueRequired;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ValueFlipped;                                      // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ChernobylGame.DifficultyModifiers
struct FDifficultyModifiers : public FTableRowBase
{
public:
	enum class EDifficultyType                   DifficultyType;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VeryEasy;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Easy;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Medium;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hard;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Insane;                                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GateOfMadness;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.StatReadableName
struct FStatReadableName : public FTableRowBase
{
public:
	class FText                                  ReadableName;                                      // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.NameArray
struct FNameArray
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.DeathPenaltyItemInfo
struct FDeathPenaltyItemInfo
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomAmount;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MultiplyAmountByCraftAmount;                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowPartialRemoval;                               // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPermanentDataBooleanPair>     RequiredPermanentDataToTake;                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ChernobylGame.DeathPenaltyTierInfo
struct FDeathPenaltyTierInfo : public FTableRowBase
{
public:
	TArray<struct FDeathPenaltyItemInfo>         Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        AmountOfRolls;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   RollbackTier;                                      // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RollbackTierAmountForEveryMissing;                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.CompanionIndicatorTypeInfo
struct FCompanionIndicatorTypeInfo : public FTableRowBase
{
public:
	enum class ECompanionIndicatorType           Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ChernobylGame.CGQuestMusic
struct FCGQuestMusic : public FTableRowBase
{
public:
	class UAkAudioEvent*                         QuestMusicSignal;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.EndGameCompositionScene
struct FEndGameCompositionScene : public FTableRowBase
{
public:
	TArray<struct FDataTableRowHandle>           CompositionsHandle;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChernobylGame.EndGameCompositionInfo
struct FEndGameCompositionInfo : public FTableRowBase
{
public:
	struct FDataTableRowHandle                   CompositionScreenHandle;                           // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            DialogueDT;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DialogueMetadataDT;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartingRow;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ChernobylGame.EndGameCompositionAnimationInfo
struct FEndGameCompositionAnimationInfo
{
public:
	struct FVector2D                             StartingOffset;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DesiredOffset;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CurrentOffset;                                     // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingScale;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredScale;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentScale;                                      // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldFade;                                        // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BeginFadeBeforeEndInSeconds;                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeDuration;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ChernobylGame.EndGameCompositionImageInfo
struct FEndGameCompositionImageInfo
{
public:
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEndGameCompositionAnimationInfo      AnimationInfo;                                     // 0x28(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x160 (0x168 - 0x8)
// ScriptStruct ChernobylGame.EndGameCompositionScreenInfo
struct FEndGameCompositionScreenInfo : public FTableRowBase
{
public:
	struct FEndGameCompositionImageInfo          Background;                                        // 0x8(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEndGameCompositionImageInfo          Image1;                                            // 0x60(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEndGameCompositionImageInfo          Image2;                                            // 0xB8(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEndGameCompositionImageInfo          Image3;                                            // 0x110(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ChernobylGame.CGMusicProperties
struct FCGMusicProperties
{
public:
	class UAkAudioEvent*                         Global_StructureStart;                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Global_StructureEnd;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRtpc*                               Global_SetMap;                                     // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRtpc*                               Combat_AlertRaise;                                 // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Combat_HumanAlert;                                 // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Combat_MonsterAlert;                               // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Combat_HumanCombat;                                // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Combat_MonsterCombat;                              // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Exploration_Neutral;                               // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Event_Mystery;                                     // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Event_Horror;                                      // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Event_Tatyana;                                     // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MusicQuests;                                       // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.PlayCustomAnimProperties
struct FPlayCustomAnimProperties
{
public:
	class ACGFakeHero*                           InFakeHeroActor;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimInitialPosition;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimFinishPosition;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideEndTransform;                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OutHeroTransform;                                  // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShouldUncrouch;                                   // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalTimeBeforeTemporalFakeHeroIsDestroyed;   // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventHighlightDisabling;                        // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.PrepareCustomSaveResult
struct FPrepareCustomSaveResult
{
public:
	bool                                         PerformSave;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CustomSaveTime;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomSaveSlot;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomSaveMetadataSlot;                            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OriginalSaveSlot;                                  // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OriginalSaveMetadataSlot;                          // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChernobylGame.CGGasProperties
struct FCGGasProperties
{
public:
	bool                                         bUseGasProperties;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Damage;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDelayInSeconds;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeedModifier;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.CGNoisePerceptionProperties
struct FCGNoisePerceptionProperties : public FTableRowBase
{
public:
	float                                        NoiseStrength;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseRadius;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseFalloff;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistanceToActivateCombat;                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.CGPerceptionMemory
struct FCGPerceptionMemory
{
public:
	class ACGCharacter*                          CGCharacter;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPerceptionType                   PerceptionType;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MemoryLifetime;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMemoryLifetimeEnabled;                            // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4100[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.CGSightMemory
struct FCGSightMemory
{
public:
	class AActor*                                ActorToMemorize;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MemoryLocation;                                    // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MemoryTimeRemaining;                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ChernobylGame.CGMovementStateAdditionalInfo
struct FCGMovementStateAdditionalInfo
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGMovementState>          PreviousMovementState;                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector0;                                           // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector1;                                           // 0x24(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float0;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float1;                                            // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CGClimbQuery
struct FCGClimbQuery
{
public:
	struct FVector                               Target;                                            // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4101[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ChernobylGame.StealthKillParams
struct FStealthKillParams
{
public:
	class UAnimSequence*                         AIStealthKillAnim;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         HeroStealthKillAnim;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            HeroTransformRelativeToAI;                         // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AIStealthKillAnimCrouch;                           // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         HeroStealthKillAnimCrouch;                         // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            HeroTransformRelativeToAICrouch;                   // 0x50(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3E0 (0x3E0 - 0x0)
// ScriptStruct ChernobylGame.CGAIProperties
struct FCGAIProperties
{
public:
	float                                        Alert_RaiseModifier;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alert_RaiseModifier_InAlert;                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsF;                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsFR;                     // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsR;                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsBR;                     // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsB;                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsBL;                     // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsL;                      // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_AdditiveAnimsFL;                     // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ReceiveDamage_BulletBloodSplatters;                // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ReceiveDamage_BulletBloodSplattersHead;            // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_DeathAnimsF;                         // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_DeathAnimsR;                         // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_DeathAnimsB;                         // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDamage_DeathAnimsL;                         // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SightRadius_Patrol;                                // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoseSightRadius_Patrol;                            // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SightRadius_Hunt;                                  // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoseSightRadius_Hunt;                              // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlertValueDelay;                                   // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4102[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStealthKillParams>            StealthKillsF;                                     // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsR;                                     // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsB;                                     // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsL;                                     // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsBR;                                    // 0x140(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsFL;                                    // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsBL;                                    // 0x160(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsFR;                                    // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsF;                     // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsFR;                    // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsR;                     // 0x1A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsBR;                    // 0x1B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsB;                     // 0x1C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsBL;                    // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsL;                     // 0x1E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathPatrol_HeadshotsFL;                    // 0x1F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsF;                      // 0x200(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsFR;                     // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsR;                      // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsBR;                     // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsB;                      // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsBL;                     // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsL;                      // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathAlert_HeadshotsFL;                     // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsF;                       // 0x280(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsFR;                      // 0x290(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsR;                       // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsBR;                      // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsB;                       // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsBL;                      // 0x2D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsL;                       // 0x2E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveDeathHunt_HeadshotsFL;                      // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ReceiveMeleeHitReaction;                           // 0x300(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeF;                                // 0x310(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeR;                                // 0x320(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeB;                                // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeL;                                // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeBR;                               // 0x350(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeFL;                               // 0x360(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeBL;                               // 0x370(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStealthKillParams>            StealthKillsKnifeFR;                               // 0x380(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        RadiusToBeSpottedInMonsterCheck;                   // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    BorderQueryFilter;                                 // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         ToGenericIdle;                                     // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         FromGenericIdle;                                   // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGruntEnabled;                                     // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4104[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         GruntOverride;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AIDisplayName;                                     // 0x3C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        HeroMeleeDamageMultiplier;                         // 0x3D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4105[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x408 - 0x3E0)
// ScriptStruct ChernobylGame.CGDusterProperties
struct FCGDusterProperties : public FCGAIProperties
{
public:
	float                                        RangeToActivate;                                   // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4106[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGDusterProjectile>       ProjectileClass;                                   // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGDusterGhost>            GhostClass;                                        // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackRange;                                       // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShootDelayMin;                                     // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShootDelayMax;                                     // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutAttack;                              // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ChernobylGame.CGGibInfo
struct FCGGibInfo
{
public:
	class FName                                  GibName;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHP;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4107[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           GibToAttach;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              GibAttachRotOffset;                                // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4108[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           GibToSpawn_StaticMesh;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         GibToSpawn_SkeletalMesh;                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GibAttachSocketName;                               // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GibSpawnSocketName;                                // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         SpawnSound;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForGibAttachOverride;                     // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForGibSpawnOverride;                      // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForWhenHitOverride;                       // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            GrowingBloodDecalMaterialsOverride;                // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            SplatterBloodDecalMaterialsOverride;               // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          AssociatedBones;                                   // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ChildGibs;                                         // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  GibMaskIndex;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AdditionalSceneComponentsToHideByName;             // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DetachBlockGibs;                                   // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class ACGGibActor*                           AttachedGibActor;                                  // 0xE8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGGibActor*                           DetachedGibActor;                                  // 0xF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CumulativeGibs;                                    // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ChernobylGame.CGAIStateAdditionalInfo
struct FCGAIStateAdditionalInfo
{
public:
	TSubclassOf<class UCGAIState>                PreviousAIState;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Animation1;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Animation2;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Byte1;                                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Byte2;                                             // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4109[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector0;                                           // 0x38(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ChernobylGame.CGIKDebugInfo
struct FCGIKDebugInfo
{
public:
	struct FHitResult                            LeftLegTraceResult;                                // 0x0(0x8C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                            RightLegTraceResult;                               // 0x8C(0x8C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                            HipsTraceResult;                                   // 0x118(0x8C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bShouldUseHipsTrace;                               // 0x1A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HipsToLower;                                       // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftFeetTooDeep;                                   // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightFeetTooDeep;                                  // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HipsIKZ;                                           // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftLegIKZ;                                        // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightLegIKZ;                                       // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.CGDebugDecorator
struct FCGDebugDecorator
{
public:
	uint8                                        Pad_410C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.CGComfortableCombatRadiusQuery
struct FCGComfortableCombatRadiusQuery
{
public:
	float                                        PositionOffset;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComfortableCombatRadius          Status;                                            // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ChernobylGame.CGAILocomotionProperties
struct FCGAILocomotionProperties : public FTableRowBase
{
public:
	float                                        MaxWalkSpeed;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAcceleration;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakingDeceleration;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationRate;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSeparateBrakingFriction;                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandMovementMode                 LandMovementMode;                                  // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.CGCustomDialogueAction
struct FCGCustomDialogueAction
{
public:
	class ACGCharacter*                          DialogueAnimation_Character;                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DialogueAnimation_ShouldInterpolate;               // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DialogueAnimation_InterpolationTargetTransform;    // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DialogueAnimation_Start;                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DialogueAnimation_Loop;                            // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DialogueAnimation_End;                             // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4110[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CGApproachIdleSettings
struct FCGApproachIdleSettings
{
public:
	class UAnimSequence*                         ApproachSequence;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         IdleSequence;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x400 - 0x3E0)
// ScriptStruct ChernobylGame.CGNPCProperties
struct FCGNPCProperties : public FCGAIProperties
{
public:
	float                                        MaxRunSpeed;                                       // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWalkSpeed;                                      // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRunStealthySpeed;                               // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWalkStealthySpeed;                              // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceToWaitForPlayer;                        // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistanceToWaitForPlayer;                        // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeedModifierWhenBehind;                        // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceToStopSpeedingUp;                       // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.StealthKillQueryResult
struct FStealthKillQueryResult
{
public:
	bool                                         bQueryResult;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClockDirection                   Direction;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4111[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomBehavior;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4112[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.PerceptionBlock
struct FPerceptionBlock
{
public:
	enum class EPerceptionBlock                  Block;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4113[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.CustomListenerProperties
struct FCustomListenerProperties
{
public:
	struct FVector                               CustomListenerLocation;                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CustomListenerDirection;                           // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ChernobylGame.OrderQuery
struct FOrderQuery
{
public:
	class FName                                  Order_Desc;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Order_Tag;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Order_Location;                                    // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x3E8 - 0x3E0)
// ScriptStruct ChernobylGame.CGVirtuaProperties
struct FCGVirtuaProperties : public FCGAIProperties
{
public:
	float                                        Aim_DistanceToModifySpeed;                         // 0x3E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Aim_SpeedModifier;                                 // 0x3E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x3F0 - 0x3E8)
// ScriptStruct ChernobylGame.DarkStalkerProperties
struct FDarkStalkerProperties : public FCGVirtuaProperties
{
public:
	float                                        Damage_MinDamage;                                  // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_MaxDamage;                                  // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ChernobylGame.CGMultitraceResult
struct FCGMultitraceResult
{
public:
	struct FHitResult                            GenericHitResult;                                  // 0x0(0x8C)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        DamageModifier;                                    // 0x8C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.CGShootResult
struct FCGShootResult
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   Component;                                         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.CustomAnimQuery
struct FCustomAnimQuery
{
public:
	class ACGCharacter*                          CharacterReference;                                // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         SequenceToPlay;                                    // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldInterpolate;                                // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4114[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetTransform;                                   // 0x20(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShouldChangeState;                                // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4115[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                OptionalSkeletalMesh;                              // 0x58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.ShakerProperties
struct FShakerProperties
{
public:
	uint8                                        Pad_4116[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.HeadTracingProperties
struct FHeadTracingProperties
{
public:
	enum class EHeadTracingMode                  HeadTracingMode;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4117[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StationaryPoint;                                   // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TracedActor;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TracedSkeletalMesh;                                // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            TracedSocketWorldTransform;                        // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TracedSocketName;                                  // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4118[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x520 - 0x3E8)
// ScriptStruct ChernobylGame.SoldierProperties
struct FSoldierProperties : public FCGVirtuaProperties
{
public:
	float                                        PossibleMax_WalkSpeed;                             // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleMax_RunSpeed;                              // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrafeSpeed_Fast;                                  // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrafeSpeed_Slow;                                  // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds_TimeNeededToRecognizeTarget;               // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds_TracingAfterLosingSight;                   // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds_ChaseMaxTime;                              // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Min;                                        // 0x404(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Max;                                        // 0x408(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Accuarcy_Min;                                      // 0x40C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Accuarcy_Max;                                      // 0x410(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay_Min;                                         // 0x414(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay_Max;                                         // 0x418(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4119[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequence*>                 AdditiveShootingAnims;                             // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                       MuzzleFlash;                                       // 0x430(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                    ReactionSound_MaxAlert;                            // 0x438(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                    ReactionSound_ReceiveHit;                          // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                    ReactionSound_LostTrack;                           // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                         MeleeAttack;                                       // 0x468(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleMax_MeleeWalkSpeed;                        // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleMax_MeleeRunSpeed;                         // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 AlertLookAroundAnims;                              // 0x478(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 PatrolToAlertAnims;                                // 0x488(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                    ReactionSound_PatrolToAlert;                       // 0x498(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  AlertToHuntAnims;                                  // 0x4A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 AlertToPatrolAnims;                                // 0x4B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                    ReactionSound_AlertToPatrol;                       // 0x4C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  HuntEvadeRight;                                    // 0x4D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  HuntEvadeLeft;                                     // 0x4E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        ComfortableCombatRadiusMin;                        // 0x4F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ComfortableCombatRadiusMax;                        // 0x4FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VirtuaSpeedCoverModifier;                          // 0x500(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCover;                                      // 0x504(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCrouch;                                     // 0x505(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldFakeShot;                                   // 0x506(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SuperShotChance;                                   // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonsterCheckRadius;                                // 0x50C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VirtuaDist;                                        // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VirtuaLose;                                        // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchChance;                                      // 0x518(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x408 - 0x3E0)
// ScriptStruct ChernobylGame.OutdoorShadowProperties
struct FOutdoorShadowProperties : public FCGAIProperties
{
public:
	float                                        WarpSpeed_Patrol;                                  // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpLength_Patrol;                                 // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpChance_Patrol;                                 // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpSpeed_Hunt;                                    // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpLength_Hunt;                                   // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpChance_Hunt;                                   // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleMax_WalkSpeed;                             // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleMax_RunSpeed;                              // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBeforeTeleportJump;                           // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x418 - 0x3E0)
// ScriptStruct ChernobylGame.ChernohostProperties
struct FChernohostProperties : public FCGAIProperties
{
public:
	float                                        MeleeRangeMin;                                     // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeRangeMax;                                     // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JumpAttackRangeMin;                                // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JumpAttackRangeMax;                                // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RushRangeMin;                                      // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RushRangeMax;                                      // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMoveToFail;                                     // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutHeroVision;                          // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACGShadowTeleportBase>> ChernohostTeleportClasses;                         // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        FindClosestTPRadius;                               // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPathCostFindClosest;                            // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x438 - 0x3E0)
// ScriptStruct ChernobylGame.ShadowProperties
struct FShadowProperties : public FCGAIProperties
{
public:
	float                                        WarpSpeed_Patrol;                                  // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpLength_Patrol;                                 // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpChance_Patrol;                                 // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpSpeed_Hunt;                                    // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpLength_Hunt;                                   // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpChance_Hunt;                                   // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeChance;                                      // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleMax_WalkSpeed;                             // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleMax_RunSpeed;                              // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToSwapArea;                                    // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeDeriviationToSwapArea;                        // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBetweenAreaSwaps;                             // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportChance;                                    // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportDelay;                                     // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hunt_TeleportCooldown;                             // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TeleportReroute;                                   // 0x41C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4121[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToSwapIntoHerosArea;                         // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditiveTimeInHeroArea;                            // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusAroundHeroToSearchForTeleporters;            // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusAroundHeroToSearch_PathLength;               // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PortalEnterExitAnimScale;                          // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostEffectScale;                                  // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.AdjacentAreaQueryResult
struct FAdjacentAreaQueryResult
{
public:
	class ACGShadowTeleportingAreaBase*          OutArea;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutHeroAreaChosen;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4122[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.TagContent
struct FTagContent
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Content;                                           // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ChernobylGame.CraftingRecipeTemplate
struct FCraftingRecipeTemplate : public FTableRowBase
{
public:
	TArray<class FText>                          Entries;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct ChernobylGame.QuickTimeEventData
struct FQuickTimeEventData
{
public:
	enum class EQTEType                          Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4124[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InputName;                                         // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4125[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IndicatorPC;                                       // 0x18(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IndicatorPS4;                                      // 0xA0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IndicatorXbox;                                     // 0x128(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         CanBeFailedByTimeout;                              // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4126[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBeforeFail;                                    // 0x1B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeFailedByWrongKey;                             // 0x1B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4127[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InputActionAllKeys;                                // 0x1BC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4128[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct ChernobylGame.CraftingRecipeStep
struct FCraftingRecipeStep
{
public:
	struct FFloatRange                           MovieLoopIdle;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           MovieLoopAction;                                   // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuickTimeEventData                   QuickTimeEvent;                                    // 0x20(0x1C8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class USoundBase*                            SoundOnHit;                                        // 0x1E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x108 - 0x8)
// ScriptStruct ChernobylGame.CraftingRecipe
struct FCraftingRecipe : public FTableRowBase
{
public:
	class FName                                  CraftingResult;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResultAmount;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4129[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     Ingredients;                                       // 0x18(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x68(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   RecipeCategory;                                    // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingRecipeStep>           Steps;                                             // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatRange                           MovieLoopPreview;                                  // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          Movie;                                             // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Template;                                          // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TemplateEntries;                                   // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0xD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         CraftedSound;                                      // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.TextWithImagePart
struct FTextWithImagePart
{
public:
	bool                                         bIsText;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParameterIndex;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ChernobylGame.InfluencerComponentValue
struct FInfluencerComponentValue
{
public:
	enum class EInfluenceTargets                 Target;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.PropertyData
struct FPropertyData
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGameGameInstance
struct FCustomSaveGameGameInstance
{
public:
	class FName                                  GameInstanceName;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FPropertyData>      GameInstanceProperties;                            // 0x8(0x50)(NativeAccessSpecifierPublic)
	TArray<uint8>                                GameInstanceData;                                  // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGameActorObject
struct FCustomSaveGameActorObject
{
public:
	TArray<uint8>                                ActorObjectData;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FPropertyData>      ObjectProperties;                                  // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGameActor
struct FCustomSaveGameActor
{
public:
	class FString                                ActorClass;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorName;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ActorTransform;                                    // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomSaveGameActorObject>    ActorObjects;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ActorData;                                         // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FPropertyData>      ActorsProperties;                                  // 0x70(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FPropertyData>      ActorBlueprintPropData;                            // 0xC0(0x50)(NativeAccessSpecifierPublic)
	TArray<uint8>                                ActorBlueprint;                                    // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_412E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGameGameMode
struct FCustomSaveGameGameMode
{
public:
	class FName                                  GameModeActorName;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                GameModeData;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FPropertyData>      GameModeProperties;                                // 0x18(0x50)(NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGameStreamingLevel
struct FCustomSaveGameStreamingLevel
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLevelLoaded;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomSaveGameActor                  LevelScriptActor;                                  // 0x10(0x130)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FCustomSaveGameActor>          LevelActors;                                       // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGamePersistentLevel
struct FCustomSaveGamePersistentLevel
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLevelLoaded;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4130[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomSaveGameActor                  LevelScriptActor;                                  // 0x10(0x130)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCustomSaveGameGameMode               GameMode;                                          // 0x140(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FCustomSaveGameActor>          LevelActors;                                       // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomSaveGameStreamingLevel> StreamingLevels;                                   // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4131[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ChernobylGame.CustomSaveGameData
struct FCustomSaveGameData
{
public:
	int32                                        Version;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SaveVersion;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             SaveTimestamp;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomSaveGameGameInstance           GameInstanceData;                                  // 0x10(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FCustomSaveGamePersistentLevel> PersistentLevels;                                  // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCustomSaveGameMetadataInfo           SaveGameMetadata;                                  // 0x88(0x50)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.ActorVOPair
struct FActorVOPair
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VO;                                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ChernobylGame.ChatterRecord
struct FChatterRecord : public FTableRowBase
{
public:
	enum class EChatterType                      ChatterType;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4132[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            ChatterDialogueData;                               // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ChatterDialogueMetaData;                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ChatterDialogueRow;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChatterDialogueActorName;                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          DisabledOnMaps;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.CompanionsInConflict
struct FCompanionsInConflict
{
public:
	class FName                                  CompanionA;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGNPC*                                CompanionARef;                                     // 0x8(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionB;                                        // 0x10(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGNPC*                                CompanionBRef;                                     // 0x18(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ChernobylGame.ReportInfo
struct FReportInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Place;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlaceDetails;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParentPlace;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MissionName;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParentMissionName;                                 // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChernobylGame.FPAnimQuery
struct FFPAnimQuery
{
public:
	enum class EFPAnimSystemActivity             FPAnimSystemActivity;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4134[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGActiveItem>             ActiveItemClass;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFastAction;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4135[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChernobylGame.WorldSoftObjectReference
struct FWorldSoftObjectReference
{
public:
	TSoftObjectPtr<class UWorld>                 World;                                             // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChernobylGame.RoomLoadInformation
struct FRoomLoadInformation
{
public:
	class FName                                  RoomName;                                          // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4136[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               ObjectToCall;                                      // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToCall;                                // 0x48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.MorningActivityInfo
struct FMorningActivityInfo
{
public:
	int32                                        Day;                                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionID;                                       // 0x4(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMorningSequenceType              ActivityType;                                      // 0xC(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4137[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.CompanionDaysToDie
struct FCompanionDaysToDie
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DaysLeft;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4139[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BuffName;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ChernobylGame.NPCData
struct FNPCData
{
public:
	TSubclassOf<class ANPCBase>                  CharacterClass;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ENPCStatus                        Status;                                            // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Morale;                                            // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MissionSuccessChancePercent;                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SympathyTowardsPlayer;                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.PassiveDialogueInfo
struct FPassiveDialogueInfo
{
public:
	class UDataTable*                            DataDT;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MetaDataDT;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartingRow;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldStop;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ChernobylGame.SaveUnit
struct FSaveUnit
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                Class;                                             // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Bytes;                                             // 0x48(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x60 - 0x58)
// ScriptStruct ChernobylGame.SaveUnitComponent
struct FSaveUnitComponent : public FSaveUnit
{
public:
	uint8                                        Pad_413D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x70 - 0x58)
// ScriptStruct ChernobylGame.SaveUnitActor
struct FSaveUnitActor : public FSaveUnit
{
public:
	class ULevel*                                Level;                                             // 0x58(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSaveUnitComponent>            Components;                                        // 0x60(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.SaveRefernce
struct FSaveRefernce
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.SaveUnitLevell
struct FSaveUnitLevell
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       bSbV;                                              // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       bIL;                                               // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChernobylGame.WordGroup
struct FWordGroup
{
public:
	TArray<int32>                                WordIndices;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.ShadowPatrolActorNode
struct FShadowPatrolActorNode
{
public:
	uint8                                        Pad_413E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ChernobylGame.SubtitleCueBP
struct FSubtitleCueBP
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


