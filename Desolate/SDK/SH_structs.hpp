#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EQuestCategory : uint8
{
	Story                          = 0,
	Daily                          = 1,
	SideQuest                      = 2,
	World                          = 3,
	MAX                            = 4,
};

enum class EQuestGiver : uint8
{
	Corporation                    = 0,
	Truth                          = 1,
	Trader                         = 2,
	Kurator400                     = 3,
	Biologist                      = 4,
	Engineer                       = 5,
	Scientist                      = 6,
	Ognin                          = 7,
	Eleonora                       = 8,
	Repair                         = 9,
	Neutrals                       = 10,
	EQuestGiver_MAX                = 11,
};

enum class EChatMessageType : uint8
{
	EMessage                       = 0,
	EPersonalMessage               = 1,
	ESystemMessage                 = 2,
	EChatMessageType_MAX           = 3,
};

enum class ECharacterScreenType : uint8
{
	None                           = 0,
	Character                      = 1,
	Backpack                       = 2,
	Map                            = 3,
	Skills                         = 4,
	Craft                          = 5,
	Monstrum                       = 6,
	Journal                        = 7,
	Npc                            = 8,
	TradeBuy                       = 9,
	ECharacterScreenType_MAX       = 10,
};

enum class EAchievement : uint8
{
	None                           = 0,
	AnomalyStaticFieldDamage       = 1,
	AnomalyKickerDamage            = 2,
	AnomalyInfernoDamage           = 3,
	AnomalyBlackHole               = 4,
	AnomalyAll                     = 5,
	AnomalyFishing                 = 6,
	AnomalyFishingAll              = 7,
	AiKillMadman                   = 8,
	AiKillDog                      = 9,
	AiKillGrutch                   = 10,
	AiKillVanoga                   = 11,
	AiKillBandit                   = 12,
	AiKillHunter                   = 13,
	AiKillNewLight                 = 14,
	AiKillSapsy                    = 15,
	AiKillGorlan                   = 16,
	AiKillKvakun                   = 17,
	AiKillChuraka                  = 18,
	AiKillButcher                  = 19,
	AiKillBlindMan                 = 20,
	StoryPrologue                  = 21,
	StoryPersonalRoom              = 22,
	StoryChapterOne                = 23,
	StoryChapterTwo                = 24,
	StoryChapterThree              = 25,
	StoryBlindMan                  = 26,
	StoryUnderground               = 27,
	StoryAlice                     = 28,
	StoryButcher                   = 29,
	StoryXBench                    = 30,
	StoryManiac                    = 31,
	StoryChurch                    = 32,
	StoryLiberationStart           = 33,
	StoryLiberationComplete        = 34,
	StoryHuntStart                 = 35,
	StoryHuntComplete              = 36,
	StoryDaily                     = 37,
	ReputationNeutrals10           = 38,
	ReputationNeutrals60           = 39,
	ReputationBiologist2           = 40,
	ReputationBiologist5           = 41,
	ReputationEngineer2            = 42,
	ReputationEngineer5            = 43,
	ReputationScientist2           = 44,
	ReputationScientist5           = 45,
	ProgressLevel5                 = 46,
	ProgressMonstrum3              = 47,
	ProgressLevel40                = 48,
	CollectingPosters              = 49,
	CollectingRelic                = 50,
	CollectingToken                = 51,
	ScreamerGirl                   = 52,
	CommonUnlockContainer          = 53,
	CraftItem                      = 54,
	CommonSurvive10                = 55,
	ScreamerFlashback              = 56,
	CraftEatFoodAll                = 57,
	CraftDrinkWaterAll             = 58,
	CommonUniqueGearItems          = 59,
	CommonMoneyRich                = 60,
	CommonCustomPersonalRoom       = 61,
	CommonPneumolift               = 62,
	StoryPneumoliftRepairAll       = 63,
	StoryRetranslatorRepairAll     = 64,
	StoryTeleporterRepairAll       = 65,
	StoryBenchRepair               = 66,
	StoryBenchRepairAll            = 67,
	StoryWorkbenchRepairAll        = 68,
	Platinum                       = 69,
	CommonTeleportatorUsed         = 70,
	CommonGrenadeKill              = 71,
	CommonKunaiKill                = 72,
	EAchievement_MAX               = 73,
};

enum class EAIAchievementType : uint8
{
	ENone                          = 0,
	Madman                         = 1,
	Dog                            = 2,
	Grutch                         = 3,
	Vanoga                         = 4,
	Bandit                         = 5,
	Hunter                         = 6,
	NewLight                       = 7,
	Sapsy                          = 8,
	Gorlan                         = 9,
	Kvakun                         = 10,
	Churaka                        = 11,
	Butcher                        = 12,
	BlindMan                       = 13,
	EAIAchievementType_MAX         = 14,
};

enum class EAIBehaviorType : uint8
{
	EDefault                       = 0,
	EPatrol                        = 1,
	EAIBehaviorType_MAX            = 2,
};

enum class EAIAttackType : uint8
{
	EStopAttack                    = 0,
	EMoveAttack                    = 1,
	EAIAttackType_MAX              = 2,
};

enum class EAISightType : uint8
{
	Normal                         = 0,
	Low                            = 1,
	High                           = 2,
	EAISightType_MAX               = 3,
};

enum class EAIHearingType : uint8
{
	Normal                         = 0,
	Low                            = 1,
	High                           = 2,
	EAIHearingType_MAX             = 3,
};

enum class EAIStates : uint8
{
	EPatrol                        = 0,
	EAlert                         = 1,
	EInspect                       = 2,
	EAttack                        = 3,
	ESpecial                       = 4,
	EEvade                         = 5,
	EDeath                         = 6,
	EStun                          = 7,
	EGroupMoving                   = 8,
	EDazed                         = 9,
	EInteract                      = 10,
	ESecondSpecial                 = 11,
	EThirdSpecial                  = 12,
	EFourthSpecial                 = 13,
	EFifthSpecial                  = 14,
	ECircularMovement              = 15,
	EAIStates_MAX                  = 16,
};

enum class EAICombatState : uint8
{
	EHolding                       = 0,
	EAttacking                     = 1,
	EAICombatState_MAX             = 2,
};

enum class ESpawnerBehaviorType : uint8
{
	EDefault                       = 0,
	EWaypoints                     = 1,
	ESpawnerBehaviorType_MAX       = 2,
};

enum class EAiSpawnType : uint8
{
	ESpawnPoint                    = 0,
	EFirstWaypoint                 = 1,
	ERandomWaypoint                = 2,
	EAiSpawnType_MAX               = 3,
};

enum class EAnomalyAchievementType : uint8
{
	ENone                          = 0,
	EStaticField                   = 1,
	EKickerDamage                  = 2,
	EInfernoDamage                 = 3,
	EBlackHole                     = 4,
	EAnomalyAchievementType_MAX    = 5,
};

enum class EArmorType : uint8
{
	UNDEFINED                      = 0,
	Chest                          = 1,
	Backpack                       = 2,
	Artifact                       = 3,
	Hat                            = 4,
	EArmorType_MAX                 = 5,
};

enum class EBattleStanceState : uint8
{
	Idle                           = 0,
	PendingIdle                    = 1,
	PendingBattle                  = 2,
	Battle                         = 3,
	EBattleStanceState_MAX         = 4,
};

enum class EHitResult : uint8
{
	Hit                            = 0,
	Blocked                        = 1,
	BlockBroken                    = 2,
	BlockedHeavy                   = 3,
	Parry                          = 4,
	EHitResult_MAX                 = 5,
};

enum class EBodyPart : uint8
{
	Body                           = 0,
	Head                           = 1,
	Limb                           = 2,
	EBodyPart_MAX                  = 3,
};

enum class EDirection : uint8
{
	Front                          = 0,
	Back                           = 1,
	Right                          = 2,
	Left                           = 3,
	EDirection_MAX                 = 4,
};

enum class ECombatZone : uint8
{
	Red                            = 0,
	Blue                           = 1,
	Gray                           = 2,
	None                           = 3,
	ECombatZone_MAX                = 4,
};

enum class EDazeType : uint8
{
	ENone                          = 0,
	ENormalAttack                  = 1,
	EHeavyAttack                   = 2,
	EAIAttackBlocked               = 3,
	EBleedingAttack                = 4,
	EElectricAttack                = 5,
	EPoisonAttack                  = 6,
	EFireAttack                    = 7,
	EForgedAttack                  = 8,
	EIceAttack                     = 9,
	EDazeType_MAX                  = 10,
};

enum class ECharacterReactionType : uint8
{
	TraumaBegin                    = 0,
	TraumaEnd                      = 1,
	HeadTraumaBegin                = 2,
	HeadTraumaEnd                  = 3,
	ArmTraumaBegin                 = 4,
	ArmTraumaEnd                   = 5,
	ECharacterReactionType_MAX     = 6,
};

enum class ECombatActionDirection : uint8
{
	RightToLeft                    = 0,
	LeftToRight                    = 1,
	ECombatActionDirection_MAX     = 2,
};

enum class EMeleeWeaponType : uint8
{
	Light                          = 0,
	Medium                         = 1,
	Heavy                          = 2,
	Fist                           = 3,
	Kick                           = 4,
	EMeleeWeaponType_MAX           = 5,
};

enum class EAttackActionType : uint8
{
	Weak                           = 0,
	Standard                       = 1,
	Power                          = 2,
	EAttackActionType_MAX          = 3,
};

enum class ECombatActionType : uint8
{
	Attack                         = 0,
	KickAction                     = 1,
	Block                          = 2,
	Parry                          = 3,
	Finisher                       = 4,
	ECombatActionType_MAX          = 5,
};

enum class EMeleeWeaponCategory : uint8
{
	Weapon                         = 0,
	Fists                          = 1,
	Kicks                          = 2,
	EMeleeWeaponCategory_MAX       = 3,
};

enum class ECraftRequiredEquipment : uint8
{
	None                           = 0,
	Fireplace1                     = 1,
	Fireplace2                     = 2,
	Bench1                         = 3,
	Bench2                         = 4,
	Chemistrylab1                  = 5,
	Chemistrylab2                  = 6,
	Medicalbay1                    = 7,
	Medicalbay2                    = 8,
	ExperimentalbenchXZ4           = 9,
	ECraftRequiredEquipment_MAX    = 10,
};

enum class ECraftRecipeCategoryType : uint8
{
	Medicine                       = 0,
	Food                           = 1,
	MeleeWeaponMod                 = 2,
	Component                      = 3,
	Quest                          = 4,
	Armor                          = 5,
	Tools                          = 6,
	Other                          = 7,
	Ammo                           = 8,
	ThrowWeapon                    = 9,
	ECraftRecipeCategoryType_MAX   = 10,
};

enum class ECraftTableState : uint8
{
	EBroken                        = 0,
	ENormal                        = 1,
	EUpgraded                      = 2,
	ECraftTableState_MAX           = 3,
};

enum class EMorphCategoryType : uint8
{
	Solo                           = 0,
	Party                          = 1,
	EMorphCategoryType_MAX         = 2,
};

enum class EDamageType : uint8
{
	EDefaultDamage                 = 0,
	EAnomalyDamage                 = 1,
	EBleedingDamage                = 2,
	EExplodeDamage                 = 3,
	EFallDamage                    = 4,
	EOxygenDamage                  = 5,
	EPhysicalDamage                = 6,
	EThermalDamage                 = 7,
	EDamageType_MAX                = 8,
};

enum class EDiseaseType : uint8
{
	Mild                           = 0,
	Serious                        = 1,
	EDiseaseType_MAX               = 2,
};

enum class EEffectBuffType : uint8
{
	Food                           = 0,
	Drink                          = 1,
	Stimulator                     = 2,
	EEffectBuffType_MAX            = 3,
};

enum class ECycleType : uint8
{
	Night                          = 0,
	Rise                           = 1,
	Day                            = 2,
	Fall                           = 3,
	ECycleType_MAX                 = 4,
};

enum class ETimeOfDayType : uint8
{
	None                           = 0,
	Morning                        = 1,
	Twilight                       = 2,
	Night                          = 3,
	ETimeOfDayType_MAX             = 4,
};

enum class ETraumaApplyType : uint8
{
	RandomChance                   = 0,
	PermanentLight                 = 1,
	PermanentHeavy                 = 2,
	ETraumaApplyType_MAX           = 3,
};

enum class ETraumaCuringType : uint8
{
	None                           = 0,
	Light                          = 1,
	All                            = 2,
	ETraumaCuringType_MAX          = 3,
};

enum class ETraumaType : uint8
{
	Head                           = 0,
	Torso                          = 1,
	Arm                            = 2,
	Leg                            = 3,
	Random                         = 4,
	ETraumaType_MAX                = 5,
};

enum class ECuringType : uint8
{
	MildDisease                    = 0,
	SeriousDisease                 = 1,
	ECuringType_MAX                = 2,
};

enum class EPlayerStatModificator : uint8
{
	EModHunger                     = 0,
	EModHungerDamage               = 1,
	EModThirsty                    = 2,
	EModStaminaRegen               = 3,
	EModStaminaJumpCost            = 4,
	EModStaminaSprintCost          = 5,
	EModCarryingCapacity           = 6,
	EModSpeed                      = 7,
	EModRunningSpeed               = 8,
	EModBleedingChance             = 9,
	EModBleedingValue              = 10,
	EModNoiseChance                = 11,
	EModTrauma                     = 12,
	EModStressGain                 = 13,
	EModStressLoss                 = 14,
	EModStressPsyDamage            = 15,
	EModStressRecover              = 16,
	EModGlobalStressModifier       = 17,
	EModTemperatureMin             = 18,
	EModTemperatureMax             = 19,
	EModTemperatureIdeal           = 20,
	EModDefenceArmorFlat           = 21,
	EModDefenceArmorLessModifier   = 22,
	EModDefencePsyFlat             = 23,
	EModDefencePsyLessModifier     = 24,
	EModDefenceAnomalyFlat         = 25,
	EModDefenceAnomalyLessModifier = 26,
	EModDefenceTemperatureFlat     = 27,
	EModDefenceTemperatureLessModifier = 28,
	EModPoisoning                  = 29,
	EModBleedingMaxModifier        = 30,
	EModBonusDamageModifier        = 31,
	EModQTEBleeding                = 32,
	EModQTEPoisoning               = 33,
	EModQTEShock                   = 34,
	EModQTEBurning                 = 35,
	EModQTESpecialMob              = 36,
	EPlayerStatModificator_MAX     = 37,
};

enum class EFlashLightMode : uint8
{
	Default                        = 0,
	Ultraviolet                    = 1,
	EFlashLightMode_MAX            = 2,
};

enum class EFlashLightStage : uint8
{
	None                           = 0,
	Default                        = 1,
	UltravioletFull                = 2,
	UltravioletMedium              = 3,
	UltravioletLow                 = 4,
	EFlashLightStage_MAX           = 5,
};

enum class EFractions : uint8
{
	None                           = 0,
	Mutants                        = 1,
	Marauders                      = 2,
	NewLight                       = 3,
	Neutral                        = 4,
	EFractions_MAX                 = 5,
};

enum class ESelfHealingType : uint8
{
	ENone                          = 0,
	ELow                           = 1,
	ENormal                        = 2,
	ESelfHealingType_MAX           = 3,
};

enum class EGameDifficultyType : uint8
{
	EStory                         = 0,
	ENormal                        = 1,
	EHard                          = 2,
	ECustom                        = 3,
	EGameDifficultyType_MAX        = 4,
};

enum class EItemRarity : uint8
{
	None                           = 0,
	Common                         = 1,
	Uncommon                       = 2,
	Rare                           = 3,
	Legendary                      = 4,
	Artefact                       = 5,
	EItemRarity_MAX                = 6,
};

enum class EWeaponModifierType : uint8
{
	Bleed_1                        = 0,
	Bleed_2                        = 1,
	Bleed_3                        = 2,
	Electric_1                     = 3,
	Electric_2                     = 4,
	Electric_3                     = 5,
	Poison_1                       = 6,
	Poison_2                       = 7,
	Poison_3                       = 8,
	Fire_1                         = 9,
	Fire_2                         = 10,
	Fire_3                         = 11,
	Strong_1                       = 12,
	Strong_2                       = 13,
	Strong_3                       = 14,
	Ice1                           = 15,
	Ice2                           = 16,
	Ice3                           = 17,
	EWeaponModifierType_MAX        = 18,
};

enum class EEquipmentSlot : uint8
{
	None                           = 0,
	Weapon1                        = 1,
	Weapon2                        = 2,
	Weapon3                        = 3,
	Weapon4                        = 4,
	Inventory1                     = 5,
	Inventory2                     = 6,
	Inventory3                     = 7,
	Inventory4                     = 8,
	Armor                          = 9,
	Backpack                       = 10,
	Artifact1                      = 11,
	Artifact2                      = 12,
	Hat                            = 13,
	Stone                          = 14,
	EEquipmentSlot_MAX             = 15,
};

enum class ENoteCategoryType : uint8
{
	Letter                         = 0,
	Data                           = 1,
	Note                           = 2,
	Instruction                    = 3,
	ENoteCategoryType_MAX          = 4,
};

enum class ELocationOwnerType : uint8
{
	None                           = 0,
	Default                        = 1,
	Invader                        = 2,
	ELocationOwnerType_MAX         = 3,
};

enum class EInterestZoneType : uint8
{
	Safezone                       = 0,
	Fireplace                      = 1,
	Water                          = 2,
	Pneumomail                     = 3,
	CraftTable_Broken              = 4,
	CraftTable_Repeared            = 5,
	Repeater                       = 6,
	Dungeon                        = 7,
	Respawn                        = 8,
	Token                          = 9,
	Poster                         = 10,
	QuestTask                      = 11,
	Gorlan                         = 12,
	Sapsy                          = 13,
	Dorg                           = 14,
	Kvakun                         = 15,
	Grutch                         = 16,
	Churaka                        = 17,
	Location                       = 18,
	DeathPlace                     = 19,
	Trader                         = 20,
	X_Lift1                        = 21,
	X_Lift2                        = 22,
	X_Lift3                        = 23,
	EInterestZoneType_MAX          = 24,
};

enum class EMeleeAttackType : uint8
{
	None                           = 0,
	Simple                         = 1,
	Base                           = 2,
	BaseCrouch                     = 3,
	Power                          = 4,
	PowerCrouch                    = 5,
	Weak                           = 6,
	Block                          = 7,
	BlockAttack                    = 8,
	Special                        = 9,
	FromJump                       = 10,
	FromStealth                    = 11,
	ThrowWeapon                    = 12,
	EMeleeAttackType_MAX           = 13,
};

enum class EMonstrumCategoryType : uint8
{
	Peaceful                       = 0,
	Aggressive                     = 1,
	Special                        = 2,
	Object                         = 3,
	EMonstrumCategoryType_MAX      = 4,
};

enum class EMonstrumPerkType : uint8
{
	None                           = 0,
	EStressResistance              = 1,
	EDamageWeakness                = 2,
	EDirtyTricks                   = 3,
	EMadmanWeakSpot                = 4,
	EHunterAccuracy                = 5,
	EVanogaPoisonResistance        = 6,
	EGrutchTranquilization         = 7,
	EBlindmanPhotophobia           = 8,
	EButcherAccurateBlows          = 9,
	EBanditsSabotage               = 10,
	ENSChernoFriendly              = 11,
	EMonstrumPerkType_MAX          = 12,
};

enum class ESHPartyState : uint8
{
	None                           = 0,
	InParty                        = 1,
	InviteReceived                 = 2,
	InviteSent                     = 3,
	ESHPartyState_MAX              = 4,
};

enum class EPerkType : uint8
{
	None                           = 0,
	EHealthIncreaseOne             = 1,
	EHealthIncreaseTwo             = 2,
	EHealthIncreaseThree           = 3,
	EStaminaIncreaseOne            = 4,
	EStaminaIncreaseTwo            = 5,
	EStaminaIncreaseThree          = 6,
	EHungerIncreaseOne             = 7,
	EHungerIncreaseTwo             = 8,
	EHungerIncreaseThree           = 9,
	EThirstyIncreaseOne            = 10,
	EThirstyIncreaseTwo            = 11,
	EThirstyIncreaseThree          = 12,
	EIcarus                        = 13,
	ENightTraveler                 = 14,
	EStealthExpert                 = 15,
	EStealthMaster                 = 16,
	EResourceCollector             = 17,
	EResourceSoulflayer            = 18,
	ELuckyBoy                      = 19,
	ESurgery                       = 20,
	ESurvivalSleekHands            = 21,
	ESurvivalHacker                = 22,
	EWeaponRepairMasterOne         = 23,
	EWeaponRepairMasterTwo         = 24,
	EWeaponCareful                 = 25,
	EScavengerExpert               = 26,
	EScavengerMaster               = 27,
	ECraftEconomicalOne            = 28,
	ECraftEconomicalTwo            = 29,
	ECraftEconomicalThree          = 30,
	EHeavyweight                   = 31,
	ERipper                        = 32,
	EReaper                        = 33,
	EWeaponThrower                 = 34,
	EKnifeThrowerOne               = 35,
	EKnifeThrowerTwo               = 36,
	EBombardierOne                 = 37,
	EBombardierTwo                 = 38,
	EAbnormalTechnologyOne         = 39,
	EAbnormalTechnologyTwo         = 40,
	EHotBlood                      = 41,
	EIgnorer                       = 42,
	ESkeptic                       = 43,
	EBigLungs                      = 44,
	ESprinterOne                   = 45,
	ESprinterTwo                   = 46,
	EMaterialCompressorOne         = 47,
	EMaterialCompressorTwo         = 48,
	ECraftMasterOne                = 49,
	ECraftMasterTwo                = 50,
	ECarBreaker                    = 51,
	EPhlegmaticOne                 = 52,
	EPhlegmaticTwo                 = 53,
	EPhlegmaticThree               = 54,
	EKannibale                     = 55,
	ESteadyHand                    = 56,
	EDemomanIllusionist            = 57,
	ECraftChemist                  = 58,
	ECraftMasterChemist            = 59,
	ETransmutationExpert           = 60,
	ETransmutationMaster           = 61,
	EWeaponMaster                  = 62,
	EArmorMaster                   = 63,
	EDisassembleItems              = 64,
	ETradeCharmingOne              = 65,
	ETradeCharmingTwo              = 66,
	ETraderOne                     = 67,
	ETraderTwo                     = 68,
	EKiller                        = 69,
	EDodger                        = 70,
	EViking                        = 71,
	ESpartan                       = 72,
	ESkullCrusher                  = 73,
	ECombiner                      = 74,
	EGlider                        = 75,
	EShadow                        = 76,
	EAiModificationElementalistOne = 77,
	EAiModificationElementalistTwo = 78,
	EAiModificationWizardOne       = 79,
	EAiModificationWizardTwo       = 80,
	EAiModificationEffectiveOne    = 81,
	EAiModificationEffectiveTwo    = 82,
	ESenseiOne                     = 83,
	ESenseiTwo                     = 84,
	EHeavyTruckOne                 = 85,
	EHeavyTruckTwo                 = 86,
	EFisherman                     = 87,
	ESpecifics                     = 88,
	ECalm                          = 89,
	ESilentMovement                = 90,
	EWeaponLucky                   = 91,
	ELuckyShooter                  = 92,
	EPersistent                    = 93,
	EStorekeeper                   = 94,
	EDeathFriendOne                = 95,
	EDeathFriendTwo                = 96,
	EPhysicalSuperSoldier          = 97,
	EGourmet                       = 98,
	ESommelier                     = 99,
	EWolfEyes                      = 100,
	EPredator                      = 101,
	ENinja                         = 102,
	EPartner                       = 103,
	ETallyman                      = 104,
	ESecretSponsor                 = 105,
	EDeconstructor                 = 106,
	ELocksmith                     = 107,
	EVampire                       = 108,
	EStaminaTimeSaver              = 109,
	ERegeneration                  = 110,
	EPerkType_MAX                  = 111,
};

enum class EPerkCategory : uint8
{
	None                           = 0,
	ESkill                         = 1,
	EAbility                       = 2,
	EKnowledge                     = 3,
	EPerkCategory_MAX              = 4,
};

enum class EStealthState : uint8
{
	Visible                        = 0,
	Invisible                      = 1,
	Found                          = 2,
	EStealthState_MAX              = 3,
};

enum class EPlayerState : uint8
{
	None                           = 0,
	Idle                           = 1,
	Alerted                        = 2,
	Fighting                       = 3,
	EPlayerState_MAX               = 4,
};

enum class EBaseRespawnType : uint8
{
	EStartingRoom                  = 0,
	ESafezone                      = 1,
	EClosestSavezone               = 2,
	EBaseRespawnType_MAX           = 3,
};

enum class ERespawnType : uint8
{
	EBase                          = 0,
	EClosestSpawn                  = 1,
	ERespawnType_MAX               = 2,
};

enum class EInviteResponse : uint8
{
	Accepted                       = 0,
	YouAreNotLeader                = 1,
	AlreadyInParty                 = 2,
	Rejected                       = 3,
	PartySizeLimit                 = 4,
	EInviteResponse_MAX            = 5,
};

enum class ECarryingCapacityStage : uint8
{
	None                           = 0,
	Low                            = 1,
	Medimum                        = 2,
	High                           = 3,
	ECarryingCapacityStage_MAX     = 4,
};

enum class EStressStage : uint8
{
	Spawned                        = 0,
	None                           = 1,
	First                          = 2,
	Second                         = 3,
	Third                          = 4,
	Fourth                         = 5,
	EStressStage_MAX               = 6,
};

enum class ETraumaComplication : uint8
{
	None                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	ETraumaComplication_MAX        = 3,
};

enum class EPlayerUIColor : uint8
{
	ColorRed                       = 0,
	ColorBlue                      = 1,
	ColorGreen                     = 2,
	ColorYellow                    = 3,
	MAX                            = 4,
};

enum class EQuestType : uint8
{
	Undefined                      = 0,
	GetItem                        = 1,
	GetItemFromMob                 = 2,
	KillMob                        = 3,
	KillSpecificMob                = 4,
	MAX                            = 5,
};

enum class EQuestGraphDifficulty : uint8
{
	Easy                           = 0,
	Normal                         = 1,
	Hard                           = 2,
	EQuestGraphDifficulty_MAX      = 3,
};

enum class ESaveSlot : uint8
{
	None                           = 0,
	Quicksave                      = 1,
	Quicksave1                     = 2,
	Quicksave2                     = 3,
	Quicksave3                     = 4,
	Save1                          = 5,
	Save2                          = 6,
	Save3                          = 7,
	Save4                          = 8,
	Save5                          = 9,
	Save6                          = 10,
	Save7                          = 11,
	Save8                          = 12,
	Save9                          = 13,
	Save10                         = 14,
	Save11                         = 15,
	Save12                         = 16,
	Save13                         = 17,
	Save14                         = 18,
	Save15                         = 19,
	Save16                         = 20,
	Save17                         = 21,
	Save18                         = 22,
	Save19                         = 23,
	Save20                         = 24,
	ESaveSlot_MAX                  = 25,
};

enum class ESkillCategory : uint8
{
	ECraft                         = 0,
	EPhysicalTraining              = 1,
	ESurvival                      = 2,
	ESkillCategory_MAX             = 3,
};

enum class ESkillType : uint8
{
	None                           = 0,
	EDisassembleItems              = 1,
	EScavengerExpert               = 2,
	EScavengerMaster               = 3,
	ELuckyBoy                      = 4,
	ETransmutationExpert           = 5,
	ETransmutationMaster           = 6,
	ENeat                          = 7,
	ESuperNeat                     = 8,
	ESprinter                      = 9,
	EAthlete                       = 10,
	ESettled                       = 11,
	EBigLungs                      = 12,
	EHotBlood                      = 13,
	EAdvancedMelee                 = 14,
	EMasterMelee                   = 15,
	EKeenEye                       = 16,
	ESuperKeenEye                  = 17,
	EQuietKitten                   = 18,
	EStealthExpert                 = 19,
	EStealthMaster                 = 20,
	EPsiResistance                 = 21,
	EAnomalyResistance             = 22,
	ESurgery                       = 23,
	EImpudence                     = 24,
	ESuperImpudence                = 25,
	EArtefactTechnology1           = 26,
	EArtefactTechnology2           = 27,
	ECraftEconomicalLvl1           = 28,
	ECraftEconomicalLvl2           = 29,
	ECraftEconomicalLvl3           = 30,
	ECraftEconomicalLvl4           = 31,
	ECraftEconomicalLvl5           = 32,
	ECraftEconomicalLvl6           = 33,
	ECraftEconomicalLvl7           = 34,
	ECraftEconomicalLvl8           = 35,
	ECraftEconomicalLvl9           = 36,
	ECraftEconomicalLvl10          = 37,
	ECraftExpertLvl1               = 38,
	ECraftExpertLvl2               = 39,
	ECraftExpertLvl3               = 40,
	ECraftExpertLvl4               = 41,
	ECraftExpertLvl5               = 42,
	ECraftExpertLvl6               = 43,
	ECraftExpertLvl7               = 44,
	ECraftExpertLvl8               = 45,
	ECraftExpertLvl9               = 46,
	ECraftExpertLvl10              = 47,
	ECraftChemist                  = 48,
	ECraftTradeCharming            = 49,
	ECraftTradePretty              = 50,
	ECraftMasterChemist            = 51,
	EPhysicalCardioLvl1            = 52,
	EPhysicalCardioLvl2            = 53,
	EPhysicalCardioLvl3            = 54,
	EPhysicalCardioLvl4            = 55,
	EPhysicalCardioLvl5            = 56,
	EPhysicalCardioLvl6            = 57,
	EPhysicalCardioLvl7            = 58,
	EPhysicalCardioLvl8            = 59,
	EPhysicalCardioLvl9            = 60,
	EPhysicalCardioLvl10           = 61,
	EPhysicalEnduranceLvl1         = 62,
	EPhysicalEnduranceLvl2         = 63,
	EPhysicalEnduranceLvl3         = 64,
	EPhysicalEnduranceLvl4         = 65,
	EPhysicalEnduranceLvl5         = 66,
	EPhysicalEnduranceLvl6         = 67,
	EPhysicalEnduranceLvl7         = 68,
	EPhysicalEnduranceLvl8         = 69,
	EPhysicalEnduranceLvl9         = 70,
	EPhysicalEnduranceLvl10        = 71,
	EPhysicalSuperSoldier          = 72,
	ESurvivalThriftyLvl1           = 73,
	ESurvivalThriftyLvl2           = 74,
	ESurvivalThriftyLvl3           = 75,
	ESurvivalThriftyLvl4           = 76,
	ESurvivalThriftyLvl5           = 77,
	ESurvivalThriftyLvl6           = 78,
	ESurvivalThriftyLvl7           = 79,
	ESurvivalThriftyLvl8           = 80,
	ESurvivalThriftyLvl9           = 81,
	ESurvivalThriftyLvl10          = 82,
	ESurvivalAquaticLvl1           = 83,
	ESurvivalAquaticLvl2           = 84,
	ESurvivalAquaticLvl3           = 85,
	ESurvivalAquaticLvl4           = 86,
	ESurvivalAquaticLvl5           = 87,
	ESurvivalAquaticLvl6           = 88,
	ESurvivalAquaticLvl7           = 89,
	ESurvivalAquaticLvl8           = 90,
	ESurvivalAquaticLvl9           = 91,
	ESurvivalAquaticLvl10          = 92,
	ESurvivalSleekHands            = 93,
	ESurvivalHacker                = 94,
	ESurvivalWaterCarrier          = 95,
	ESurvivalCollector             = 96,
	ESurvivalAnatomist             = 97,
	ESurvivalSoulflayer            = 98,
	ESkillType_MAX                 = 99,
};

enum class ESpawnStationState : uint8
{
	EDisabled                      = 0,
	EEnabled                       = 1,
	ESpawnStationState_MAX         = 2,
};

enum class EStartingPlayerStartType : uint8
{
	EDefault                       = 0,
	EFirstSpawnPoint               = 1,
	EStartingPlayerStartType_MAX   = 2,
};

enum class EStartingRoomStage : uint8
{
	EFirst                         = 0,
	ESecond                        = 1,
	EThird                         = 2,
	EFourth                        = 3,
	EStartingRoomStage_MAX         = 4,
};

enum class ETooltipButtonType : uint8
{
	A                              = 0,
	B                              = 1,
	X                              = 2,
	Y                              = 3,
	Esc                            = 4,
	E                              = 5,
	F                              = 6,
	T                              = 7,
	R                              = 8,
	ETooltipButtonType_MAX         = 9,
};

enum class EWeaponAttackType : uint8
{
	Base                           = 0,
	Melee_Base                     = 1,
	Melee_Heavy                    = 2,
	Melee_Weak                     = 3,
	Ranged_Base                    = 4,
	Fist_Base                      = 5,
	Kick_Base                      = 6,
	EWeaponAttackType_MAX          = 7,
};

enum class EWeaponState : uint8
{
	Idle                           = 0,
	Firing                         = 1,
	Blocking                       = 2,
	Reloading                      = 3,
	Equipping                      = 4,
	EWeaponState_MAX               = 5,
};

enum class EWeaponCollisionEnum : uint8
{
	All                            = 0,
	OnlyPlayers                    = 1,
	EWeaponCollisionEnum_MAX       = 2,
};

enum class EWeaponType : uint8
{
	None                           = 0,
	Melee                          = 1,
	Ranged                         = 2,
	Pistol                         = 3,
	Thrown                         = 4,
	Equipment                      = 5,
	HeavyWeapon                    = 6,
	EWeaponType_MAX                = 7,
};

enum class EMeleeAnimationType : uint8
{
	Base                           = 0,
	HeavyStart                     = 1,
	HeavyFinish                    = 2,
	Weak                           = 3,
	EMeleeAnimationType_MAX        = 4,
};

enum class EMeleeSwingType : uint8
{
	Right                          = 0,
	Left                           = 1,
	EMeleeSwingType_MAX            = 2,
};

enum class EMeleeModificationType : uint8
{
	ENone                          = 0,
	EBleeding                      = 1,
	EElectric                      = 2,
	EPoison                        = 3,
	EFire                          = 4,
	EForged                        = 5,
	EIce                           = 6,
	EMeleeModificationType_MAX     = 7,
};

enum class EWeatherType : uint8
{
	None                           = 0,
	SmallRain                      = 1,
	MediumRain                     = 2,
	BigRain                        = 3,
	Fog                            = 4,
	Snow                           = 5,
	Ash                            = 6,
	ToxicRain                      = 7,
	OutdoorSnow                    = 8,
	EWeatherType_MAX               = 9,
};

enum class ESHWorldEventType : uint8
{
	None                           = 0,
	Active                         = 1,
	Aggressive                     = 2,
	ESHWorldEventType_MAX          = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct SH.TaskView
struct FTaskView
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	int32                                        Progress;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgressMax;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsComplete;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ContainerObjectNames;                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskAreaObjectName;                                // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSimpleMark;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMarkIsHidden;                                     // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B0[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.LootListInfo
struct FLootListInfo
{
public:
	TSubclassOf<class ASHLootList>               LootList;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.QuestUniqueRewardItemInfo
struct FQuestUniqueRewardItemInfo
{
public:
	TSubclassOf<class ASHItem>                   UniqueItemClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHItem>>           AlternativeItemClasses;                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct SH.QuestRewardSpawnInfo
struct FQuestRewardSpawnInfo
{
public:
	TArray<TSubclassOf<class ASHItem>>           CommonItemClasses;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLootListInfo>                 CommonLootLists;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLootListInfo>                 PerkCommonLootLists;                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuestUniqueRewardItemInfo>    UniqueRewards;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyReward;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            RewardExperienceTable;                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            ReputationRewardNpc;                               // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ReputationRewardExperienceTable;                   // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            NeutralsReputationRewardExperienceTable;           // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct SH.QuestView
struct FQuestView
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestGiver                       QuestGiver;                                        // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestCategory                    QuestCategory;                                     // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTaskView>                     TaskViews;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsComplete;                                        // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestRewardSpawnInfo                 Reward;                                            // 0x60(0x68)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.SHUniqueNetId
struct FSHUniqueNetId
{
public:
	uint8                                        Pad_28BD[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SH.OnlineSubsystemFriendInfo
struct FOnlineSubsystemFriendInfo
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RealName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSHUniqueNetId                        UniqueNetId;                                       // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SH.SHChatMessage
struct FSHChatMessage
{
public:
	enum class EChatMessageType                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Username;                                          // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Timestamp;                                         // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.TileInfo
struct FTileInfo
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Type;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Visited;                                           // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AI;                                                // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C6[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SH.AchievementsSaveInfo
struct FAchievementsSaveInfo
{
public:
	bool                                         bAnomalyStaticFieldDamageComplete;                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnomalyKickerDamageComplete;                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnomalyInfernoDamageComplete;                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnomalyBlackHoleComplete;                         // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AnomalyArtefactCaught;                             // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AiMadmansKilled;                                   // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AiButchersKilled;                                  // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AiBlindMansKilled;                                 // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                FoodAchievementIds;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                DrinkAchievementIds;                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneySpent;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EAchievement>              CompleteAchievements;                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.DazeDescription
struct FDazeDescription
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.AIAction
struct FAIAction
{
public:
	class UAnimMontage*                          ActionMontage;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActionDistance;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.AIActionSet
struct FAIActionSet
{
public:
	TArray<struct FAIAction>                     ActionList;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SH.AgentGroup
struct FAgentGroup
{
public:
	TMap<class ASHAICharacter*, float>           AgentScores;                                       // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.CombatAgentEntry
struct FCombatAgentEntry
{
public:
	class ASHAICharacter*                        Agent;                                             // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SH.DeathInfo
struct FDeathInfo
{
public:
	struct FDateTime                             DeathTimeStamp;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.CachedAiCharacterDescription
struct FCachedAiCharacterDescription
{
public:
	TSubclassOf<class ASHAICharacter>            AICharacterClass;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SH.AIDirectorSaveInfo
struct FAIDirectorSaveInfo
{
public:
	int32                                        RespawnReadyTime;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DirectorActive;                                    // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CharacterSpawned;                                  // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedAiCharacterDescription> CachedAi;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    SpawnTransform;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentWaypointIndex;                              // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaved;                                            // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct SH.ArtifactDebuffProperties
struct FArtifactDebuffProperties
{
public:
	enum class EPlayerStatModificator            PlayerStatMod;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerkValue;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SH.IKFootInfo
struct FIKFootInfo
{
public:
	class FName                                  EffectorBoneName;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IKTraceBoneName;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootRelativeZ;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootOffset;                                        // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootAnimationOffset;                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceResultDistance;                               // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              EffectorRotation;                                  // 0x20(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               EffectorLocation;                                  // 0x2C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x38(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasHit;                                           // 0x44(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct SH.HitInformation
struct FHitInformation
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0x88)(Edit, BlueprintVisible, Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0x88(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamageCauser;                                      // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SH.HitReactionInfo
struct FHitReactionInfo
{
public:
	enum class EDirection                        ForwardDirection;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDirection                        RightDirection;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttackActionType                 AttackType;                                        // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeleeWeaponType                  WeaponType;                                        // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.CharacterReactionVariant
struct FCharacterReactionVariant
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundCue*                             AudioComponent;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.CharacterReactionProperties
struct FCharacterReactionProperties
{
public:
	enum class ECharacterReactionType            Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterReactionVariant>     Variants;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SH.ChestArmorMeshesList
struct FChestArmorMeshesList
{
public:
	class USkeletalMesh*                         TP_HandsMesh;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_HandsMesh;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_JacketMesh;                                     // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_JacketMesh;                                     // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_PantsMesh;                                      // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_PantsMesh;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_DecorMesh;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_DecorMesh;                                      // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_StuffMesh1;                                     // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_StuffMesh1;                                     // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_StuffMesh2;                                     // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_StuffMesh2;                                     // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_StuffMesh3;                                     // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_StuffMesh3;                                     // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_StuffMesh4;                                     // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_StuffMesh4;                                     // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_StuffMesh5;                                     // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_StuffMesh5;                                     // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_StuffMesh6;                                     // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_StuffMesh6;                                     // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TP_StuffMesh7;                                     // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FP_StuffMesh7;                                     // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct SH.CombatType
struct FCombatType
{
public:
	enum class EAttackActionType                 AttackActionType;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeleeWeaponType                  MeleeWeaponType;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SH.CombatActionAnimSet
struct FCombatActionAnimSet
{
public:
	class UAnimMontage*                          CombatActionFP;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          CombatActionTP;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          CrouchCombatActionFP;                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          CrouchCombatActionTP;                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          InterruptCombatActionFP;                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          InterruptCombatActionTP;                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECombatActionDirection            CombatActionDirection;                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.AttackActionInfo
struct FAttackActionInfo
{
public:
	struct FCombatType                           CombatType;                                        // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCombatActionAnimSet>          Animations;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct SH.ComboEntry
struct FComboEntry
{
public:
	enum class ECombatActionType                 CombatActionType;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeleeWeaponCategory              MeleeWeaponCategory;                               // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.Combo
struct FCombo
{
public:
	struct FComboEntry                           FirstComboMove;                                    // 0x0(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComboEntry                           SecondComboMove;                                   // 0x2(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComboEntry                           ThirdComboMove;                                    // 0x4(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ThirdComboMoveAnimFP;                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ThirdComboMoveAnimTP;                              // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SH.CraftRecipeComponent
struct FCraftRecipeComponent : public FTableRowBase
{
public:
	TSubclassOf<class ASHItem>                   ItemClass;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct SH.CraftRecipeData
struct FCraftRecipeData : public FTableRowBase
{
public:
	int32                                        ID;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRecipeCategoryType          CraftRecipeCategory;                               // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRequiredEquipment           RequiredZone;                                      // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHCraftingTool>           RequiredCraftingTool;                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        DetailsPrice;                                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCraftRecipeComponent>         RecipeComponentsClasses;                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHItem>                   ResultItemClass;                                   // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponModifierType               ModType;                                           // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ASHWeapon_Melee>>   AllowedModBase;                                    // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SH.RecipeLearnKey
struct FRecipeLearnKey : public FTableRowBase
{
public:
	int32                                        RecipeID;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SH.CraftTableSaveInfo
struct FCraftTableSaveInfo
{
public:
	enum class ECraftTableState                  CraftTableState;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.CustomizationItem
struct FCustomizationItem
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     MaterialInstance;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.MorphProperty
struct FMorphProperty
{
public:
	class FName                                  MorphTargetName;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.MorphCategory
struct FMorphCategory
{
public:
	enum class EMorphCategoryType                CategoryType;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMorphProperty>                Properties;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.MorphCategoryList
struct FMorphCategoryList
{
public:
	TArray<struct FMorphCategory>                Categories;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct SH.CustomizationSave
struct FCustomizationSave
{
public:
	int32                                        FaceIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairIndex;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MustacheIndex;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyesIndex;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyeColorIndex;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairColorIndex;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Age;                                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SH.DebuffProperties
struct FDebuffProperties
{
public:
	enum class EPlayerStatModificator            PlayerStatMod;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.EffectsManagerSave
struct FEffectsManagerSave
{
public:
	class FString                                EffectName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SH.LocationInvasionDescription
struct FLocationInvasionDescription
{
public:
	int32                                        LocationId;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DaysLeft;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SH.GameDifficultySettings
struct FGameDifficultySettings
{
public:
	enum class EGameDifficultyType               GameDifficultyType;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GameDifficulty;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AiDamageModifier;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyDamageModifier;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EventsDamageModifier;                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StatusEffectsDamageModifier;                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseRequirementsSpendingModifier;                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingStressModifier;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AggressiveWorldEventsChanceModifier;               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DayLength;                                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPveMode;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowMapPosition;                                  // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeathMoneyDropRate;                                // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFullDropEnabled;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        QuestRewardExperienceModifier;                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowJoinNotifications;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLeaveNotifications;                           // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAim;                                          // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHud;                                          // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HunterSpawnChance;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAiInfo;                                       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelfHealingType                  SelfHealingType;                                   // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeaponDurabilityTakeHitCost;                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorDurabilityTakeHitCost;                        // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AiHealthModifier;                                  // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SH.MasterServerRecordInfo
struct FMasterServerRecordInfo
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Ip;                                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Type;                                              // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mode;                                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PasswordRequired;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActivePlayers;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumPlayers;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.ServerID
struct FServerID
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Hash;                                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.DecalData
struct FDecalData
{
public:
	class UMaterial*                             DecalMaterial;                                     // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalSize;                                         // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSpan;                                          // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SH.ItemLifetimeData
struct FItemLifetimeData
{
public:
	int32                                        Durability;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurabilityMax;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RepairAvailableMax;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Energy;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmmoInClip;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocked;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UnlockPassword;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LastUseTime;                                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArtifactWeight;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArtifactPreset;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ArtifactSpecificsPerkUsed;                         // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SH.ItemPlaceholderSave
struct FItemPlaceholderSave
{
public:
	class UClass*                                ClassName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLifetimeData                     LifetimeData;                                      // 0x10(0x38)(Edit, BlueprintVisible, EditConst, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RequiredForQuest;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEquipmentSlot                    EquippedInSlot;                                    // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SH.ItemPlaceholderProperties
struct FItemPlaceholderProperties
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxStack;                                          // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsConsumable;                                      // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUsable;                                          // 0x3E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanGenerateQuest;                                  // 0x3F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDisassemblable;                                  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OnUseCooldown;                                     // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.DropComponentsInfo
struct FDropComponentsInfo
{
public:
	int32                                        MinAmount;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAmount;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHItem>                   ComponentClass;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SH.ContainerDescription
struct FContainerDescription : public FTableRowBase
{
public:
	class FName                                  ObjectName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentLocationName;                                // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.GeneratedLoot
struct FGeneratedLoot
{
public:
	class FString                                PlayerUniqueID;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHInventory*                          Loot;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RespawnTime;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SH.NoteLearnKey
struct FNoteLearnKey : public FTableRowBase
{
public:
	int32                                        CategoryID;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NoteId;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SH.LearnedNotes
struct FLearnedNotes : public FTableRowBase
{
public:
	TArray<struct FNoteLearnKey>                 LearnedNotesData;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct SH.NoteInfoData
struct FNoteInfoData : public FTableRowBase
{
public:
	int32                                        ID;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Annotation;                                        // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ExperienceRewardData;                              // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  NotifyText;                                        // 0x68(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            MonstrumClass;                                     // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MonstrumRewardData;                                // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct SH.NoteCategoryData
struct FNoteCategoryData : public FTableRowBase
{
public:
	int32                                        ID;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENoteCategoryType                 Type;                                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataTable*                            NotesTable;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct SH.LocationDescription
struct FLocationDescription : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FString                                NameKey;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectName;                                        // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationDifficulty;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AIDifficulty;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FContainerDescription>         Containers;                                        // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActorLocation;                                     // 0x50(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct SH.ActorsExportData
struct FActorsExportData : public FTableRowBase
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActorName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActorLocation;                                     // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.SHSubtitleCue
struct FSHSubtitleCue
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2900[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.LocalFightEventSquad
struct FLocalFightEventSquad
{
public:
	TArray<TSubclassOf<class ASHAICharacter>>    SquadClasses;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSizeMin;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSizeMax;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.SingleItemInfo
struct FSingleItemInfo
{
public:
	TSubclassOf<class ASHItem>                   ItemClass;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2901[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF (0xF - 0x0)
// ScriptStruct SH.PlayerBlockControlType
struct FPlayerBlockControlType
{
public:
	bool                                         bBlockMove;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockCrouch;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockCamera;                                      // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCameraIsAnimationDriven;                          // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockJump;                                        // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockSprint;                                      // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockPickup;                                      // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockCharacterUI;                                 // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockAttack;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockBlocking;                                    // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockTargeting;                                   // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockReload;                                      // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockUseItems;                                    // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockChangeWeapon;                                // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurnOffAutonomousTickPoseToPlayer;                // 0xE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SH.MapPlayerPoint
struct FMapPlayerPoint
{
public:
	class ASHPlayerState*                        PlayerState;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MapMarkLocation;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldMarkLocation;                                 // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMarkSet;                                          // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2903[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WorldPlayerLocation;                               // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MapPlayerDirectionAngle;                           // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct SH.MapDeathContainerInfo
struct FMapDeathContainerInfo : public FMapPlayerPoint
{
public:
	class FName                                  ContainerName;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeathTime;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContainerLifeTime;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.PlayerDeathStateTimer
struct FPlayerDeathStateTimer
{
public:
	class ASHPlayerState*                        PlayerState;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeathTimer;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2904[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct SH.MapObjectInfo
struct FMapObjectInfo : public FTableRowBase
{
public:
	class FName                                  ObjectName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EInterestZoneType                 ZoneType;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2907[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AreaRadius;                                        // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2908[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct SH.MonstrumInfoDataTable
struct FMonstrumInfoDataTable : public FTableRowBase
{
public:
	int32                                        ID;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMonstrumCategoryType             MonstrumCategory;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2909[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LearnedName;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    Class;                                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LearnedImage;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            MonsterAvatar;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Opinion;                                           // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataTable*                            MonstrumLevelUpData;                               // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MonstrumPerksData;                                 // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SH.MonstrumPerksDataTable
struct FMonstrumPerksDataTable : public FTableRowBase
{
public:
	int32                                        RequiredLevel;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMonstrumPerkType                 MonstrumPerkType;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Modifier;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct SH.MonstrumInfo
struct FMonstrumInfo
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMonstrumInfoDataTable                DataTableInfo;                                     // 0x8(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsLearned;                                         // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LevelingAvailable;                                 // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextLevel;                                         // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Experience;                                        // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExperienceToLevel;                                 // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMonstrumPerksDataTable>       MonstrumPerks;                                     // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SH.MonstrumLevelUpData
struct FMonstrumLevelUpData : public FTableRowBase
{
public:
	int32                                        ExperienceToLevel;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2910[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct SH.MonstrumOpinionsDataTable
struct FMonstrumOpinionsDataTable : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2911[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.MonstrumSave
struct FMonstrumSave
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLearned;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2912[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Experience;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.MonstrumSaveInfo
struct FMonstrumSaveInfo
{
public:
	TArray<struct FMonstrumSave>                 Save;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMonstrumAvailable;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2914[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct SH.NotifyManagerState
struct FNotifyManagerState
{
public:
	uint8                                        Pad_2915[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Quest;                                             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2916[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Craft;                                             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Monstrum;                                          // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SH.PerksSaveData
struct FPerksSaveData
{
public:
	TArray<enum class EPerkType>                 LearnedPerks;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPerkType>                 RolledSkills;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPerkType>                 RolledAbilities;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPerkType>                 RolledKnowledge;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RespeckPointsAmount;                               // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2917[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct SH.PerkData
struct FPerkData : public FTableRowBase
{
public:
	enum class EPerkType                         PerkType;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPerkCategory                     PerkCategory;                                      // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2918[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  AppliedDescription;                                // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PerkImage;                                         // 0x58(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EPerkType                         RequiredPerk;                                      // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredLevel;                                     // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecommendationPriority;                            // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.PersonalRoomRelicInfo
struct FPersonalRoomRelicInfo
{
public:
	class AActor*                                RelicActor;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelicId;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.PersonalRoomPosterInfo
struct FPersonalRoomPosterInfo
{
public:
	class AActor*                                PosterActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PosterId;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.PersonalRoomTrophyInfo
struct FPersonalRoomTrophyInfo
{
public:
	class AActor*                                TrophyActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TrophyId;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2920[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SH.PersonalRoomSaveInfo
struct FPersonalRoomSaveInfo
{
public:
	bool                                         bFirstRoomInvestigated;                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSecondRoomInvestigated;                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2921[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Trophies;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Posters;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InnerStyleId;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OuterStyleId;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SofaId;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CarpetId;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Relics;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PersonalTokens;                                    // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSecondRoomInvestigatedFixed;                      // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2922[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SH.StartingRoomSaveInfo
struct FStartingRoomSaveInfo
{
public:
	int32                                        Deaths;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct SH.PersonalRoomInfo
struct FPersonalRoomInfo
{
public:
	class ASHPlayerController*                   PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPersonalRoom*                       FirstRoom;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPersonalRoom*                       SecondRoom;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHStartingRoom*                       StartingRoom;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersonalRoomSaveInfo                 PersonalRoomSaveInfo;                              // 0x20(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FStartingRoomSaveInfo                 StartingRoomSaveInfo;                              // 0x80(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2923[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.FootstepsNoiseProperties
struct FFootstepsNoiseProperties
{
public:
	float                                        RunFootstepNoiseRadius;                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunFootstepNoiseVolume;                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkFootstepNoiseRadius;                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkFootstepNoiseVolume;                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchFootstepNoiseRadius;                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchFootstepNoiseVolume;                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct SH.TraumaSaveInfo
struct FTraumaSaveInfo
{
public:
	enum class ETraumaComplication               HeadTraumaComplication;                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2925[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HeadLightTraumaHealTimeEnd;                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               TorsoTraumaComplication;                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2926[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TorsoLightTraumaHealTimeEnd;                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               ArmTraumaComplication;                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2927[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ArmLightTraumaHealTimeEnd;                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               LegTraumaComplication;                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2928[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LegLightTraumaHealTimeEnd;                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2929[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct SH.PlayerCharacterSaveData
struct FPlayerCharacterSaveData
{
public:
	TArray<class FString>                        ActiveEffects;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthValue;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Accuracy;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HungerValue;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Oxygen;                                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stamina;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stress;                                            // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirstyValue;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               HeadTraumaComplication;                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               TorsoTraumaComplication;                           // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               ArmTraumaComplication;                             // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               LegTraumaComplication;                             // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CharacterTransform;                                // 0x40(0x30)(Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FItemPlaceholderSave>          BackpackInventory;                                 // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaved;                                            // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEffectsManagerSave>           EffectsManagerSave;                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RealTimeSurvived;                                  // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraumaSaveInfo                       TraumaSaveInfo;                                    // 0x9C(0x24)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SH.SubtitlePhrase
struct FSubtitlePhrase
{
public:
	class FString                                ActorName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubtitleText;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActorPortraitIndex;                                // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.CombinedSubtitleLine
struct FCombinedSubtitleLine
{
public:
	TArray<struct FSubtitlePhrase>               SubtitlePhrases;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShowDelay;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.PlayDialogInfo
struct FPlayDialogInfo
{
public:
	class USoundWave*                            DialogWave;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCombinedSubtitleLine>         SubtitleLines;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalPlayTime;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SH.SHInviteInfo
struct FSHInviteInfo
{
public:
	struct FUniqueNetIdRepl                      Sender;                                            // 0x0(0x28)(Edit, BlueprintVisible, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      Target;                                            // 0x28(0x28)(Edit, BlueprintVisible, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InviteSendTime;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2930[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct SH.SkillsSaveData
struct FSkillsSaveData : public FTableRowBase
{
public:
	TArray<enum class ESkillType>                LearnedSkills;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusSkillPointsAmount;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2931[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct SH.ReputationSave
struct FReputationSave
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Experience;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct SH.PlayerProfileSaveData
struct FPlayerProfileSaveData
{
public:
	float                                        Level;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Money;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentExperience;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2932[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNoteLearnKey>                 NoteSaveData;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemPlaceholderSave>          SafezoneInventory;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaved;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2933[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GirlScreamerCurrentIteration;                      // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GirlScreamerTimeToRespawn;                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGirlReadyToSpawn;                                 // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2934[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRecipeLearnKey>               RecipeSaveData;                                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsSaveData                       SkillsSaveData;                                    // 0x50(0x20)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	TArray<class FString>                        AchievementSaveData;                               // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyFishingSaveData;                            // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2936[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMonstrumSaveInfo                     MonstrumSaveData;                                  // 0x88(0x18)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FPersonalRoomSaveInfo                 PersonalRoomSaveInfo;                              // 0xA0(0x60)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FStartingRoomSaveInfo                 StartingRoomSaveInfo;                              // 0x100(0x4)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2938[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          UniqueItemUsedClassNames;                          // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          QuestGraphsCompleteNames;                          // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReputationSave>               ReputationSaveData;                                // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEquipmentSlot                    CurrentWeaponSlot;                                 // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTutorialComplete;                                 // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTutorialTeleportationComplete;                    // 0x13A(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartingRoomComplete;                             // 0x13B(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActiveQuestTag;                                    // 0x13C(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2939[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemPlaceholderSave>          HatsInventory;                                     // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomizationSave                    CustomizatioSaveData;                              // 0x158(0x1C)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUVFlashlightUnlocked;                             // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEquipmentSlot                    CurrentInventorySlot;                              // 0x175(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFirstAppearanceComplete;                          // 0x176(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NeutralFractionLevel;                              // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NeutralFractionMaxLevel;                           // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NeutralFractionCurrentExperience;                  // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NeutralFractionUnlockedLevel;                      // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerksSaveData                        PerksSaveData;                                     // 0x188(0x48)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	bool                                         bMainStoryComplete;                                // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemPlaceholderSave>          SecretSponsorSafezoneInventory;                    // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecretSponsorSafezoneInventoryRollTime;            // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAchievementsSaveInfo                 AchievementSaveDataNew;                            // 0x1F0(0x40)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SH.RewardExperienceData
struct FRewardExperienceData : public FTableRowBase
{
public:
	float                                        RewardExperience;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SH.PlayerCharacterLevelUpData
struct FPlayerCharacterLevelUpData : public FTableRowBase
{
public:
	float                                        ExperienceToLevel;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SH.NeutralsLevelUpData
struct FNeutralsLevelUpData : public FTableRowBase
{
public:
	int32                                        ExperienceToLevel;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SH.PlayerStatsCalculation
struct FPlayerStatsCalculation
{
public:
	struct FVector                               LastCharacterDistanceLocation;                     // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDistanceTravelled;                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PawnDeaths;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersKilled;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmmoWasted;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalTimePlayed;                                   // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LongestSessionTimePlayed;                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentSessionTimePlayed;                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLifetimeTracking;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2942[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             PlayTimeStart;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             PlayTimeStop;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionPlayersKilled;                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionGameTimeSurvived;                           // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SessionLastTimeOfDay;                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSessionGameTimeSurvived;                       // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x54 (0x54 - 0x0)
// ScriptStruct SH.PlayerStatsSaveData
struct FPlayerStatsSaveData
{
public:
	float                                        DistanceTravelled;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimePlayed;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Deaths;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersKilled;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LongestSurvivalTime;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentSurvivalTime;                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmmoWasted;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExperiencePercent;                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionPlayersKilled;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionGameTimeSurvived;                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastDeathLocation;                                 // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLastDeathLocationSaved;                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2943[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastSessionGameTimeSurvived;                       // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BiologistCompletedDailyQuests;                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EngineerCompletedDailyQuests;                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeutralsCompletedDailyQuests;                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScientistCompletedDailyQuests;                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongestRealTimeSurvived;                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct SH.QuestRewardDescription
struct FQuestRewardDescription : public FTableRowBase
{
public:
	float                                        MinComplexity;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxComplexity;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLootListInfo>                 LootListDescriptions;                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSingleItemInfo>               SingleItemDescriptions;                            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyReward;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2944[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            RewardExperienceTable;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.QuestItemSpawnInfo
struct FQuestItemSpawnInfo
{
public:
	TSubclassOf<class ASHItem>                   ItemClass;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredForQuest;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.AIPresetPart
struct FAIPresetPart
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2946[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHAICharacter>            AIClass;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct SH.AIPreset
struct FAIPreset : public FTableRowBase
{
public:
	float                                        Complexity;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2948[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAIPresetPart>                 PresetsItems;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SH.SubtitleLine
struct FSubtitleLine
{
public:
	class FText                                  Subtitle;                                          // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ActorName;                                         // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ShowDelay;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2949[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.DescriptionPhrase
struct FDescriptionPhrase
{
public:
	uint8                                        Pad_294A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.LocationPhrase
struct FLocationPhrase : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.ItemPhrase
struct FItemPhrase : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.FindPhrase
struct FFindPhrase : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.KillTargetPhrase
struct FKillTargetPhrase : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.KillActionPhrase
struct FKillActionPhrase : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.YouNeedPhrase
struct FYouNeedPhrase : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.GetFoundedItemQuestName
struct FGetFoundedItemQuestName : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.CustomerQuestPhrase
struct FCustomerQuestPhrase : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.KillRandomMobQuestName
struct FKillRandomMobQuestName : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.GetItemFromMobQuestName
struct FGetItemFromMobQuestName : public FDescriptionPhrase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SH.GetRandomItemQuestName
struct FGetRandomItemQuestName : public FDescriptionPhrase
{
public:
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SH.StorylineView
struct FStorylineView
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            StoryNpc;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompleteGraphs;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalGraphs;                                       // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlreadyStarted;                                    // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USHQuestGraph*                         StartingGraph;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeStarted;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.QuestGraphDescription
struct FQuestGraphDescription
{
public:
	class USHQuestGraph*                         QuestGraph;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestGraphDifficulty             QuestDifficulty;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.QuestGraphRequirementInfo
struct FQuestGraphRequirementInfo
{
public:
	TSubclassOf<class USHQuestGraphRequirement>  RequirementType;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestGraphRequirement*              RequirementInstance;                               // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.QuestContextNode
struct FQuestContextNode
{
public:
	class FString                                ContextNodeName;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHQuestGraphNode>         ContextNodeClass;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestGraphNode*                     ContextNode;                                       // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct SH.QuestRewardSave
struct FQuestRewardSave
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuestRewardSpawnInfo                 Reward;                                            // 0x10(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  QuestGraphCompleteName;                            // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct SH.RadioKillMessageDataTable
struct FRadioKillMessageDataTable : public FTableRowBase
{
public:
	TSubclassOf<class ASHCharacter>              Killer;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHCharacter>              Target;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ChatSender;                                        // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ChatMessage;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SH.RadioKillMessageProperties
struct FRadioKillMessageProperties
{
public:
	TSubclassOf<class ASHCharacter>              Killer;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHCharacter>              Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ChatSender;                                        // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ChatMessage;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct SH.ReputationInfoDataTable
struct FReputationInfoDataTable : public FTableRowBase
{
public:
	int32                                        ID;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2950[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHAICharacter>            Class;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevel;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2952[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            LevelUpData;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            RewardData;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SH.ReputationInfo
struct FReputationInfo
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2955[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHAICharacter>            Class;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReputationInfoDataTable              DataTableInfo;                                     // 0x10(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         LevelingAvailable;                                 // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2956[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextLevel;                                         // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Experience;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExperienceToLevel;                                 // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SH.ReputationRewardData
struct FReputationRewardData : public FTableRowBase
{
public:
	TArray<struct FQuestUniqueRewardItemInfo>    UniqueRewards;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SH.ReputationLevelUpData
struct FReputationLevelUpData : public FTableRowBase
{
public:
	int32                                        ExperienceToLevel;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2957[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SH.SaveInfo
struct FSaveInfo
{
public:
	int32                                        SaveTime;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2958[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SaveTimeString;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SaveName;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESaveSlot                         SaveSlot;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2959[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MainQuestProgress;                                 // 0x30(0x18)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	float                                        SaveVersion;                                       // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct SH.SkillData
struct FSkillData : public FTableRowBase
{
public:
	enum class ESkillType                        SkillType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  AppliedDescription;                                // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SkillImage;                                        // 0x58(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESkillType                        RequiredSkill;                                     // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkillCategory                    SkillCategory;                                     // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHAICharacter>            ReputationNpcClass;                                // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReputationNpcLevel;                                // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredCategoryPoints;                            // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.ItemTradeRules
struct FItemTradeRules
{
public:
	TSubclassOf<class ASHLootList>               LootList;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SellModificator;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuyModificator;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct SH.TraumaProperties
struct FTraumaProperties
{
public:
	enum class ETraumaType                       TraumaType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaApplyType                  TraumaApplyType;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct SH.InstructionsInfoData
struct FInstructionsInfoData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Annotation;                                        // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            SmallImage;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            BigImage;                                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct SH.TakeHitInfo
struct FTakeHitInfo
{
public:
	float                                        ActualDamage;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2960[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DamageTypeClass;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                  PawnInstigator;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 DamageCauser;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageEventClassID;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bKilled : 1;                                       // Mask: 0x1, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_106 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2961[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        EnsureReplicationByte;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2962[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEvent                          GeneralDamageEvent;                                // 0x30(0x10)(NativeAccessSpecifierPrivate)
	struct FPointDamageEvent                     PointDamageEvent;                                  // 0x40(0xA8)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FRadialDamageEvent                    RadialDamageEvent;                                 // 0xE8(0x40)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SH.TooltipButtonInfo
struct FTooltipButtonInfo
{
public:
	enum class ETooltipButtonType                ButtonType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2963[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Caption;                                           // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	bool                                         bIsRightTooltip;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2964[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ButtonIndex;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2965[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.WeaponAnimMontageInfo
struct FWeaponAnimMontageInfo
{
public:
	class UAnimMontage*                          FirstPerson;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ThirdPerson;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Weapon;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SH.WeaponDetailedAnimMontageInfo
struct FWeaponDetailedAnimMontageInfo
{
public:
	struct FWeaponAnimMontageInfo                NoWeaponMontageInfo;                               // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                MeleeWeaponMontageInfo;                            // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                RangedWeaponMontageInfo;                           // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                PistolWeaponMontageInfo;                           // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.WeaponModifierInstanceData
struct FWeaponModifierInstanceData
{
public:
	enum class EWeaponModifierType               ModifierType;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2966[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHWeapon>                 ModifiedWeaponClass;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SH.MeleeWeaponData
struct FMeleeWeaponData
{
public:
	float                                        BaseDamageMultiplier;                              // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitStaminaCost;                                    // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeaponAnimMontageInfo>        AttackAnimations;                                  // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LeftRightMoveAnimationsEnabled;                    // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2967[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnimMontageInfo                LeftMoveAnimation;                                 // 0x20(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                RightMoveAnimation;                                // 0x38(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x68 - 0x50)
// ScriptStruct SH.HeavyMeleeWeaponData
struct FHeavyMeleeWeaponData : public FMeleeWeaponData
{
public:
	struct FWeaponAnimMontageInfo                StartAttackAnimation;                              // 0x50(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct SH.MeleeAttackInfo
struct FMeleeAttackInfo
{
public:
	enum class EMeleeAnimationType               Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Idx;                                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLeftRightMoveAttack;                           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeftToRightAttack;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         EnsureReplicationByte;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SH.BlockHitData
struct FBlockHitData
{
public:
	float                                        ConeAngle;                                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockDurabilityMultiplier;                         // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockStaminaCost;                                  // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeavyBlockStaminaCost;                             // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                BlockAnimation;                                    // 0x10(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BlockStartDelay;                                   // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2968[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SH.MeleeTraceHitInfo
struct FMeleeTraceHitInfo
{
public:
	enum class EMeleeSwingType                   SwingType;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2969[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   TraceStart;                                        // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   TraceEnd;                                          // 0x10(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   Direction;                                         // 0x1C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.MeleeModificationInfo
struct FMeleeModificationInfo
{
public:
	enum class EMeleeModificationType            ModificationType;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chance;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDuration;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageTick;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USHDamageType>             DamageType;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SH.AimFPPoseAnimationData
struct FAimFPPoseAnimationData
{
public:
	class UAnimSequence*                         FullPoseDefault;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         FullPoseCrouch;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AdditivePoseDefault;                               // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AdditivePoseCrouch;                                // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SH.WeaponRangedData
struct FWeaponRangedData
{
public:
	TSubclassOf<class ASHWeapon_Ammo>            AmmoClass;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmmoPerClip;                                       // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinSpawnAmmo;                                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSpawnAmmo;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Calibre;                                           // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoAnimTimeBetweenShots;                            // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoAnimReloadDuration;                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShootNoise;                                        // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShootNoiseRadius;                                  // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SH.InstantWeaponData
struct FInstantWeaponData
{
public:
	float                                        HitDamage;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FractionCount;                                     // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FractionGrouping;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponRange;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadTargetingMod;                                // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SH.InstantHitInfo
struct FInstantHitInfo
{
public:
	struct FVector                               Origin;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       FractionDirections;                                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                    Impacts;                                           // 0x20(0x10)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct SH.WeatherProperties
struct FWeatherProperties
{
public:
	float                                        Chance;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDuration;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDuration;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SH.WorldEventChatMessageProperties
struct FWorldEventChatMessageProperties
{
public:
	class FText                                  ChatMessageUsername;                               // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ChatMessage;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SH.WorldEventProperties
struct FWorldEventProperties
{
public:
	enum class ESHWorldEventType                 WorldEventType;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2970[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDuration;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDuration;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2971[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ASHEffect>>         Effects;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorldEventChatMessageProperties> StartChatMessages;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartChatDelay;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2972[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWorldEventChatMessageProperties> FinishChatMessages;                                // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OverrideWeather;                                   // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeatherType                      NewWeatherType;                                    // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2973[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SkyColor;                                          // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFootstepsNoiseProperties             EventFootstepsNoiseProperties;                     // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BonusAiDamageMultiplier;                           // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIHearingType                    AIHearingType;                                     // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAISightType                      AISightType;                                       // 0x8D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2975[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct SH.WorldSaveData
struct FWorldSaveData
{
public:
	float                                        TimeOfDay;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2976[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldEventProperties                 CurrentWorldEvent;                                 // 0x8(0x90)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	bool                                         bWorldEventSaved;                                  // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaved;                                            // 0x99(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2978[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ServerTimeStamp;                                   // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFirstAppearanceComplete;                          // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2979[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLocationInvasionDescription>  FractionsInvadedLocations;                         // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                FractionsLiberatedLocations;                       // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SH.BufferArchiveWraper
struct FBufferArchiveWraper
{
public:
	TArray<uint8>                                Archive;                                           // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


