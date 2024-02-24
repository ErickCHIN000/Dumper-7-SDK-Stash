#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EEvolutionSlot : uint8
{
	SLOT_UNDEFINED                 = 0,
	SLOT_JAW                       = 1,
	SLOT_HEAD                      = 2,
	SLOT_BODY                      = 3,
	SLOT_TAIL                      = 4,
	SLOT_FINS                      = 5,
	SLOT_ORGAN1                    = 6,
	SLOT_ORGAN2                    = 7,
	SLOT_ORGAN3                    = 8,
	SLOT_ORGAN4                    = 9,
	SLOT_ALL                       = 10,
	SLOT_MAX                       = 11,
};

enum class EAIThreatAlertState : uint8
{
	AS_Undefined                   = 0,
	AS_Ease                        = 1,
	AS_Suspicious                  = 2,
	AS_Alert                       = 3,
	AS_Scared                      = 4,
	AS_Max                         = 5,
};

enum class EObjectiveType : uint8
{
	INVALID                        = 0,
	DISCOVER                       = 1,
	TERRORIZE                      = 2,
	NUTRIENT_CACHE                 = 3,
	POPULATION_CONTROL             = 4,
	APEX_PREDATOR                  = 5,
	HUNT                           = 6,
	HIGH_VALUE_TARGET              = 7,
	COLLECTABLE                    = 8,
	CUSTOM                         = 9,
	GRATES                         = 10,
	GATES                          = 11,
	BREACHES                       = 12,
	GROTTO                         = 13,
	CUTSCENE                       = 14,
	BOSS                           = 15,
	DESTROY                        = 16,
	TIME_TRIAL                     = 17,
	GOTO                           = 18,
	DESTROY_BREAKABLE              = 19,
	BOUNTY_TRIGGER                 = 20,
	FAIL_TO_COMM                   = 21,
	TIN_FOIL_HAT                   = 22,
	EObjectiveType_MAX             = 23,
};

enum class EPlayerGrowthStage : uint8
{
	PGS_UNDEFINED                  = 0,
	PGS_PUP                        = 1,
	PGS_TEEN                       = 2,
	PGS_ADULT                      = 3,
	PGS_ELDER                      = 4,
	PGS_MEGA                       = 5,
	PGS_MOTHER                     = 6,
	PGS_MAX                        = 7,
};

enum class ENutrientType : uint8
{
	NT_PROTEINS                    = 0,
	NT_FATS                        = 1,
	NT_MINERALS                    = 2,
	NT_MUTAGEN                     = 3,
	NT_MAX                         = 4,
};

enum class EPersistentStatType : uint8
{
	STAT_UNDEFINED                 = 0,
	STAT_KILLS_HUMAN               = 1,
	STAT_KILLS_ANIMAL              = 2,
	STAT_KILLS_BOATS               = 3,
	STAT_KILLS_BOSSES              = 4,
	STAT_PLAYERDEATHS              = 5,
	STAT_NUTRIENTSGAINED           = 6,
	STAT_WORLDEXPLORED             = 7,
	STAT_MAX                       = 8,
};

enum class ETutorialEventId : uint8
{
	TUT_EVENT_LOOK                 = 0,
	TUT_EVENT_MOVE                 = 1,
	TUT_EVENT_CONSUME              = 2,
	TUT_EVENT_TAILWHIP             = 3,
	TUT_EVENT_KNIFE                = 4,
	TUT_EVENT_KNIFING_JUMP         = 5,
	TUT_EVENT_SUBMERGE             = 6,
	TUT_EVENT_LUNGE                = 7,
	TUT_EVENT_BREACH               = 8,
	TUT_EVENT_WHIPSHOT             = 9,
	TUT_EVENT_WAITING_FOR_EVOLUTION = 10,
	TUT_EVENT_OPEN_EVOLUTION_PANEL = 11,
	TUT_EVENT_EVOLUTION_PURCHASE   = 12,
	TUT_EVENT_FINISHED             = 13,
	TUT_EVENT_MAX                  = 14,
};

enum class EME_CharacterAbility : uint8
{
	CA_None                        = 0,
	CA_Combo                       = 1,
	CA_Evolution                   = 2,
	CA_Max                         = 3,
};

enum class ECharacterActionMode : uint8
{
	ACT_UNDERWATER                 = 0,
	ACT_KNIFING                    = 1,
	ACT_BREACHING                  = 2,
	ACT_ONLAND                     = 3,
	ACT_MAX                        = 4,
};

enum class EWorldRegion : uint8
{
	UNDEFINED                      = 0,
	CRAWFISH_BAY                   = 1,
	FAWTICK_BAYOU                  = 2,
	DEAD_HORSE_LAKE                = 3,
	GOLDEN_SHORES                  = 4,
	SAPPHIRE_BAY                   = 5,
	PROSPERITY_SANDS               = 6,
	CAVIAR_KEY                     = 7,
	THE_GULF                       = 8,
	DLC01                          = 9,
	EWorldRegion_MAX               = 10,
};

enum class EObjectiveState : uint8
{
	UNAVAILABLE                    = 0,
	AVAILABLE                      = 1,
	INPROGRESS                     = 2,
	COMPLETED                      = 3,
	EObjectiveState_MAX            = 4,
};

enum class EBossBattleEvent : uint8
{
	BOE_INTRO                      = 0,
	BOE_FIGHTSTART                 = 1,
	BOE_FIGHTSTOPPED               = 2,
	BOE_BOSSSPAWNED                = 3,
	BOE_BOSSREMOVED                = 4,
	BOE_FIGHTEND                   = 5,
	BOE_MAX                        = 6,
};

enum class EDLCType : uint8
{
	EDLCType_DLC01                 = 0,
	EDLCType_BASE                  = 1,
	EDLCType_NUM                   = 2,
	EDLCType_MAX                   = 3,
};

enum class EVehicleType : uint8
{
	EVT_UNDEFINED                  = 0,
	EVT_JETSKI                     = 1,
	EVT_MAX                        = 2,
};

enum class EWeaponType : uint8
{
	EWT_UNDEFINED                  = 0,
	EWT_DART_GUN                   = 1,
	EWT_DEPTH_CHARGE               = 2,
	EWT_DYNAMITE                   = 3,
	EWT_MACHINE_GUN                = 4,
	EWT_POISON                     = 5,
	EWT_RIFLE                      = 6,
	EWT_SHIELD                     = 7,
	EWT_SHOTGUN                    = 8,
	EWT_SPEARGUN                   = 9,
	EWT_TORPEDO                    = 10,
	EWT_MAX                        = 11,
};

enum class EThreeStateSwitch : uint8
{
	ETS_False                      = 0,
	ETS_True                       = 1,
	ETS_None                       = 2,
	ETS_MAX                        = 3,
};

enum class EDirOctant : uint8
{
	DIR_Forward                    = 0,
	DIR_Backward                   = 1,
	DIR_Left                       = 2,
	DIR_Right                      = 3,
	DIR_ForwardLeft                = 4,
	DIR_ForwardRight               = 5,
	DIR_BackwardLeft               = 6,
	DIR_BackwardRight              = 7,
	DIR_None                       = 255,
	DIR_MAX                        = 256,
};

enum class ETutorialDisplayType : uint8
{
	TDT_POPUP                      = 0,
	TDT_BOOKLET                    = 1,
	TDT_MAX                        = 2,
};

enum class ERichTextPreset : uint8
{
	RTP_NONE                       = 0,
	RTP_INPUTBIND                  = 1,
	RTP_VOCABTERM                  = 2,
	RTP_EVOLUTIONBUFF              = 3,
	RTP_EVOLUTIONNERF              = 4,
	RTP_MAX                        = 5,
};

enum class EPlayerAttributeType : uint8
{
	ATT_FEROCITY                   = 0,
	ATT_ENDURANCE                  = 1,
	ATT_AGILITY                    = 2,
	ATT_VITALITY                   = 3,
	ATT_MAX                        = 4,
};

enum class ECombatEventType : uint8
{
	CE_DAMAGE                      = 0,
	CE_HEAL                        = 1,
	CE_EVADE                       = 2,
	CE_MAX                         = 3,
};

enum class EMECustomMovementMode : uint8
{
	MEMOVE_None                    = 0,
	MEMOVE_WhipShotBallistic       = 1,
	MEMOVE_WhipShotLinear          = 2,
	MEMOVE_MAX                     = 3,
};

enum class ENutrientSource : uint8
{
	NS_OBJECTIVES                  = 0,
	NS_BOUNTIES                    = 1,
	NS_EATING                      = 2,
	NS_LANDMARKS                   = 3,
	NS_CACHES                      = 4,
	NS_COLLECTABLES                = 5,
	NS_CHEATS                      = 6,
	NS_OTHER                       = 7,
	NS_MAX                         = 8,
};

enum class EThrashAttackType : uint8
{
	TAT_NONE                       = 0,
	TAT_LATCHED                    = 1,
	TAT_DRAGGED                    = 2,
	TAT_MAX                        = 3,
};

enum class EPawnSpeciesType : uint8
{
	SPECIES_UNDEFINED              = 0,
	SPECIES_TIGERSHARK             = 1,
	SPECIES_BULLSHARK              = 2,
	SPECIES_MAKOSHARK              = 3,
	SPECIES_HAMMERHEADSHARK        = 4,
	SPECIES_GREATWHITESHARK        = 5,
	SPECIES_THRESHERSHARK          = 6,
	SPECIES_PLAYABLE_MAX           = 7,
	SPECIES_HUMAN                  = 8,
	SPECIES_VEHICLE                = 9,
	SPECIES_BARRACUDA              = 10,
	SPECIES_ALLIGATOR              = 11,
	SPECIES_FISH                   = 12,
	SPECIES_TURTLE                 = 13,
	SPECIES_GORE                   = 14,
	SPECIES_SEAL                   = 15,
	SPECIES_KILLERWHALE            = 16,
	SPECIES_SPERMWHALE             = 17,
	SPECIES_SWORDFISH              = 18,
	SPECIES_MAX                    = 19,
};

enum class EPawnAge : uint8
{
	AGE_ADULT                      = 0,
	AGE_ELDERLY                    = 1,
	AGE_CHILD                      = 2,
	AGE_MAX                        = 3,
};

enum class EPawnBodyType : uint8
{
	BT_UNDEFINED                   = 0,
	BT_FIT                         = 1,
	BT_PLUS                        = 2,
	BT_MAX                         = 3,
};

enum class EPawnGender : uint8
{
	GENDER_UNDEFINED               = 0,
	GENDER_MALE                    = 1,
	GENDER_FEMALE                  = 2,
	GENDER_MAX                     = 3,
};

enum class EOutlineColor : uint8
{
	OUTLINECOLOR_NONE              = 0,
	OUTLINECOLOR_BLUE              = 1,
	OUTLINECOLOR_GREEN             = 2,
	OUTLINECOLOR_ORANGE            = 3,
	OUTLINECOLOR_RED               = 4,
	OUTLINECOLOR_YELLOW            = 5,
	OUTLINECOLOR_WHITE             = 6,
	OUTLINECOLOR_NUM               = 7,
	OUTLINECOLOR_MAX               = 8,
};

enum class ETwEquippabilityType : uint8
{
	EquippabilityType_None         = 0,
	EquippabilityType1             = 1,
	EquippabilityType2             = 2,
	EquippabilityType3             = 3,
	EquippabilityType4             = 4,
	EquippabilityType5             = 5,
	EquippabilityType6             = 6,
	EquippabilityType7             = 7,
	EquippabilityType8             = 8,
	EquippabilityType9             = 9,
	EquippabilityType10            = 10,
	EquippabilityType11            = 11,
	EquippabilityType12            = 12,
	EquippabilityType13            = 13,
	EquippabilityType14            = 14,
	EquippabilityType_Max          = 15,
	ETwEquippabilityType_MAX       = 16,
};

enum class EItemRarityType : uint8
{
	ItemRarityType_Common          = 0,
	ItemRarityType_UnCommon        = 1,
	ItemRarityType_Rare            = 2,
	ItemRarityType_Epic            = 3,
	ItemRarityType_Legendary       = 4,
	ItemRarityType_Max             = 5,
};

enum class ETeamID : uint8
{
	TID_Player1                    = 0,
	TID_Player2                    = 1,
	TID_AgressiveAI1               = 2,
	TID_AgressiveAI2               = 3,
	TID_FriendlyAI                 = 4,
	TID_NeutralAI                  = 5,
	TID_NoTeam                     = 255,
	TID_MAX                        = 256,
};

enum class ECombatStatus : uint8
{
	NONE                           = 0,
	STANDBY                        = 1,
	ON_DECK                        = 2,
	ENGAGED                        = 3,
	COOLDOWN                       = 4,
	ECombatStatus_MAX              = 5,
};

enum class EHunterRank : uint8
{
	NONE                           = 0,
	RANK_1                         = 1,
	RANK_2                         = 2,
	RANK_3                         = 3,
	MAX                            = 4,
};

enum class EVisionType : uint8
{
	VT_None                        = 0,
	VT_Air                         = 1,
	VT_Surface                     = 2,
	VT_Underwater                  = 3,
	VT_MAX                         = 4,
};

enum class EMercunaAreaType : uint8
{
	Underwater                     = 0,
	Air                            = 1,
	Land                           = 2,
	WildlifeBlocker                = 3,
	EMercunaAreaType_MAX           = 4,
};

enum class EAdjacencyExtentSize : uint8
{
	AES_VERYNARROW                 = 0,
	AES_NARROW                     = 1,
	AES_WIDE                       = 2,
	AES_VERYWIDE                   = 3,
	AES_WIDEST                     = 4,
	AES_MAX                        = 5,
};

enum class ENavmeshAreaType : uint8
{
	Default                        = 0,
	Escape                         = 1,
	ENavmeshAreaType_MAX           = 2,
};

enum class EAlertEventDuration : uint8
{
	Instant                        = 0,
	Infinite                       = 1,
	HasDuration                    = 2,
	EAlertEventDuration_MAX        = 3,
};

enum class EPropDetachPhase : uint8
{
	PDP_UNDEFINED                  = 0,
	PDP_INTRO_BEGIN                = 1,
	PDP_OUTRO_BEGIN                = 2,
	PDP_ACTIVITY_STOP              = 3,
	PDP_ACTIVITY_ABORT             = 4,
	PDP_MAX                        = 5,
};

enum class EEvolutionSelection : uint8
{
	EES_NOSELECTION                = 0,
	EES_JAW                        = 1,
	EES_FINS                       = 2,
	EES_HEAD                       = 3,
	EES_TAIL                       = 4,
	EES_BODY                       = 5,
	EES_MAX                        = 6,
};

enum class EPlayerSharkTailDirection : uint8
{
	PSTD_MidGoingLeft              = 0,
	PSTD_ExtremeLeft               = 1,
	PSTD_MidGoingRight             = 2,
	PSTD_ExtremeRight              = 3,
	PSTD_MAX                       = 4,
};

enum class EWildlifeSpecies : uint8
{
	WLS_UNDEFINED                  = 0,
	WLS_Alligator                  = 1,
	WLS_Barricuda                  = 2,
	WLS_BullShark                  = 3,
	WLS_Catfish                    = 4,
	WLS_GreatWhite                 = 5,
	WLS_Grouper                    = 6,
	WLS_HammerHead                 = 7,
	WLS_KillerWhale                = 8,
	WLS_Mackerel                   = 9,
	WLS_Mako                       = 10,
	WLS_Seal                       = 11,
	WLS_SpermWhale                 = 12,
	WLS_SwordFish                  = 13,
	WLS_MAX                        = 14,
};

enum class ELimbBoneName : uint8
{
	LBN_UNDFINED                   = 0,
	LBN_BODYMAIN                   = 1,
	LBN_HEAD                       = 2,
	LBN_DORSALFIN                  = 3,
	LBN_LEFTVENTRAL                = 4,
	LBN_RIGHTVENTRAL               = 5,
	LBN_TAILBASE                   = 6,
	LBN_UPPERTAILTIP               = 7,
	LBN_LOWERTAILTIP               = 8,
	LBN_BODY01                     = 9,
	LBN_BODY02                     = 10,
	LBN_BODY03                     = 11,
	LBN_BODY04                     = 12,
	LBN_BODY05                     = 13,
	LBN_BODY06                     = 14,
	LBN_BODY07                     = 15,
	LBN_BODY08                     = 16,
	LBN_GATORLEFTLEG               = 17,
	LBN_GATORRIGHTLEG              = 18,
	LBN_GATORLEFTARM               = 19,
	LBN_GATORRIGHTARM              = 20,
	LBN_MAX                        = 21,
};

enum class ESkeletonGrabDirection : uint8
{
	EGP_UNDEFINED                  = 0,
	EGP_DOWNTHROAT_TORSOFACINGDOWN = 1,
	EGP_DOWNTHROAT_TORSOFACINGUP   = 2,
	EGP_ALONGBONE_TORSOFAINGUP     = 3,
	EGP_ALONGBONE_TORSOFAINGDOWN   = 4,
	EGP_ALONGBONE_TORSOFAINGFORWARD = 5,
	EGP_ALONGBONE_TORSOFAINGBACKWARD = 6,
	EGP_ALONGBONE_FACINGRIGHT_STOMACHDOWN = 7,
	EGP_ALONGBONE_FACINGRIGHT_STOMACHUP = 8,
	EGP_ALONGBONE_FACINGLEFT_STOMACHDOWN = 9,
	EGP_ALONGBONE_FACINGLEFT_STOMACHUP = 10,
	EGP_ALONGBONE_FACINGFORWARD_STOMACHDOWN = 11,
	EGP_ALONGBONE_FACINGFORWARD_STOMACHUP = 12,
	EGP_ALONGBONE_FACINGBACK_STOMACHDOWN = 13,
	EGP_ALONGBONE_FACINGBACK_STOMACHUP = 14,
	EGP_MAX                        = 15,
};

enum class ESkeletonGrabbableJoints : uint8
{
	EGP_UNDEFINED                  = 0,
	EGP_SNOUT                      = 1,
	EGP_HEAD                       = 2,
	EGP_UPPERTORSO                 = 3,
	EGP_LOWERTORSO                 = 4,
	EGP_LEFTARM                    = 5,
	EGP_LEFTFOREARM                = 6,
	EGP_LEFTHAND                   = 7,
	EGP_RIGHTARM                   = 8,
	EGP_RIGHTFOREARM               = 9,
	EGP_RIGHTHAND                  = 10,
	EGP_LEFTUPLEG                  = 11,
	EGP_LEFTLEG                    = 12,
	EGP_RIGHTUPLEG                 = 13,
	EGP_RIGHTLEG                   = 14,
	EGP_BODYMAIN                   = 15,
	EGP_BODY01                     = 16,
	EGP_BODY02                     = 17,
	EGP_BODY03                     = 18,
	EGP_BODY04                     = 19,
	EGP_BODY05                     = 20,
	EGP_BODY06                     = 21,
	EGP_BODY07                     = 22,
	EGP_BODY08                     = 23,
	EGP_TURTLESHELL                = 24,
	EGP_DORSALFINBASE              = 25,
	EGP_DORSALFINEND               = 26,
	EGP_LEFTVENTRALBASE            = 27,
	EGP_LEFTVENTRALMID             = 28,
	EGP_LEFTVENTRALTIP             = 29,
	EGP_RIGHTVENTRALBASE           = 30,
	EGP_RIGHTVENTRALMID            = 31,
	EGP_RIGHTVENTRALTIP            = 32,
	EGP_TAILUPPERBASE              = 33,
	EGP_TAILUPPERMID               = 34,
	EGP_TAILUPPERTIP               = 35,
	EGP_TAILLOWERBASE              = 36,
	EGP_TAILLOWERMID               = 37,
	EGP_TAILLOWERTIP               = 38,
	EGP_RPECTORALFIN               = 39,
	EGP_LPECTORALFIN               = 40,
	EGP_FRONTLEFTVENTRALBASE       = 41,
	EGP_FRONTLEFTVENTRALMID        = 42,
	EGP_FRONTLEFTVENTRALTIP        = 43,
	EGP_FRONTRIGHTVENTRALBASE      = 44,
	EGP_FRONTRIGHTVENTRALMID       = 45,
	EGP_FRONTRIGHTVENTRALTIP       = 46,
	EGP_LEFTGATORLEG               = 47,
	EGP_RIGHTGATORLEG              = 48,
	EGP_LEFTGATORARM               = 49,
	EGP_RIGHTGATORARM              = 50,
	EGP_LARGEFINTOP                = 51,
	EGP_LARGEFINBOTTOM             = 52,
	EGP_MAX                        = 53,
};

enum class EEffectTarget : uint8
{
	Self                           = 0,
	GrabPrey                       = 1,
	CombatTarget                   = 2,
	EEffectTarget_MAX              = 3,
};

enum class EAIFocus : uint8
{
	Default                        = 0,
	Move                           = 1,
	Gameplay                       = 2,
	EAIFocus_MAX                   = 3,
};

enum class EAttackShape : uint8
{
	CS_Sphere                      = 0,
	CS_Box                         = 1,
	CS_MAX                         = 2,
};

enum class ESkeletonAttachJoints : uint8
{
	ESAJ_UNDEFINED                 = 0,
	ESAJ_RWWEAPON                  = 1,
	ESAJ_LWWEAPON                  = 2,
	ESAJ_MAX                       = 3,
};

enum class EGameplayEffectTargetType : uint8
{
	TargetType_ANY                 = 0,
	TargetType_ANIMAL              = 1,
	TargetType_HUMAN               = 2,
	TargetType_VEHICLE             = 3,
	TargetType_MAX                 = 4,
};

enum class EGameplayEffectTargetActor : uint8
{
	TargetActor_INSTIGATOR         = 0,
	TargetActor_TARGET             = 1,
	TargetActor_INSTIGATOROWNER    = 2,
	TargetActor_MAX                = 3,
};

enum class EPropulsionType : uint8
{
	EPT_Propeller                  = 0,
	EPT_Airboat                    = 1,
	EPT_Sailboat                   = 2,
	EPT_Jet                        = 3,
	EPT_MAX                        = 4,
};

enum class EBossBattleState : uint8
{
	BBS_INACTIVE                   = 0,
	BBS_ACTIVE                     = 1,
	BBS_ENGAGED                    = 2,
	BBS_MAX                        = 3,
};

enum class EBountyState : uint8
{
	DISABLED                       = 0,
	IDLE                           = 1,
	ACTIVETHREAT                   = 2,
	SEARCHING                      = 3,
	ATTACKING                      = 4,
	INCOMING                       = 5,
	RETREATING                     = 6,
	EBountyState_MAX               = 7,
};

enum class ESizeDiff : uint8
{
	SD_Smaller                     = 0,
	SD_Equivelent                  = 1,
	SD_Larger                      = 2,
	SD_MAX                         = 3,
};

enum class EComboDirection : uint8
{
	CD_DeadZone                    = 0,
	CD_Right                       = 1,
	CD_Left                        = 2,
	CD_Up                          = 3,
	CD_Down                        = 4,
	CD_None                        = 5,
	CD_MAX                         = 6,
};

enum class ECharacterInjuryState : uint8
{
	CIS_UNDEFINED                  = 0,
	CIS_HEALTHY                    = 1,
	CIS_INJURED                    = 2,
	CIS_MAIMED                     = 3,
	CIS_DEAD                       = 4,
	CIS_MAX                        = 5,
};

enum class ECharacterVoiceEventType : uint8
{
	CVET_BUMPEDBYANIMAL            = 0,
	CVET_GRABBEDBYANIMAL           = 1,
	CVET_BUMPEDONBOAT              = 2,
	CVET_MINORPAIN                 = 3,
	CVET_MAJORPAIN                 = 4,
	CVET_LOSTARM                   = 5,
	CVET_LOSTLEG                   = 6,
	CVET_DROWNING                  = 7,
	CVET_GASP                      = 8,
	CVET_AMBIENTNOALERT            = 9,
	CVET_AMBIENTSUSPICIOUS         = 10,
	CVET_AMBIENTALERTED            = 11,
	CVET_SUSPICIONGENERIC          = 12,
	CVET_STANDDOWNGENERIC          = 13,
	CVET_SUSPECTSSHARK             = 14,
	CVET_ALERTEDSHARK              = 15,
	CVET_ALERTEDNOTORIOUSSHARK     = 16,
	CVET_STANDDOWNSHARK            = 17,
	CVET_SUSPECTSCORPSE            = 18,
	CVET_ALERTEDCORPSE             = 19,
	CVET_ALERTEDMAULEDCORPSE       = 20,
	CVET_STANDDOWNCORPSE           = 21,
	CVET_MAX                       = 22,
};

enum class ESizeState : uint8
{
	ESS_Static                     = 0,
	ESS_Grow                       = 1,
	ESS_Shrink                     = 2,
	ESS_Alert                      = 3,
	ESS_Cautious                   = 4,
	ESS_MAX                        = 5,
};

enum class EUpdateOctreeType : uint8
{
	RebuildOctree                  = 0,
	UpdateModifierVolume           = 1,
	EUpdateOctreeType_MAX          = 2,
};

enum class EME_DialogueEventType : uint8
{
	Dialogue_2D                    = 0,
	Dialogue_3D_Near               = 1,
	Dialogue_3D_Med                = 2,
	Dialogue_3D_Far                = 3,
	Dialogue_MAX                   = 4,
};

enum class EEvolutionSetType : uint8
{
	TYPE_UNDEFINED                 = 0,
	TYPE_BONE                      = 1,
	TYPE_SPIKE                     = 2,
	TYPE_LIGHTNING                 = 3,
	TYPE_TOXIC                     = 4,
	TYPE_SHADOW                    = 5,
	TYPE_TIGER                     = 6,
	TYPE_ATOMIC                    = 7,
	TYPE_MAX                       = 8,
};

enum class EEvolutionRarity : uint8
{
	RARITY_UNDEFINED               = 0,
	RARITY_COMMON                  = 1,
	RARITY_UNCOMMON                = 2,
	RARITY_RARE                    = 3,
	RARITY_EPIC                    = 4,
	RARITY_LEGENDARY               = 5,
	RARITY_MAX                     = 6,
};

enum class EBeachGoerState : uint8
{
	STATE_ALERTED                  = 0,
	STATE_SCARED                   = 1,
	STATE_STUBMLE                  = 2,
	STATE_MAX                      = 3,
};

enum class EOceanMeshVisibility : uint8
{
	OMV_Always                     = 0,
	OMV_CameraAbove                = 1,
	OMV_CameraBelow                = 2,
	OMV_MAX                        = 3,
};

enum class EFluidEffectType : uint8
{
	FET_RIPPLES                    = 0,
	FET_BLOOD                      = 1,
	FET_MAX                        = 2,
};

enum class EPassengerStance : uint8
{
	PS_UNDEFINED                   = 0,
	PS_STANDING                    = 1,
	PS_SITTING                     = 2,
	PS_CROUCHING                   = 3,
	PS_MAX                         = 4,
};

enum class EPassengerIK : uint8
{
	PIK_NoIK                       = 0,
	PIK_SpineOnly                  = 1,
	PIK_HeadOnly                   = 2,
	PIK_Max                        = 3,
};

enum class EEvolutionProcType : uint8
{
	PASSIVE                        = 0,
	EVADE                          = 1,
	BITE                           = 2,
	TAILWHIP                       = 3,
	EVOABILITY_ACTIVE              = 4,
	EVOABILITY_LUNGE               = 5,
	SLAM                           = 6,
	SMASH                          = 7,
	LUNGE                          = 8,
	LOWHEALTH                      = 9,
	NUM_PROC_TYPES                 = 10,
	EEvolutionProcType_MAX         = 11,
};

enum class EBossFightSequence : uint8
{
	INVALID_FIGHT                  = 0,
	FIRST_FIGHT                    = 1,
	SECOND_FIGHT                   = 2,
	FINAL_FIGHT                    = 3,
	EBossFightSequence_MAX         = 4,
};

enum class EBreakableStrength : uint8
{
	EBS_FLIMSY                     = 0,
	EBS_WEAK                       = 1,
	EBS_STURDY                     = 2,
	EBS_STRONG                     = 3,
	EBS_VERYSTRONG                 = 4,
	EBS_STRONGEST                  = 5,
	EBS_MAX                        = 6,
};

enum class EObjectiveProductFilterType : uint8
{
	BASE                           = 0,
	DLC01                          = 1,
	ANY                            = 2,
	EObjectiveProductFilterType_MAX = 3,
};

enum class EObjectiveProgressState : uint8
{
	HIDDEN                         = 0,
	FOUND                          = 1,
	DISCOVERED                     = 2,
	COMPLETED                      = 3,
	EObjectiveProgressState_MAX    = 4,
};

enum class EActivityAction : uint8
{
	START                          = 0,
	END                            = 1,
	EActivityAction_MAX            = 2,
};

enum class EFastTravelReturn : uint8
{
	FTR_Success                    = 0,
	FTR_Dead                       = 1,
	FTR_AlreadyThere               = 2,
	FTR_InCombat                   = 3,
	FTR_NotPurchased               = 4,
	FTR_Error                      = 5,
	FTR_Objective_In_Progress      = 6,
	FTR_Teleporter_Unavalable      = 7,
	FTR_MAX                        = 8,
};

enum class ESpawnProjectionType : uint8
{
	ESPT_None                      = 0,
	ESPT_Geometric                 = 1,
	ESPT_NavmeshProjection         = 2,
	ESPT_MercunaProjection         = 3,
	ESPT_MAX                       = 4,
};

enum class ESpawnGenerationType : uint8
{
	ESGT_SingleSpawn               = 0,
	ESGT_Grid                      = 1,
	ESGT_Sphere                    = 2,
	ESGT_Ring                      = 3,
	ESGT_RandomSample              = 4,
	ESGT_MAX                       = 5,
};

enum class ESpawnRotationType : uint8
{
	ESRT_ActorRotation             = 0,
	ESRT_Random                    = 1,
	ESRT_FaceTowardsActor          = 2,
	ESRT_FaceAwayFromActor         = 3,
	ESRT_MAX                       = 4,
};

enum class EVolumeSpacingType : uint8
{
	EVST_CubeGrid                  = 0,
	EVST_OffsetCubeGrid            = 1,
	EVST_GroundLayer               = 2,
	EVST_FirstBlockingHit          = 3,
	EVST_NavMeshProjection         = 4,
	EVST_MAX                       = 5,
};

enum class EAmbienceColorChannel : uint8
{
	EAC_R                          = 0,
	EAC_G                          = 1,
	EAC_B                          = 2,
	EAC_A                          = 3,
	EAC_MAX                        = 4,
};

enum class EGrabPointPhysicsMethod : uint8
{
	GPM_BOTH                       = 0,
	GPM_KINEMATIC                  = 1,
	GPM_SIMULATED                  = 2,
	GPM_MAX                        = 3,
};

enum class ETimeOfDayPhase : uint8
{
	TOD_UNDEFINED                  = 0,
	TOD_DAWN                       = 1,
	TOD_DAY                        = 2,
	TOD_DUSK                       = 3,
	TOD_NIGHT                      = 4,
	TOD_MAX                        = 5,
};

enum class EFogState : uint8
{
	EFS_None                       = 0,
	EFS_AboveWater                 = 1,
	EFS_BelowWater                 = 2,
	EFS_InCave                     = 3,
	EFS_InSewers                   = 4,
	EFS_MAX                        = 5,
};

enum class ETutorialPopupID : uint8
{
	TUT_POPUP_INVALID              = 0,
	TUT_POPUP_POPULATION_CONTROL   = 1,
	TUT_POPUP_NUTRIENT_CACHE       = 2,
	TUT_POPUP_TERRORIZE            = 3,
	TUT_POPUP_LANDMARK             = 4,
	TUT_POPUP_GROTTO               = 5,
	TUT_POPUP_MUTAGENX             = 6,
	TUT_POPUP_NUTRIENT             = 7,
	TUT_POPUP_EVOLUTION            = 8,
	TUT_POPUP_APEX_PREDATOR        = 9,
	TUT_POPUP_HUNT                 = 10,
	TUT_POPUP_COLLECTIBLE          = 11,
	TUT_POPUP_ON_YOUR_OWN          = 12,
	TUT_POPUP_ERROR                = 13,
	TUT_POPUP_SONAR                = 14,
	TUT_POPUP_THREAT               = 15,
	TUT_POPUP_BOUNTY               = 16,
	TUT_POPUP_WILDLIFE             = 17,
	TUT_POPUP_BOATS                = 18,
	TUT_POPUP_PETE_2               = 19,
	TUT_POPUP_PETE_3               = 20,
	TUT_POPUP_GATES                = 21,
	TUT_POPUP_SHARK_SHIELD         = 22,
	TUT_POPUP_EVOLUTION_CHARGED    = 23,
	TUT_POPUP_SIDE_QUEST           = 24,
	TUT_POPUP_EVOLUTION_BODY       = 25,
	TUT_POPUP_TARGETING_LASER      = 26,
	TUT_POPUP_THRASH               = 27,
	TUT_POPUP_EVOLUTION_ELECTRIC   = 28,
	TUT_POPUP_EVOLUTION_SHADOW     = 29,
	TUT_POPUP_EVOLUTION_BONE       = 30,
	TUT_POPUP_ANIMAL_LUNGE         = 31,
	TUT_POPUP_APEX_LUNGE           = 32,
	TUT_POPUP_MAX                  = 33,
	TUT_DLC01_POPUP_INVALID        = 34,
	TUT_DLC01_POPUP_TELEPORTER_PURCHASE = 35,
	TUT_DLC01_POPUP_APEX_PREDATOR  = 36,
	TUT_DLC01_POPUP_SHADOW_ORCA    = 37,
	TUT_DLC01_POPUP_ELECTRO_GREAT_WHITE = 38,
	TUT_DLC01_POPUP_BONE_SPERM_WHALE = 39,
	TUT_DLC01_POPUP_RADIATION      = 40,
	TUT_DLC01_POPUP_FTC_OBJECTIVE  = 41,
	TUT_DLC01_POPUP_MAX            = 42,
	TUT_MAX                        = 43,
};

enum class EHudTipEvent : uint8
{
	HUD_TIP_EVADE                  = 0,
	HUD_TIP_AIRLUNGE               = 1,
	HUD_TIP_EVOLUTIONMENU          = 2,
	HUD_TIP_POISONED               = 3,
	HUD_TIP_DROWNING               = 4,
	HUD_TIP_MAX                    = 5,
};

enum class ETutorialPopupType : uint8
{
	CENTER_POPUP                   = 0,
	HUD_TIP                        = 1,
	ETutorialPopupType_MAX         = 2,
};

enum class EAIBountyState : uint8
{
	E_DONTCARE                     = 0,
	E_ACTIVE                       = 1,
	E_INACTIVE                     = 2,
	E_FORCE_DESPAWN                = 3,
	E_MAX                          = 4,
};

enum class EAttachmentBone : uint8
{
	AB_UNDEFINED                   = 0,
	AB_ROOT                        = 1,
	AB_RWWEAPON                    = 2,
	AB_LWWEAPON                    = 3,
	AB_MAX                         = 4,
};

enum class ELandmarkType : uint8
{
	ELT_UNDEFINED                  = 0,
	ELT_BEACH                      = 1,
	ELT_GROTTO                     = 2,
	ELT_WHALECARCASS               = 3,
	ELTS_MAX                       = 4,
	ELandmarkType_MAX              = 5,
};

enum class ELandmarkDiscoveryState : uint8
{
	EDS_UNREVEALED                 = 0,
	EDS_REVEALED                   = 1,
	EDS_DISCOVERED                 = 2,
	EDS_MAX                        = 3,
};

enum class ETerrainType : uint8
{
	Land                           = 0,
	Sea                            = 1,
	ETerrainType_MAX               = 2,
};

enum class EMoveTaskType : uint8
{
	None                           = 0,
	Mercuna                        = 1,
	Navmesh                        = 2,
	Direct                         = 3,
	EMoveTaskType_MAX              = 4,
};

enum class EWeaponFireCondition : uint8
{
	CONDITION_UNDER_WATER          = 0,
	CONDITION_ABOVE_WATER          = 1,
	CONDITION_ANYWHERE             = 2,
	CONDITION_MAX                  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.MovementTarget
struct FMovementTarget
{
public:
	class USceneComponent*                       MovementTargetComponent;                           // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MovementLocation;                                  // 0x8(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1559[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.PlayerPersistentStat
struct FPlayerPersistentStat
{
public:
	enum class EPersistentStatType               StatType;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StatValue;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Maneater.ME_TutorialEvent
struct FME_TutorialEvent
{
public:
	class FText                                  PlayerTooltipText;                                 // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  TutorialName;                                      // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  InputText;                                         // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<class FName>                          InputActionNames;                                  // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoHideTimer;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 WaypointLocation;                                  // 0x60(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartNarratorEventName;                            // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InitialProgressNarratorEventName;                  // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FinishNarratorEventName;                           // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SaveGameAtStep;                                    // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoCompleteTimer;                                 // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBeforeShowingUI;                              // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRepeatTimesToComplete;                          // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeActivityNeededToCompleteStep;                  // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisableTooltipUI;                                  // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Maneater.ME_TutorialTipEvent
struct FME_TutorialTipEvent
{
public:
	class FText                                  HeaderText;                                        // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  BodyText;                                          // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  InputText;                                         // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<class FName>                          InputActionNames;                                  // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Maneater.BountyViewData
struct FBountyViewData
{
public:
	class FText                                  HunterFirstName;                                   // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HunterLastName;                                    // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HunterBio;                                         // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HunterQuote;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UHunterSupportEntry>> HunterSupportEntries;                              // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             HunterIcon;                                        // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             HunterPortrait;                                    // 0x98(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.MinMaxRange
struct FMinMaxRange
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.FloatIntervalBP
struct FFloatIntervalBP
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Maneater.StoryObjective
struct FStoryObjective
{
public:
	float                                        CompletionPct;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenderProjectedIcons;                             // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ObjectiveHint;                                     // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            ObjectiveIcon;                                     // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ObjectiveIconTint;                                 // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AActor>>            ObjectiveTargetTypes;                              // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         ObjectiveTargets;                                  // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156B[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.RichTextActionMapping
struct FRichTextActionMapping
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichTextPreset                   RichTextStyle;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Maneater.TutorialPopupPage
struct FTutorialPopupPage
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRichTextActionMapping>        ActionBinds;                                       // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.PlayerTutorialPopup
struct FPlayerTutorialPopup
{
public:
	int32                                        MaxDisplays;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmediateDisplay;                                 // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETutorialDisplayType              DisplayType;                                       // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTutorialPopupPage>            TutorialPages;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.ProjectedIconCache
struct FProjectedIconCache
{
public:
	bool                                         bWasOffscreen;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1570[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LastScreenPosition;                                // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1572[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              IconMID;                                           // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastDistanceScale;                                 // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasInterpolating;                                 // 0x1C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1573[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LastDrawSize;                                      // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpAlpha;                                       // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1575[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.SharkRamRotation
struct FSharkRamRotation
{
public:
	float                                        MaxAngle;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAngle;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          RotationCurve;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Maneater.CurveVectorInfo
struct FCurveVectorInfo
{
public:
	float                                        ImpactThreshold;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationRollScale;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationPitchScale;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationTranslationScale;                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.GameplayVocabulary
struct FGameplayVocabulary
{
public:
	class FText                                  LocalizedText;                                     // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ERichTextPreset                   RichTextStyle;                                     // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1577[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.ExplosionDamageEffects
struct FExplosionDamageEffects
{
public:
	class UParticleSystem*                       ScreenParticle;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       LoopingParticleOnMesh;                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         EffectSound;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             PostProcessWhileInsideExplosion;                   // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EffectPriority;                                    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1578[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.GameplayEffectParticleSystems
struct FGameplayEffectParticleSystems
{
public:
	uint8                                        Pad_1579[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.AbilityInfoStruct
struct FAbilityInfoStruct
{
public:
	TSubclassOf<class UGameplayAbility>          AbilityClass;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EME_CharacterAbility              AbilityEnum;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityWeight;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.AbilityInfoListStruct
struct FAbilityInfoListStruct
{
public:
	TArray<struct FAbilityInfoStruct>            InfoStructArray;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Maneater.AbilityInitializationData
struct FAbilityInitializationData : public FTableRowBase
{
public:
	int32                                        AbilityWeight;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayAbility>          AbilityClass;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.PreDormantValues
struct FPreDormantValues
{
public:
	uint8                                        Pad_157D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.CombatLocation
struct FCombatLocation
{
public:
	uint8                                        Pad_157E[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.DirectMoveRequest
struct FDirectMoveRequest
{
public:
	uint8                                        Pad_157F[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                GoalActor;                                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.CombatPriorityBuff
struct FCombatPriorityBuff
{
public:
	float                                        PriorityBuff;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Maneater.VisionType
struct FVisionType
{
public:
	uint8                                        bAir : 1;                                          // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSurface : 1;                                      // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUnderwater : 1;                                   // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisionType4 : 1;                                  // Mask: 0x8, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisionType5 : 1;                                  // Mask: 0x10, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisionType6 : 1;                                  // Mask: 0x20, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisionType7 : 1;                                  // Mask: 0x40, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisionType8 : 1;                                  // Mask: 0x80, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.AITargetPoint
struct FAITargetPoint
{
public:
	struct FVector                               TargetPoint;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestPoint;                                        // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceTarget;                                      // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistanceCheck;                                    // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDotProductCheck;                                  // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.AttackTarget
struct FAttackTarget
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TargetComponent;                                   // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1580[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.PropInstance
struct FPropInstance
{
public:
	uint8                                        Pad_1581[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.ActivityAlertStruct
struct FActivityAlertStruct
{
public:
	class UAnimSequence*                         AlertSequence;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropProp;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1582[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PercentChance;                                     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.ActivityPropElement
struct FActivityPropElement
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_ActivityProp*                      Type;                                              // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.PropRandomTextureParam
struct FPropRandomTextureParam
{
public:
	TArray<class UTexture2D*>                    Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.PropRandomScalarParam
struct FPropRandomScalarParam
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.PropRandomVectorParam
struct FPropRandomVectorParam
{
public:
	TArray<struct FLinearColor>                  Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.EvolutionAnimations
struct FEvolutionAnimations
{
public:
	class UAnimMontage*                          IntroAnimation;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          OutroAnimation;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.HitReactStruct
struct FHitReactStruct
{
public:
	class UAnimSequence*                         ChosenHitReact;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHitReactActive;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayHitReact;                                     // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1583[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.AdditiveAnimStruct
struct FAdditiveAnimStruct
{
public:
	class UAnimSequence*                         ChosenAdditiveAnimation;                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditiveActive;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAdditive;                                     // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1584[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.BoneBaseBlendWeight
struct FBoneBaseBlendWeight
{
public:
	enum class ELimbBoneName                     BoneName;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1585[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseWeight;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.GrabbedIKSetup
struct FGrabbedIKSetup
{
public:
	enum class ESkeletonGrabbableJoints          GrabbedJoint;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1586[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneBaseBlendWeight>          GrabbedIKArray;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Maneater.AttackShapeRow
struct FAttackShapeRow : public FTableRowBase
{
public:
	enum class EAttackShape                      AttackCollisionShape;                              // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttackZOffset;                                     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttackLocalOffset;                                 // 0x10(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttackLocalRotation;                               // 0x1C(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackLength;                                      // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackRadius;                                      // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxCollisionShape;                                 // 0x30(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1588[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.AttackerInfo
struct FAttackerInfo
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> AttackingMesh;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>         HitActors;                                         // 0x8(0x10)(ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_Character>          ControlledCharacter;                               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.LoadedAssets
struct FLoadedAssets
{
public:
	class UAkAudioEvent*                         SavedAudioEvent;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       SavedParticleSystem;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          SavedAnimMontage;                                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    SavedMaterial;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SavedMesh;                                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct Maneater.AssetLoadRow
struct FAssetLoadRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UParticleSystem>        ParticleSystemAsset;                               // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          AudioEventAsset;                                   // 0x30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           AnimMontageAsset;                                  // 0x58(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     MaterialAsset;                                     // 0x80(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMeshAsset;                                 // 0xA8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Maneater.FullPropAnimationSet
struct FFullPropAnimationSet
{
public:
	TSoftObjectPtr<class UAnimSequence>          IdleAnimation;                                     // 0x0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          SuspiciousAnimation;                               // 0x28(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace>            AlertAimingBlendspace;                             // 0x50(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          AlertAnimation;                                    // 0x78(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          MovingAnimation;                                   // 0xA0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TurnRightAnimation;                                // 0xC8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TurnLeftAnimation;                                 // 0xF0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAnimMontage>>   FiringAnimations;                                  // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAnimMontage>>   HitFromForwradsAnimations;                         // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAnimMontage>>   HitFromBehindAnimations;                           // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAnimMontage>>   HitFromLeftAnimations;                             // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAnimMontage>>   HitFromRightAnimations;                            // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               IKElbowOffset;                                     // 0x168(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              AimingElbowRotation;                               // 0x174(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.AfflictionData
struct FAfflictionData
{
public:
	uint8                                        Pad_1589[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GameplayTagToApply;                                // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.MEGameplayEffectMaterialEffect
struct FMEGameplayEffectMaterialEffect
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ScalarParamCurve;                                  // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          VectorParamCuve;                                   // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionSlot                    EvolutionSlot;                                     // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMasterPostProcess;                                // 0x19(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSonarPostProcess;                                 // 0x1A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158A[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Maneater.MEGameplayEffectAudioEvent
struct FMEGameplayEffectAudioEvent
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectTargetActor        TargetActor;                                       // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Maneater.MEGameplayEffectParticleSystem
struct FMEGameplayEffectParticleSystem
{
public:
	class FName                                  ParticleSystemName;                                // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystemTemplate;                            // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStackingEffects;                               // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnDelay;                                        // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocket;                                      // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequireTags;                                       // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IgnoreTags;                                        // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         UseActionMode;                                     // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBeam;                                            // 0x61(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectTargetActor        TargetActor;                                       // 0x62(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectTargetType         TargetType;                                        // 0x63(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            TargetParams;                                      // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct Maneater.MEAttributeMetaData
struct FMEAttributeMetaData : public FAttributeMetaData
{
public:
	bool                                         bClampOnSet;                                       // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x20 - 0x10)
// ScriptStruct Maneater.MEGameplayAttributeData
struct FMEGameplayAttributeData : public FGameplayAttributeData
{
public:
	float                                        MinValue;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxValue;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ClampOnSet;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_158F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.ME_AudioEvent
struct FME_AudioEvent
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WWiseEvent;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownSeconds;                                   // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverrideGlobal;                                    // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NextFireTime;                                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StateTo;                                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IfState;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1590[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.AuraStatus
struct FAuraStatus
{
public:
	uint8                                        Pad_1591[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveGameplayEffectHandle>   GameplayEffectHandles;                             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.SpawnEntry
struct FSpawnEntry
{
public:
	uint8                                        Pad_1592[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Maneater.BoatNameData
struct FBoatNameData
{
public:
	TArray<class FString>                        Prefixes;                                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Adjectives;                                        // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Nouns;                                             // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFont*>                         Fonts;                                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  FontColors;                                        // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Maneater.BoatPropeller
struct FBoatPropeller
{
public:
	class FName                                  AttachSocket;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PropellerRotation;                                 // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1593[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            PropellerMeshPtr;                                  // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UStaticMeshComponent>   PropellerMeshComponent;                            // 0x40(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UParticleSystemComponent> PropellerPSC;                                      // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.ThrashPointThickness
struct FThrashPointThickness
{
public:
	enum class ESkeletonGrabbableJoints          GrabbedJoint;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1594[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LimbThickness;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.ME_BountySpawnRequest
struct FME_BountySpawnRequest
{
public:
	uint8                                        Pad_1595[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.ME_BountyAI
struct FME_BountyAI
{
public:
	uint8                                        Pad_1596[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_AIController*                      ME_AIController;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Pawn;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.ME_BountySpawnLocation
struct FME_BountySpawnLocation
{
public:
	uint8                                        Pad_1597[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.StructBoneOverride
struct FStructBoneOverride
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TestRadius;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Maneater.LimbGoreParameters
struct FLimbGoreParameters
{
public:
	class FName                                  GoreParamName;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaskParamName;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaskCharacter;                                    // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1598[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.AlertEventParams
struct FAlertEventParams
{
public:
	TSubclassOf<class UME_AlertEvent>            AlertEvent;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToCharacter;                                // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1599[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Maneater.CharacterDialogRow
struct FCharacterDialogRow : public FTableRowBase
{
public:
	bool                                         bShouldPulse;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PulseIntervalFloor;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PulseIntervalCeil;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownDuration;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.MomentumForce
struct FMomentumForce
{
public:
	uint8                                        bApplyDirectlyToVelocity : 1;                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClearAcceleration : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTargetable : 1;                                   // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_F9 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_159B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Force;                                             // 0x4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bPlayerRelativeForce : 1;                          // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseInitialYaw : 1;                                // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseInitialPitch : 1;                              // Mask: 0x4, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCameraRelativeForce : 1;                          // Mask: 0x8, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyXWhenMoving : 1;                             // Mask: 0x10, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyYWhenMoving : 1;                             // Mask: 0x20, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyZWhenMoving : 1;                             // Mask: 0x40, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreForceAboveWater : 1;                        // Mask: 0x80, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159D[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.ComboAttack
struct FComboAttack
{
public:
	TArray<enum class EComboDirection>           ComboInput;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAbilityInfoStruct                    ComboAbility;                                      // 0x10(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.CharacterVoiceAge
struct FCharacterVoiceAge
{
public:
	class UAkAudioEvent*                         Child;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Adult;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.CharacterVoiceGender
struct FCharacterVoiceGender
{
public:
	struct FCharacterVoiceAge                    Male;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterVoiceAge                    Female;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.CharacterVoiceBinding
struct FCharacterVoiceBinding
{
public:
	enum class ECharacterVoiceEventType          EventType;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterVoiceGender                 Voices;                                            // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Maneater.WildlifeQueueEntry
struct FWildlifeQueueEntry
{
public:
	uint8                                        Pad_159F[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.ActionBindingSaveData
struct FActionBindingSaveData
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          Keys;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Maneater.AxisBindingSaveData
struct FAxisBindingSaveData
{
public:
	class FName                                  AxisName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          Keys;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Maneater.MEControlScheme
struct FMEControlScheme
{
public:
	class FText                                  ControlSchemeName;                                 // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FActionBindingSaveData>        ActionMappings;                                    // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAxisBindingSaveData>          AxisMappings;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.MEControlSchemeSaveData
struct FMEControlSchemeSaveData
{
public:
	TArray<struct FMEControlScheme>              ControlSchemes;                                    // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.BindableKeyEntry
struct FBindableKeyEntry
{
public:
	class FName                                  BindingName;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bKeyboardOnly;                                     // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAxis;                                           // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.StartingAttributes
struct FStartingAttributes
{
public:
	TSubclassOf<class UME_AttributeSet>          AbilityAttributeSetClass;                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            AttributeDefaults;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Maneater.HitDeformation
struct FHitDeformation
{
public:
	struct FVector                               LocalPosition;                                     // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalDirection;                                    // 0xC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeformRadius;                                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.ChunkBreakEffect
struct FChunkBreakEffect
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         Sound;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.AudioDialogueMapping
struct FAudioDialogueMapping
{
public:
	int32                                        PlayingID;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DialogueText;                                      // 0x8(0x18)(NativeAccessSpecifierPublic)
	float                                        TimeSeconds;                                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubtitleId;                                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Maneater.Dialogue
struct FDialogue : public FTableRowBase
{
public:
	enum class EME_DialogueEventType             EventType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Speaker;                                           // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AudioFile;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DialogueText;                                      // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         ShowSubtitle;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Maneater.FullDiverAnimationSet
struct FFullDiverAnimationSet
{
public:
	class UAnimSequence*                         IdleAnimation;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         SuspiciousAnimation;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AlertAnimation;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         MovingAnimation;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           MovingAlertAnimation;                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  FiringAnimations;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.EvolutionData
struct FEvolutionData
{
public:
	enum class EEvolutionRarity                  EvolutionRarity;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionSlot                    CurrentSlot;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EvolutionEquipped;                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNewEvolution;                                   // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   EvolutionDefinition;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Maneater.DisplayStatRow
struct FDisplayStatRow : public FTableRowBase
{
public:
	class FText                                  DisplayText;                                       // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         DisplayAsPercentage;                               // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMultiplier;                                      // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.EvolutionVisualEffect
struct FEvolutionVisualEffect
{
public:
	TArray<class FName>                          AttachMeshes;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.GameplayEffectItem
struct FGameplayEffectItem
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.ReconcileAchievementParams
struct FReconcileAchievementParams
{
public:
	uint8                                        Pad_15AB[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UME_SaveGameObject*>            SaveGames;                                         // 0x10(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct Maneater.StoryCinematicDataRow
struct FStoryCinematicDataRow : public FTableRowBase
{
public:
	class FName                                  CinematicSubLevelName;                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LevelSequenceActorName;                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeOfDay;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         StateEvent;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NarratorOutroEventName;                            // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RespawnLocation;                                   // 0x30(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CinematicStreamLocation;                           // 0x3C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PostCinematicTravelLocation;                       // 0x50(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAdvanceToNextStoryEvent;                          // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartPlayingAfterCinematic;                       // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotAutoFadeInSequence;                          // 0x82(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayCinematicPauseAllEvent;                       // 0x83(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCinematicMovie;                                 // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AE[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.DirectionalAnimData
struct FDirectionalAnimData
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.SpeciesKillSequence
struct FSpeciesKillSequence
{
public:
	TArray<class FName>                          KillAnimations;                                    // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.SizeDifferenceKillSequence
struct FSizeDifferenceKillSequence
{
public:
	TArray<class FName>                          LargerOrEqualVictimAnims;                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SmallerVictimAnims;                                // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Maneater.GrowthStageSequences
struct FGrowthStageSequences
{
public:
	TMap<enum class EPawnSpeciesType, struct FSpeciesKillSequence> SpeciesOverrideInfo;                               // 0x0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSizeDifferenceKillSequence           SizeDifferenceInfo;                                // 0x50(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.CustomGrowthStage
struct FCustomGrowthStage
{
public:
	enum class EPlayerGrowthStage                OverrideStage;                                     // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomZHeight;                                     // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomForwardsForce;                               // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomDuration;                                    // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.StageSpecificCamera
struct FStageSpecificCamera
{
public:
	enum class EPlayerGrowthStage                GrowthStage;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnim*                           CamAnim;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FCameraScale;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Maneater.GrowthStageAnimData
struct FGrowthStageAnimData
{
public:
	class FName                                  MontageEventName;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          CachedMontage;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultAnimation;                                  // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimWeight;                                        // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x1C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IgnoreGameplayTags;                                // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.GrowthStageContainer
struct FGrowthStageContainer
{
public:
	TArray<struct FGrowthStageAnimData>          StageArray;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.MontageEntry
struct FMontageEntry
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimWeight;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.AttachedAudioEvent
struct FAttachedAudioEvent
{
public:
	class UAkAudioEvent*                         AudioEvent;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct Maneater.HumanNPCAppearanceConfig
struct FHumanNPCAppearanceConfig : public FTableRowBase
{
public:
	enum class EPawnGender                       Gender;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         Mesh;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UME_AnimInstance_HumanNPC> AnimBP;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Body;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Hair;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Clothing;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Region1_Config_Override;                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Region2_Config_Override;                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Region3_Config_Override;                           // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RandomizeNumberOfRegions;                          // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShuffleRegions;                                    // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DynamicDialogue;                                   // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.BodyRegionColorSet
struct FBodyRegionColorSet
{
public:
	TArray<struct FLinearColor>                  RegionColors;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowShuffle;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Maneater.HumanNPCRegionConfig
struct FHumanNPCRegionConfig : public FTableRowBase
{
public:
	TArray<class UTexture2D*>                    RegionTilingMask;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBodyRegionColorSet>           ColorSets;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxRange                          Scale;                                             // 0x28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             RandomOffset;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShuffleColors;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Maneater.HumanNPCTextureSet
struct FHumanNPCTextureSet : public FTableRowBase
{
public:
	class UTexture2D*                            Albedo;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Normal;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            RAM;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Masks;                                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.HumanNPCHairColor
struct FHumanNPCHairColor
{
public:
	struct FLinearColor                          HairRootColor;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HairTipColor;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Maneater.HumanNPCTextureSet_Hair
struct FHumanNPCTextureSet_Hair : public FHumanNPCTextureSet
{
public:
	TArray<struct FHumanNPCHairColor>            HairColors;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct Maneater.HumanNPCTextureSet_Clothing
struct FHumanNPCTextureSet_Clothing : public FHumanNPCTextureSet
{
public:
	class UDataTable*                            Region1_Config;                                    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Region2_Config;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Region3_Config;                                    // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Maneater.HumanNPCTextureSet_Body
struct FHumanNPCTextureSet_Body : public FHumanNPCTextureSet
{
public:
	struct FMinMaxRange                          SkinRange;                                         // 0x28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Maneater.DirectionalLunges
struct FDirectionalLunges
{
public:
	class UAnimMontage*                          LungeRightMontage;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          LungeLeftMontage;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          LungeForwardMontage;                               // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          LungeBackwardsMontage;                             // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          LungeUpMontage;                                    // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          LungeDownMontage;                                  // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardDotThreshold;                               // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpDotThreshold;                                    // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertLunge;                                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.MontageInstanceEntry
struct FMontageInstanceEntry
{
public:
	class UMontageInstance*                      MontageInstance;                                   // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimWeight;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct Maneater.NarratorTableEntry
struct FNarratorTableEntry : public FTableRowBase
{
public:
	bool                                         PlayOnlyOnce;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayFirstTime;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlaySubsequentTimes;                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubsequentPlayChancePercent;                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GroupName;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroupCooldown;                                     // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBeforePlayFirstTime;                          // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBeforePlaySubsequentTime;                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuringBounty;                                // 0x54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuringBoss;                                  // 0x55(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPostCredits;                                 // 0x56(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C7[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Maneater.WaveParameter
struct FWaveParameter
{
public:
	float                                        Rotation;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Steepness;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeScale;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Maneater.WaveSetParameters
struct FWaveSetParameters
{
public:
	struct FWaveParameter                        Wave01;                                            // 0x0(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                        Wave02;                                            // 0x14(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                        Wave03;                                            // 0x28(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                        Wave04;                                            // 0x3C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                        Wave05;                                            // 0x50(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                        Wave06;                                            // 0x64(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                        Wave07;                                            // 0x78(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                        Wave08;                                            // 0x8C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.FluidDisturbanceEffect
struct FFluidDisturbanceEffect
{
public:
	enum class EFluidEffectType                  EffectType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DisturbanceOrigin;                                 // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisturbanceRadius;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisturbanceIntensity;                              // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Maneater.ParticleSystemParams
struct FParticleSystemParams : public FTableRowBase
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Maneater.ShadowEffectParams
struct FShadowEffectParams : public FParticleSystemParams
{
public:
	float                                        Length;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Maneater.ElectrifiedEffectParams
struct FElectrifiedEffectParams : public FParticleSystemParams
{
public:
	float                                        Length;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Maneater.PassengerHitReactionStruct
struct FPassengerHitReactionStruct
{
public:
	TArray<class UAnimMontage*>                  HitReactionMovingForward;                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  HitReactionMovingRight;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  HitReactionMovingLeft;                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  HitReactionMovingBackward;                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.PassengerPropSetup
struct FPassengerPropSetup
{
public:
	enum class EPassengerStance                  PassengerStance;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPawnGender                       GenderSpecific;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPawnBodyType                     BodySpecific;                                      // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_AttachmentAnimSet*                 AnimationSet;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.PassengerAnimationStruct
struct FPassengerAnimationStruct
{
public:
	TArray<struct FPassengerPropSetup>           AnimationSets;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         IntroCinematicAnimation;                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DefeatedPlayerCinematicAnimation;                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.DiverPropSetup
struct FDiverPropSetup
{
public:
	enum class EPawnGender                       GenderSpecific;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPawnBodyType                     BodySpecific;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_DiverAttachmentAnimSet*            AnimationSet;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Maneater.PathQueueEntry
struct FPathQueueEntry
{
public:
	uint8                                        Pad_15CC[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.PathRequest
struct FPathRequest
{
public:
	uint8                                        Pad_15CD[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Maneater.ImpactEffectResult
struct FImpactEffectResult
{
public:
	TSoftObjectPtr<class UParticleSystemComponent> ImpactParticleComponent;                           // 0x0(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkComponent>           ImpactAudioComponent;                              // 0x28(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDecalComponent>        ImpactDecalComponent;                              // 0x50(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Maneater.ImpactResponseInstance
struct FImpactResponseInstance
{
public:
	struct FImpactEffectResult                   Effects;                                           // 0x0(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UME_PhysicalImpactResponse> Class;                                             // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Instigator;                                        // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Recipient;                                         // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  RecipientSurface;                                  // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CreationTime;                                      // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.ImpactDecal
struct FImpactDecal
{
public:
	class UMaterialInterface*                    DecalMaterial;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DecalSize;                                         // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalLifespan;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbsoluteRotation;                                 // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DecalRotation;                                     // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Maneater.ImpactEffect
struct FImpactEffect
{
public:
	class UParticleSystem*                       ImpactParticleEffect;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         ImpactSoundEffect;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactDecal                          ImpactDecal;                                       // 0x10(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              ImpactCameraShake;                                 // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.EvolutionSetGameplayEffects
struct FEvolutionSetGameplayEffects
{
public:
	TArray<TSubclassOf<class UME_GameplayEffect>> SetGameplayEffects;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Maneater.EvolutionSetStatRow
struct FEvolutionSetStatRow : public FTableRowBase
{
public:
	enum class EEvolutionSetType                 SetType;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEvolutionSetGameplayEffects>  GameplayEffectsPerNumberEquipped;                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_PlayerEvolution*>           EvolutionsInSet;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  EvolutionSetName;                                  // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.EvolutionEffects
struct FEvolutionEffects
{
public:
	TArray<TSubclassOf<class UME_GameplayEffect>> GameplayEffectsOnEquip;                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UME_GameplayEffect>> ConditionalGameplayEffects;                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.EvolutionDisplayStat
struct FEvolutionDisplayStat
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        StatValue;                                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionProcType                ProcType;                                          // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.EvolutionUpgradeCost
struct FEvolutionUpgradeCost
{
public:
	enum class ENutrientType                     NutrientType;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NutrientCost;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.EvolutionUpgradePrice
struct FEvolutionUpgradePrice
{
public:
	struct FEvolutionUpgradeCost                 PrimaryCost;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEvolutionUpgradeCost                 SecondaryCost;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Maneater.LandmarkSubObject
struct FLandmarkSubObject
{
public:
	TSoftObjectPtr<class AME_LandmarkObjective>  Actor;                                             // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.ConditionStatus
struct FConditionStatus
{
public:
	class FText                                  ConditionText;                                     // 0x0(0x18)(SaveGame, NativeAccessSpecifierPublic)
	bool                                         Completed;                                         // 0x18(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.LerpParams
struct FLerpParams
{
public:
	uint8                                        Pad_15D8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Maneater.AttachedParticleSystem
struct FAttachedParticleSystem
{
public:
	class FName                                  ParticleToSpawn;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimbBoneName                     BoneName;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Maneater.GrowthStageVFX
struct FGrowthStageVFX
{
public:
	class FName                                  PerfectEntrySplash;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PerfectTrailBubbles;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SmallEntrySplash;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SmallTrailBubbles;                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MediumEntrySplash;                                 // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MediumTrailBubbles;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LargeEntrySplash;                                  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LargeTrailBubbles;                                 // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ExitWaterSplash;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ExitWaterSplashSound;                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ExitWaterTrail;                                    // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FloppingTakeoffFromWater;                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FloppingLandInWater;                               // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachedParticleSystem>       EnterKnifingFromUnderwaterTrail;                   // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachedParticleSystem>       EnterKnifingFromBreachTrail;                       // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachedParticleSystem>       ExitKnifingUnderwaterTrail;                        // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Maneater.GrowthStageSettings
struct FGrowthStageSettings
{
public:
	class USkeletalMesh*                         SharkMesh;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           SoftSharkAnimBP;                                   // 0x8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             SharkAnimBP;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         SharkPhysAsset;                                    // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingPlayerLevel;                               // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndingPlayerLevel;                                 // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingScalePercent;                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndingScalePercent;                                // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseCapsuleRadius;                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseCapsuleHalfHeight;                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGrowthStageVFX                       StageVFX;                                          // 0x58(0x98)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.ActionModeAbilitySet
struct FActionModeAbilitySet
{
public:
	enum class ECharacterActionMode              ActionMode;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAbilityInfoStruct>            MappedAbilities;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.InputAbilitySet
struct FInputAbilitySet
{
public:
	enum class EComboDirection                   PrimaryInput;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComboDirection                   SecondaryInput;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionModeAbilitySet>         ActionModeAbilitySets;                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.AIProximityCache
struct FAIProximityCache
{
public:
	TSubclassOf<class AME_AIController>          AISearchType;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AISearchLimit;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSearchDist;                                     // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AME_AIController*>              ProximityList;                                     // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Maneater.EvolutionClassRow
struct FEvolutionClassRow : public FTableRowBase
{
public:
	class UME_PlayerEvolution*                   EvolutionClass;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.SpeciesStatBinding
struct FSpeciesStatBinding
{
public:
	TArray<struct FPlayerPersistentStat>         SpeciesStats;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.SharkEvolutionSettings
struct FSharkEvolutionSettings
{
public:
	enum class EPlayerGrowthStage                EvoName;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GrowthLevelChange;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Maneater.ME_DotProductToDistance
struct FME_DotProductToDistance
{
public:
	float                                        OrderedDistance;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DotProduct;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PriorityPenalty;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Maneater.ME_TargetableActorData
struct FME_TargetableActorData
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentDotProduct;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentDistance;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PriorityPenalty;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereBoundsRadius;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOnScreen;                                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyWhipshotTarget;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DF[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Maneater.SonarData
struct FSonarData
{
public:
	uint8                                        Pad_15E1[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Maneater.SpawnListConditionProperty
struct FSpawnListConditionProperty
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropertyValue;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.SpawnListCondition
struct FSpawnListCondition
{
public:
	TSubclassOf<class UME_SpawnlistCondition>    ConditionClass;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SpawnlistCondition*                ConditionObj;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSpawnListConditionProperty>   ConditionProperties;                               // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Maneater.SpawnListEntry
struct FSpawnListEntry
{
public:
	class UME_SpawnData*                         SpawnList;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnChanceMod;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinSpawnCount;                                     // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSpawnCount;                                     // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnListCondition>           SpawnConditions;                                   // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Maneater.SpawnObjectiveInfo
struct FSpawnObjectiveInfo
{
public:
	TArray<struct FSpawnListEntry>               SpawnLists;                                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AME_SpawnVolume>> ObjectiveSpawnVolumes;                             // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnCount;                                        // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UME_SpawnVolumeCollection*>     SpawnVolumeCollections;                            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 SpawnLocation;                                     // 0x38(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnDistance;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DespawnDistance;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Maneater.PrePoolSpawnInfo
struct FPrePoolSpawnInfo : public FTableRowBase
{
public:
	TSubclassOf<class AActor>                    ClassToPool;                                       // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberToPool;                                      // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.EvolutionLoot
struct FEvolutionLoot
{
public:
	float                                        DropChance;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   EvolutionClass;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct Maneater.NutritionalValue
struct FNutritionalValue : public FTableRowBase
{
public:
	float                                        ProteinDropChance;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProteinMinAmount;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProteinMaxAmount;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FatDropChance;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FatMinAmount;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FatMaxAmount;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MineralDropChance;                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MineralMinAmount;                                  // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MineralMaxAmount;                                  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MutagenDropChance;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MutagenMinAmount;                                  // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MutagenMaxAmount;                                  // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEvolutionLoot>                EvolutionRewards;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealingValue;                                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Maneater.NutrientChunkInfo
struct FNutrientChunkInfo
{
public:
	class FName                                  SpawnLocationBone;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AME_ThrashableActor>       ChunkToSpawn;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChunkScale;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNutritionalValue                     NutritionInfo;                                     // 0x18(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Maneater.QueuedGoreChunkSpawnInfo
struct FQueuedGoreChunkSpawnInfo
{
public:
	struct FNutrientChunkInfo                    GoreChunkInfo;                                     // 0x0(0x68)(NativeAccessSpecifierPublic)
	uint8                                        Pad_15ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                  Instigator;                                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.MESpawnerInfo
struct FMESpawnerInfo
{
public:
	class UME_SpawnVolumeCollection*             VolumeCollection;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_SpawnPointActor>    SpawnPoint;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Significance;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnweightedSignificance;                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastSpawnTime;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnCooldownCounter;                              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.BeachActivityEntry
struct FBeachActivityEntry
{
public:
	class UME_AmbientActivityData*               Activity;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ConfigTableOverride;                               // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToActivate;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultRoamSettings;                      // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToRoam;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RoamRadius;                                        // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Maneater.SpawnDataEntry
struct FSpawnDataEntry
{
public:
	TSubclassOf<class APawn>                     PawnClass;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class APawn>                   SoftPawnClass;                                     // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnChanceMod;                                    // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Maneater.GrabPointEffects
struct FGrabPointEffects
{
public:
	class UParticleSystem*                       GrabPointDamagedParticle;                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       GrabPointDamagedPersistentParticle;                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       GrabPointDestroyedParticle;                        // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GrabPointParticleOffset;                           // 0x20(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F3[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GrabPointDestroyedParticleSocket;                  // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         GrabPointDestroyedSound;                           // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GoreCapOverrideBone;                               // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          AdditionalBonesToHide;                             // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Maneater.StageSpecificOffset
struct FStageSpecificOffset
{
public:
	enum class EPlayerGrowthStage                PlayerStage;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpecialTransform;                                  // 0x10(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Maneater.ThrashGrabPoint
struct FThrashGrabPoint
{
public:
	class FName                                  GrabPointCollisionBone;                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkeletonGrabbableJoints          GrabJoint;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LimbThickness;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTorso : 1;                                      // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bKillsOwner : 1;                                   // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyDamageGrabPoint : 1;                          // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIndestructibleUntilDead : 1;                      // Mask: 0x8, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_FE : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GrabPointMaxHealth;                                // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGrabPointEffects                     Effects;                                           // 0x20(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EGrabPointPhysicsMethod           GrabPhysicsMethod;                                 // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          BreakAwayAnimation;                                // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayerSharkOnlyBreakAwayAnimation;                 // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                GrabPointChainMap;                                 // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentConsumptionPoint;                            // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ESkeletonGrabbableJoints>  HiddenJointsOnGrab;                                // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GrabbedTransformOffset;                            // 0xF0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FStageSpecificOffset>          PlayerOffset;                                      // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x130(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_AnimalCharacter*                   ThrashAttacker;                                    // 0x138(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDestroyed : 1;                                    // Mask: 0x1, PropSize: 0x10x140(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_FF : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageModifier;                                    // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   SelfEffects;                                       // 0x148(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   ConsumerEffects;                                   // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneBaseBlendWeight>          GrabbedIKSetup;                                    // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Maneater.NutrientChunkList
struct FNutrientChunkList : public FTableRowBase
{
public:
	TArray<struct FNutrientChunkInfo>            GoreChunkList;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1600[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.TimedWeatherEvent
struct FTimedWeatherEvent
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Maneater.TimeOfDayPhaseSettings
struct FTimeOfDayPhaseSettings
{
public:
	enum class ETimeOfDayPhase                   Phase;                                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1602[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        PhaseHours;                                        // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhaseSpeedScale;                                   // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhaseTimeElapsed;                                  // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.TimeOfDayCubemap
struct FTimeOfDayCubemap
{
public:
	class UTextureCube*                          Cubemap;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveTime;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1603[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Maneater.ME_TutorialPopupEvent
struct FME_TutorialPopupEvent
{
public:
	enum class ETutorialPopupType                PopupType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1604[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PopupIndex;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageCount;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Maneater.BossPhaseInfo
struct FBossPhaseInfo
{
public:
	float                                        HealthPctToTriggerNextPhase;                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BattleTimeToTriggerNextPhase;                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumDeadPassengersToTriggerNextPhase;               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestorePassengersOnNextPhase;                     // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1605[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ProtectedSeatIndices;                              // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AME_VehiclePawn>>   PossibleHunterClasses;                             // 0x20(0x10)(Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxHuntersInPlay;                                  // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HunterRespawnDelay;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinforcePartialHunterWaves;                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1606[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.VehicleDamageMaterialPoint
struct FVehicleDamageMaterialPoint
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DamageRadiusParameterName;                         // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1607[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.SeatEnclosureSetting
struct FSeatEnclosureSetting
{
public:
	int32                                        SeatIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNewEnclosedSetting : 1;                           // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1608[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Maneater.VehicleDestructionLocation
struct FVehicleDestructionLocation
{
public:
	float                                        DestructionLocationHealth;                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1609[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           SwapoutMesh;                                       // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HitBoxSocket;                                      // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitBoxRadius;                                      // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ProtectedSeatIndices;                              // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                SeatIndicesToMarkAsDestroyed;                      // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                SeatIndicesToEject;                                // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                SeatIndicesToEnableTracking;                       // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSeatEnclosureSetting>         SeatEnclosureSettings;                             // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       DestroyedParticle;                                 // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DestroyedParticleSocket;                           // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         DestructionSound;                                  // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       DamagedParticle;                                   // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         DamagedSound;                                      // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x98(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AME_AuraDamageActor>       AuraWhenActive;                                    // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AuraDamageActor*                   CurrentAura;                                       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AuraAttachSocket;                                  // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Maneater.VehicleSeat
struct FVehicleSeat
{
public:
	uint8                                        bPilotSeat : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsEnclosed : 1;                                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDeletePassengerIfEnclosed : 1;                    // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_100 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_160D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachSocket;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCustomEjection : 1;                            // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_101 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_160E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EjectionAngle;                                     // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EjectionImpulseXY;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EjectionImpulseZ;                                  // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPassengerAnimationStruct             SeatOverrideAniamtions;                            // 0x20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bCanTrackTarget;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1610[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           UnderStarboardBlendspace;                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StarboardRotationOffset;                           // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               StarboardLocationOffset;                           // 0x5C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           UnderPortBlendspace;                               // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PortRotationOffset;                                // 0x70(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PortLocationOffset;                                // 0x7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStand;                                         // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCrouch;                                        // 0x89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSit;                                           // 0x8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanKneel;                                         // 0x8B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanLayDown;                                       // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1611[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimOverEdgePitchAngle;                             // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimOverEdgeWaterDepth;                             // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOccupied : 1;                                     // Mask: 0x1, PropSize: 0x10x98(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_102 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bPassengerIsLocked;                                // 0x99(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1612[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinAngle;                                          // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1613[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Maneater.PassengerPropInfo
struct FPassengerPropInfo
{
public:
	int32                                        BossPhaseNum;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttachmentChance;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UME_WeaponComponent>> PropAttachments;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondAttachmentChance;                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1614[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UME_WeaponComponent>> SecondPropAttachments;                             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Maneater.PassengerData
struct FPassengerData
{
public:
	TArray<TSubclassOf<class AME_HumanCharacter>> PassengerClasses;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPassengerPropInfo                    DefaultPropAttachments;                            // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FPassengerPropInfo>            BossPhasePropAttachments;                          // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentChance;                                     // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHitVelocityToEject;                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreventKnockOff : 1;                              // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHidePassenger : 1;                                // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisablePassengerABP : 1;                          // Mask: 0x4, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_103 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1615[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AME_HumanCharacter>        PassengerClass;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_HumanCharacter>     PassengerCharacter;                                // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent> PassengerMesh;                                     // 0x70(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UME_AnimInstance_HumanNPC> PassengerAnimBP;                                   // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UME_WeaponComponent>    PropAttachment;                                    // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UME_WeaponComponent>    SecondPropAttachment;                              // 0x88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsAttacker : 1;                                   // Mask: 0x1, PropSize: 0x10x90(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1616[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.RegionCol2DArray2
struct FRegionCol2DArray2
{
public:
	TArray<bool>                                 Array;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.RegionCol2DArray
struct FRegionCol2DArray
{
public:
	TArray<struct FRegionCol2DArray2>            Array;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        _SizeX;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        _SizeY;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Maneater.WorldRegion
struct FWorldRegion
{
public:
	enum class EWorldRegion                      Region;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1617[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            RegionIcon;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            RegionOverheadTextureCollision;                    // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionCol2DArray                     RegionCollisionData;                               // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AME_WorldRegionVolume>  RegionBounds;                                      // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RandomAmbientNarratorEventName;                    // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AME_Grotto>             RegionGrotto;                                      // 0x60(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRegionPoisonable;                               // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1618[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumBountySpawnDistance;                        // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct Maneater.WorldRegionState
struct FWorldRegionState
{
public:
	class AME_WorldRegionVolume*                 Bounds;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>        Landmarks;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>        Grottos;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_NutrientCache*>             NutrientCaches;                                    // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>        WhalesCarcasses;                                   // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>        Beaches;                                           // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_SpawnVolumeCollection*>     SpawnVolumeCollections;                            // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_SpawnPointActor*>           SpawnPointActors;                                  // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_DestructibleActor*>         Breakables;                                        // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldRegion                          RegionData;                                        // 0x88(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	int32                                        RegionIndex;                                       // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisited;                                          // 0x11C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1619[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Maneater.CanSpawnDiverMemory
struct FCanSpawnDiverMemory
{
public:
	TWeakObjectPtr<class AME_BoatAIController>   CachedAIC;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.CanUseAbilityMemory
struct FCanUseAbilityMemory
{
public:
	TWeakObjectPtr<class AME_AIController>       CachedAIC;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NextUpdateTime;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLastResult : 1;                                   // Mask: 0x1, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.PawnRelevantMemory
struct FPawnRelevantMemory
{
public:
	float                                        NextUpdateTime;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLastResult : 1;                                   // Mask: 0x1, PropSize: 0x10x4(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Maneater.TimeSinceLastSpawnMemory
struct FTimeSinceLastSpawnMemory
{
public:
	uint8                                        Pad_161D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Maneater.BaseAbilityMemory
struct FBaseAbilityMemory
{
public:
	uint8                                        Pad_161E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Maneater.TinFoilHatSubObject
struct FTinFoilHatSubObject
{
public:
	TSoftObjectPtr<class AMED_TinFoilHatActor>   TinFoilHatActor;                                   // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         BarkAkEvent;                                       // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnDeathNarratorEventName;                          // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Maneater.MED_TeleporterProductRequirement
struct FMED_TeleporterProductRequirement
{
public:
	enum class EDLCType                          RequiredDLCType;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETutorialPopupID                  UnacquiredMessagePopupId;                          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1620[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnacquiredFastTravelText;                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Maneater.RingInfo
struct FRingInfo
{
public:
	TSoftObjectPtr<class AActor>                 Ring;                                              // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeIncrease;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RingPassedNarratorEventName;                       // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1621[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


