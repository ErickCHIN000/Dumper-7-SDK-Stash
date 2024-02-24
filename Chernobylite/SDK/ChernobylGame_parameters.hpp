#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BaseBuff.IsHidden
struct UBaseBuff_IsHidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.BaseBuff.GetReadableName
struct UBaseBuff_GetReadableName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChernobylGame.AreaSlotVolume.OnOverlapStart
struct AAreaSlotVolume_OnOverlapStart_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.ArmorComponent.TakeDamage
struct UArmorComponent_TakeDamage_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               InDamageClass;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.ArmorComponent.ReplenishArmor
struct UArmorComponent_ReplenishArmor_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function ChernobylGame.ArmorComponent.K2_GetArmorInfo
struct UArmorComponent_K2_GetArmorInfo_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutIsValid;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FArmorInfo                            ReturnValue;                                       // 0x10(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.ArmorComponent.IsArmorEquipped
struct UArmorComponent_IsArmorEquipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.ArmorComponent.GetMaxArmorValue
struct UArmorComponent_GetMaxArmorValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.ArmorComponent.GetInsertInfo
struct UArmorComponent_GetInsertInfo_Params
{
public:
	struct FArmorInsertInfo                      ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.ArmorComponent.GetEquippedArmorName
struct UArmorComponent_GetEquippedArmorName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.ArmorComponent.GetEquippedArmorInfoName
struct UArmorComponent_GetEquippedArmorInfoName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ChernobylGame.ArmorComponent.GetEquippedArmorInfo
struct UArmorComponent_GetEquippedArmorInfo_Params
{
public:
	struct FArmorInfo                            ReturnValue;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.ArmorComponent.GetCurrentArmorValue
struct UArmorComponent_GetCurrentArmorValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.ArmorComponent.GetArmorStat
struct UArmorComponent_GetArmorStat_Params
{
public:
	enum class EArmorStatType                    StatType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.ArmorComponent.EquipDifferentArmor
struct UArmorComponent_EquipDifferentArmor_Params
{
public:
	class FName                                  ArmorInfoName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ArmorComponent.CanProtectFromDamageType
struct UArmorComponent_CanProtectFromDamageType_Params
{
public:
	TSubclassOf<class UDamageType>               InDamageClass;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.ArmorComponent.ArmorStatToAlertModifier
struct UArmorComponent_ArmorStatToAlertModifier_Params
{
public:
	int32                                        InArmorStat;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Backend.Update2
struct ABackend_Update2_Params
{
public:
	TArray<struct FEventResult>                  Results;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Backend.Update
struct ABackend_Update_Params
{
public:
	TArray<struct FEventResult>                  Results;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Backend.UnsetCompanionFromCurrentActiveEvent
struct ABackend_UnsetCompanionFromCurrentActiveEvent_Params
{
public:
	class FName                                  Companion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.Backend.SetCompanionForActiveEvent
struct ABackend_SetCompanionForActiveEvent_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Companion;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Backend.RemoveFromPotential
struct ABackend_RemoveFromPotential_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Backend.PutToPotential
struct ABackend_PutToPotential_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.Backend.IsMapEnabled
struct ABackend_IsMapEnabled_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Backend.IsMainQuest
struct ABackend_IsMainQuest_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.Backend.GetPossibleMissions
struct ABackend_GetPossibleMissions_Params
{
public:
	enum class EEventMap                         FromMap;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.Backend.GetPossibleCompanions
struct ABackend_GetPossibleCompanions_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1F8 (0x1F8 - 0x0)
// Function ChernobylGame.Backend.GetOuterEventStructure
struct ABackend_GetOuterEventStructure_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOuterEvent                           ReturnValue;                                       // 0x8(0x1F0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Backend.GetEventCount
struct ABackend_GetEventCount_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.Backend.GetCurrentDay
struct ABackend_GetCurrentDay_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Backend.GetCompanion4Mission
struct ABackend_GetCompanion4Mission_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.Backend.GetChance4Mission
struct ABackend_GetChance4Mission_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Companion;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Backend.GetActiveEvents
struct ABackend_GetActiveEvents_Params
{
public:
	TArray<struct FInnerEvent>                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Backend.ForceDeactiveEvent
struct ABackend_ForceDeactiveEvent_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Backend.ForceActiveEvent
struct ABackend_ForceActiveEvent_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.Backend.EnableMap
struct ABackend_EnableMap_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Backend.AdditionalDays
struct ABackend_AdditionalDays_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Days;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.SpawnPickableScrappedResource
struct ABaseBuildSystemEntity_SpawnPickableScrappedResource_Params
{
public:
	class FName                                  ResourceName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.SetToBeUsedByCompanion
struct ABaseBuildSystemEntity_SetToBeUsedByCompanion_Params
{
public:
	class ACGNPC*                                CompanionRef;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.SetStorID
struct ABaseBuildSystemEntity_SetStorID_Params
{
public:
	int32                                        NewID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCols;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.SetBuildID
struct ABaseBuildSystemEntity_SetBuildID_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.OnGlobalSkinChangedCPP
struct ABaseBuildSystemEntity_OnGlobalSkinChangedCPP_Params
{
public:
	enum class EGlobalSkinType                   SkinType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewSkinName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.OnGlobalSkinChanged
struct ABaseBuildSystemEntity_OnGlobalSkinChanged_Params
{
public:
	enum class EGlobalSkinType                   SkinType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_341[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewSkinName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.MultiSweapForCollision
struct ABaseBuildSystemEntity_MultiSweapForCollision_Params
{
public:
	struct FVector                               LocationOffset;                                    // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.IsCurrentlyUsedByCompanion
struct ABaseBuildSystemEntity_IsCurrentlyUsedByCompanion_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.GetStorageID
struct ABaseBuildSystemEntity_GetStorageID_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cols;                                              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.GetRangeDecalInfo
struct ABaseBuildSystemEntity_GetRangeDecalInfo_Params
{
public:
	enum class EBuildSystemDecalType             DecalType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_379[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuildSystemRangeDecalInfo            ReturnValue;                                       // 0x10(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.GetBuildID
struct ABaseBuildSystemEntity_GetBuildID_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.GetAdditionalComponentsToHighlight
struct ABaseBuildSystemEntity_GetAdditionalComponentsToHighlight_Params
{
public:
	TArray<class UPrimitiveComponent*>           ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BaseBuildSystemEntity.EnableOutline
struct ABaseBuildSystemEntity_EnableOutline_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.BuffManager.RemoveBuff
struct UBuffManager_RemoveBuff_Params
{
public:
	TSubclassOf<class UBaseBuff>                 Buff;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.BuffManager.HaveBuff
struct UBuffManager_HaveBuff_Params
{
public:
	TSubclassOf<class UBaseBuff>                 Buff;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.BuffManager.AddBuff
struct UBuffManager_AddBuff_Params
{
public:
	TSubclassOf<class UBaseBuff>                 Buff;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_417[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.BufforedQuickTimeEventNode.StickRotationVertical
struct UBufforedQuickTimeEventNode_StickRotationVertical_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.BufforedQuickTimeEventNode.StickRotationHorizontal
struct UBufforedQuickTimeEventNode_StickRotationHorizontal_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F0 - 0x0)
// Function ChernobylGame.BufforedQuickTimeEventNode.PlayBufforedQuickTimeEvent
struct UBufforedQuickTimeEventNode_PlayBufforedQuickTimeEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuickTimeEventData                   QuickTimeEvent;                                    // 0x8(0x1C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x1D0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinInputForBufferOpening;                          // 0x1D8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BufferEmptyingSpeed;                               // 0x1DC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxBufferSize;                                     // 0x1E0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_474[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBufforedQuickTimeEventNode*           ReturnValue;                                       // 0x1E8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.BufforedQuickTimeEventNode.AxisPressed
struct UBufforedQuickTimeEventNode_AxisPressed_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.BufforedQuickTimeEventNode.AxisHeld
struct UBufforedQuickTimeEventNode_AxisHeld_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.BuildEntityCompanionSpotComponent.GetCompanionSpawnLocation
struct UBuildEntityCompanionSpotComponent_GetCompanionSpawnLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildEntityCompanionSpotComponent.CanPlaceCompanion
struct UBuildEntityCompanionSpotComponent_CanPlaceCompanion_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.BuildMarker.Turn
struct UBuildMarker_Turn_Params
{
public:
	struct FRotator                              Dir;                                               // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.SpawnEntity
struct UBuildMarker_SpawnEntity_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BuildMarker.SetMesh
struct UBuildMarker_SetMesh_Params
{
public:
	class UStaticMesh*                           NewMesh;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.BuildMarker.SetIsOnLevelMode
struct UBuildMarker_SetIsOnLevelMode_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51D[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.BuildMarker.SetBuildID
struct UBuildMarker_SetBuildID_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseBuildSystemEntity*                StartingRotationActor;                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.IsInEditMode
struct UBuildMarker_IsInEditMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.IsEmpty
struct UBuildMarker_IsEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.IsBuildEntityInControlledArea
struct UBuildMarker_IsBuildEntityInControlledArea_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.BuildMarker.GetTransform
struct UBuildMarker_GetTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BuildMarker.GetLastBuildSystemVolume
struct UBuildMarker_GetLastBuildSystemVolume_Params
{
public:
	class ABuildSystemVolume*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.GetIsBuildableAvailable
struct UBuildMarker_GetIsBuildableAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.GetHasEnoughResourcesCached
struct UBuildMarker_GetHasEnoughResourcesCached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BuildMarker.GetCurrentBuildID
struct UBuildMarker_GetCurrentBuildID_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.GetCanPlaceQuantityCheckCached
struct UBuildMarker_GetCanPlaceQuantityCheckCached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.BuildMarker.GetBuildEntityInFront
struct UBuildMarker_GetBuildEntityInFront_Params
{
public:
	class ABaseBuildSystemEntity*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.BuildMarker.CanBePlaced
struct UBuildMarker_CanBePlaced_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.BuildSystemInterface.InputRotationMode
struct IBuildSystemInterface_InputRotationMode_Params
{
public:
	float                                        InAxis;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.BuildSystemVolume.ChangeWorkplaceQuality
struct ABuildSystemVolume_ChangeWorkplaceQuality_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.StateTick
struct ACGMovementState_StateTick_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.SetRightLeftOnceLast
struct ACGMovementState_SetRightLeftOnceLast_Params
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGMovementState.RecoverKeyCombination
struct ACGMovementState_RecoverKeyCombination_Params
{
public:
	TArray<class FString>                        InCombination;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGMovementState.OnKeyCombination
struct ACGMovementState_OnKeyCombination_Params
{
public:
	TArray<class FString>                        InCombination;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGMovementState.OnClimbRequest
struct ACGMovementState_OnClimbRequest_Params
{
public:
	struct FCGClimbQuery                         InClimbQuery;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.Global_Movement_UpDown
struct ACGMovementState_Global_Movement_UpDown_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.Global_Movement_RightLeft
struct ACGMovementState_Global_Movement_RightLeft_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.Global_Movement_Look_UpDown
struct ACGMovementState_Global_Movement_Look_UpDown_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.Global_Movement_Look_RightLeft
struct ACGMovementState_Global_Movement_Look_RightLeft_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.Global_Movement_Lean
struct ACGMovementState_Global_Movement_Lean_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.GetRightLeftOnceLast
struct ACGMovementState_GetRightLeftOnceLast_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.GetLeanAxis
struct ACGMovementState_GetLeanAxis_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMovementState.GetEnemyChatterEnabled
struct ACGMovementState_GetEnemyChatterEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMovementState.GetClimbEnabled
struct ACGMovementState_GetClimbEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CGMovementState.GetAdditionalInfo
struct ACGMovementState_GetAdditionalInfo_Params
{
public:
	struct FCGMovementStateAdditionalInfo        ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.Console_Movement_Rotate_Right
struct ACGMovementState_Console_Movement_Rotate_Right_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGMovementState.Console_Movement_Rotate_Left
struct ACGMovementState_Console_Movement_Rotate_Left_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGMovementState.AddKeyCombination
struct ACGMovementState_AddKeyCombination_Params
{
public:
	class FString                                InKeyString;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGActiveItem.UpdateUpgradeDisplay
struct ACGActiveItem_UpdateUpgradeDisplay_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeCrafted;                                     // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C08[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGActiveItem.UpdateUpgrade
struct ACGActiveItem_UpdateUpgrade_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C36[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.SetAlternativeActivationBlocked
struct ACGActiveItem_SetAlternativeActivationBlocked_Params
{
public:
	bool                                         InNewBlocked;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.SetActivationBlocked
struct ACGActiveItem_SetActivationBlocked_Params
{
public:
	bool                                         InNewBlocked;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.SafelySetIdleState
struct ACGActiveItem_SafelySetIdleState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.ResetUpgrades
struct ACGActiveItem_ResetUpgrades_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGActiveItem.OnMovementStateChanged
struct ACGActiveItem_OnMovementStateChanged_Params
{
public:
	TSubclassOf<class ACGMovementState>          InNewMovementState;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.OnHideShowAdditional
struct ACGActiveItem_OnHideShowAdditional_Params
{
public:
	enum class EState                            OutTargetState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.LoadPaniniMaterials
struct ACGActiveItem_LoadPaniniMaterials_Params
{
public:
	bool                                         InMasterLerp;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGActiveItem.GetUpgradeLocation
struct ACGActiveItem_GetUpgradeLocation_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGActiveItem.GetOtherHandIKTarget
struct ACGActiveItem_GetOtherHandIKTarget_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.GetItemDisabled
struct ACGActiveItem_GetItemDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.GetInterpretedItemState
struct ACGActiveItem_GetInterpretedItemState_Params
{
public:
	enum class EState                            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGActiveItem.GetHands
struct ACGActiveItem_GetHands_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGActiveItem.GetCanBeQueried
struct ACGActiveItem_GetCanBeQueried_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGActiveItem.ForceItemState
struct ACGActiveItem_ForceItemState_Params
{
public:
	class AActor*                                InContext;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EState                            InNewState;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E33[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGActiveItem.ActivationFinished
struct ACGActiveItem_ActivationFinished_Params
{
public:
	bool                                         bInGracefully;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInNoSwap;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGAggroComponent.OnSightUpdate
struct UCGAggroComponent_OnSightUpdate_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                           InStimulus;                                        // 0x8(0x3C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F12[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGAggroComponent.OnHearingUpdate
struct UCGAggroComponent_OnHearingUpdate_Params
{
public:
	class AActor*                                InInstigator;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseRange;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InNoiseLocation;                                   // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseStrength;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTag;                                             // 0x1C(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMaxDistanceToActivateCombat;                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function ChernobylGame.CGAggroComponent.OnDeath
struct UCGAggroComponent_OnDeath_Params
{
public:
	class AActor*                                InAActor;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAggroComponent.GetPotentialTargets
struct UCGAggroComponent_GetPotentialTargets_Params
{
public:
	TArray<class ACGCharacter*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAggroComponent.GetMemories
struct UCGAggroComponent_GetMemories_Params
{
public:
	TArray<struct FCGPerceptionMemory>           ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAggroComponent.GetBestTarget
struct UCGAggroComponent_GetBestTarget_Params
{
public:
	bool                                         bInPrioritizeHero;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCheckPath;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGCharacter*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAI.SetNewMoveToActor
struct UCGAI_SetNewMoveToActor_Params
{
public:
	class AAIController*                         InAIController;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InNewMoveToActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAI.GetMoveToTaskLocation
struct UCGAI_GetMoveToTaskLocation_Params
{
public:
	class AAIController*                         InAIController;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAI.GetCurrentlyActiveTask
struct UCGAI_GetCurrentlyActiveTask_Params
{
public:
	class AAIController*                         InAIController;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBTTaskNode*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCharacter.OverrideDamageClass
struct ACGCharacter_OverrideDamageClass_Params
{
public:
	TSubclassOf<class UCGDamageType>             InDamageClass;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGCharacter.GetVisibilityModifier
struct ACGCharacter_GetVisibilityModifier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCharacter.GetMemoryOfMeOwners
struct ACGCharacter_GetMemoryOfMeOwners_Params
{
public:
	TArray<class ACGAICharacter*>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCharacter.GetMappedDamageCollider
struct ACGCharacter_GetMappedDamageCollider_Params
{
public:
	enum class EDamageCollider                   InDamageCollider;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1224[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacter.GetDamageClassOverrideEnabled
struct ACGCharacter_GetDamageClassOverrideEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCharacter.GetDamageClassOverride
struct ACGCharacter_GetDamageClassOverride_Params
{
public:
	TSubclassOf<class UCGDamageType>             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCharacter.GetCGCharacterMovementComponent
struct ACGCharacter_GetCGCharacterMovementComponent_Params
{
public:
	class UCGCharacterMovementComponent*         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.UpdatePointOfInterest
struct ACGAICharacter_UpdatePointOfInterest_Params
{
public:
	struct FVector                               InNewPointOfInterest;                              // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGAICharacter.UpdateLocomotionProperties
struct ACGAICharacter_UpdateLocomotionProperties_Params
{
public:
	struct FCGAILocomotionProperties             InLocomotionProperties;                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.UpdateApproachIdleAnims
struct ACGAICharacter_UpdateApproachIdleAnims_Params
{
public:
	struct FCGApproachIdleSettings               InNewApproachIdle;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGAICharacter.TargetPerceptionUpdated
struct ACGAICharacter_TargetPerceptionUpdated_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                           InStimulus;                                        // 0x8(0x3C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.SpawnPickable
struct ACGAICharacter_SpawnPickable_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.SetUIDebug
struct ACGAICharacter_SetUIDebug_Params
{
public:
	bool                                         bInNewVisibility;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.SetStrafing
struct ACGAICharacter_SetStrafing_Params
{
public:
	class AActor*                                InStrafingTarget;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIsStrafing;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1446[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.SetRotateInPlace
struct ACGAICharacter_SetRotateInPlace_Params
{
public:
	bool                                         bInNewRotate;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              InTargetRotation;                                  // 0x4(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.SetReactionToHeroDelayed
struct ACGAICharacter_SetReactionToHeroDelayed_Params
{
public:
	enum class EReactionToVisibleHero            InNewReaction;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReactionToVisibleHero            InReactionAfterDelay;                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InDelayLength;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.SetReactionToHero
struct ACGAICharacter_SetReactionToHero_Params
{
public:
	enum class EReactionToVisibleHero            InNewReaction;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.SetNextPatrolActorWithNavNoRestart
struct ACGAICharacter_SetNextPatrolActorWithNavNoRestart_Params
{
public:
	class APatrolActor*                          InNextPatrolActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.SetNextPatrolActorWithNav
struct ACGAICharacter_SetNextPatrolActorWithNav_Params
{
public:
	class APatrolActor*                          InNextPatrolActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.SetNextPatrolActorNoRestart
struct ACGAICharacter_SetNextPatrolActorNoRestart_Params
{
public:
	class APatrolActor*                          InNextPatrolActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.SetNextPatrolActor
struct ACGAICharacter_SetNextPatrolActor_Params
{
public:
	class APatrolActor*                          InNextPatrolActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGAICharacter.SetNewAIState
struct ACGAICharacter_SetNewAIState_Params
{
public:
	TSubclassOf<class UCGAIState>                InNewAIState;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGAIStateAdditionalInfo              InAdditionalInfo;                                  // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.SetNavTargetNewLocationResetNextPatrol
struct ACGAICharacter_SetNavTargetNewLocationResetNextPatrol_Params
{
public:
	struct FVector                               InNewLocation;                                     // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.SetNavTargetNewLocation
struct ACGAICharacter_SetNavTargetNewLocation_Params
{
public:
	struct FVector                               InNewLocation;                                     // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGAICharacter.SetMotionfixTargetTransform
struct ACGAICharacter_SetMotionfixTargetTransform_Params
{
public:
	struct FTransform                            InTargetTransform;                                 // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.SetLandMovementMode
struct ACGAICharacter_SetLandMovementMode_Params
{
public:
	enum class ELandMovementMode                 InMovementMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGAICharacter.SetHeadTracingProperties
struct ACGAICharacter_SetHeadTracingProperties_Params
{
public:
	enum class EHeadTracingMode                  InNewTracingMode;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InNewTracedStationaryPoint;                        // 0x4(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InNewTracedActor;                                  // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                InNewTracedSkeletalMesh;                           // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InNewTracedSocketName;                             // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.SetDeathFunctionOverrideEnabled
struct ACGAICharacter_SetDeathFunctionOverrideEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.SetCurrentLandMovementMode
struct ACGAICharacter_SetCurrentLandMovementMode_Params
{
public:
	enum class ELandMovementMode                 InNewLandMovementMode;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.SetCover
struct ACGAICharacter_SetCover_Params
{
public:
	class ACGCover*                              InNewCover;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.SetCollisionModeForInterpolation
struct ACGAICharacter_SetCollisionModeForInterpolation_Params
{
public:
	enum class EInterpolationCollisionReaction   InNewReaction;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.SetApproachIdleEnabled
struct ACGAICharacter_SetApproachIdleEnabled_Params
{
public:
	bool                                         bInNewEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.ScheduleAIAction
struct ACGAICharacter_ScheduleAIAction_Params
{
public:
	struct FCGAIScheduledAction                  InScheduledAction;                                 // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.RefreshDynamicMaterialsOnAccessoriesDueToSkinChange
struct ACGAICharacter_RefreshDynamicMaterialsOnAccessoriesDueToSkinChange_Params
{
public:
	TArray<class UMaterialInstanceDynamic*>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.RefreshDynamicMaterialsDueToSkinChange
struct ACGAICharacter_RefreshDynamicMaterialsDueToSkinChange_Params
{
public:
	TArray<class UMaterialInstanceDynamic*>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.ReactionDelayFinished
struct ACGAICharacter_ReactionDelayFinished_Params
{
public:
	enum class EReactionToVisibleHero            InReactionAfterDelay;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.PopScheduledAIAction
struct ACGAICharacter_PopScheduledAIAction_Params
{
public:
	struct FCGAIScheduledAction                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGAICharacter.PlayCustomSequence
struct ACGAICharacter_PlayCustomSequence_Params
{
public:
	class UAnimSequence*                         InCustomSequence;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1809[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTargetTransform;                                 // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InBlendInTime;                                     // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendOutTime;                                    // 0x44(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InShouldInterpolate;                               // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InShouldChangeState;                               // 0x49(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.PlayCustomAnimation
struct ACGAICharacter_PlayCustomAnimation_Params
{
public:
	class UAnimSequence*                         CustomAnim;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InStartTime;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1860[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.PlayCoordinatedCustomAnimation
struct ACGAICharacter_PlayCoordinatedCustomAnimation_Params
{
public:
	class UAnimSequence*                         InCustomAnim;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InStartTime;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1891[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.PlayAdditiveDialogueGesture
struct ACGAICharacter_PlayAdditiveDialogueGesture_Params
{
public:
	class UAnimSequence*                         InDialogueGesture;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                InMeshComponent;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.OnPatrolNodeReachedFromBP
struct ACGAICharacter_OnPatrolNodeReachedFromBP_Params
{
public:
	class APatrolActor*                          InPatrolActorReached;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChernobylGame.CGAICharacter.OnMeshHitEvent
struct ACGAICharacter_OnMeshHitEvent_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComponent;                                    // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ChernobylGame.CGAICharacter.OnHpLostInternal
struct ACGAICharacter_OnHpLostInternal_Params
{
public:
	class AActor*                                InComponentOwner;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRemainingHpPoints;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRemainingHpPercent;                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x10(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                InDamageDealer;                                    // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function ChernobylGame.CGAICharacter.OnHpLostAbsoluteInternal
struct ACGAICharacter_OnHpLostAbsoluteInternal_Params
{
public:
	class AActor*                                InComponentOwner;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRemainingHpPoints;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRemainingHpPercent;                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x10(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                InDamageDealer;                                    // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDamage;                                          // 0xF8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInKillingDamage;                                  // 0xFC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// Function ChernobylGame.CGAICharacter.OnHitUpdateHitmask
struct ACGAICharacter_OnHitUpdateHitmask_Params
{
public:
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         IsCustomCall;                                      // 0xE0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.OnGlobalSkinChanged
struct ACGAICharacter_OnGlobalSkinChanged_Params
{
public:
	enum class EGlobalSkinType                   SkinType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewSkinName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function ChernobylGame.CGAICharacter.OnDeathInternal
struct ACGAICharacter_OnDeathInternal_Params
{
public:
	class AActor*                                InOwner;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.CGAICharacter.GiveOrder
struct ACGAICharacter_GiveOrder_Params
{
public:
	struct FOrderQuery                           InOrder;                                           // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetWalkType
struct ACGAICharacter_GetWalkType_Params
{
public:
	enum class EAIWalkType                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.GetTotalDebugInformation
struct ACGAICharacter_GetTotalDebugInformation_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.GetTargetSightLocation
struct ACGAICharacter_GetTargetSightLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.GetStrafingDirection
struct ACGAICharacter_GetStrafingDirection_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetShouldReactToCustomAnim
struct ACGAICharacter_GetShouldReactToCustomAnim_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAICharacter.GetRotationInPlaceDelta
struct ACGAICharacter_GetRotationInPlaceDelta_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetReactionToHero
struct ACGAICharacter_GetReactionToHero_Params
{
public:
	enum class EReactionToVisibleHero            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetRadarAfterImage
struct ACGAICharacter_GetRadarAfterImage_Params
{
public:
	class ARadarAfterImage*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.GetPointOfInterest
struct ACGAICharacter_GetPointOfInterest_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetNextPatrolActor
struct ACGAICharacter_GetNextPatrolActor_Params
{
public:
	class APatrolActor*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetNavTarget
struct ACGAICharacter_GetNavTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGAICharacter.GetMotionfixTargetTransform
struct ACGAICharacter_GetMotionfixTargetTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CGAICharacter.GetLootRowBasedOnMap
struct ACGAICharacter_GetLootRowBasedOnMap_Params
{
public:
	class FName                                  DefaultLoot;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               CustomLootPerMap;                                  // 0x8(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetIsStrafing
struct ACGAICharacter_GetIsStrafing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetIsRotatingInPlace
struct ACGAICharacter_GetIsRotatingInPlace_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.GetIsPawnVisible
struct ACGAICharacter_GetIsPawnVisible_Params
{
public:
	class ACGCharacter*                          InCharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C84[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetIsHeroVisible
struct ACGAICharacter_GetIsHeroVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGAICharacter.GetHeroCleanAim
struct ACGAICharacter_GetHeroCleanAim_Params
{
public:
	bool                                         bInDebug;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGAICharacter.GetHeroAimAngleAtBone
struct ACGAICharacter_GetHeroAimAngleAtBone_Params
{
public:
	class FName                                  InBoneName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CGAICharacter.GetHeadTracingProperties
struct ACGAICharacter_GetHeadTracingProperties_Params
{
public:
	struct FHeadTracingProperties                ReturnValue;                                       // 0x0(0x60)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAICharacter.GetHasSightMemory
struct ACGAICharacter_GetHasSightMemory_Params
{
public:
	class AActor*                                InMemoryActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D20[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetDeathFunctionOverrideEnabled
struct ACGAICharacter_GetDeathFunctionOverrideEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCurrentlySeeingDeadBody
struct ACGAICharacter_GetCurrentlySeeingDeadBody_Params
{
public:
	class ACGAICharacter*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCurrentLandMovementMode
struct ACGAICharacter_GetCurrentLandMovementMode_Params
{
public:
	enum class ELandMovementMode                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCurrentAIStateType
struct ACGAICharacter_GetCurrentAIStateType_Params
{
public:
	enum class EAIStateType                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCurrentAIStateClass
struct ACGAICharacter_GetCurrentAIStateClass_Params
{
public:
	TSubclassOf<class UCGAIState>                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCurrentAIState
struct ACGAICharacter_GetCurrentAIState_Params
{
public:
	enum class EAIState                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCurrentAIInnerState
struct ACGAICharacter_GetCurrentAIInnerState_Params
{
public:
	enum class EAIInnerState                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCover
struct ACGAICharacter_GetCover_Params
{
public:
	class ACGCover*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCloseContacted
struct ACGAICharacter_GetCloseContacted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCGBlackboardComponent
struct ACGAICharacter_GetCGBlackboardComponent_Params
{
public:
	class UBlackboardComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAICharacter.GetCGAIController
struct ACGAICharacter_GetCGAIController_Params
{
public:
	class ACGAIController*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetAIWorldType
struct ACGAICharacter_GetAIWorldType_Params
{
public:
	enum class EAIWorldType                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAICharacter.GetAIType
struct ACGAICharacter_GetAIType_Params
{
public:
	enum class EAIType                           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3E0 (0x3E0 - 0x0)
// Function ChernobylGame.CGAICharacter.GetAIProperties
struct ACGAICharacter_GetAIProperties_Params
{
public:
	struct FCGAIProperties                       ReturnValue;                                       // 0x0(0x3E0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CGAICharacter.FixTransformForAnimation
struct ACGAICharacter_FixTransformForAnimation_Params
{
public:
	struct FTransform                            InTargetTransform;                                 // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InInterpTime;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F12[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGAICharacter.FixTransform_Update
struct ACGAICharacter_FixTransform_Update_Params
{
public:
	struct FTransform                            InUpdatedTransform;                                // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAICharacter.FindShadowMaxDistance
struct ACGAICharacter_FindShadowMaxDistance_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function ChernobylGame.CGAICharacter.FindDeathAnim
struct ACGAICharacter_FindDeathAnim_Params
{
public:
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAnimSequence*                         ReturnValue;                                       // 0xE0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGAICharacter.AddAlertValue
struct ACGAICharacter_AddAlertValue_Params
{
public:
	float                                        InAlertValueToAdd;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2073[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAlertReason                        InReason;                                          // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2080[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAINoticeWidget.CreateSpottedEntryCPP
struct UCGAINoticeWidget_CreateSpottedEntryCPP_Params
{
public:
	class ACGAICharacter*                        AICharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFight;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2330[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAINoticeWidget.CreateSightEntryCPP
struct UCGAINoticeWidget_CreateSightEntryCPP_Params
{
public:
	class ACGAICharacter*                        AICharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlert;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2357[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAINoticeWidget.CheckIfAISpottedCPP
struct UCGAINoticeWidget_CheckIfAISpottedCPP_Params
{
public:
	class ACGAICharacter*                        AICharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2394[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAINoticeWidget.CheckIfAIPatrolCPP
struct UCGAINoticeWidget_CheckIfAIPatrolCPP_Params
{
public:
	class ACGAICharacter*                        AICharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAINoticeWidget.CheckIfAICombatCPP
struct UCGAINoticeWidget_CheckIfAICombatCPP_Params
{
public:
	class ACGAICharacter*                        AICharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAINoticeWidget.CheckIfAIAlertCPP
struct UCGAINoticeWidget_CheckIfAIAlertCPP_Params
{
public:
	class ACGAICharacter*                        AICharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2421[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAIPerception.UnBlockPerception
struct UCGAIPerception_UnBlockPerception_Params
{
public:
	struct FPerceptionBlock                      InPerceptionBlock;                                 // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIPerception.SetSightStatus
struct UCGAIPerception_SetSightStatus_Params
{
public:
	bool                                         InIsActive;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.SetSightRadius
struct UCGAIPerception_SetSightRadius_Params
{
public:
	float                                        NewRadius;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIPerception.SetSenseEnabledDelayed
struct UCGAIPerception_SetSenseEnabledDelayed_Params
{
public:
	TSubclassOf<class UAISense>                  InSenseToDeactivate;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDelayTime;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPostDelayEnabled;                               // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInEnable;                                         // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.SetHearingRange
struct UCGAIPerception_SetHearingRange_Params
{
public:
	float                                        InHearingRange;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGAIPerception.OnPercUpdatedInternal
struct UCGAIPerception_OnPercUpdatedInternal_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                           InStimulus;                                        // 0x8(0x3C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.GetVisionAngle
struct UCGAIPerception_GetVisionAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAIPerception.GetUniquePerceptionBlockIndexes
struct UCGAIPerception_GetUniquePerceptionBlockIndexes_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIPerception.GetSightStatus
struct UCGAIPerception_GetSightStatus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.GetSightRadius
struct UCGAIPerception_GetSightRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIPerception.GetSightMemory
struct UCGAIPerception_GetSightMemory_Params
{
public:
	TArray<struct FCGSightMemory>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIPerception.GetSightBlockStatus
struct UCGAIPerception_GetSightBlockStatus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIPerception.GetPerceptionBlocks
struct UCGAIPerception_GetPerceptionBlocks_Params
{
public:
	TArray<struct FPerceptionBlock>              ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.GetLoseSightRadius
struct UCGAIPerception_GetLoseSightRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIPerception.GetIsPawnVisible
struct UCGAIPerception_GetIsPawnVisible_Params
{
public:
	class ACGCharacter*                          InTargetCharacter;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2704[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIPerception.GetIsHeroVisible
struct UCGAIPerception_GetIsHeroVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.GetHearingRange
struct UCGAIPerception_GetHearingRange_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIPerception.GetHearingBlockStatus
struct UCGAIPerception_GetHearingBlockStatus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.GetFullFocusHalfAngle
struct UCGAIPerception_GetFullFocusHalfAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIPerception.GetCurrentlyVisibleActors
struct UCGAIPerception_GetCurrentlyVisibleActors_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIPerception.GetCurrentAlertValues
struct UCGAIPerception_GetCurrentAlertValues_Params
{
public:
	TArray<float>                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGAIPerception.GetCurrentAlertValue
struct UCGAIPerception_GetCurrentAlertValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIPerception.EnabledDelayFinished
struct UCGAIPerception_EnabledDelayFinished_Params
{
public:
	bool                                         bInPostDelayEnabled;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2816[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAISense>                  InSenseToDeactivate;                               // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIPerception.ComparePerceptionBlockIndexes
struct UCGAIPerception_ComparePerceptionBlockIndexes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAIPerception.BlockPerception
struct UCGAIPerception_BlockPerception_Params
{
public:
	struct FPerceptionBlock                      InPerceptionBlock;                                 // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAIPerception.AddSightMemory
struct UCGAIPerception_AddSightMemory_Params
{
public:
	struct FCGSightMemory                        InSightMemory;                                     // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGAIPerception.AddAlertValue
struct UCGAIPerception_AddAlertValue_Params
{
public:
	float                                        InValueToAdd;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAlertReason                        InAlertReason;                                     // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGAIState.ZeroAlert
struct UCGAIState_ZeroAlert_Params
{
public:
	struct FCGAlertReason                        InReason;                                          // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGAIState.PerceptionUpdate
struct UCGAIState_PerceptionUpdate_Params
{
public:
	class AActor*                                InAActor;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                           InStimulus;                                        // 0x8(0x3C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIState.OnNPCHeadTracingHeroUpdate
struct UCGAIState_OnNPCHeadTracingHeroUpdate_Params
{
public:
	bool                                         bUpdate;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGAIState.OnNoiseHeard
struct UCGAIState_OnNoiseHeard_Params
{
public:
	class AActor*                                InInstigator;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseRange;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InNoiseLocation;                                   // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseStrength;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTag;                                             // 0x1C(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMaxDistanceToActivateCombat;                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIState.OnMoveToTaskFinished
struct UCGAIState_OnMoveToTaskFinished_Params
{
public:
	enum class EBTNodeResult                     InTaskResult;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InActorReached;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ChernobylGame.CGAIState.OnHPLost
struct UCGAIState_OnHPLost_Params
{
public:
	class AActor*                                ComponentOwner;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemainingHpPoints;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemainingHpPercent;                                // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        DamageEvent;                                       // 0x10(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                DamageDealer;                                      // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIState.OnHideShowFinished
struct UCGAIState_OnHideShowFinished_Params
{
public:
	bool                                         bInShown;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ChernobylGame.CGAIState.OnHeroTakeDamage
struct UCGAIState_OnHeroTakeDamage_Params
{
public:
	float                                        InDamage;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                           InEventInstigator;                                 // 0xE8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InDamageCauser;                                    // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGAIState.MaxAlert
struct UCGAIState_MaxAlert_Params
{
public:
	struct FCGAlertReason                        InReason;                                          // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGAIState.HalfAlert
struct UCGAIState_HalfAlert_Params
{
public:
	struct FCGAlertReason                        InReason;                                          // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGAIState.GetHeroCleanAim
struct UCGAIState_GetHeroCleanAim_Params
{
public:
	bool                                         bInDebug;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGAIState_Soldier_Alert.OnNotifyBeginReceived
struct UCGAIState_Soldier_Alert_OnNotifyBeginReceived_Params
{
public:
	class FName                                  InNotifyName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBranchingPointNotifyPayload          InBranchingPointPayload;                           // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIState_Soldier_HCover.CheckCoverValidity
struct UCGAIState_Soldier_HCover_CheckCoverValidity_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAIState_Soldier_HCoverLoop.FindBetterCoverVirt
struct UCGAIState_Soldier_HCoverLoop_FindBetterCoverVirt_Params
{
public:
	class ACGCover*                              InCover;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIState_Soldier_HEvade.AnimFinished
struct UCGAIState_Soldier_HEvade_AnimFinished_Params
{
public:
	class UAnimMontage*                          InMontage;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInInterrupted;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIState_Soldier_HMeleeAttack.AttackMontageEnded
struct UCGAIState_Soldier_HMeleeAttack_AttackMontageEnded_Params
{
public:
	class UAnimMontage*                          InMontage;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInInterrupted;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIState_Soldier_MeleeReaction.OnReactionMontageFinished
struct UCGAIState_Soldier_MeleeReaction_OnReactionMontageFinished_Params
{
public:
	class UAnimMontage*                          InMontage;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInInterrupted;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3352[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGAIStateComponent.SetStateAdditionalInfo
struct UCGAIStateComponent_SetStateAdditionalInfo_Params
{
public:
	struct FCGAIStateAdditionalInfo              InInfo;                                            // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIStateComponent.GetStealthKillPossibility
struct UCGAIStateComponent_GetStealthKillPossibility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGAIStateComponent.GetStateAdditionalInfo
struct UCGAIStateComponent_GetStateAdditionalInfo_Params
{
public:
	struct FCGAIStateAdditionalInfo              ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAIStateComponent.GetReasonOfLastStateEntry
struct UCGAIStateComponent_GetReasonOfLastStateEntry_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGAIStateComponent.GetAssociatedEnumStateType
struct UCGAIStateComponent_GetAssociatedEnumStateType_Params
{
public:
	enum class EAIStateType                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGAIStateComponent.GetAssociatedClass
struct UCGAIStateComponent_GetAssociatedClass_Params
{
public:
	TSubclassOf<class UCGAIState>                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAnim.IsRootmotionEnabled
struct UCGAnim_IsRootmotionEnabled_Params
{
public:
	class UAnimSequence*                         InAnimSequence;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_340A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAnim.GetRelevantAnimInfo
struct UCGAnim_GetRelevantAnimInfo_Params
{
public:
	class UAnimInstance*                         InAnimInstance;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutTime;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMachineIndex;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InStateIndex;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3414[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAnim.GetMorphTargetValue
struct UCGAnim_GetMorphTargetValue_Params
{
public:
	class UAnimInstance*                         InAnimInstance;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMorphName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3420[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGAnim.GetMachineAndStateIndexes
struct UCGAnim_GetMachineAndStateIndexes_Params
{
public:
	class UAnimInstance*                         InAnimInstance;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMachineName;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InStateName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutMachineIndex;                                   // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutStateIndex;                                     // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGAnim.GetAllMorphTargetNames
struct UCGAnim_GetAllMorphTargetNames_Params
{
public:
	class UAnimInstance*                         InAnimInstance;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGAnim.BoneTransformInTime
struct UCGAnim_BoneTransformInTime_Params
{
public:
	class UAnimSequence*                         InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InTime;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InBoneName;                                        // 0xC(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3445[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                InSkeletalMesh;                                    // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x20(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAnimNotifyState.GetStartTriggerTime
struct UCGAnimNotifyState_GetStartTriggerTime_Params
{
public:
	class UAnimSequenceBase*                     InAnimSequence;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3458[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGAnimNotifyState.GetEndTriggerTime
struct UCGAnimNotifyState_GetEndTriggerTime_Params
{
public:
	class UAnimSequenceBase*                     InAnimSequence;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementComponent.SetUseAccelerationForPaths
struct UCGCharacterMovementComponent_SetUseAccelerationForPaths_Params
{
public:
	bool                                         bInNewValue;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGCharacterMovementComponent.RemoveMaxSpeedSlowdownModifier
struct UCGCharacterMovementComponent_RemoveMaxSpeedSlowdownModifier_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Update;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3487[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGCharacterMovementComponent.GetMappedCustomMovement
struct UCGCharacterMovementComponent_GetMappedCustomMovement_Params
{
public:
	enum class ECustomMovementMode               InCustomMovementMode;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGCharacterMovementComponent.AddOrUpdateMaxSpeedSlowdownModifier
struct UCGCharacterMovementComponent_AddOrUpdateMaxSpeedSlowdownModifier_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Update;                                            // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3496[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.UpdateKeyCombination
struct UCGCharacterMovementStateMachine_UpdateKeyCombination_Params
{
public:
	class FString                                InKeyString;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.SetNewMovementState
struct UCGCharacterMovementStateMachine_SetNewMovementState_Params
{
public:
	TSubclassOf<class ACGMovementState>          InNewMovementStateClass;                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGMovementState*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.SetMovementStateMachineEnabled
struct UCGCharacterMovementStateMachine_SetMovementStateMachineEnabled_Params
{
public:
	bool                                         InEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.SetIsInputEnabled
struct UCGCharacterMovementStateMachine_SetIsInputEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.SetDebugEnabled
struct UCGCharacterMovementStateMachine_SetDebugEnabled_Params
{
public:
	bool                                         InEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.LockStateChanging
struct UCGCharacterMovementStateMachine_LockStateChanging_Params
{
public:
	bool                                         bInNewLock;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetMovementRightInput
struct UCGCharacterMovementStateMachine_GetMovementRightInput_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetMovementForwardInput
struct UCGCharacterMovementStateMachine_GetMovementForwardInput_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetLeanAxis
struct UCGCharacterMovementStateMachine_GetLeanAxis_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetIsMovementStateMachineEnabled
struct UCGCharacterMovementStateMachine_GetIsMovementStateMachineEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetEnemyChatterEnabled
struct UCGCharacterMovementStateMachine_GetEnemyChatterEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetCurrentMovementState
struct UCGCharacterMovementStateMachine_GetCurrentMovementState_Params
{
public:
	TSubclassOf<class ACGMovementState>          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetCurrentKeyCombination
struct UCGCharacterMovementStateMachine_GetCurrentKeyCombination_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetClimbEnabled
struct UCGCharacterMovementStateMachine_GetClimbEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CGCharacterMovementStateMachine.GetAdditionalInfo
struct UCGCharacterMovementStateMachine_GetAdditionalInfo_Params
{
public:
	struct FCGMovementStateAdditionalInfo        ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGCheatManager.ModMorale
struct UCGCheatManager_ModMorale_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGCheatManager.ModLevelTime
struct UCGCheatManager_ModLevelTime_Params
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGCheatManager.ModHP
struct UCGCheatManager_ModHP_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCheatManager.ModCheck
struct UCGCheatManager_ModCheck_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGChernohost.SetAssociatedTeleportChain
struct ACGChernohost_SetAssociatedTeleportChain_Params
{
public:
	class ACGShadowTeleportBase*                 InNewTeleportBase;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGChernohost.ScheduleAggroReset
struct ACGChernohost_ScheduleAggroReset_Params
{
public:
	bool                                         bInReset;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGChernohost.GetClosestTeleport
struct ACGChernohost_GetClosestTeleport_Params
{
public:
	class ACGShadowTeleportBase*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGChernohost.GetAssociatedTeleportChain
struct ACGChernohost_GetAssociatedTeleportChain_Params
{
public:
	class ACGShadowTeleportBase*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGChernohost.GetAggroResetScheduled
struct ACGChernohost_GetAggroResetScheduled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCollisionCheckers.SetDebugEnabled
struct UCGCollisionCheckers_SetDebugEnabled_Params
{
public:
	bool                                         InNewDebug;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGCollisionCheckers.QueryStealthKill
struct UCGCollisionCheckers_QueryStealthKill_Params
{
public:
	struct FStealthKillQueryResult               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCompanionStatusPayloadWidget.InitPayload
struct UCGCompanionStatusPayloadWidget_InitPayload_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.SetupWidgetReferences
struct UCGCompassBaseWidget_SetupWidgetReferences_Params
{
public:
	class UCanvasPanel*                          TagContainer;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.RemoveTagCPP
struct UCGCompassBaseWidget_RemoveTagCPP_Params
{
public:
	class UObject*                               Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.ProjectOnNearPlaneCPP
struct UCGCompassBaseWidget_ProjectOnNearPlaneCPP_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCustomMarker;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutNormalizedPosition;                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutDistanceZ;                                      // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.IsTagAQuest
struct UCGCompassBaseWidget_IsTagAQuest_Params
{
public:
	bool                                         bIsQuest;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3596[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  QuestID;                                           // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3597[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.IsQuestWithNameActive
struct UCGCompassBaseWidget_IsQuestWithNameActive_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.HideShowTagCPP
struct UCGCompassBaseWidget_HideShowTagCPP_Params
{
public:
	class UObject*                               Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  NewVisibility;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.GetShowArrowCPP
struct UCGCompassBaseWidget_GetShowArrowCPP_Params
{
public:
	bool                                         bIsLeft;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Position;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceZ;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.GetDiffForVisiblityCheckCPP
struct UCGCompassBaseWidget_GetDiffForVisiblityCheckCPP_Params
{
public:
	class AActor*                                Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZAxisCheckBelow;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCustomMarker;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.FindTagWidgetCPP
struct UCGCompassBaseWidget_FindTagWidgetCPP_Params
{
public:
	class UObject*                               Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGCompassTagBaseWidget*               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.CheckIfPlayerIsInRadiusCPP
struct UCGCompassBaseWidget_CheckIfPlayerIsInRadiusCPP_Params
{
public:
	class AActor*                                Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TagRadius;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.CheckIfInsideViewCPP
struct UCGCompassBaseWidget_CheckIfInsideViewCPP_Params
{
public:
	class AActor*                                Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZAxisCheckBelow;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCustomMarker;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisiblityAngle;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGCompassBaseWidget.CalculateTagPositionCPP
struct UCGCompassBaseWidget_CalculateTagPositionCPP_Params
{
public:
	class UCanvasPanelSlot*                      BorderSlot;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TagMaxSize;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalPosition;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x14(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCompassTagBaseWidget.UpdateMetersTextCPP
struct UCGCompassTagBaseWidget_UpdateMetersTextCPP_Params
{
public:
	float                                        Distance;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGCompassTagBaseWidget.SetupWidgetReferences
struct UCGCompassTagBaseWidget_SetupWidgetReferences_Params
{
public:
	class UTextBlock*                            MetersTextBlock;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            QuestMetersTextBlock;                              // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Tag;                                               // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGCompassTagBaseWidget.SetupUpDownArrowReferences
struct UCGCompassTagBaseWidget_SetupUpDownArrowReferences_Params
{
public:
	class UImage*                                UpArrow;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                UpArrowGreen;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                DownArrow;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                DownArrowGreen;                                    // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGCover.ShootTraceFromCover
struct ACGCover_ShootTraceFromCover_Params
{
public:
	TArray<struct FCGMultitraceResult>           OutHitResults;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               InTraceEnd;                                        // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 InTraceChannel;                                    // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3650[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        InActorsToIgnore;                                  // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInTraceComplex;                                   // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3653[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBillboardComponent*                   InVisibilityChecker;                               // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugEnabled;                                     // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3655[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGCover.SetMultiThread
struct ACGCover_SetMultiThread_Params
{
public:
	bool                                         bTickAnywhere;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGCover.GetRandomPossibleCoverType
struct ACGCover_GetRandomPossibleCoverType_Params
{
public:
	class ACGCharacter*                          InAggroTarget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InOptionalLocation;                                // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_366A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGSoldier*                            InSoldierContext;                                  // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverType                        ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_366E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGCover.GetOccupation
struct ACGCover_GetOccupation_Params
{
public:
	class ACGAICharacter*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCover.GetCoverValidity
struct ACGCover_GetCoverValidity_Params
{
public:
	struct FVector                               InLocationToCheck;                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CGCover.GetCoverTypeValidity
struct ACGCover_GetCoverTypeValidity_Params
{
public:
	enum class ECoverType                        InCoverType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3685[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InPotentialTargetLocation;                         // 0x4(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3687[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGCover.GetCheckerByCoverType
struct ACGCover_GetCheckerByCoverType_Params
{
public:
	enum class ECoverType                        InCoverType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3690[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UArrowComponent*                       ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.VirtuaTick
struct ACGVirtuaShooter_VirtuaTick_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.VirtuaBeginDelayed
struct ACGVirtuaShooter_VirtuaBeginDelayed_Params
{
public:
	float                                        InDelay;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtuaShotType                   InShotType;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_370D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.VirtuaBegin
struct ACGVirtuaShooter_VirtuaBegin_Params
{
public:
	enum class EVirtuaShotType                   InShotType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.PushVirtuaOffsight
struct ACGVirtuaShooter_PushVirtuaOffsight_Params
{
public:
	bool                                         bPush;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.GetVirtuaElapsedNormalised
struct ACGVirtuaShooter_GetVirtuaElapsedNormalised_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.GetShotType
struct ACGVirtuaShooter_GetShotType_Params
{
public:
	enum class EVirtuaShotType                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.GetLaserInfo
struct ACGVirtuaShooter_GetLaserInfo_Params
{
public:
	bool                                         bGetLast;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGVirtuaLaserInfo                    ReturnValue;                                       // 0x4(0x34)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.GetIsVirtuaRunning
struct ACGVirtuaShooter_GetIsVirtuaRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGVirtuaShooter.AddToVirtuaElapsed
struct ACGVirtuaShooter_AddToVirtuaElapsed_Params
{
public:
	float                                        InValueToAdd;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGDialogueActor.StartDialogue_FireAndKill
struct ACGDialogueActor_StartDialogue_FireAndKill_Params
{
public:
	class FName                                  InStartingRow;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGDialogueActor.OnSkipDialogueLine_ButtonPressed
struct ACGDialogueActor_OnSkipDialogueLine_ButtonPressed_Params
{
public:
	float                                        InAxisValue;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGDuster.SpawnDusterProjectile
struct ACGDuster_SpawnDusterProjectile_Params
{
public:
	class ACGCharacter*                          InTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGDusterProjectile>       InProjectileClass;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGDusterProjectile*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGDuster.SpawnDusterGhost
struct ACGDuster_SpawnDusterGhost_Params
{
public:
	class ACGDusterGhost*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGDuster.SetCurrentNode
struct ACGDuster_SetCurrentNode_Params
{
public:
	class ACGDusterNode*                         InNewNode;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGDuster.GetCurrentNode
struct ACGDuster_GetCurrentNode_Params
{
public:
	class ACGDusterNode*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGDusterNode.RegenerateImpl
struct ACGDusterNode_RegenerateImpl_Params
{
public:
	class UPaperSpriteComponent*                 ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGDusterNode.GetNodeOwner
struct ACGDusterNode_GetNodeOwner_Params
{
public:
	class ACGDuster*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGEditor.SetIsEditorOnly
struct UCGEditor_SetIsEditorOnly_Params
{
public:
	class UActorComponent*                       InActorComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InIsEditorOnly;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3752[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGEditor.GetDifferentObject
struct UCGEditor_GetDifferentObject_Params
{
public:
	class UObject*                               InObject;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       InArray;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               OutObject;                                         // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMaxIndex;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3754[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGEventSystem.EventSystemSetValue
struct UCGEventSystem_EventSystemSetValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewValue;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3767[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGEventSystem.EventSystemGetValue
struct UCGEventSystem_EventSystemGetValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_376C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ChernobylGame.CGFakeHero.StartCustomAnim
struct ACGFakeHero_StartCustomAnim_Params
{
public:
	struct FPlayCustomAnimProperties             InProperties;                                      // 0x0(0x60)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     InAnimSequence;                                    // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x68(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3771[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFakeHero.OnInitialHideFinished
struct ACGFakeHero_OnInitialHideFinished_Params
{
public:
	enum class EState                            InQueryInitialItemState;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3774[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGActiveItem>             InQueryInitialItemClass;                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGFakeHero.FindMesh
struct ACGFakeHero_FindMesh_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.TryChance
struct UCGFunctionLibrary_TryChance_Params
{
public:
	float                                        InChance;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_378C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.StringArrayToNameArray
struct UCGFunctionLibrary_StringArrayToNameArray_Params
{
public:
	TArray<class FString>                        Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.StopCurrentTask
struct UCGFunctionLibrary_StopCurrentTask_Params
{
public:
	class UBehaviorTree*                         BehTree;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x510 (0x510 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SpawnShadowEnemy
struct UCGFunctionLibrary_SpawnShadowEnemy_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ACGShadow>               InShadowClass;                                     // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>          InBehaviorTree;                                    // 0x30(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3797[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InShadowTransform;                                 // 0x60(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class ACGShadowTeleportingAreaBase*>  InPossibleAreas;                                   // 0x90(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class APatrolActor*>                  InPossiblePatrolNodes;                             // 0xA0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class APatrolActor*                          InNextPatrolNode;                                  // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShadowProperties                     InProperties;                                      // 0xB8(0x438)(Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
	class ACGShadow*                             OutSpawnedShadow;                                  // 0x4F0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSpawnResult;                                    // 0x4F8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_379C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGShadowTeleportBase*                 InOptionalStartingTeleport;                        // 0x500(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_379D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SpawnPatrollerEnemyFromSoftClass
struct UCGFunctionLibrary_SpawnPatrollerEnemyFromSoftClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ACGSoldier>              InPatrollerClass;                                  // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>          InBehaviorTree;                                    // 0x30(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InPatrollerTransform;                              // 0x60(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APatrolActor*                          InNextPatrolActor;                                 // 0x90(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCGAIState>              InInitialState;                                    // 0x98(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InSquadName;                                       // 0xC0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGSoldier*                            OutSpawnedPatroller;                               // 0xC8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSpawnResult;                                    // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCanArrest;                                      // 0xD1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A5[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SpawnPatrollerEnemy
struct UCGFunctionLibrary_SpawnPatrollerEnemy_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGSoldier>                InPatrollerClass;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         InBehaviorTree;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InPatrollerTransform;                              // 0x20(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APatrolActor*                          InNextPatrolActor;                                 // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCGAIState>                InInitialState;                                    // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InSquadName;                                       // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGSoldier*                            OutSpawnedPatroller;                               // 0x68(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSpawnResult;                                    // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCanArrest;                                      // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AA[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x480 (0x480 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SpawnOutdoorShadowEnemy
struct UCGFunctionLibrary_SpawnOutdoorShadowEnemy_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGShadow>                 InShadowClass;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         InBehaviorTree;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InShadowTransform;                                 // 0x20(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class ACGShadowTeleportBase*>         InInitialOutdoorTeleports;                         // 0x50(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FOutdoorShadowProperties              InProperties;                                      // 0x60(0x408)(Parm, NativeAccessSpecifierPublic)
	class ACGShadow*                             OutSpawnedShadow;                                  // 0x468(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSpawnResult;                                    // 0x470(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AE[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SpawnHighlightOnActor
struct UCGFunctionLibrary_SpawnHighlightOnActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FollowTarget;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SpawnDarkStalkerEnemy
struct UCGFunctionLibrary_SpawnDarkStalkerEnemy_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ACGDarkStalker>          InDarkStalkerClass;                                // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>          InBehaviorTree;                                    // 0x30(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InDarkStalkerTransform;                            // 0x60(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ACGDarkStalker*                        OutSpawnedDarkStalker;                             // 0x90(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSpawnResult;                                    // 0x98(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SpawnChernohostEnemy
struct UCGFunctionLibrary_SpawnChernohostEnemy_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGChernohost>             InChernohostClass;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         InBehaviorTree;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCGAIState_Chernohost>     InStartingState;                                   // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InChernohostTransform;                             // 0x20(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ACGShadowTeleportBase*                 InOptionalStartingTeleport;                        // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AShadowPatrolActor*                    InOptionalStartingPatrolNode;                      // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGChernohost*                         OutSpawnedchernohost;                              // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSpawnResult;                                    // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SortSaves
struct UCGFunctionLibrary_SortSaves_Params
{
public:
	TMap<class FString, struct FCustomSaveGameMetadataInfo> Saves;                                             // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
	TMap<class FString, struct FCustomSaveGameMetadataInfo> ReturnValue;                                       // 0x50(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SortActorsByDistanceToPoint
struct UCGFunctionLibrary_SortActorsByDistanceToPoint_Params
{
public:
	TArray<class AActor*>                        InArray;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               InPoint;                                           // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SetRenderCustomDepthStencilBitComponent
struct UCGFunctionLibrary_SetRenderCustomDepthStencilBitComponent_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bit;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37BE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SetRenderCustomDepthStencilBit
struct UCGFunctionLibrary_SetRenderCustomDepthStencilBit_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bit;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.SetCustomStencilDepthOnActor
struct UCGFunctionLibrary_SetCustomStencilDepthOnActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnabled;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StencilValue;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.ScreenshotDataToTexture
struct UCGFunctionLibrary_ScreenshotDataToTexture_Params
{
public:
	struct FSaveScreenshotData                   ScreenshotData;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.RemoveRadarHighlights
struct UCGFunctionLibrary_RemoveRadarHighlights_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.RemoveNewLineFromString
struct UCGFunctionLibrary_RemoveNewLineFromString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.ReadPhysicalBodyStatus
struct UCGFunctionLibrary_ReadPhysicalBodyStatus_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMesh;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InBoneName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.ProjectWorldToScreenBidirectional
struct UCGFunctionLibrary_ProjectWorldToScreenBidirectional_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldPosition;                                     // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTargetBehindCamera;                               // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerViewportRelative;                           // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1E(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37CE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.PlayCustomSequence
struct UCGFunctionLibrary_PlayCustomSequence_Params
{
public:
	class UAnimSequence*                         InHeroCustomAnim;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InHeroTargetTransform;                             // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomAnimQuery>              InAnimQueries;                                     // 0x40(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        InBlendToTransformLength;                          // 0x50(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D3[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayCustomAnimProperties             InProperties;                                      // 0x60(0x60)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOldBehavior;                                      // 0xC0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D4[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.PlayAnimationAt
struct UCGFunctionLibrary_PlayAnimationAt_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       InNewAnimToPlay;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InStartTime;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLooping;                                        // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.MakeNoise
struct UCGFunctionLibrary_MakeNoise_Params
{
public:
	class AActor*                                InInstigator;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseRange;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InNoiseLocation;                                   // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseStrength;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTag;                                             // 0x1C(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InFalloff;                                         // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIgnoreSenseBlock;                               // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InMaxDistanceToActivateCombat;                     // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.K2_ExtractRootMotionFromRange
struct UCGFunctionLibrary_K2_ExtractRootMotionFromRange_Params
{
public:
	class UAnimSequence*                         InSequence;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InStartTrackPosition;                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InEndTrackPosition;                                // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.K2_CGGetVisibleHeroLimbsFromPoint
struct UCGFunctionLibrary_K2_CGGetVisibleHeroLimbsFromPoint_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InPoint;                                           // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        InActorsToIgnore;                                  // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class ACGAICharacter*                        InOptionalSightAI;                                 // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCGCollisionLimbComponent*>     ReturnValue;                                       // 0x30(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsThereAPath
struct UCGFunctionLibrary_IsThereAPath_Params
{
public:
	class ACGAICharacter*                        InAI;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InTargetLocation;                                  // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsSteamSubsystemValid
struct UCGFunctionLibrary_IsSteamSubsystemValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsSteamDemo
struct UCGFunctionLibrary_IsSteamDemo_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsShippingBuild
struct UCGFunctionLibrary_IsShippingBuild_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsPS4GamepadConnected
struct UCGFunctionLibrary_IsPS4GamepadConnected_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsPointClose
struct UCGFunctionLibrary_IsPointClose_Params
{
public:
	struct FVector                               InOrigin;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InPoint;                                           // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRadius;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsInTrigger
struct UCGFunctionLibrary_IsInTrigger_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    InTriggerClass;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.IsDemoVersion
struct UCGFunctionLibrary_IsDemoVersion_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37FE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.HitPhysicalMaterial
struct UCGFunctionLibrary_HitPhysicalMaterial_Params
{
public:
	class UCGPhysicalMaterial*                   InPhysicalMaterial;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            InHit;                                             // 0x8(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_37FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InInstigator;                                      // 0x98(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GroupSpreadPoint
struct UCGFunctionLibrary_GroupSpreadPoint_Params
{
public:
	class AActor*                                InGroupMember;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSpreadCheckRadius;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3808[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    InGroupClass;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          InGroupTypeQuery;                                  // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                InSpreadTarget;                                    // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpreadSuccessfull;                                // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x34(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetStringFromArrayOrEmpty
struct UCGFunctionLibrary_GetStringFromArrayOrEmpty_Params
{
public:
	TArray<class FString>                        Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetResourceByName
struct UCGFunctionLibrary_GetResourceByName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EResourceType                     ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetRandomIntInRangeWithExclusion
struct UCGFunctionLibrary_GetRandomIntInRangeWithExclusion_Params
{
public:
	int32                                        InExclusion;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InRangeMin;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InRangeMax;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetNameByResource
struct UCGFunctionLibrary_GetNameByResource_Params
{
public:
	enum class EResourceType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3810[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetMyBoneNameFromHit
struct UCGFunctionLibrary_GetMyBoneNameFromHit_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8C(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetMusicManager
struct UCGFunctionLibrary_GetMusicManager_Params
{
public:
	class AActor*                                InLevelActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGMusicManager*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetLastInputFromGamepadCPP
struct UCGFunctionLibrary_GetLastInputFromGamepadCPP_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetLandMovementNoStrafe
struct UCGFunctionLibrary_GetLandMovementNoStrafe_Params
{
public:
	enum class ELandMovementMode                 InLandMovement;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandMovementModeNoStrafe         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetKeyName
struct UCGFunctionLibrary_GetKeyName_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetIsUserInterfaceEnabled
struct UCGFunctionLibrary_GetIsUserInterfaceEnabled_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserInterfaceType                UserInterfaceType;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3820[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetIsLevelFullyUnloaded
struct UCGFunctionLibrary_GetIsLevelFullyUnloaded_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3824[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetIsDX12GraphicsRHI
struct UCGFunctionLibrary_GetIsDX12GraphicsRHI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetIsDLCLoaded
struct UCGFunctionLibrary_GetIsDLCLoaded_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLCType                          Type;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetIsActorInViewport
struct UCGFunctionLibrary_GetIsActorInViewport_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetHeroCleanAim
struct UCGFunctionLibrary_GetHeroCleanAim_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDebug;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3831[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetHeroAimAngleAtBone
struct UCGFunctionLibrary_GetHeroAimAngleAtBone_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMesh;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InBoneName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3832[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetGraphicsRHI
struct UCGFunctionLibrary_GetGraphicsRHI_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetGameVersionString
struct UCGFunctionLibrary_GetGameVersionString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetFirstKeyForAction
struct UCGFunctionLibrary_GetFirstKeyForAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetEnglishKeyDisplayName
struct UCGFunctionLibrary_GetEnglishKeyDisplayName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveSpaces;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3847[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetDirection
struct UCGFunctionLibrary_GetDirection_Params
{
public:
	struct FVector                               InHeroLocation;                                    // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InHeroForwardVector;                               // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InSourceForwardVector;                             // 0x18(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InSourceRightVector;                               // 0x24(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InSourceLocation;                                  // 0x30(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDirection                        ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetCurrentSkeletalMeshLODIndex
struct UCGFunctionLibrary_GetCurrentSkeletalMeshLODIndex_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetCurrentMap
struct UCGFunctionLibrary_GetCurrentMap_Params
{
public:
	class AActor*                                InLevelActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECGMap                            ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetClockDirection
struct UCGFunctionLibrary_GetClockDirection_Params
{
public:
	struct FVector                               InForwardVector;                                   // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InArbitraryVector;                                 // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClockDirection                   ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3850[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetCGPawnBase
struct UCGFunctionLibrary_GetCGPawnBase_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMainPawnCpp*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetCGGameModeBase
struct UCGFunctionLibrary_GetCGGameModeBase_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGGameModeBase*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetCGGameInstanceBase
struct UCGFunctionLibrary_GetCGGameInstanceBase_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomGameInstance*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetAllKeys
struct UCGFunctionLibrary_GetAllKeys_Params
{
public:
	TArray<struct FKey>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.GetActorBoundsPoints
struct UCGFunctionLibrary_GetActorBoundsPoints_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.FormatDateTime
struct UCGFunctionLibrary_FormatDateTime_Params
{
public:
	struct FDateTime                             DateTime;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Format;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.FindFirstContaining
struct UCGFunctionLibrary_FindFirstContaining_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  PartialName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.FindActiveItemID
struct UCGFunctionLibrary_FindActiveItemID_Params
{
public:
	TSubclassOf<class ACGActiveItem>             InActiveItemClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.EnableThermovisionStencilComponent
struct UCGFunctionLibrary_EnableThermovisionStencilComponent_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3857[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.EnableThermovisionStencil
struct UCGFunctionLibrary_EnableThermovisionStencil_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3858[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.EnableThermovisionForMissingActors
struct UCGFunctionLibrary_EnableThermovisionForMissingActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ACGAICharacter*>                InCurrentActors;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.EnableOutlineStencilComponent
struct UCGFunctionLibrary_EnableOutlineStencilComponent_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.EnableOutlineStencil
struct UCGFunctionLibrary_EnableOutlineStencil_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.DrawTriangle
struct UCGFunctionLibrary_DrawTriangle_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       InVerts;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        InLifeTime;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InColor;                                           // 0x1C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InDepthPriority;                                   // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.DoesAISeeHero
struct UCGFunctionLibrary_DoesAISeeHero_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIType                           InAIType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3860[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.DisableThermovisionForActors
struct UCGFunctionLibrary_DisableThermovisionForActors_Params
{
public:
	TArray<class ACGAICharacter*>                InCurrentActors;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.DisablePhysicalBody
struct UCGFunctionLibrary_DisablePhysicalBody_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMesh;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InBoneName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.DebugLogOnShipping
struct UCGFunctionLibrary_DebugLogOnShipping_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CompareFloatArray
struct UCGFunctionLibrary_CompareFloatArray_Params
{
public:
	TArray<float>                                ArrayA;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                ArrayB;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Threshold;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3865[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CGSortCoversByVisibility
struct UCGFunctionLibrary_CGSortCoversByVisibility_Params
{
public:
	class ACGCharacter*                          InVisibilityTarget;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ACGCover*>                      InOutCovers;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class ACGCover*>                      ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CGMultitrace
struct UCGFunctionLibrary_CGMultitrace_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCGMultitraceResult>           OutHitResults;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               InTraceStart;                                      // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InTraceEnd;                                        // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 InTraceChannel;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3868[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        InActorsToIgnore;                                  // 0x38(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInTraceComplex;                                   // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugEnabled;                                     // 0x49(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3869[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InDebugTime;                                       // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCollisions;                                 // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CGGetPossibleCovers
struct UCGFunctionLibrary_CGGetPossibleCovers_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InPointToSearchFrom;                               // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSearchRadius;                                    // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSearchDeletionRadius;                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGCover*>                      ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CGFilterCoversByCloser
struct UCGFunctionLibrary_CGFilterCoversByCloser_Params
{
public:
	class ACGAICharacter*                        InCoveredCharacter;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InCloserThanTarget;                                // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGCover*>                      InOutCovers;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class ACGCover*>                      ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CGCheckIfItemIsResource
struct UCGFunctionLibrary_CGCheckIfItemIsResource_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3872[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CGApplyDamage
struct UCGFunctionLibrary_CGApplyDamage_Params
{
public:
	class ACGCharacter*                          InDamagedCharacter;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBaseDamage;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3876[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InEventInstigator;                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InDamageCauser;                                    // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInFakeDamage;                                     // 0x100(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3879[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x104(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CallFunctionOnLevelActor
struct UCGFunctionLibrary_CallFunctionOnLevelActor_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InFunctionName;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Args;                                              // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.CallFunctionOnActor
struct UCGFunctionLibrary_CallFunctionOnActor_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InFunctionName;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Args;                                              // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.BenchmarkSaveFinalResults
struct UCGFunctionLibrary_BenchmarkSaveFinalResults_Params
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBenchmarkFinalResult                 Result;                                            // 0x10(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                GraphicQuality;                                    // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BenchResolution;                                   // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WindowModeSettings;                                // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VsyncSettings;                                     // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FrameRateLockSettings;                             // 0x60(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FovSettings;                                       // 0x70(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResulutionScaleSettings;                           // 0x80(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TexturesSettings;                                  // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShadowsSettings;                                   // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EffectsSettings;                                   // 0xB0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PPSettings;                                        // 0xC0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DrawDistanceSettings;                              // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AASettings;                                        // 0xE0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FoliageQualitySettings;                            // 0xF0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RayTracingSettings;                                // 0x100(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FSRSettings;                                       // 0x110(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DLSSSettings;                                      // 0x120(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.BenchmarkHardware
struct UCGFunctionLibrary_BenchmarkHardware_Params
{
public:
	struct FBenchmarkHardware                    ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.BenchmarkGetMinXPercent
struct UCGFunctionLibrary_BenchmarkGetMinXPercent_Params
{
public:
	TArray<float>                                Elems;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3881[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGFunctionLibrary.BenchmarkGetMaxXPercent
struct UCGFunctionLibrary_BenchmarkGetMaxXPercent_Params
{
public:
	TArray<float>                                Elems;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3883[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.UnloadMapAsync
struct ACGGameModeBase_UnloadMapAsync_Params
{
public:
	class FName                                  Level;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.TimerSet
struct ACGGameModeBase_TimerSet_Params
{
public:
	int32                                        Min;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.TimerRemove
struct ACGGameModeBase_TimerRemove_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.TimerAdd
struct ACGGameModeBase_TimerAdd_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGGameModeBase.SubtitleAddWhisper
struct ACGGameModeBase_SubtitleAddWhisper_Params
{
public:
	class FString                                SubtitleText;                                      // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeShown;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorColor;                                        // 0x14(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CGGameModeBase.SubtitleAdd
struct ACGGameModeBase_SubtitleAdd_Params
{
public:
	class FString                                ActorName;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubtitleText;                                      // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeShown;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorColor;                                        // 0x24(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.StaminaEnabled
struct ACGGameModeBase_StaminaEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.ShouldAIDealDamage
struct ACGGameModeBase_ShouldAIDealDamage_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetLODAI3
struct ACGGameModeBase_SetLODAI3_Params
{
public:
	float                                        InNewDistance;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetLODAI2
struct ACGGameModeBase_SetLODAI2_Params
{
public:
	float                                        InNewDistance;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetLODAI1
struct ACGGameModeBase_SetLODAI1_Params
{
public:
	float                                        InNewDistance;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetLODAI0
struct ACGGameModeBase_SetLODAI0_Params
{
public:
	float                                        InNewDistance;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetLevelTime
struct ACGGameModeBase_SetLevelTime_Params
{
public:
	float                                        InNewTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetGodMode
struct ACGGameModeBase_SetGodMode_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetFullQuickSaveMode
struct ACGGameModeBase_SetFullQuickSaveMode_Params
{
public:
	bool                                         IsFullQuickSaveMode;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetForceDemoVersion
struct ACGGameModeBase_SetForceDemoVersion_Params
{
public:
	bool                                         bInForceDemo;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetDebugSoldierEventLevel
struct ACGGameModeBase_SetDebugSoldierEventLevel_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.SetDebugMonsterEventLevel
struct ACGGameModeBase_SetDebugMonsterEventLevel_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGGameModeBase.SavePropertyLinkData
struct ACGGameModeBase_SavePropertyLinkData_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.ResetForcedDLC
struct ACGGameModeBase_ResetForcedDLC_Params
{
public:
	enum class EDLCType                          Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.PrintPendingForceEvent
struct ACGGameModeBase_PrintPendingForceEvent_Params
{
public:
	enum class EEventMap                         MapID;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.PrintIsDLCLoaded
struct ACGGameModeBase_PrintIsDLCLoaded_Params
{
public:
	enum class EDLCType                          Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.PrintActiveEventsForMap
struct ACGGameModeBase_PrintActiveEventsForMap_Params
{
public:
	enum class EEventMap                         MapID;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.PrintActiveEvents
struct ACGGameModeBase_PrintActiveEvents_Params
{
public:
	bool                                         FullDetails;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.PrepareDataForFractalVR
struct ACGGameModeBase_PrepareDataForFractalVR_Params
{
public:
	bool                                         bPrepeare;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.PlayerRadRemove
struct ACGGameModeBase_PlayerRadRemove_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.PlayerRadAdd
struct ACGGameModeBase_PlayerRadAdd_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.PlayerMadnessModify
struct ACGGameModeBase_PlayerMadnessModify_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.PlayerHpSet
struct ACGGameModeBase_PlayerHpSet_Params
{
public:
	float                                        NewHp;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.PlayerHpRemove
struct ACGGameModeBase_PlayerHpRemove_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.PlayerHpAdd
struct ACGGameModeBase_PlayerHpAdd_Params
{
public:
	float                                        HealAmount;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.OnInputAnyGamepadAxis
struct ACGGameModeBase_OnInputAnyGamepadAxis_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGGameModeBase.LoadMapAsync
struct ACGGameModeBase_LoadMapAsync_Params
{
public:
	class FName                                  Level;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transfrom;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               ObjToCall;                                         // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionToCall;                                    // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGGameModeBase.InventoryResize
struct ACGGameModeBase_InventoryResize_Params
{
public:
	int8                                         X;                                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Y;                                                 // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.InventoryRemoveIngredients
struct ACGGameModeBase_InventoryRemoveIngredients_Params
{
public:
	float                                        Count;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGGameModeBase.InventoryRemove
struct ACGGameModeBase_InventoryRemove_Params
{
public:
	class FName                                  Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Count;                                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.InventoryAddIngredients
struct ACGGameModeBase_InventoryAddIngredients_Params
{
public:
	float                                        Count;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGGameModeBase.InventoryAdd
struct ACGGameModeBase_InventoryAdd_Params
{
public:
	class FName                                  Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Count;                                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction ChernobylGame.CGGameModeBase.InputDeviceChangedDelegate__DelegateSignature
struct ACGGameModeBase_InputDeviceChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         NewInputIsGamepad;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.GetPersistentLevel
struct ACGGameModeBase_GetPersistentLevel_Params
{
public:
	class ULevel*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.GetLODAI3
struct ACGGameModeBase_GetLODAI3_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.GetLODAI2
struct ACGGameModeBase_GetLODAI2_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.GetLODAI1
struct ACGGameModeBase_GetLODAI1_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.GetLODAI0
struct ACGGameModeBase_GetLODAI0_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.GetIsPhotoModeActive
struct ACGGameModeBase_GetIsPhotoModeActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.GetCurrentControllerIconsSetting
struct ACGGameModeBase_GetCurrentControllerIconsSetting_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ChernobylGame.CGGameModeBase.GeigerWaveFound__DelegateSignature
struct ACGGameModeBase_GeigerWaveFound__DelegateSignature_Params
{
public:
	class AActor*                                InActorFoundByWave;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.ForceEvent
struct ACGGameModeBase_ForceEvent_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGGameModeBase.ForceDLC
struct ACGGameModeBase_ForceDLC_Params
{
public:
	enum class EDLCType                          Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.ExpAdd
struct ACGGameModeBase_ExpAdd_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.EventUnstream
struct ACGGameModeBase_EventUnstream_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EventSystemPrintActiveEvents
struct ACGGameModeBase_EventSystemPrintActiveEvents_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.EventStream
struct ACGGameModeBase_EventStream_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.EventDeactivate
struct ACGGameModeBase_EventDeactivate_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGGameModeBase.EventActivate
struct ACGGameModeBase_EventActivate_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableSuperGore
struct ACGGameModeBase_EnableSuperGore_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableSoldierEventLevelDebug
struct ACGGameModeBase_EnableSoldierEventLevelDebug_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnablePS4GamepadDebug
struct ACGGameModeBase_EnablePS4GamepadDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableMusicManagerDebug
struct ACGGameModeBase_EnableMusicManagerDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableMultitraceDebug
struct ACGGameModeBase_EnableMultitraceDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableMovementStateDebug
struct ACGGameModeBase_EnableMovementStateDebug_Params
{
public:
	bool                                         InEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableMeleeDamageDebug
struct ACGGameModeBase_EnableMeleeDamageDebug_Params
{
public:
	bool                                         InEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableLevelTimerDebug
struct ACGGameModeBase_EnableLevelTimerDebug_Params
{
public:
	bool                                         bInNewEnable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableGateOfMadnessModeAvailability
struct ACGGameModeBase_EnableGateOfMadnessModeAvailability_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableGateOfMadnessMode
struct ACGGameModeBase_EnableGateOfMadnessMode_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableGateOfMadnessDefaultSaveSystem
struct ACGGameModeBase_EnableGateOfMadnessDefaultSaveSystem_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableGamepadDebug
struct ACGGameModeBase_EnableGamepadDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableDamageDebug
struct ACGGameModeBase_EnableDamageDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableCrouchDebug
struct ACGGameModeBase_EnableCrouchDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableCloseCollisionDebug
struct ACGGameModeBase_EnableCloseCollisionDebug_Params
{
public:
	bool                                         InEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableBuildSystemDebug
struct ACGGameModeBase_EnableBuildSystemDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableAggroDebug
struct ACGGameModeBase_EnableAggroDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableActorsDebugSquad
struct ACGGameModeBase_EnableActorsDebugSquad_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableActorsDebugSkeleton
struct ACGGameModeBase_EnableActorsDebugSkeleton_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableActorsDebugLevel
struct ACGGameModeBase_EnableActorsDebugLevel_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableActorsDebugIK
struct ACGGameModeBase_EnableActorsDebugIK_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableActorsDebugGib
struct ACGGameModeBase_EnableActorsDebugGib_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableActorsDebug
struct ACGGameModeBase_EnableActorsDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGameModeBase.EnableActorDebug
struct ACGGameModeBase_EnableActorDebug_Params
{
public:
	bool                                         InDebug;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.DumpPropertyLink
struct ACGGameModeBase_DumpPropertyLink_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGameModeBase.DebugSetSpecificDay
struct ACGGameModeBase_DebugSetSpecificDay_Params
{
public:
	int32                                        Day;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.CraftingLearnRecipe
struct ACGGameModeBase_CraftingLearnRecipe_Params
{
public:
	class FName                                  Recipe;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGGameModeBase.ComparePropertyLinkData
struct ACGGameModeBase_ComparePropertyLinkData_Params
{
public:
	class FString                                Base;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                New;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyLinkResult               ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.CompanionStats
struct ACGGameModeBase_CompanionStats_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.CompanionAdd
struct ACGGameModeBase_CompanionAdd_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.ChangeLevelTimeLimits
struct ACGGameModeBase_ChangeLevelTimeLimits_Params
{
public:
	int32                                        LevelTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StormTime;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.CancelForceEvent
struct ACGGameModeBase_CancelForceEvent_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGameModeBase.AddPerk
struct ACGGameModeBase_AddPerk_Params
{
public:
	class FName                                  PerkName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGGeigerBaseWidget.UpdateEnviroRandomly
struct UCGGeigerBaseWidget_UpdateEnviroRandomly_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGGeigerBaseWidget.UpdateEnviro
struct UCGGeigerBaseWidget_UpdateEnviro_Params
{
public:
	float                                        Radiation;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRadiation;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRadiation;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GeigerInaccuracyOffset;                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGGeigerBaseWidget.SetupWidgetReferences
struct UCGGeigerBaseWidget_SetupWidgetReferences_Params
{
public:
	class UTextBlock*                            EnviroTextWidget;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                EnviroLineWidget;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                          ArrowContainerWidget;                              // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                ArrowWidget;                                       // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGGibComponent.UpdateMaterialsForGib
struct UCGGibComponent_UpdateMaterialsForGib_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGibMaterialUpdateMode            InUpdateMode;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InAdditionalParamName;                             // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E8 (0x1E8 - 0x0)
// Function ChernobylGame.CGGibComponent.SpawnDetachedGib
struct UCGGibComponent_SpawnDetachedGib_Params
{
public:
	struct FCGGibInfo                            InGibInfo;                                         // 0x0(0x108)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x108(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function ChernobylGame.CGGibComponent.SpawnAttachedGib
struct UCGGibComponent_SpawnAttachedGib_Params
{
public:
	struct FCGGibInfo                            InGibInfo;                                         // 0x0(0x108)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGGibComponent.SetGibOpacityParam
struct UCGGibComponent_SetGibOpacityParam_Params
{
public:
	class FName                                  InParamName;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGGibComponent.SetGibGodmode
struct UCGGibComponent_SetGibGodmode_Params
{
public:
	bool                                         bInGodmode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGGibComponent.SchedulePhysicsChange
struct UCGGibComponent_SchedulePhysicsChange_Params
{
public:
	TArray<class FName>                          InBoneNames;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function ChernobylGame.CGGibComponent.OnHPLost
struct UCGGibComponent_OnHPLost_Params
{
public:
	class AActor*                                InComponentOwner;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRemainingHpPoints;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRemainingHpPercent;                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x10(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                InDamageDealer;                                    // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDamage;                                          // 0xF8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInKillingDamage;                                  // 0xFC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGGibComponent.HideComponentsByName
struct UCGGibComponent_HideComponentsByName_Params
{
public:
	TArray<class UActorComponent*>               InSceneComps;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FString>                        InCompNames;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGHearingSense.ReceiveNoise
struct UCGHearingSense_ReceiveNoise_Params
{
public:
	class AActor*                                InInstigator;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseRange;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InNoiseLocation;                                   // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNoiseStrength;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTag;                                             // 0x1C(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIgnoreSenseBlock;                               // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InMaxDistanceToActivateCombat;                     // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3950[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGLevelTimer.OnTimerUpdate
struct UCGLevelTimer_OnTimerUpdate_Params
{
public:
	class FString                                InNewStringTime;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewFloatTime;                                      // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3953[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGLevelTimerComponent.SetRemainingTime
struct UCGLevelTimerComponent_SetRemainingTime_Params
{
public:
	int32                                        InNewRemainingTime;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGLevelTimerComponent.SetEnableDebug
struct UCGLevelTimerComponent_SetEnableDebug_Params
{
public:
	bool                                         bInNewEnable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGLevelTimerComponent.GetRemainingTimeAsString
struct UCGLevelTimerComponent_GetRemainingTimeAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGLevelTimerComponent.GetRemainingTime
struct UCGLevelTimerComponent_GetRemainingTime_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CGMath.Step
struct UCGMath_Step_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Step;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        A;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGMath.SetAngularRotationOffset
struct UCGMath_SetAngularRotationOffset_Params
{
public:
	class UPhysicsConstraintComponent*           PhysicsConstraintComponent;                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Offset;                                            // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3965[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CGMath.PolarToCartesian
struct UCGMath_PolarToCartesian_Params
{
public:
	float                                        InRad;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InAng;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutX;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutY;                                              // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChernobylGame.CGMath.PointOnSphere
struct UCGMath_PointOnSphere_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InYaw;                                             // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InPitch;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InOrigin;                                          // 0xC(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.CGMath.PointInsideRectangle2D
struct UCGMath_PointInsideRectangle2D_Params
{
public:
	struct FVector2D                             Start;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             End;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Point;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGMath.PointInsideCircle2D
struct UCGMath_PointInsideCircle2D_Params
{
public:
	struct FVector2D                             Point;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SphereCenter;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3970[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.CGMath.PointInNegativeHalfSpace2D
struct UCGMath_PointInNegativeHalfSpace2D_Params
{
public:
	struct FVector2D                             PlaneNormal;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PlanePoint;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Point;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3976[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.CGMath.OuterProduct
struct UCGMath_OuterProduct_Params
{
public:
	struct FVector2D                             InLine1stPoint;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InLine2ndPoint;                                    // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InPoint;                                           // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGMath.MapRectangleToCircle
struct UCGMath_MapRectangleToCircle_Params
{
public:
	struct FVector2D                             InPointInRect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InRectSize;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGMath.MapCircleToRectangle
struct UCGMath_MapCircleToRectangle_Params
{
public:
	struct FVector2D                             Uv;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             HalfRecSize;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGMath.LineSegmentPointCollision2D
struct UCGMath_LineSegmentPointCollision2D_Params
{
public:
	struct FVector2D                             Start;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             End;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Point;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Epsilon;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CGMath.IsInsideBox
struct UCGMath_IsInsideBox_Params
{
public:
	struct FVector2D                             Point;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3995[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGMath.IsFacingSpecifiedDirection
struct UCGMath_IsFacingSpecifiedDirection_Params
{
public:
	struct FVector2D                             DirectionA;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DirectionB;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_399A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGMath.IsClose
struct UCGMath_IsClose_Params
{
public:
	struct FVector                               InCloseTo;                                         // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRadius;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InVector;                                          // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_399F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGMath.IntersetionOfIntArrays
struct UCGMath_IntersetionOfIntArrays_Params
{
public:
	TArray<int32>                                InA;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                InB;                                               // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                OutIntersection;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGMath.IntersetionOfFloatArrays
struct UCGMath_IntersetionOfFloatArrays_Params
{
public:
	TArray<float>                                InA;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                InB;                                               // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                OutIntersection;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGMath.GetAverageDelta
struct UCGMath_GetAverageDelta_Params
{
public:
	TArray<float>                                InArray;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39AE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGMath.GetAverage
struct UCGMath_GetAverage_Params
{
public:
	TArray<float>                                InArray;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGMath.GetAngleToTarget
struct UCGMath_GetAngleToTarget_Params
{
public:
	struct FVector                               InStart;                                           // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InForward;                                         // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InTarget;                                          // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGMath.Gain
struct UCGMath_Gain_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        K;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CGMath.CreateReflectionTransform
struct UCGMath_CreateReflectionTransform_Params
{
public:
	struct FTransform                            OutTransform;                                      // 0x0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlane                                InPlane;                                           // 0x30(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.CGMath.ChangeRotationOrder
struct UCGMath_ChangeRotationOrder_Params
{
public:
	struct FRotator                              InRotator;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               InOrder;                                           // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CGMath.CartesianToPolar
struct UCGMath_CartesianToPolar_Params
{
public:
	float                                        InX;                                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InY;                                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutRad;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutAng;                                            // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGMath.ArrayToStack
struct UCGMath_ArrayToStack_Params
{
public:
	TArray<float>                                InArray;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        InNewElement;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChernobylGame.CGMath.AABB2D
struct UCGMath_AABB2D_Params
{
public:
	struct FVector2D                             StartA;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             EndA;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             StartB;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             EndB;                                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39CF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMultitraceInterface.GetShouldIgnoreAfterFirstMultitraceHit
struct ICGMultitraceInterface_GetShouldIgnoreAfterFirstMultitraceHit_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGMusicManager.SetQuest
struct ACGMusicManager_SetQuest_Params
{
public:
	class FName                                  InQuestSignalName;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMusicManager.SetMusicEnabled
struct ACGMusicManager_SetMusicEnabled_Params
{
public:
	bool                                         bInNewEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMusicManager.GetCurrentMode
struct ACGMusicManager_GetCurrentMode_Params
{
public:
	enum class ECGMapMusicMode                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMusicManager.GetCurrentEvent
struct ACGMusicManager_GetCurrentEvent_Params
{
public:
	enum class ECGMapMusicEvent                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMusicManager.EnableAllEvents
struct ACGMusicManager_EnableAllEvents_Params
{
public:
	enum class ECGMapMusicEvent                  InEventType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMusicManager.DisableAllEvents
struct ACGMusicManager_DisableAllEvents_Params
{
public:
	enum class ECGMapMusicEvent                  InEventType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMusicVolume.SetVolumeEnabled
struct ACGMusicVolume_SetVolumeEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChernobylGame.CGMusicVolume.OnOverlapStart
struct ACGMusicVolume_OnOverlapStart_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGMusicVolume.OnOverlapEnd
struct ACGMusicVolume_OnOverlapEnd_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGMusicVolume.GetVolumeEnabled
struct ACGMusicVolume_GetVolumeEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGNPC.SetFrightened
struct ACGNPC_SetFrightened_Params
{
public:
	bool                                         bInValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGNPC.SetBuildingInteractionStats
struct ACGNPC_SetBuildingInteractionStats_Params
{
public:
	struct FNPCBuildingInteractionStats          InStats;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGNPC.GetBuildingInteractionStats
struct ACGNPC_GetBuildingInteractionStats_Params
{
public:
	struct FNPCBuildingInteractionStats          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGNPCHeadTracingComponent.SetNPCHeadTracingEnabled
struct UCGNPCHeadTracingComponent_SetNPCHeadTracingEnabled_Params
{
public:
	bool                                         bInNewEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGNPCHeadTracingComponent.GetHeroInTracing
struct UCGNPCHeadTracingComponent_GetHeroInTracing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ChernobylGame.CGOnScreenLog.OnAIDamageReceived
struct UCGOnScreenLog_OnAIDamageReceived_Params
{
public:
	class AActor*                                InDamageCauser;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InDamageReceiver;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x10(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        InDamage;                                          // 0xF0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPathFollowingComponent.K2_GetRemainingPathCost
struct UCGPathFollowingComponent_K2_GetRemainingPathCost_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGPathFollowingComponent.GetIsAIDecelerating
struct UCGPathFollowingComponent_GetIsAIDecelerating_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGPDAState.ShowingAnimFinished
struct ACGPDAState_ShowingAnimFinished_Params
{
public:
	class UAnimMontage*                          InMontage;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InInterrupted;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGPDAState.QueryFinished
struct ACGPDAState_QueryFinished_Params
{
public:
	enum class EState                            InInitialItemState;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGActiveItem>             InInitialItemClass;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPerceptionVolume.GetBPIndex
struct ACGPerceptionVolume_GetBPIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeCameraController.SetViewRoll
struct ACGPhotoModeCameraController_SetViewRoll_Params
{
public:
	float                                        NewViewRoll;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeCameraController.SetFOV
struct ACGPhotoModeCameraController_SetFOV_Params
{
public:
	float                                        NewFOV;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeCameraController.GetViewRoll
struct ACGPhotoModeCameraController_GetViewRoll_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGPhotoModeCameraController.GetPawnCameraComponent
struct ACGPhotoModeCameraController_GetPawnCameraComponent_Params
{
public:
	class UCameraComponent*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeCameraController.GetFOV
struct ACGPhotoModeCameraController_GetFOV_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeMovementState.Global_Movement_UpDown
struct ACGPhotoModeMovementState_Global_Movement_UpDown_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeMovementState.Global_Movement_RightLeft
struct ACGPhotoModeMovementState_Global_Movement_RightLeft_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeMovementState.Global_Movement_Look_UpDown
struct ACGPhotoModeMovementState_Global_Movement_Look_UpDown_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeMovementState.Global_Movement_Look_RightLeft
struct ACGPhotoModeMovementState_Global_Movement_Look_RightLeft_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeMovementState.Global_Movement_Lean
struct ACGPhotoModeMovementState_Global_Movement_Lean_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeMovementState.Console_Movement_Rotate_Right
struct ACGPhotoModeMovementState_Console_Movement_Rotate_Right_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeMovementState.Console_Movement_Rotate_Left
struct ACGPhotoModeMovementState_Console_Movement_Rotate_Left_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGPhotoModePawn.SetNewInputState
struct ACGPhotoModePawn_SetNewInputState_Params
{
public:
	TSubclassOf<class ACGPhotoModeMovementState> NewState;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGPhotoModePawn.GetCurrentInputState
struct ACGPhotoModePawn_GetCurrentInputState_Params
{
public:
	class ACGPhotoModeMovementState*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGPhotoModeWidget.OnUIStateChange
struct UCGPhotoModeWidget_OnUIStateChange_Params
{
public:
	enum class EPhotoModeUIState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeWidget.InputUpDown
struct UCGPhotoModeWidget_InputUpDown_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGPhotoModeWidget.InputLeftRight
struct UCGPhotoModeWidget_InputLeftRight_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGPhysicsUtil.GetAllCollisionChannels
struct UCGPhysicsUtil_GetAllCollisionChannels_Params
{
public:
	TArray<enum class ECollisionChannel>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGPlayCustomAnimInterface.Init
struct ICGPlayCustomAnimInterface_Init_Params
{
public:
	class UAnimSequenceBase*                     InCustomAnim;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InStartPosition;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AEA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGPlayerCameraManager.StartCameraFadeInOut
struct ACGPlayerCameraManager_StartCameraFadeInOut_Params
{
public:
	float                                        InFadeInTime;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InFadeOutTime;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGPlayerCameraManager.SetCustomBlurModifier
struct ACGPlayerCameraManager_SetCustomBlurModifier_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Modifier;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGPlayerController.OnInputDeviceChanged
struct ACGPlayerController_OnInputDeviceChanged_Params
{
public:
	bool                                         bIsGamepadInput;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChernobylGame.CGProjectile.OnProjectileCollisionBeginOverlap
struct ACGProjectile_OnProjectileCollisionBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   InOverlappedComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOtherActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InOtherComp;                                       // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InOtherBodyIndex;                                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFromSweep;                                      // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            InSweepResult;                                     // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B03[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGResourceDistributor.SetMultiThread
struct ACGResourceDistributor_SetMultiThread_Params
{
public:
	bool                                         bTickAnywhere;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadow.WallTeleportOutAnim_Finish
struct ACGShadow_WallTeleportOutAnim_Finish_Params
{
public:
	class UAnimMontage*                          InAnimMontage;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InWasInterrupted;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B27[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadow.WallTeleportAnim_Finish
struct ACGShadow_WallTeleportAnim_Finish_Params
{
public:
	class UAnimMontage*                          InAnimMontage;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InWasInterrupted;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGShadow.ShadowUseTeleporter
struct ACGShadow_ShadowUseTeleporter_Params
{
public:
	class ACGShadowTeleportBase*                 InTargetTeleporter;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDuration;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          InMontageToPlay;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadow.ShadowComeOutOfTeleport
struct ACGShadow_ShadowComeOutOfTeleport_Params
{
public:
	class ACGShadowTeleportBase*                 InTargetTeleporter;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          InMontageToPlay;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGShadow.SetNewTeleportingArea
struct ACGShadow_SetNewTeleportingArea_Params
{
public:
	class ACGShadowTeleportingAreaBase*          InNewArea;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadow.GetOverlappingTeleportAreas
struct ACGShadow_GetOverlappingTeleportAreas_Params
{
public:
	TArray<class ACGShadowTeleportingAreaBase*>  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGShadow.GetCurrentTeleportingArea
struct ACGShadow_GetCurrentTeleportingArea_Params
{
public:
	class ACGShadowTeleportingAreaBase*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadow.GetAssociatedCombatZones
struct ACGShadow_GetAssociatedCombatZones_Params
{
public:
	TArray<class ACGShadowCombatZoneBase*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGShadow.FindWarpProperties
struct ACGShadow_FindWarpProperties_Params
{
public:
	bool                                         bInShouldDebug;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGShadow.FindTeleportersInRadius
struct ACGShadow_FindTeleportersInRadius_Params
{
public:
	class ACGShadowTeleportingAreaBase*          InArea;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InTargetLocation;                                  // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRadius;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMaxPathLength;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGShadowTeleportBase*>         ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGShadow.FindPossibleTeleportConnection
struct ACGShadow_FindPossibleTeleportConnection_Params
{
public:
	struct FVector                               InTarget;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTeleportationRoutePair               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGShadow.FindClosestTeleporter
struct ACGShadow_FindClosestTeleporter_Params
{
public:
	class ACGShadowTeleportingAreaBase*          InArea;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InTargetLocation;                                  // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGShadowTeleportBase*                 ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGShadow.BeginPlayFindTP
struct ACGShadow_BeginPlayFindTP_Params
{
public:
	class ACGShadowTeleportingAreaBase*          InInitialArea;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APatrolActor*>                  InPatrolActors;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadow.BeginPlayFindPatrol
struct ACGShadow_BeginPlayFindPatrol_Params
{
public:
	TArray<class APatrolActor*>                  InPatrolActors;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGShadowCombatZoneBase.OnShadowLeft
struct ACGShadowCombatZoneBase_OnShadowLeft_Params
{
public:
	class UPrimitiveComponent*                   InOverlappedComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOtherActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InOtherComp;                                       // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InOtherBodyIndex;                                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B55[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function ChernobylGame.CGShadowCombatZoneBase.OnShadowEntered
struct ACGShadowCombatZoneBase_OnShadowEntered_Params
{
public:
	class UPrimitiveComponent*                   InOverlappedComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOtherActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InOtherComp;                                       // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InOtherBodyIndex;                                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InbFromSweep;                                      // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            InSweepResult;                                     // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B63[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGShadowTeleportBase.ScheduleEnabled
struct ACGShadowTeleportBase_ScheduleEnabled_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInEnabled;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B69[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGShadowTeleportBase.GetRandomValidTeleport
struct ACGShadowTeleportBase_GetRandomValidTeleport_Params
{
public:
	class ACGShadowTeleportBase*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGShadowTeleportBase.GetRandomNextTeleport
struct ACGShadowTeleportBase_GetRandomNextTeleport_Params
{
public:
	class ACGShadowTeleportBase*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGShadowTeleportBase.GetRandomNextPatrolPoint
struct ACGShadowTeleportBase_GetRandomNextPatrolPoint_Params
{
public:
	class AShadowPatrolActor*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGShadowTeleportBase.GetOverlappingArea
struct ACGShadowTeleportBase_GetOverlappingArea_Params
{
public:
	class ACGShadowTeleportingAreaBase*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGShadowTeleportingAreaBase.GetRandomAreaFromAdjacent
struct ACGShadowTeleportingAreaBase_GetRandomAreaFromAdjacent_Params
{
public:
	struct FAdjacentAreaQueryResult              InOutAdjacentAreaQuery;                            // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         InShouldPrioritiseHero;                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InChanceToChooseHero;                              // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadowTeleportingAreaBase.GetAssociatedTeleports
struct ACGShadowTeleportingAreaBase_GetAssociatedTeleports_Params
{
public:
	TArray<class ACGShadowTeleportBase*>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGShadowTeleportingAreaBase.GetAssociatedPatrolActors
struct ACGShadowTeleportingAreaBase_GetAssociatedPatrolActors_Params
{
public:
	TArray<class APatrolActor*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSoldier.VirtuaAimTickUpdate
struct ACGSoldier_VirtuaAimTickUpdate_Params
{
public:
	float                                        InAlpha;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CGSoldier.ShootTargetBullet
struct ACGSoldier_ShootTargetBullet_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InAngleSpread;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InShootTarget;                                     // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InOptionalCustomStartLocation;                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InProjectileSweepSteps;                            // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InProjectileSpeed;                                 // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInOptionalCustomStart;                            // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGProjectile*                         ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGSoldier.ShootTarget
struct ACGSoldier_ShootTarget_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InAngleSpread;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InShootTarget;                                     // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutTargetHit;                                     // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InOptionalCustomRayStartLocation;                  // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInOptionalCustomRayStart;                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFakeShot;                                       // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDebug;                                          // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBD[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGSoldier.Shoot
struct ACGSoldier_Shoot_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InAngleSpread;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InOptionalCustomRayStartLocation;                  // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutTargetHit;                                     // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInOptionalCustomRayStart;                         // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFakeShot;                                       // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDebug;                                          // 0x1B(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSoldier.SetSquadManager
struct ACGSoldier_SetSquadManager_Params
{
public:
	class ACGSquadManager*                       InNewSquad;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSoldier.SetShooterCooldown
struct ACGSoldier_SetShooterCooldown_Params
{
public:
	float                                        InNewCooldown;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSoldier.SetCurrentCoverType
struct ACGSoldier_SetCurrentCoverType_Params
{
public:
	enum class ECoverType                        InCoverType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSoldier.PlaySoundWithSubtitles
struct ACGSoldier_PlaySoundWithSubtitles_Params
{
public:
	class USoundBase*                            InSoundToPlay;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGSoldier.GetSquadMembers
struct ACGSoldier_GetSquadMembers_Params
{
public:
	TArray<class ACGSoldier*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSoldier.GetSquadManager
struct ACGSoldier_GetSquadManager_Params
{
public:
	class ACGSquadManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSoldier.GetShooterCooldown
struct ACGSoldier_GetShooterCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSoldier.GetRandomNewShooterCooldown
struct ACGSoldier_GetRandomNewShooterCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSoldier.GetIsHuntFacingHero
struct ACGSoldier_GetIsHuntFacingHero_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSoldier.GetInitializedSquadManager
struct ACGSoldier_GetInitializedSquadManager_Params
{
public:
	class ACGSquadManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSoldier.GetCurrentCoverType
struct ACGSoldier_GetCurrentCoverType_Params
{
public:
	enum class ECoverType                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGSoldier.GetCoverTypeValidityPerSoldier
struct ACGSoldier_GetCoverTypeValidityPerSoldier_Params
{
public:
	class ACGCover*                              InCover;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGCharacter*                          InTarget;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverType                        InCoverType;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CGSoldier.GetComfortableCombatRadiusQuery
struct ACGSoldier_GetComfortableCombatRadiusQuery_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGComfortableCombatRadiusQuery       ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSoldier.FindCover
struct ACGSoldier_FindCover_Params
{
public:
	class ACGCover*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGSquadManager.UpdateSquadHeroPosition
struct ACGSquadManager_UpdateSquadHeroPosition_Params
{
public:
	struct FVector                               InNewHeroPosition;                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSquadManager.UpdateSquadHeroLastKnownPosFlag
struct ACGSquadManager_UpdateSquadHeroLastKnownPosFlag_Params
{
public:
	float                                        InMaxOffset;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.TransitionSquad
struct ACGSquadManager_TransitionSquad_Params
{
public:
	class ACGSquadManager*                       InSquadToTransitionTo;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.SetSquadName
struct ACGSquadManager_SetSquadName_Params
{
public:
	class FName                                  InNewSquadName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.SetHeroOpenedFire
struct ACGSquadManager_SetHeroOpenedFire_Params
{
public:
	bool                                         InOpenedFire;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.SetChase
struct ACGSquadManager_SetChase_Params
{
public:
	bool                                         bInNewChase;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSquadManager.SetAddShooterCooldown
struct ACGSquadManager_SetAddShooterCooldown_Params
{
public:
	float                                        InCooldown;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.RemoveSquadMember
struct ACGSquadManager_RemoveSquadMember_Params
{
public:
	class ACGSoldier*                            InSquadMemberToRemove;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.RemoveShooter
struct ACGSquadManager_RemoveShooter_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.PatrolExitMember
struct ACGSquadManager_PatrolExitMember_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.PatrolBackInPlaceMember
struct ACGSquadManager_PatrolBackInPlaceMember_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.OnSquadStateChangedImpl
struct ACGSquadManager_OnSquadStateChangedImpl_Params
{
public:
	enum class ESquadType                        InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.CGSquadManager.GiveOrder
struct ACGSquadManager_GiveOrder_Params
{
public:
	struct FOrderQuery                           InOrder;                                           // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.GetSquadType
struct ACGSquadManager_GetSquadType_Params
{
public:
	enum class ESquadType                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.GetSquadSeeHero
struct ACGSquadManager_GetSquadSeeHero_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.GetSquadName
struct ACGSquadManager_GetSquadName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGSquadManager.GetSquadMembers
struct ACGSquadManager_GetSquadMembers_Params
{
public:
	TArray<class ACGSoldier*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGSquadManager.GetSquadHeroLastKnownPosition
struct ACGSquadManager_GetSquadHeroLastKnownPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGSquadManager.GetSquadHasMemoryOfHero
struct ACGSquadManager_GetSquadHasMemoryOfHero_Params
{
public:
	enum class EPerceptionType                   InPerceptionMemoryType;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSquadManager.GetSquadChaseTimeElapsed
struct ACGSquadManager_GetSquadChaseTimeElapsed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGSquadManager.GetShooters
struct ACGSquadManager_GetShooters_Params
{
public:
	TArray<class ACGSoldier*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGSquadManager.GetPatrolExitRotationMember
struct ACGSquadManager_GetPatrolExitRotationMember_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGSquadManager.GetPatrolExitLocationMember
struct ACGSquadManager_GetPatrolExitLocationMember_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGSquadManager.GetPatrolExitLocation
struct ACGSquadManager_GetPatrolExitLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSquadManager.GetMaxShooters
struct ACGSquadManager_GetMaxShooters_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.GetHeroOpenedFire
struct ACGSquadManager_GetHeroOpenedFire_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.GetHeroNearLastKnownPosition
struct ACGSquadManager_GetHeroNearLastKnownPosition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSquadManager.GetForHowLongCantSeeHero
struct ACGSquadManager_GetForHowLongCantSeeHero_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGSquadManager.GetEngagedInOpenCombat
struct ACGSquadManager_GetEngagedInOpenCombat_Params
{
public:
	TArray<class ACGSoldier*>                    ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.GetCanSquadSeeHeroElapsed
struct ACGSquadManager_GetCanSquadSeeHeroElapsed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGSquadManager.GetCanSquadSeeHero
struct ACGSquadManager_GetCanSquadSeeHero_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGSquadManager.GetCanAddNewVirtuaShooter
struct ACGSquadManager_GetCanAddNewVirtuaShooter_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGSquadManager.GetAlertedSquadMembers
struct ACGSquadManager_GetAlertedSquadMembers_Params
{
public:
	TArray<class ACGSoldier*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGSquadManager.GetAddShooterCooldown
struct ACGSquadManager_GetAddShooterCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.EngageOpenCombat
struct ACGSquadManager_EngageOpenCombat_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.DisengageOpenCombat
struct ACGSquadManager_DisengageOpenCombat_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CGSquadManager.AreMembersTogether
struct ACGSquadManager_AreMembersTogether_Params
{
public:
	struct FVector                               InOriginOfCheck;                                   // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InCheckRadius;                                     // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGSquadManager.AddSquadMember
struct ACGSquadManager_AddSquadMember_Params
{
public:
	class ACGSoldier*                            InNewSquadMember;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGSquadManager.AddShooter
struct ACGSquadManager_AddShooter_Params
{
public:
	class ACGSoldier*                            InSoldier;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGTimelinePayloadWidget.InitPayload
struct UCGTimelinePayloadWidget_InitPayload_Params
{
public:
	struct FDialogueTimelinePayloadData          Payload;                                           // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGUtilities.IsInPIE
struct UCGUtilities_IsInPIE_Params
{
public:
	class UObject*                               WorldCtx;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BED[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGUtilities.IsInGame
struct UCGUtilities_IsInGame_Params
{
public:
	class UObject*                               WorldCtx;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGUtilities.IsInEditor
struct UCGUtilities_IsInEditor_Params
{
public:
	class UObject*                               WorldCtx;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGUtilities.GetStringsByTag
struct UCGUtilities_GetStringsByTag_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTagContent>                   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGUtilities.GetParentClass
struct UCGUtilities_GetParentClass_Params
{
public:
	class UClass*                                Child;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGUtilities.GetCurrentPersistantLevel
struct UCGUtilities_GetCurrentPersistantLevel_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGUtilities.GetAllComponentsFromActorByInterface
struct UCGUtilities_GetAllComponentsFromActorByInterface_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                Interface;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>               ReturnValue;                                       // 0x10(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGUtilities.ArraySubtractionFName
struct UCGUtilities_ArraySubtractionFName_Params
{
public:
	TArray<class FName>                          ArrayA;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ArrayB;                                            // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGUtilities.ArrayIntersectionFName
struct UCGUtilities_ArrayIntersectionFName_Params
{
public:
	TArray<class FName>                          ArrayA;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ArrayB;                                            // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGVirtuaIndicator.Reverse
struct UCGVirtuaIndicator_Reverse_Params
{
public:
	float                                        InTimeElapsed;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGVirtuaIndicator.Resume
struct UCGVirtuaIndicator_Resume_Params
{
public:
	float                                        InTimeElapsed;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGVirtuaIndicator.GetVirtuaCrosshairAnimation
struct UCGVirtuaIndicator_GetVirtuaCrosshairAnimation_Params
{
public:
	class UWidgetAnimation*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGVirtuaIndicator.Finish
struct UCGVirtuaIndicator_Finish_Params
{
public:
	bool                                         bInSuccess;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        InCharacter;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGVirtuaIndicatorOffsight.Start
struct UCGVirtuaIndicatorOffsight_Start_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CGVirtuaIndicatorOffsight.SetCustomVirtuaOffsightMaterial
struct UCGVirtuaIndicatorOffsight_SetCustomVirtuaOffsightMaterial_Params
{
public:
	TSoftObjectPtr<class UMaterialInstance>      CustomMaterial;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGVisibilityModifierComponent.OwnerEndOverlap
struct UCGVisibilityModifierComponent_OwnerEndOverlap_Params
{
public:
	class AActor*                                InOverlappedActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOtherActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGVisibilityModifierComponent.OwnerBeginOverlap
struct UCGVisibilityModifierComponent_OwnerBeginOverlap_Params
{
public:
	class AActor*                                InOverlappedActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOtherActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGWeapon.UseBullet
struct ACGWeapon_UseBullet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CGWeapon.UpdateMeshWithMaterials
struct ACGWeapon_UpdateMeshWithMaterials_Params
{
public:
	TArray<class UPrimitiveComponent*>           MeshComponents;                                    // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x10(0x10)(Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CGWeapon.SpawnBulletShell
struct ACGWeapon_SpawnBulletShell_Params
{
public:
	class UParticleSystem*                       InEmitterTemplate;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InSpawnTransform;                                  // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               InVelocity;                                        // 0x40(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InRadialVelocity;                                  // 0x4C(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InLifeTime;                                        // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CGWeapon.SetNewWeaponState
struct ACGWeapon_SetNewWeaponState_Params
{
public:
	enum class EWeaponState                      InNewWeaponState;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponState                      ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGWeapon.SetMaterialsDisplay
struct ACGWeapon_SetMaterialsDisplay_Params
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           MeshMesh;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeCrafted;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C33[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGWeapon.SetClipCurrentSize
struct ACGWeapon_SetClipCurrentSize_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function ChernobylGame.CGWeapon.ReloadFinished
struct ACGWeapon_ReloadFinished_Params
{
public:
	enum class EWeaponState                      InPostReloadState;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBroadcast;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInNoSwap;                                         // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGWeapon.OnUpdateAttachmentSkin
struct ACGWeapon_OnUpdateAttachmentSkin_Params
{
public:
	class FName                                  UpgradeID;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGWeapon.OnTriggerUpgrade
struct ACGWeapon_OnTriggerUpgrade_Params
{
public:
	struct FCGTriggerProperties                  InNewTriggerProperties;                            // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGWeapon.OnShellCollision
struct ACGWeapon_OnShellCollision_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InEmitterTime;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InParticleTime;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InLocation;                                        // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InVelocity;                                        // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InDirection;                                       // 0x28(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InNormal;                                          // 0x34(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InBoneName;                                        // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     InPhysMat;                                         // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGWeapon.OnScopeUpgrade
struct ACGWeapon_OnScopeUpgrade_Params
{
public:
	struct FCGScopeProperties                    InNewScopeProperties;                              // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGWeapon.OnMagazineUpgrade
struct ACGWeapon_OnMagazineUpgrade_Params
{
public:
	struct FCGMagazineProperties                 InNewMagazineProperties;                           // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGWeapon.OnHandleUpgrade
struct ACGWeapon_OnHandleUpgrade_Params
{
public:
	struct FCGHandleProperties                   InNewHandleProperties;                             // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGWeapon.OnForceReloadFinished
struct ACGWeapon_OnForceReloadFinished_Params
{
public:
	bool                                         bInNoSwap;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CGWeapon.OnBarrelUpgrade
struct ACGWeapon_OnBarrelUpgrade_Params
{
public:
	struct FCGBarrelProperties                   InNewBarrelProperties;                             // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGWeapon.K2_GetAttachmentSkinInfo
struct ACGWeapon_K2_GetAttachmentSkinInfo_Params
{
public:
	class FName                                  UpgradeID;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutIsValid;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttachmentSkinInfo                   ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CGWeapon.GetOtherAmmoType
struct ACGWeapon_GetOtherAmmoType_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CGWeapon.GetIsWeaponBroken
struct ACGWeapon_GetIsWeaponBroken_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CGWeapon.GetDefaultMeshMaterials
struct ACGWeapon_GetDefaultMeshMaterials_Params
{
public:
	TArray<TSoftObjectPtr<class UMaterialInterface>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGWeapon.GetClipMaxSizeWithUpgrade
struct ACGWeapon_GetClipMaxSizeWithUpgrade_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CGWeapon.GetAdditionalBulletCost
struct ACGWeapon_GetAdditionalBulletCost_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CGWeapon.FindAttachmentProperties
struct ACGWeapon_FindAttachmentProperties_Params
{
public:
	bool                                         bOutFound;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            InDataTable;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InUpgradeName;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGAttachmentProperties               ReturnValue;                                       // 0x18(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CGWeapon.CalculateRecoil
struct ACGWeapon_CalculateRecoil_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CGWeapon.CalculateHipShot
struct ACGWeapon_CalculateHipShot_Params
{
public:
	bool                                         InShouldDebugTrace;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CGWeapon.CalculateAimedShot
struct ACGWeapon_CalculateAimedShot_Params
{
public:
	bool                                         InShouldDebugTrace;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCGMultitraceResult>           OutMultitraceResults;                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInShouldIgnoreCollisions;                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCGShootResult>                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Crafting.TryCraftItemFromAnyRecipe
struct UCrafting_TryCraftItemFromAnyRecipe_Params
{
public:
	class FName                                  ItemType;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSuccess;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Crafting.LearnRecipe
struct UCrafting_LearnRecipe_Params
{
public:
	class FName                                  RecipeID;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Crafting.ForgetRecipe
struct UCrafting_ForgetRecipe_Params
{
public:
	class FName                                  RecipeID;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSomethingDeleted;                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.Crafting.FindKnownRecipeForItem
struct UCrafting_FindKnownRecipeForItem_Params
{
public:
	class FName                                  ItemType;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSuccess;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OutRecipeID;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.Crafting.FindAllKnownRecipesForItem
struct UCrafting_FindAllKnownRecipesForItem_Params
{
public:
	class FName                                  ItemType;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutRecipeIDs;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Crafting.Craft
struct UCrafting_Craft_Params
{
public:
	class FName                                  FromRecipe;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Crafting.CanCraftFromRecipe
struct UCrafting_CanCraftFromRecipe_Params
{
public:
	class FName                                  RecipeID;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftingResult                   ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C70[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.Crafting.CanCraftFromAnyRecipe
struct UCrafting_CanCraftFromAnyRecipe_Params
{
public:
	class FName                                  ItemType;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftingResult                   ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C75[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Crafting.ApplyPerks
struct UCrafting_ApplyPerks_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CraftingUtilityFunctionsLibrary.ParseTextIntoFragmentsAndParameters
struct UCraftingUtilityFunctionsLibrary_ParseTextIntoFragmentsAndParameters_Params
{
public:
	class FString                                InText;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTextWithImagePart>            OutData;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CristalsGenerator.Show
struct ACristalsGenerator_Show_Params
{
public:
	enum class EAnimationsDirection              Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CristalsGenerator.Hide
struct ACristalsGenerator_Hide_Params
{
public:
	enum class EAnimationsDirection              Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.WriteAchievement
struct UCustomGameInstance_WriteAchievement_Params
{
public:
	enum class EAchievementType                  AchievementType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.ValidateArmor_CPP
struct UCustomGameInstance_ValidateArmor_CPP_Params
{
public:
	bool                                         bShowMessage;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.UseFoodFromTemporalStorage
struct UCustomGameInstance_UseFoodFromTemporalStorage_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.UseCustomSaves
struct UCustomGameInstance_UseCustomSaves_Params
{
public:
	class FString                                Day;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.UpgradeSystemGetGlobalStatValue
struct UCustomGameInstance_UpgradeSystemGetGlobalStatValue_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CustomGameInstance.UpgradeSystemGetGlobalStatInfo
struct UCustomGameInstance_UpgradeSystemGetGlobalStatInfo_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpgradeStat                          ReturnValue;                                       // 0x8(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.UpdateSkinForSkeletalMeshComponent
struct UCustomGameInstance_UpdateSkinForSkeletalMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CustomGameInstance.TrySetCompanionAtSpot
struct UCustomGameInstance_TrySetCompanionAtSpot_Params
{
public:
	class ACGNPC*                                Companion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnPositionActor;                               // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseBuildSystemEntity*                Entity;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuildEntityCompanionSpotComponent*    SpotComponent;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C81[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.Test_LoadLevelByName
struct UCustomGameInstance_Test_LoadLevelByName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.TakeScreenshotForSaveSystem
struct UCustomGameInstance_TakeScreenshotForSaveSystem_Params
{
public:
	bool                                         IsDaySave;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.StartLoadingScreen
struct UCustomGameInstance_StartLoadingScreen_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.SquadLostTrack
struct UCustomGameInstance_SquadLostTrack_Params
{
public:
	class ACGSquadManager*                       InSquad;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.SquadGotTrack
struct UCustomGameInstance_SquadGotTrack_Params
{
public:
	class ACGSquadManager*                       InSquad;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.SetWeaponDurability
struct UCustomGameInstance_SetWeaponDurability_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetStatsForCompanion
struct UCustomGameInstance_SetStatsForCompanion_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCompanionEntry                       Info;                                              // 0x8(0x60)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C83[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetQuestForMap
struct UCustomGameInstance_SetQuestForMap_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  QuestID;                                           // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OldQuestID;                                        // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C85[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetProbabilityOfQuest
struct UCustomGameInstance_SetProbabilityOfQuest_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Probability;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C87[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetIsPsycheDisabled
struct UCustomGameInstance_SetIsPsycheDisabled_Params
{
public:
	bool                                         bInIsPsycheDisabled;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetIsGateOfMadnessSaveFile
struct UCustomGameInstance_SetIsGateOfMadnessSaveFile_Params
{
public:
	bool                                         bInIsGateOfMadness;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetDLSSMode
struct UCustomGameInstance_SetDLSSMode_Params
{
public:
	enum class EUDLSSMode                        Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetDayPart
struct UCustomGameInstance_SetDayPart_Params
{
public:
	enum class EDayPart                          Current;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetCustomSoldierEventLevel
struct UCustomGameInstance_SetCustomSoldierEventLevel_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetCurrentLevelBlackStalkerKilled
struct UCustomGameInstance_SetCurrentLevelBlackStalkerKilled_Params
{
public:
	bool                                         bInKilled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.SetCompanionToWantToLeaveAPlayer
struct UCustomGameInstance_SetCompanionToWantToLeaveAPlayer_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C88[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.SetCompanionToBeDeadInFight
struct UCustomGameInstance_SetCompanionToBeDeadInFight_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C89[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.SetCompanionToBeAtPointOfHisDeath
struct UCustomGameInstance_SetCompanionToBeAtPointOfHisDeath_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetCompanionsToBeConflict
struct UCustomGameInstance_SetCompanionsToBeConflict_Params
{
public:
	class FName                                  CompanionA;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionB;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CustomGameInstance.SetbContinueFromSave
struct UCustomGameInstance_SetbContinueFromSave_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.SaveScreenshotForSaveSystem
struct UCustomGameInstance_SaveScreenshotForSaveSystem_Params
{
public:
	struct FSaveScreenshotData                   ScreenshotData;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         IsDaySave;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.SaveNameToMetadataName
struct UCustomGameInstance_SaveNameToMetadataName_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.SaveGameToFile
struct UCustomGameInstance_SaveGameToFile_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.SaveGame
struct UCustomGameInstance_SaveGame_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.RestoreCompanionsToBuildings
struct UCustomGameInstance_RestoreCompanionsToBuildings_Params
{
public:
	TArray<struct FBuildingCompanionInfo>        ViableCompanions;                                  // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.ResetDefualtSkinCacheAndMaterialsForSkeletalMeshComponent
struct UCustomGameInstance_ResetDefualtSkinCacheAndMaterialsForSkeletalMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveWeaponDurability
struct UCustomGameInstance_RemoveWeaponDurability_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveSaveAndMetadataInSlot
struct UCustomGameInstance_RemoveSaveAndMetadataInSlot_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveResourcesFromMap
struct UCustomGameInstance_RemoveResourcesFromMap_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourcesForMap                      Resources;                                         // 0x8(0x50)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C91[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveDecisionFromCompanion
struct UCustomGameInstance_RemoveDecisionFromCompanion_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DecisionID;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CheckIfCompanionIsAvailable;                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C92[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveCurveAnimatedWidgetMaster
struct UCustomGameInstance_RemoveCurveAnimatedWidgetMaster_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InActor;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveCompanion
struct UCustomGameInstance_RemoveCompanion_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C94[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveBuffFromCompanion
struct UCustomGameInstance_RemoveBuffFromCompanion_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C96[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveAllSave
struct UCustomGameInstance_RemoveAllSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.RemoveAllDecisionsFromCompanion
struct UCustomGameInstance_RemoveAllDecisionsFromCompanion_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CheckIfCompanionIsAvailable;                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C99[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.RaportPlayerAction
struct UCustomGameInstance_RaportPlayerAction_Params
{
public:
	enum class EPlayerAction                     Action;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.PowerManagmentRemoveFromLimit
struct UCustomGameInstance_PowerManagmentRemoveFromLimit_Params
{
public:
	int32                                        LimitDelta;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.PowerManagmentRemove
struct UCustomGameInstance_PowerManagmentRemove_Params
{
public:
	int32                                        Power;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.PowerManagmentGetLimit
struct UCustomGameInstance_PowerManagmentGetLimit_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.PowerManagmentGetCurrentUsage
struct UCustomGameInstance_PowerManagmentGetCurrentUsage_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.PowerManagmentCanAdd
struct UCustomGameInstance_PowerManagmentCanAdd_Params
{
public:
	int32                                        Power;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.PowerManagmentAddToLimit
struct UCustomGameInstance_PowerManagmentAddToLimit_Params
{
public:
	int32                                        LimitDelta;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.PowerManagmentAdd
struct UCustomGameInstance_PowerManagmentAdd_Params
{
public:
	int32                                        Power;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.PostLoadMapWithWorld
struct UCustomGameInstance_PostLoadMapWithWorld_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.PermanentDataSetValue
struct UCustomGameInstance_PermanentDataSetValue_Params
{
public:
	struct FDataTableRowHandle                   Entry;                                             // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         NewVlaue;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.PermanentDataGetValue
struct UCustomGameInstance_PermanentDataGetValue_Params
{
public:
	struct FDataTableRowHandle                   Entry;                                             // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.PerformQuickSave
struct UCustomGameInstance_PerformQuickSave_Params
{
public:
	enum class EQuickSaveResult                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.PauseGame
struct UCustomGameInstance_PauseGame_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.OnQuestFinished
struct UCustomGameInstance_OnQuestFinished_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.OnLevelAddedToWorld
struct UCustomGameInstance_OnLevelAddedToWorld_Params
{
public:
	class ULevel*                                Level;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                InWorld;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.OnGlobalSkinChanged
struct UCustomGameInstance_OnGlobalSkinChanged_Params
{
public:
	enum class EGlobalSkinType                   SkinType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewSkinName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.MoveCompanionToARandomBuilding
struct UCustomGameInstance_MoveCompanionToARandomBuilding_Params
{
public:
	class ACGNPC*                                Companion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnPositionActor;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.ModifyWeaponDurability
struct UCustomGameInstance_ModifyWeaponDurability_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.ModifyQuestsRubberBandingValue
struct UCustomGameInstance_ModifyQuestsRubberBandingValue_Params
{
public:
	float                                        Modifier;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.MakeScreenshotData
struct UCustomGameInstance_MakeScreenshotData_Params
{
public:
	struct FSaveScreenshotData                   ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.LoadGameGlobalMetadata
struct UCustomGameInstance_LoadGameGlobalMetadata_Params
{
public:
	bool                                         bOnlyWhenNull;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.LoadGameFromFile
struct UCustomGameInstance_LoadGameFromFile_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.LoadGame
struct UCustomGameInstance_LoadGame_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BroadcastEvent;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.LoadAsynchronouslyLevel
struct UCustomGameInstance_LoadAsynchronouslyLevel_Params
{
public:
	class FName                                  NewLevel;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Options;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function ChernobylGame.CustomGameInstance.K2_GetWeaponSkinByType
struct UCustomGameInstance_K2_GetWeaponSkinByType_Params
{
public:
	enum class EWeaponSkinType                   WeaponSkinType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSuccess;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponSkinInfo                       ReturnValue;                                       // 0x8(0x98)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ChernobylGame.CustomGameInstance.K2_GetSolidersEventLevelInfo
struct UCustomGameInstance_K2_GetSolidersEventLevelInfo_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoldierEventLevel                    Info;                                              // 0x8(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.CustomGameInstance.K2_GetMonstersEventLevelInfo
struct UCustomGameInstance_K2_GetMonstersEventLevelInfo_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMonsterEventLevel                    Info;                                              // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.CustomGameInstance.K2_GetEnabledGlobalSkin
struct UCustomGameInstance_K2_GetEnabledGlobalSkin_Params
{
public:
	enum class EGlobalSkinType                   SkinType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSuccess;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGlobalSkinInfo                       ReturnValue;                                       // 0x8(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.K2_GetAvailableWeaponSkinsForType
struct UCustomGameInstance_K2_GetAvailableWeaponSkinsForType_Params
{
public:
	enum class EWeaponSkinType                   WeaponSkinType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponSkinInfo>               ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.K2_GetAvailableGlobalSkinsForType
struct UCustomGameInstance_K2_GetAvailableGlobalSkinsForType_Params
{
public:
	enum class EGlobalSkinType                   Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGlobalSkinInfo>               ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.CustomGameInstance.K2_GetActorInfo
struct UCustomGameInstance_K2_GetActorInfo_Params
{
public:
	class FName                                  ActorName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorInfo                            Info;                                              // 0x8(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.ItemIdToWeaponSkinType
struct UCustomGameInstance_ItemIdToWeaponSkinType_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponSkinType                   ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsWeaponDurabilityEnabled
struct UCustomGameInstance_IsWeaponDurabilityEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsTimelineMorning
struct UCustomGameInstance_IsTimelineMorning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsSaveAndLoadLocked
struct UCustomGameInstance_IsSaveAndLoadLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsMapEnabled
struct UCustomGameInstance_IsMapEnabled_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsLoadedSoundbank
struct UCustomGameInstance_IsLoadedSoundbank_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsHeroDataPrepearedForFractalVR
struct UCustomGameInstance_IsHeroDataPrepearedForFractalVR_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsFSREnabled
struct UCustomGameInstance_IsFSREnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsDLSSEnabled
struct UCustomGameInstance_IsDLSSEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsContinueSaveGameGOM
struct UCustomGameInstance_IsContinueSaveGameGOM_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.IsCompanionLoyaltyRevertPossible
struct UCustomGameInstance_IsCompanionLoyaltyRevertPossible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.IsCompanionEmployed
struct UCustomGameInstance_IsCompanionEmployed_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.IsCompanionAssignedToBuildingSlot
struct UCustomGameInstance_IsCompanionAssignedToBuildingSlot_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// DelegateFunction ChernobylGame.CustomGameInstance.InfluenceLevelUp__DelegateSignature
struct UCustomGameInstance_InfluenceLevelUp__DelegateSignature_Params
{
public:
	float                                        AddedExp;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.HaveBuffCompanion
struct UCustomGameInstance_HaveBuffCompanion_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetWeatherCPP
struct UCustomGameInstance_GetWeatherCPP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GetWeaponDurability
struct UCustomGameInstance_GetWeaponDurability_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetTransitionalMode
struct UCustomGameInstance_GetTransitionalMode_Params
{
public:
	enum class ETransitionalMode                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GetTemporalStorageCount
struct UCustomGameInstance_GetTemporalStorageCount_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetSuccededQuests
struct UCustomGameInstance_GetSuccededQuests_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetSteamUserID
struct UCustomGameInstance_GetSteamUserID_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetStatForCompanion
struct UCustomGameInstance_GetStatForCompanion_Params
{
public:
	class FName                                  Companion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamped;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsModifier                        ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetStartingMoraleForCompanion
struct UCustomGameInstance_GetStartingMoraleForCompanion_Params
{
public:
	struct FCompanionDefinition                  CompanionDefinition;                               // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xB8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetShouldUseDefaultSaveSystemForGateOfMadness
struct UCustomGameInstance_GetShouldUseDefaultSaveSystemForGateOfMadness_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetShouldShowTimelineDeathTutorial
struct UCustomGameInstance_GetShouldShowTimelineDeathTutorial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetShouldShowHeistTutorialInBase
struct UCustomGameInstance_GetShouldShowHeistTutorialInBase_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetShouldPerformGateOfMadnessBackup
struct UCustomGameInstance_GetShouldPerformGateOfMadnessBackup_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetSaveTimestamp
struct UCustomGameInstance_GetSaveTimestamp_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetSaveScreenshotPath
struct UCustomGameInstance_GetSaveScreenshotPath_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetSaveGameMetadata
struct UCustomGameInstance_GetSaveGameMetadata_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomSaveGameMetadataInfo           ReturnValue;                                       // 0x18(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetRequiredExperiencePerLevel
struct UCustomGameInstance_GetRequiredExperiencePerLevel_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetQuestRubberBandingValue
struct UCustomGameInstance_GetQuestRubberBandingValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetQuestResultText
struct UCustomGameInstance_GetQuestResultText_Params
{
public:
	struct FMissionReportRequiredInformation     QuestResultInfo;                                   // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FReportsTextsDataTableRow             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetQuestResultItems
struct UCustomGameInstance_GetQuestResultItems_Params
{
public:
	struct FMissionReportRequiredInformation     QuestResultInfo;                                   // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FReportItems                          ReturnValue;                                       // 0x40(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetQuestInfoBP
struct UCustomGameInstance_GetQuestInfoBP_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestInfoInput                       ReturnValue;                                       // 0x10(0x150)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetQuestDescription
struct UCustomGameInstance_GetQuestDescription_Params
{
public:
	class FName                                  DescID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescriptionInfo                      ReturnValue;                                       // 0x8(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetProbabilityOfQuest
struct UCustomGameInstance_GetProbabilityOfQuest_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetPostTransitionLevelReady
struct UCustomGameInstance_GetPostTransitionLevelReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetPostTransitionLevelName
struct UCustomGameInstance_GetPostTransitionLevelName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetMissionInfosForDay
struct UCustomGameInstance_GetMissionInfosForDay_Params
{
public:
	int32                                        Day;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMissionReportRequiredInformation> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GetMapForActiveEvent
struct UCustomGameInstance_GetMapForActiveEvent_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GetMapEnumByName
struct UCustomGameInstance_GetMapEnumByName_Params
{
public:
	class FName                                  MapName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetLastWeekEvents
struct UCustomGameInstance_GetLastWeekEvents_Params
{
public:
	TArray<struct FEventDeactivationTimeStamp>   Result;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GetLastActiveQuestNameForMap
struct UCustomGameInstance_GetLastActiveQuestNameForMap_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetIsUserInterfaceGloballyDisabled
struct UCustomGameInstance_GetIsUserInterfaceGloballyDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetIsPsycheDisabled
struct UCustomGameInstance_GetIsPsycheDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetIsGateOfMadnessModeAvailable
struct UCustomGameInstance_GetIsGateOfMadnessModeAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetIsGateOfMadnessMode
struct UCustomGameInstance_GetIsGateOfMadnessMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetIsDifficultyGateOfMadness
struct UCustomGameInstance_GetIsDifficultyGateOfMadness_Params
{
public:
	enum class EDifficultyType                   DifficultyType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetIsCustomSoldierEventLevelEnabled
struct UCustomGameInstance_GetIsCustomSoldierEventLevelEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2D0 (0x2D0 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetIsBuildingRestrictedFromCurrentGameMode
struct UCustomGameInstance_GetIsBuildingRestrictedFromCurrentGameMode_Params
{
public:
	struct FBuildEntry                           BuildEntry;                                        // 0x0(0x2C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetInfluenceExp
struct UCustomGameInstance_GetInfluenceExp_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetGatheredItemsByCompanions
struct UCustomGameInstance_GetGatheredItemsByCompanions_Params
{
public:
	TArray<struct FCompanionWithPrize>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetFinishedQuests
struct UCustomGameInstance_GetFinishedQuests_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetFinishedGameAtLeastOnceMetadataOnly
struct UCustomGameInstance_GetFinishedGameAtLeastOnceMetadataOnly_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetDLSSMode
struct UCustomGameInstance_GetDLSSMode_Params
{
public:
	enum class EUDLSSMode                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetDifficultyValue
struct UCustomGameInstance_GetDifficultyValue_Params
{
public:
	enum class EDifficultyType                   DifficultyType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDifficultyValue                  ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetDifficultyModifierChecked
struct UCustomGameInstance_GetDifficultyModifierChecked_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnOneOnFail;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetDifficultyModifierByType
struct UCustomGameInstance_GetDifficultyModifierByType_Params
{
public:
	enum class EDifficultyModifierType           Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnOneOnFail;                                   // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetDifficultyModifier
struct UCustomGameInstance_GetDifficultyModifier_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnOneOnFail;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetDayPart
struct UCustomGameInstance_GetDayPart_Params
{
public:
	enum class EDayPart                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCustomSoldierEventLevel
struct UCustomGameInstance_GetCustomSoldierEventLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCustomSaves
struct UCustomGameInstance_GetCustomSaves_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCustomSaveNames
struct UCustomGameInstance_GetCustomSaveNames_Params
{
public:
	enum class ECustomSaveType                   CustomSaveType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCurrentStatsForCompanion2
struct UCustomGameInstance_GetCurrentStatsForCompanion2_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCurrentStatsForCompanion
struct UCustomGameInstance_GetCurrentStatsForCompanion_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCompanionEntry                       Info;                                              // 0x8(0x60)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCurrentSoldierEventLevel
struct UCustomGameInstance_GetCurrentSoldierEventLevel_Params
{
public:
	bool                                         SkipLevelModifiers;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCurrentSaveGameFileName
struct UCustomGameInstance_GetCurrentSaveGameFileName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCurrentMonsterEventLevel
struct UCustomGameInstance_GetCurrentMonsterEventLevel_Params
{
public:
	bool                                         SkipLevelModifiers;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCurrentDay
struct UCustomGameInstance_GetCurrentDay_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetContinueSaveGameFileName
struct UCustomGameInstance_GetContinueSaveGameFileName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetConflictForCurrentDay
struct UCustomGameInstance_GetConflictForCurrentDay_Params
{
public:
	struct FConflict                             ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCompletedStoryQuestsCount
struct UCustomGameInstance_GetCompletedStoryQuestsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCompanionsModifiers
struct UCustomGameInstance_GetCompanionsModifiers_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCompanionsInfo
struct UCustomGameInstance_GetCompanionsInfo_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCompanionDefinition                  ReturnValue;                                       // 0x8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCompanionEquipmnetStatsModifier
struct UCustomGameInstance_GetCompanionEquipmnetStatsModifier_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCompanionEffectiveness               ReturnValue;                                       // 0x30(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetCompanionByActiveEvent
struct UCustomGameInstance_GetCompanionByActiveEvent_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetClimbDebugEnabled
struct UCustomGameInstance_GetClimbDebugEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetbFreeModeEvents
struct UCustomGameInstance_GetbFreeModeEvents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetbFreeMode
struct UCustomGameInstance_GetbFreeMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetbContinueFromSave
struct UCustomGameInstance_GetbContinueFromSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetBackend
struct UCustomGameInstance_GetBackend_Params
{
public:
	class ABackend*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetAvailableCompanions
struct UCustomGameInstance_GetAvailableCompanions_Params
{
public:
	TArray<struct FCompanionEntry>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetAvaiableRecipies
struct UCustomGameInstance_GetAvaiableRecipies_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetAutoDLSSQualityBasedOnPixels
struct UCustomGameInstance_GetAutoDLSSQualityBasedOnPixels_Params
{
public:
	int32                                        Pixels;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUDLSSMode                        ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetAdjustedSoldierEventLevel
struct UCustomGameInstance_GetAdjustedSoldierEventLevel_Params
{
public:
	bool                                         SkipLevelModifiers;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetActiveQuests
struct UCustomGameInstance_GetActiveQuests_Params
{
public:
	TMap<enum class EEventMap, struct FActiveQuestInfo> ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetActiveQuestDifficultyModifier
struct UCustomGameInstance_GetActiveQuestDifficultyModifier_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetActiveEventsV2
struct UCustomGameInstance_GetActiveEventsV2_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetActiveEvents
struct UCustomGameInstance_GetActiveEvents_Params
{
public:
	TArray<struct FInnerEvent>                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetAchievementsFromSave
struct UCustomGameInstance_GetAchievementsFromSave_Params
{
public:
	TMap<enum class EAchievementType, float>     ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.CustomGameInstance.GetAchievementInfo_K2
struct UCustomGameInstance_GetAchievementInfo_K2_Params
{
public:
	enum class EAchievementType                  AchievementType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutResult;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAchievementInfo                      ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GameCharactersIsEnabled
struct UCustomGameInstance_GameCharactersIsEnabled_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D06[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CustomGameInstance.GameCharactersInfo
struct UCustomGameInstance_GameCharactersInfo_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameCharacter                        Info;                                              // 0x8(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D07[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.GameCharactersGet
struct UCustomGameInstance_GameCharactersGet_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GameCharactersEnable
struct UCustomGameInstance_GameCharactersEnable_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D09[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.GameCharactersDisable
struct UCustomGameInstance_GameCharactersDisable_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.FinishQuest
struct UCustomGameInstance_FinishQuest_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionResult                    Result;                                            // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.FinishEvent
struct UCustomGameInstance_FinishEvent_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D12[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.FindFavouriteBuildEntities
struct UCustomGameInstance_FindFavouriteBuildEntities_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.FindDislikedBuildEntities
struct UCustomGameInstance_FindDislikedBuildEntities_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.EventStatusAdded
struct UCustomGameInstance_EventStatusAdded_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Status;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableWwiseForceFlush
struct UCustomGameInstance_EnableWwiseForceFlush_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableSightDebug
struct UCustomGameInstance_EnableSightDebug_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableScreenshotOnSave
struct UCustomGameInstance_EnableScreenshotOnSave_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableResourceSpawnDebug
struct UCustomGameInstance_EnableResourceSpawnDebug_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableQuest
struct UCustomGameInstance_EnableQuest_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D18[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnablePatchPreviewText
struct UCustomGameInstance_EnablePatchPreviewText_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableMap
struct UCustomGameInstance_EnableMap_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableExperimentalStreamingTimes
struct UCustomGameInstance_EnableExperimentalStreamingTimes_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableExperimentalLoadScreen
struct UCustomGameInstance_EnableExperimentalLoadScreen_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableEventV2
struct UCustomGameInstance_EnableEventV2_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableEvent
struct UCustomGameInstance_EnableEvent_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableDebugStreamingManager
struct UCustomGameInstance_EnableDebugStreamingManager_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableCustomSoldierEventLevel
struct UCustomGameInstance_EnableCustomSoldierEventLevel_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableConsoleMainMenuDebug
struct UCustomGameInstance_EnableConsoleMainMenuDebug_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.EnableClimbDebug
struct UCustomGameInstance_EnableClimbDebug_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.DumpRefs
struct UCustomGameInstance_DumpRefs_Params
{
public:
	TSubclassOf<class UObject>                   UClass;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.DumpOutermostObject
struct UCustomGameInstance_DumpOutermostObject_Params
{
public:
	TSubclassOf<class UObject>                   UClass;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.DumpLastWidgetOuter
struct UCustomGameInstance_DumpLastWidgetOuter_Params
{
public:
	TSubclassOf<class UObject>                   UClass;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.DumpFirstWidgetOuter
struct UCustomGameInstance_DumpFirstWidgetOuter_Params
{
public:
	TSubclassOf<class UObject>                   UClass;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.DumpComponentOwners
struct UCustomGameInstance_DumpComponentOwners_Params
{
public:
	TSubclassOf<class UActorComponent>           UClass;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.DoesCompanionWantToLeaveAPlayer
struct UCustomGameInstance_DoesCompanionWantToLeaveAPlayer_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D25[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.DisableQuest
struct UCustomGameInstance_DisableQuest_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D26[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.DisableEventV2
struct UCustomGameInstance_DisableEventV2_Params
{
public:
	class FName                                  EventID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.DisableAvailableQuestsByCategoryForNextUpdate
struct UCustomGameInstance_DisableAvailableQuestsByCategoryForNextUpdate_Params
{
public:
	TArray<enum class EQuestCategoryType>        Categories;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.DialogueSystemSetBool
struct UCustomGameInstance_DialogueSystemSetBool_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewValue;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.DialogueSystemGetBool
struct UCustomGameInstance_DialogueSystemGetBool_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.DialogueSpawnInteractable
struct UCustomGameInstance_DialogueSpawnInteractable_Params
{
public:
	class ACGAICharacter*                        InAICharacter;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InItemName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CustomGameInstance.DeathPenaltyRemoveItems
struct UCustomGameInstance_DeathPenaltyRemoveItems_Params
{
public:
	TMap<class FName, float>                     ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.CreateCustomSave
struct UCustomGameInstance_CreateCustomSave_Params
{
public:
	enum class ECustomSaveType                   CustomSaveType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionUnequipItem
struct UCustomGameInstance_CompanionUnequipItem_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutResult;                                         // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D35[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionSystemSetLoyaltyLevel
struct UCustomGameInstance_CompanionSystemSetLoyaltyLevel_Params
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewLoyalty;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionSystemSetLoyaltyExp
struct UCustomGameInstance_CompanionSystemSetLoyaltyExp_Params
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewLoyalty;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionSystemGetLoyaltyLevel
struct UCustomGameInstance_CompanionSystemGetLoyaltyLevel_Params
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionSystemGetLoyaltyExp
struct UCustomGameInstance_CompanionSystemGetLoyaltyExp_Params
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionSwapItem
struct UCustomGameInstance_CompanionSwapItem_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       NewItem;                                           // 0x10(0x30)(Parm, NativeAccessSpecifierPublic)
	bool                                         OutResult;                                         // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ReturnValue;                                       // 0x48(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionGetEquippedItem
struct UCustomGameInstance_CompanionGetEquippedItem_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutResult;                                         // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionEquipItem
struct UCustomGameInstance_CompanionEquipItem_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       NewItem;                                           // 0x10(0x30)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D40[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.CustomGameInstance.CompanionCanEquipItem
struct UCustomGameInstance_CompanionCanEquipItem_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       Item;                                              // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D44[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.CheckIfPlayerDiedOnLevel
struct UCustomGameInstance_CheckIfPlayerDiedOnLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.CGSetPostTransitionalLevel
struct UCustomGameInstance_CGSetPostTransitionalLevel_Params
{
public:
	class FName                                  InTargetLevelName;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransitionalMode                 InTransMode;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipSave;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearContinueFlag;                                // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D49[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.CGOpenTransitionLevel
struct UCustomGameInstance_CGOpenTransitionLevel_Params
{
public:
	class FName                                  InTargetLevelName;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransitionalMode                 InTransMode;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipSave;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearContinueFlag;                                // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemRemoveNewEntity
struct UCustomGameInstance_BuildSystemRemoveNewEntity_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemIsCurrentCatalogTreeComplete
struct UCustomGameInstance_BuildSystemIsCurrentCatalogTreeComplete_Params
{
public:
	TArray<class FName>                          Tree;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemInit
struct UCustomGameInstance_BuildSystemInit_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetStatModifier
struct UCustomGameInstance_BuildSystemGetStatModifier_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetStartingValueForGlobalStat
struct UCustomGameInstance_BuildSystemGetStartingValueForGlobalStat_Params
{
public:
	struct FBuildGlobalStat                      GlobalStat;                                        // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetRootCatalogIDs
struct UCustomGameInstance_BuildSystemGetRootCatalogIDs_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetReadablePath
struct UCustomGameInstance_BuildSystemGetReadablePath_Params
{
public:
	TArray<class FName>                          Path;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetPathsContaing
struct UCustomGameInstance_BuildSystemGetPathsContaing_Params
{
public:
	TArray<class FName>                          Tree;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetNameByCategory
struct UCustomGameInstance_BuildSystemGetNameByCategory_Params
{
public:
	enum class EBuildCategory                    Category;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetItemsByPath
struct UCustomGameInstance_BuildSystemGetItemsByPath_Params
{
public:
	TArray<class FName>                          Tree;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FBuildEntryInternal>           ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetIsPowerSufficient
struct UCustomGameInstance_BuildSystemGetIsPowerSufficient_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetIAllItemsByPath
struct UCustomGameInstance_BuildSystemGetIAllItemsByPath_Params
{
public:
	bool                                         bIsWorkshop;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Path;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FBuildEntryInternal>           ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetHasEnoughPower
struct UCustomGameInstance_BuildSystemGetHasEnoughPower_Params
{
public:
	float                                        RequiredPower;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D55[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetGlobalStatValue
struct UCustomGameInstance_BuildSystemGetGlobalStatValue_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetGlobalStatInfo
struct UCustomGameInstance_BuildSystemGetGlobalStatInfo_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildGlobalStat                      ReturnValue;                                       // 0x8(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetGlobalAddValue
struct UCustomGameInstance_BuildSystemGetGlobalAddValue_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Delta;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removing;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x198 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetEntityInfo
struct UCustomGameInstance_BuildSystemGetEntityInfo_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildEntryInternal                   ReturnValue;                                       // 0x8(0x190)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetEntityCurrentCount
struct UCustomGameInstance_BuildSystemGetEntityCurrentCount_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetCurrentStatTier
struct UCustomGameInstance_BuildSystemGetCurrentStatTier_Params
{
public:
	enum class EBuildSystemStatType              StatType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildSystemStatTier              ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetCategoryByName
struct UCustomGameInstance_BuildSystemGetCategoryByName_Params
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildCategory                    ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetCatalogInfoByPath
struct UCustomGameInstance_BuildSystemGetCatalogInfoByPath_Params
{
public:
	TArray<class FName>                          Path;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBuildCatalogPath                     ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetAvaiablePathIDs
struct UCustomGameInstance_BuildSystemGetAvaiablePathIDs_Params
{
public:
	TArray<class FName>                          Tree;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetAllPathIDs
struct UCustomGameInstance_BuildSystemGetAllPathIDs_Params
{
public:
	bool                                         bIsWorkshop;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tree;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetAllEntities
struct UCustomGameInstance_BuildSystemGetAllEntities_Params
{
public:
	TArray<struct FBuildEntryInternal>           ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetAllAvaiableEntities
struct UCustomGameInstance_BuildSystemGetAllAvaiableEntities_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemGetActiveTier
struct UCustomGameInstance_BuildSystemGetActiveTier_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemFilterByCategoryAndTier
struct UCustomGameInstance_BuildSystemFilterByCategoryAndTier_Params
{
public:
	enum class EBuildCategory                    Category;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tier;                                              // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBuildEntryInternal>           ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemFilterByCategoryAndCatalog
struct UCustomGameInstance_BuildSystemFilterByCategoryAndCatalog_Params
{
public:
	enum class EBuildCategory                    Category;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Catalog;                                           // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBuildEntryInternal>           ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemDeactivateTierName
struct UCustomGameInstance_BuildSystemDeactivateTierName_Params
{
public:
	class FName                                  Tier;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D66[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemCreatePathID
struct UCustomGameInstance_BuildSystemCreatePathID_Params
{
public:
	TArray<class FName>                          Path;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemAddNewEntity
struct UCustomGameInstance_BuildSystemAddNewEntity_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.BuildSystemActivateTierName
struct UCustomGameInstance_BuildSystemActivateTierName_Params
{
public:
	class FName                                  Tier;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D70[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.AreCompanionsInSecondConflict
struct UCustomGameInstance_AreCompanionsInSecondConflict_Params
{
public:
	class FName                                  CompanionA;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionB;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D72[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.AreCompanionsInConflict
struct UCustomGameInstance_AreCompanionsInConflict_Params
{
public:
	class FName                                  CompanionA;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompanionB;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D77[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddResourcesToMap
struct UCustomGameInstance_AddResourcesToMap_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourcesForMap                      Resources;                                         // 0x8(0x50)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddInfluenceExp
struct UCustomGameInstance_AddInfluenceExp_Params
{
public:
	float                                        Exp;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddGateOfMadnessDifficulty
struct UCustomGameInstance_AddGateOfMadnessDifficulty_Params
{
public:
	enum class EDifficultyType                   DifficultyType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddDecisionToCompanion
struct UCustomGameInstance_AddDecisionToCompanion_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DecisionID;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CheckIfCompanionIsAvailable;                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D81[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddCurveAnimatedWidgetMaster
struct UCustomGameInstance_AddCurveAnimatedWidgetMaster_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InActor;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddCompanionLoyaltyRevertInfo
struct UCustomGameInstance_AddCompanionLoyaltyRevertInfo_Params
{
public:
	struct FCompanionLoyaltyRevertInfo           RevertInfo;                                        // 0x0(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.CustomGameInstance.AddCompanion
struct UCustomGameInstance_AddCompanion_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D85[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddBuffToCompanion
struct UCustomGameInstance_AddBuffToCompanion_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D86[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomGameInstance.AddAchievementToSave
struct UCustomGameInstance_AddAchievementToSave_Params
{
public:
	enum class EAchievementType                  AchievementType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomSaveGame.SaveDataToSlot
struct UCustomSaveGame_SaveDataToSlot_Params
{
public:
	class FString                                InSlotName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InUserIndex;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomGameInstance*                   GameInstance;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomSaveGame.PrepareMetadataForSave
struct UCustomSaveGame_PrepareMetadataForSave_Params
{
public:
	class UCustomGameInstance*                   GameInstance;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomSaveGameMetadata*               CurrentMetadata;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.CustomSaveGame.LoadDataFromSlot
struct UCustomSaveGame_LoadDataFromSlot_Params
{
public:
	class FString                                InSlotName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InUserIndex;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DDE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomSaveGame.GetSaveVersion
struct UCustomSaveGame_GetSaveVersion_Params
{
public:
	class FString                                SaveFileName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InUserIndex;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomSaveGame.AquireOnlyGameInstance
struct UCustomSaveGame_AquireOnlyGameInstance_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomSaveGame.AquireDataFromStreamedLevel
struct UCustomSaveGame_AquireDataFromStreamedLevel_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InLevelName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomSaveGame.AquireDataFromAllLevels
struct UCustomSaveGame_AquireDataFromAllLevels_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.CustomSaveGame.ApplyOnlyGameInstance
struct UCustomSaveGame_ApplyOnlyGameInstance_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.CustomSaveGame.ApplyDataToStreamedLevel
struct UCustomSaveGame_ApplyDataToStreamedLevel_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InLevelName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BroadcastEvent;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DDF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.CustomSaveGame.ApplyDataToAllLevels
struct UCustomSaveGame_ApplyDataToAllLevels_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BroadcastEvent;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.ChernobylGameAsyncSave.ChernobylGameAsyncSave
struct UChernobylGameAsyncSave_ChernobylGameAsyncSave_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBroadcastSaveFinished;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChernobylGameAsyncSave*               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.ChernobylGameAsyncCustomSave.ChernobylGameAsyncCustomSave
struct UChernobylGameAsyncCustomSave_ChernobylGameAsyncCustomSave_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomSaveType                   CustomSaveType;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBroadcastSaveFinished;                            // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DEA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChernobylGameAsyncCustomSave*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.ChernobylGameAsyncScreenshotSave.ChernobylGameAsyncScreenshot
struct UChernobylGameAsyncScreenshotSave_ChernobylGameAsyncScreenshot_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSaveScreenshotData                   ScreenshotData;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         IsDaySave;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         broadcastSaveFinished;                             // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DF0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChernobylGameAsyncScreenshotSave*     ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ChernobylGameWaitForSave.WaitForAsyncSaveGame
struct UChernobylGameWaitForSave_WaitForAsyncSaveGame_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChernobylGameWaitForSave*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ChernobylGameAsyncScreenshot.HandleAsyncScreenshotFinished
struct UChernobylGameAsyncScreenshot_HandleAsyncScreenshotFinished_Params
{
public:
	TArray<struct FColor>                        ColorData;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ChernobylGameAsyncScreenshot.AsyncMakeScreenshotData
struct UChernobylGameAsyncScreenshot_AsyncMakeScreenshotData_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChernobylGameAsyncScreenshot*         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.DialogueComponent.StartDialogueAtRow
struct UDialogueComponent_StartDialogueAtRow_Params
{
public:
	class ACGCharacter*                          Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldBlockPlayer;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewStart;                                          // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDialogueSubtitleType             ForcedSubtitleType;                                // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CustomCameraFocus;                                 // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.DialogueComponent.StartDialogue
struct UDialogueComponent_StartDialogue_Params
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldBlockPlayer;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPossiblyUseGesture;                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDialogueSubtitleType             ForcedSubtitleType;                                // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DFF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CustomCameraFocus;                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.DialogueComponent.SetSkippable
struct UDialogueComponent_SetSkippable_Params
{
public:
	bool                                         bInNewSkippable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.DialogueComponent.SetShouldAutomaticallyFinishPayload
struct UDialogueComponent_SetShouldAutomaticallyFinishPayload_Params
{
public:
	TSubclassOf<class UDialogueComponentPayload> PayloadType;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewValue;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E01[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.DialogueComponent.SetDialogCameraFocus
struct UDialogueComponent_SetDialogCameraFocus_Params
{
public:
	class AActor*                                FocusActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.DialogueComponent.SetBlockDialogue
struct UDialogueComponent_SetBlockDialogue_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.DialogueComponent.RemovePayloadByClass
struct UDialogueComponent_RemovePayloadByClass_Params
{
public:
	TSubclassOf<class UDialogueComponentPayload> PayloadType;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.DialogueComponent.RemovePayload
struct UDialogueComponent_RemovePayload_Params
{
public:
	class UDialogueComponentPayload*             Payload;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.DialogueComponent.OverrideCurrentTimerTime
struct UDialogueComponent_OverrideCurrentTimerTime_Params
{
public:
	float                                        NewTime;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function ChernobylGame.DialogueComponent.NPCDialogueEnded
struct UDialogueComponent_NPCDialogueEnded_Params
{
public:
	class AActor*                                ComponentOwner;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        InDamageEvent;                                     // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.DialogueComponent.IsPlaying
struct UDialogueComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.DialogueComponent.GetPayloadByClass
struct UDialogueComponent_GetPayloadByClass_Params
{
public:
	TSubclassOf<class UDialogueComponentPayload> PayloadType;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogueComponentPayload*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.DialogueComponent.GetIsSkippable
struct UDialogueComponent_GetIsSkippable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.DialogueComponent.ForceStopDialogue
struct UDialogueComponent_ForceStopDialogue_Params
{
public:
	float                                        DelayMs;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.DialogueComponent.EstimateDuration
struct UDialogueComponent_EstimateDuration_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.DialogueComponent.DebugDialogueAtRow
struct UDialogueComponent_DebugDialogueAtRow_Params
{
public:
	class ACGCharacter*                          Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewStart;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.DialogueComponent.AddPayload
struct UDialogueComponent_AddPayload_Params
{
public:
	class UDialogueComponentPayload*             Payload;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.SplitStringToArray
struct UDialogueFunctionLibrary_SplitStringToArray_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutArray;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.SetWidgetComponentPivot
struct UDialogueFunctionLibrary_SetWidgetComponentPivot_Params
{
public:
	class UWidgetComponent*                      Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NewPivot;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.SetNewDialogueMetaData
struct UDialogueFunctionLibrary_SetNewDialogueMetaData_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            InNewDialogueMetaData;                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E0E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.SetNewDialogueData
struct UDialogueFunctionLibrary_SetNewDialogueData_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            InNewDialogueData;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E0F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.PlayRandomChatterOfType
struct UDialogueFunctionLibrary_PlayRandomChatterOfType_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChatterType                      InChatterType;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPossiblyUseGesture;                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E10[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InRadiusOverride;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceStopAnyDialogue;                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E11[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.FindDatatable
struct UDialogueFunctionLibrary_FindDatatable_Params
{
public:
	class FString                                InDatatablePath;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.FindActorByName
struct UDialogueFunctionLibrary_FindActorByName_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InName;                                            // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.DialogueFunctionLibrary.CallFunctionByNameOnActor
struct UDialogueFunctionLibrary_CallFunctionByNameOnActor_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InFunctionName;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSuccess;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.DialogueWidget.SelectedIndex
struct UDialogueWidget_SelectedIndex_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.DialogueWidget.Init
struct UDialogueWidget_Init_Params
{
public:
	TArray<struct FDialogueSingleOptionData>     Prompts;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.EveningActivityManager.UpdateCompanionStatsMission
struct AEveningActivityManager_UpdateCompanionStatsMission_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.EveningActivityManager.Update
struct AEveningActivityManager_Update_Params
{
public:
	struct FCompanionsInConflict                 Conflict;                                          // 0x0(0x20)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECompanionConflictType            ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.SortEventsByDate
struct UEventFunctionLibrary_SortEventsByDate_Params
{
public:
	TArray<struct FInnerEvent>                   InOutArrayToSort;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.SetEventStatus
struct UEventFunctionLibrary_SetEventStatus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventID;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Status;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.ParseReport
struct UEventFunctionLibrary_ParseReport_Params
{
public:
	class FString                                Report;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReportInfo                           Info;                                              // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x70(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.MergeEventArraysRemoveDuplicates
struct UEventFunctionLibrary_MergeEventArraysRemoveDuplicates_Params
{
public:
	TArray<struct FInnerEvent>                   InArray1;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FInnerEvent>                   InArray2;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FInnerEvent>                   OutMergedArray;                                    // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.IsEventActive
struct UEventFunctionLibrary_IsEventActive_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventID;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E20[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.InitEventsOnLevel
struct UEventFunctionLibrary_InitEventsOnLevel_Params
{
public:
	class ALevelScriptActor*                     ThisLevel;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         ThisMap;                                           // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E21[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.GetEventResults
struct UEventFunctionLibrary_GetEventResults_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventResult>                  Results;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.GenerateReportInfo
struct UEventFunctionLibrary_GenerateReportInfo_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FromEvent;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReportInfo                           OutInfo;                                           // 0x10(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E24[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.ForceActivateEvent
struct UEventFunctionLibrary_ForceActivateEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventID;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E26[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.FilterNpcByAvailableEvents
struct UEventFunctionLibrary_FilterNpcByAvailableEvents_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          InNpcs;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          InEvents;                                          // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutNpcs;                                           // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.EnableEvent
struct UEventFunctionLibrary_EnableEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Event;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.DisableEvent
struct UEventFunctionLibrary_DisableEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Event;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.EventFunctionLibrary.ClearEventSystemStatuses
struct UEventFunctionLibrary_ClearEventSystemStatuses_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.EventSystemBackend.ValidateActiveQuests
struct AEventSystemBackend_ValidateActiveQuests_Params
{
public:
	TMap<enum class EEventMap, class FName>      OutChangedQuests;                                  // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.EventSystemBackend.Update
struct AEventSystemBackend_Update_Params
{
public:
	class APrepassQuestActor*                    Prepass;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventSystemBackend.SetValue
struct AEventSystemBackend_SetValue_Params
{
public:
	struct FDataTableRowHandle                   Entry;                                             // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         NewVlaue;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E32[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.EventSystemBackend.SetMood
struct AEventSystemBackend_SetMood_Params
{
public:
	class FName                                  MoodID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E33[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.EventSystemBackend.SetCompanionForQuest
struct AEventSystemBackend_SetCompanionForQuest_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestID;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E34[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function ChernobylGame.EventSystemBackend.Prepeare
struct AEventSystemBackend_Prepeare_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNewGamePlus;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventSystemBackend.GetValue
struct AEventSystemBackend_GetValue_Params
{
public:
	struct FDataTableRowHandle                   Entry;                                             // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E35[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.EventSystemBackend.ForceCustomFirstDayQuestBase
struct AEventSystemBackend_ForceCustomFirstDayQuestBase_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.EventSystemBackend.FixMapOnOldSave
struct AEventSystemBackend_FixMapOnOldSave_Params
{
public:
	enum class EEventMap                         InMap;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventSystemBackend.CalculateEffectiveness
struct AEventSystemBackend_CalculateEffectiveness_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestID;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         QuestMap;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.EventSystemBackend.ActivateQuestDebug
struct AEventSystemBackend_ActivateQuestDebug_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CompanionID;                                       // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.EventSystemLevelBackend.Update
struct AEventSystemLevelBackend_Update_Params
{
public:
	enum class EEventMap                         CurrentMap;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnLevelListOnly;                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E40[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OutLevelsToStream;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsContinue;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E41[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.FakeRadarSphere.SpawnFakeRadarWave
struct AFakeRadarSphere_SpawnFakeRadarWave_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E43[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InSpawnTransform;                                  // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AFakeRadarSphere*                      ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E44[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ChernobylGame.FakeRadarSphere.RadarSphereDestroyedDelegate__DelegateSignature
struct AFakeRadarSphere_RadarSphereDestroyedDelegate__DelegateSignature_Params
{
public:
	class AFakeRadarSphere*                      Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ChernobylGame.FakeRadarSphere.RadarDetectionDelegate__DelegateSignature
struct AFakeRadarSphere_RadarDetectionDelegate__DelegateSignature_Params
{
public:
	class AFakeRadarSphere*                      Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorFound;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.FPAnimSystemQueue.ReadQuery
struct UFPAnimSystemQueue_ReadQuery_Params
{
public:
	struct FFPAnimQuery                          InQuery;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.FPAnimSystemQueue.QueryActivity
struct UFPAnimSystemQueue_QueryActivity_Params
{
public:
	struct FFPAnimQuery                          InAnimQuery;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         OutQueryResult;                                    // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFPAnimQuery>                  OutQueryQueue;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInShouldBlockNewQueries;                          // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InAnimScale;                                       // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.FPAnimSystemQueue.GetGlobalAnimScale
struct UFPAnimSystemQueue_GetGlobalAnimScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.FPAnimSystemQueue.EnableNewQueries
struct UFPAnimSystemQueue_EnableNewQueries_Params
{
public:
	bool                                         InNewQueryiesEnabled;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.PatrolActor.GetLoop
struct APatrolActor_GetLoop_Params
{
public:
	TArray<class APatrolActor*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChernobylGame.FriendlyPatrolActor.OnOverlap
struct AFriendlyPatrolActor_OnOverlap_Params
{
public:
	class UPrimitiveComponent*                   InOverlappedComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOtherActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InOtherComp;                                       // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InOtherBodyIndex;                                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFromSweep;                                      // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            InSweepResult;                                     // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.GetSubtitlesFromSoundAsyncNode.GetSubtitlesAsync
struct UGetSubtitlesFromSoundAsyncNode_GetSubtitlesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            Sound;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetSubtitlesFromSoundAsyncNode*       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.GlobalSingletonLibrary.GetSingleton
struct UGlobalSingletonLibrary_GetSingleton_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGlobalSingleton*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.MixStrings
struct UHackingFunctionLibrary_MixStrings_Params
{
public:
	class FString                                AlphaZero;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AlphaOne;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.InsertXmlTagsIntoBinary
struct UHackingFunctionLibrary_InsertXmlTagsIntoBinary_Params
{
public:
	class FString                                InTextWithBinary;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InTagBegin;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InTagEnd;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutText;                                           // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.InsertWordsIntoRichString
struct UHackingFunctionLibrary_InsertWordsIntoRichString_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Destination;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Strings;                                           // 0x20(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Positions;                                         // 0x30(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        OpeningXmlTags;                                    // 0x40(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IgnoreInsertedLength;                              // 0x50(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E59[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.InsertStrings
struct UHackingFunctionLibrary_InsertStrings_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Destination;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Strings;                                           // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Positions;                                         // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.GetLettersAtIndex
struct UHackingFunctionLibrary_GetLettersAtIndex_Params
{
public:
	TArray<class FString>                        InWords;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OutLetters;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.GetIndicesOfWordsWithThisLetterAtIndex
struct UHackingFunctionLibrary_GetIndicesOfWordsWithThisLetterAtIndex_Params
{
public:
	TArray<class FString>                        InWords;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InIndex;                                           // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InLetter;                                          // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                OutIndices;                                        // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         NotThisLetter;                                     // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.GetCharacterAt
struct UHackingFunctionLibrary_GetCharacterAt_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.GenerateRandomBinaryString
struct UHackingFunctionLibrary_GenerateRandomBinaryString_Params
{
public:
	int32                                        Length;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.FindClosestFalse
struct UHackingFunctionLibrary_FindClosestFalse_Params
{
public:
	TArray<bool>                                 InArray;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StartIndex;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReversedOrder;                                     // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E61[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.DivideRichTextIntoColumns
struct UHackingFunctionLibrary_DivideRichTextIntoColumns_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ColumnSizes;                                       // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.DivideIntoColumns
struct UHackingFunctionLibrary_DivideIntoColumns_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ColumnSizes;                                       // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.CreateRichTextTag
struct UHackingFunctionLibrary_CreateRichTextTag_Params
{
public:
	class FString                                Style;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.ConvertToBinary
struct UHackingFunctionLibrary_ConvertToBinary_Params
{
public:
	class FString                                UnparsedText;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChernobylGame.HackingFunctionLibrary.CompareColors
struct UHackingFunctionLibrary_CompareColors_Params
{
public:
	struct FLinearColor                          A;                                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E64[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent.OverrideMaxHP
struct UHealthComponent_OverrideMaxHP_Params
{
public:
	float                                        InNewMaxHP;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent.OverrideCurrentHP
struct UHealthComponent_OverrideCurrentHP_Params
{
public:
	float                                        InNewHP;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ChernobylGame.HealthComponent.K2_DealDamage
struct UHealthComponent_K2_DealDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGDamageEvent                        DamageType;                                        // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0xE8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.HealthComponent.Heal
struct UHealthComponent_Heal_Params
{
public:
	float                                        HpHealed;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ChernobylGame.HealthComponent.DealDamage
struct UHealthComponent_DealDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGDamageEvent                        DamageType;                                        // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0xE8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E68[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.SetRadiationMultiplier
struct UHealthComponent2_SetRadiationMultiplier_Params
{
public:
	float                                        Multiplier;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.HealthComponent2.SetGodMode
struct UHealthComponent2_SetGodMode_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromCheat;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.HealthComponent2.RemoveRadSegments
struct UHealthComponent2_RemoveRadSegments_Params
{
public:
	float                                        Segments;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipGodMode;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E6C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.ModifyMaximumHealth
struct UHealthComponent2_ModifyMaximumHealth_Params
{
public:
	int32                                        SegmentsPerStage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.HealthComponent2.K2_ChangeHPSections
struct UHealthComponent2_K2_ChangeHPSections_Params
{
public:
	float                                        Sections;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               InDamageClass;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BypassMultiplayer;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E6E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.HealthComponent2.K2_ChangeHP
struct UHealthComponent2_K2_ChangeHP_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               InDamageClass;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BypassMultiplayer;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E70[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetUIBarSegments
struct UHealthComponent2_GetUIBarSegments_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetRadiationThreshold
struct UHealthComponent2_GetRadiationThreshold_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetRadiationMultiplier
struct UHealthComponent2_GetRadiationMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetRadiationMaxDose
struct UHealthComponent2_GetRadiationMaxDose_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.HealthComponent2.GetMinRadiationForPhase
struct UHealthComponent2_GetMinRadiationForPhase_Params
{
public:
	enum class EHealthPhase                      Phase;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.HealthComponent2.GetMaxRadiationForPhase
struct UHealthComponent2_GetMaxRadiationForPhase_Params
{
public:
	enum class EHealthPhase                      Phase;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetMaxRadiation
struct UHealthComponent2_GetMaxRadiation_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetMaxHP
struct UHealthComponent2_GetMaxHP_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.HealthComponent2.GetMaxHealthForPhase
struct UHealthComponent2_GetMaxHealthForPhase_Params
{
public:
	enum class EHealthPhase                      Phase;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.HealthComponent2.GetGodModeFromCheat
struct UHealthComponent2_GetGodModeFromCheat_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.HealthComponent2.GetGodMode
struct UHealthComponent2_GetGodMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.HealthComponent2.GetCurrentRadiationPhase
struct UHealthComponent2_GetCurrentRadiationPhase_Params
{
public:
	enum class EHealthPhase                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetCurrentRadiation
struct UHealthComponent2_GetCurrentRadiation_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.GetCurrentHP
struct UHealthComponent2_GetCurrentHP_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.HealthComponent2.GetCurrentHealthPhase
struct UHealthComponent2_GetCurrentHealthPhase_Params
{
public:
	enum class EHealthPhase                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.HealthComponent2.ChangeRadPercentage
struct UHealthComponent2_ChangeRadPercentage_Params
{
public:
	float                                        PointsPercentage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BypassMultiplayer;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E78[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.HealthComponent2.ChangeRad
struct UHealthComponent2_ChangeRad_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BypassMultiplayer;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.HealthComponent2.ChangeMaxHP
struct UHealthComponent2_ChangeMaxHP_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.HeroIntepolateTo.InterpolatePlayerToTransform
struct UHeroIntepolateTo_InterpolatePlayerToTransform_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E83[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InterpolationLengthSeconds;                        // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroIntepolateTo*                     ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.HeroIntepolateTo.InterpolatePlayerToLocation
struct UHeroIntepolateTo_InterpolatePlayerToLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InterpolationLengthSeconds;                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisablePlayerInputOnStart;                         // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HidePlayerHandsOnStart;                            // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnablePlayerInputOnCompleted;                      // 0x26(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowPlayerHandsOnCompleted;                        // 0x27(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableCollisionOnCompleted;                        // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroIntepolateTo*                     ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.InputFunctionLibrary.UsingKeyboardOrGamepad
struct UInputFunctionLibrary_UsingKeyboardOrGamepad_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.InputFunctionLibrary.IsGamepadConnected
struct UInputFunctionLibrary_IsGamepadConnected_Params
{
public:
	bool                                         Connected;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.InputFunctionLibrary.CountConnectedGamepads
struct UInputFunctionLibrary_CountConnectedGamepads_Params
{
public:
	int32                                        GamepadCount;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.Interactable.SupportsOnlyFocusEvents
struct IInteractable_SupportsOnlyFocusEvents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.Interactable.SetObjectVisible
struct IInteractable_SetObjectVisible_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.Interactable.SetInteractionLocked
struct IInteractable_SetInteractionLocked_Params
{
public:
	bool                                         bLocked;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Interactable.OnPlayerNearFocusLostComponent
struct IInteractable_OnPlayerNearFocusLostComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Interactable.OnPlayerNearFocusGainedComponent
struct IInteractable_OnPlayerNearFocusGainedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Interactable.OnPlayerFocusLostComponent
struct IInteractable_OnPlayerFocusLostComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Interactable.OnPlayerFocusGainedComponent
struct IInteractable_OnPlayerFocusGainedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Interactable.OnInteractionReleasedComponent
struct IInteractable_OnInteractionReleasedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ComponentPlayerWasInteractingWith;                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.Interactable.OnInteractionPressedComponent
struct IInteractable_OnInteractionPressedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.Interactable.MaxInteractionDistance
struct IInteractable_MaxInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.Interactable.IsObjectVisible
struct IInteractable_IsObjectVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.Interactable.IsInteractionUnlocked
struct IInteractable_IsInteractionUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.Interactable.GetSkipChildComponentWhenOverlapping
struct IInteractable_GetSkipChildComponentWhenOverlapping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.Interactable.GetShouldOverrideMaxInteractionDistance
struct IInteractable_GetShouldOverrideMaxInteractionDistance_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.Interactable.GetOverrideMaxInteractionDistance
struct IInteractable_GetOverrideMaxInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.Interactable.GetNearInteractionDistance
struct IInteractable_GetNearInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.Interactable.GetFarInteractionDistance
struct IInteractable_GetFarInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Interactable.GetComponentTagToSkipWhenOverlappingSphere
struct IInteractable_GetComponentTagToSkipWhenOverlappingSphere_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.Interactable.GetActorInteractionAngle
struct IInteractable_GetActorInteractionAngle_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ChernobylGame.InterpolateFloatAsyncNode.InterpolateFloatAsyncNodeOutputPin__DelegateSignature
struct UInterpolateFloatAsyncNode_InterpolateFloatAsyncNodeOutputPin__DelegateSignature_Params
{
public:
	float                                        Current;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInterpolateFloatAsyncNode*            Interpolator;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.InterpolateFloatAsyncNode.FInterpToConstantAsync
struct UInterpolateFloatAsyncNode_FInterpToConstantAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        From;                                              // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        To;                                                // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInterpolateFloatAsyncNode*            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.InterpolateFloatAsyncNode.FInterpToAsync
struct UInterpolateFloatAsyncNode_FInterpToAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        From;                                              // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        To;                                                // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInterpolateFloatAsyncNode*            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.InterpolateRotatorAsyncNode.RInterpToConstantAsync
struct UInterpolateRotatorAsyncNode_RInterpToConstantAsync_Params
{
public:
	class UObject*                               Co;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              From;                                              // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              To;                                                // 0x14(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInterpolateRotatorAsyncNode*          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction ChernobylGame.InterpolateRotatorAsyncNode.InterpolateRotatorAsyncNodeOutputPin__DelegateSignature
struct UInterpolateRotatorAsyncNode_InterpolateRotatorAsyncNodeOutputPin__DelegateSignature_Params
{
public:
	struct FRotator                              Current;                                           // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInterpolateRotatorAsyncNode*          Interpolator;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.InventoryComponent2.SortBySize
struct UInventoryComponent2_SortBySize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.InventoryComponent2.Resize
struct UInventoryComponent2_Resize_Params
{
public:
	struct FVector2D                             NewSize;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.InventoryComponent2.RemoveUpgrade
struct UInventoryComponent2_RemoveUpgrade_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Upgrade;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EBD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.InventoryComponent2.RemoveAt
struct UInventoryComponent2_RemoveAt_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Force;                                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StorageID;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendBroadcast;                                    // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChernobylGame.InventoryComponent2.Remove
struct UInventoryComponent2_Remove_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Index;                                             // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Force;                                             // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StorageID;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendBroadcast;                                    // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.InventoryComponent2.IsValidIndex
struct UInventoryComponent2_IsValidIndex_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.InventoryComponent2.IsInventoryInitialized
struct UInventoryComponent2_IsInventoryInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.InventoryComponent2.HasItemWithInternalId
struct UInventoryComponent2_HasItemWithInternalId_Params
{
public:
	class FName                                  InternalId;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetUpgrades
struct UInventoryComponent2_GetUpgrades_Params
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x30)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetSize
struct UInventoryComponent2_GetSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.InventoryComponent2.GetNameByResourceType
struct UInventoryComponent2_GetNameByResourceType_Params
{
public:
	enum class EResourceType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetMaxSize
struct UInventoryComponent2_GetMaxSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetItemWithInternalId
struct UInventoryComponent2_GetItemWithInternalId_Params
{
public:
	class FName                                  InternalId;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryEntry                       ReturnValue;                                       // 0x8(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetItemsWithStorageId
struct UInventoryComponent2_GetItemsWithStorageId_Params
{
public:
	int32                                        StorageID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetItemsSorted
struct UInventoryComponent2_GetItemsSorted_Params
{
public:
	TArray<struct FInventoryEntry>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetItems
struct UInventoryComponent2_GetItems_Params
{
public:
	TArray<struct FInventoryEntry>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetItemInfo
struct UInventoryComponent2_GetItemInfo_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            ReturnValue;                                       // 0x10(0x150)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetItemAtOrFirst
struct UInventoryComponent2_GetItemAtOrFirst_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Index;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryEntry                       ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetInternalItemId
struct UInventoryComponent2_GetInternalItemId_Params
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x30)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.InventoryComponent2.GetCanBeDropped
struct UInventoryComponent2_GetCanBeDropped_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetByIndex
struct UInventoryComponent2_GetByIndex_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.InventoryComponent2.GetAnyItemWithUniqueID
struct UInventoryComponent2_GetAnyItemWithUniqueID_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryEntry                       ReturnValue;                                       // 0x8(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.InventoryComponent2.CountUID
struct UInventoryComponent2_CountUID_Params
{
public:
	class FName                                  ItemUID;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.InventoryComponent2.Count
struct UInventoryComponent2_Count_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.InventoryComponent2.CheckSpaceAt
struct UInventoryComponent2_CheckSpaceAt_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Index;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.InventoryComponent2.CheckIfValid
struct UInventoryComponent2_CheckIfValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.InventoryComponent2.CanAddAt
struct UInventoryComponent2_CanAddAt_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Index;                                             // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChernobylGame.InventoryComponent2.CanAdd
struct UInventoryComponent2_CanAdd_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Index;                                             // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.InventoryComponent2.AddUpgrade
struct UInventoryComponent2_AddUpgrade_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Upgrade;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UniqueName;                                        // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.InventoryComponent2.AddAt
struct UInventoryComponent2_AddAt_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Upgrades;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Index;                                             // 0x1C(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendBroadcast;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.InventoryComponent2.Add
struct UInventoryComponent2_Add_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Upgrades;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Index;                                             // 0x1C(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageID;                                         // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendBroadcast;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MaxIndex;                                          // 0x2C(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x34(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.IObjectWithEnableDisable.SetInteractionEnabled
struct IIObjectWithEnableDisable_SetInteractionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.IObjectWithEnableDisable.IsInteractionEnabled
struct IIObjectWithEnableDisable_IsInteractionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.IObjectWithEnableDisable.InteractionEnabledStateChanged
struct IIObjectWithEnableDisable_InteractionEnabledStateChanged_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetSublevelsForCurrentPersistant
struct ULevelFunctionLibrary_GetSublevelsForCurrentPersistant_Params
{
public:
	class UObject*                               WorldCtx;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetSublevelName
struct ULevelFunctionLibrary_GetSublevelName_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutString;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetLevelNamesFromAssets
struct ULevelFunctionLibrary_GetLevelNamesFromAssets_Params
{
public:
	TArray<TSoftObjectPtr<class UWorld>>         Levels;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetLevelNameFromAsset
struct ULevelFunctionLibrary_GetLevelNameFromAsset_Params
{
public:
	TSoftObjectPtr<class UWorld>                 Level;                                             // 0x0(0x28)(ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetLevelFromActor
struct ULevelFunctionLibrary_GetLevelFromActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetCurveValue
struct ULevelFunctionLibrary_GetCurveValue_Params
{
public:
	struct FRuntimeFloatCurve                    InCurve;                                           // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        InX;                                               // 0x88(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutY;                                              // 0x8C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetCurrentStreamedLevels
struct ULevelFunctionLibrary_GetCurrentStreamedLevels_Params
{
public:
	class UObject*                               WorldCtx;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.GetAllActorsFromLevel
struct ULevelFunctionLibrary_GetAllActorsFromLevel_Params
{
public:
	TSubclassOf<class AActor>                    Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldCtx;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LevelName;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.CallFunctionOnLevelRoomSystem
struct ULevelFunctionLibrary_CallFunctionOnLevelRoomSystem_Params
{
public:
	class ULevel*                                InLevel;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InFunctionName;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EEB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRoomLoadInformation                  RoomInfo;                                          // 0x20(0x50)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.LevelFunctionLibrary.CallFunctionOnLevel
struct ULevelFunctionLibrary_CallFunctionOnLevel_Params
{
public:
	class ULevelStreaming*                       InLevel;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InFunctionName;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.LevelStreamingAsyncNode.StreamLevelsAsync
struct ULevelStreamingAsyncNode_StreamLevelsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelStreamingManager*                LevelManager;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Levels;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class ULevelStreamingAsyncNode*              ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.LevelStreamingAsyncNode.LevelLoadingFinished
struct ULevelStreamingAsyncNode_LevelLoadingFinished_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.LevelStreamingManager.UnloadStreamingLevel
struct ALevelStreamingManager_UnloadStreamingLevel_Params
{
public:
	class FName                                  InLevelName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.LevelStreamingManager.SetStreamingLevels
struct ALevelStreamingManager_SetStreamingLevels_Params
{
public:
	TArray<class FName>                          InLevelNames;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.LevelStreamingManager.LoadStreamingLevel
struct ALevelStreamingManager_LoadStreamingLevel_Params
{
public:
	class FName                                  InLevelName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.LevelStreamingManager.IsLevelLoaded
struct ALevelStreamingManager_IsLevelLoaded_Params
{
public:
	class FName                                  InLevelName;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.LevelUnstreamingAsyncNode.UnstreamLevelsAsync
struct ULevelUnstreamingAsyncNode_UnstreamLevelsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelStreamingManager*                LevelManager;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Levels;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class ULevelUnstreamingAsyncNode*            ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.LevelUnstreamingAsyncNode.LevelUnloadingFinished
struct ULevelUnstreamingAsyncNode_LevelUnloadingFinished_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.LevelUnstreamingAsyncNode.BeforeUnloadingFinished
struct ULevelUnstreamingAsyncNode_BeforeUnloadingFinished_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.LookAtAreaInterface.SetInteractionLocked
struct ILookAtAreaInterface_SetInteractionLocked_Params
{
public:
	bool                                         bLocked;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.LookAtAreaInterface.IsInteractionUnlocked
struct ILookAtAreaInterface_IsInteractionUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.LookAtAreaInterface.GetMaxDetectionDistance
struct ILookAtAreaInterface_GetMaxDetectionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MadnessComponent.ModifyMadness
struct UMadnessComponent_ModifyMadness_Params
{
public:
	int32                                        Offset;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipGodMode;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MadnessComponent.GetMaximumPsycheOverall
struct UMadnessComponent_GetMaximumPsycheOverall_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MadnessComponent.GetMaximumPsycheAllowed
struct UMadnessComponent_GetMaximumPsycheAllowed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MadnessComponent.GetMaximumMadness
struct UMadnessComponent_GetMaximumMadness_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MadnessComponent.GetIsMadnessModificationEnabled
struct UMadnessComponent_GetIsMadnessModificationEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MadnessComponent.GetIsMadnessEnabled
struct UMadnessComponent_GetIsMadnessEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MadnessComponent.GetCurrentPsyche
struct UMadnessComponent_GetCurrentPsyche_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MadnessComponent.GetCurrentMadness
struct UMadnessComponent_GetCurrentMadness_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.UpdateAggro
struct AMainPawnCpp_UpdateAggro_Params
{
public:
	class ACGAICharacter*                        InCharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIsAggroed;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.TryToSwitchAmmo
struct AMainPawnCpp_TryToSwitchAmmo_Params
{
public:
	bool                                         OutSwitchSucceeded;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.TryToShoot
struct AMainPawnCpp_TryToShoot_Params
{
public:
	bool                                         OutActivationSucceeded;                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.TryToReload
struct AMainPawnCpp_TryToReload_Params
{
public:
	bool                                         OutReloadSucceeded;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.TryToAim
struct AMainPawnCpp_TryToAim_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.SwapActiveItem
struct AMainPawnCpp_SwapActiveItem_Params
{
public:
	TSubclassOf<class ACGActiveItem>             InNewActiveItemClass;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutSwapSuccessful;                                 // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F14[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.ShowHideGameplayHands
struct AMainPawnCpp_ShowHideGameplayHands_Params
{
public:
	bool                                         NewHidden;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpeedMultiplier;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetWasInteractionWithInteractableExecuted
struct AMainPawnCpp_SetWasInteractionWithInteractableExecuted_Params
{
public:
	bool                                         bIsExecuted;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetSkippableCurrentDialogue
struct AMainPawnCpp_SetSkippableCurrentDialogue_Params
{
public:
	bool                                         bInNewSkippable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetPlayerBreathParameters
struct AMainPawnCpp_SetPlayerBreathParameters_Params
{
public:
	float                                        BreathPeriodDuration;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreathIntensity;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetPDAToggleActivated
struct AMainPawnCpp_SetPDAToggleActivated_Params
{
public:
	bool                                         bIsActivated;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetMovementStateMachineEnabled
struct AMainPawnCpp_SetMovementStateMachineEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetGameplayHandsAndItemsVisible
struct AMainPawnCpp_SetGameplayHandsAndItemsVisible_Params
{
public:
	bool                                         bInVisible;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetFirstPersonCameraFocusCPP
struct AMainPawnCpp_SetFirstPersonCameraFocusCPP_Params
{
public:
	class AActor*                                InFocusSorce;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossibleOffset;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GalobalInterpMod;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.SetExperienceGainBlocked
struct AMainPawnCpp_SetExperienceGainBlocked_Params
{
public:
	bool                                         bIsBlocked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.RemovePerk
struct AMainPawnCpp_RemovePerk_Params
{
public:
	class FName                                  PerkName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.RemoveInterrogation
struct AMainPawnCpp_RemoveInterrogation_Params
{
public:
	class ACGAICharacter*                        InAI;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.RemoveAggro
struct AMainPawnCpp_RemoveAggro_Params
{
public:
	class ACGAICharacter*                        InAI;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.ProcessFire
struct AMainPawnCpp_ProcessFire_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.MainPawnCpp.PlayReactionShakeABP
struct AMainPawnCpp_PlayReactionShakeABP_Params
{
public:
	struct FFPReaction                           InReaction;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InScale;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.MainPawnCpp.PlayReactionShake
struct AMainPawnCpp_PlayReactionShake_Params
{
public:
	struct FFPReaction                           InReaction;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InScale;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.MainPawnCpp.PlayCutscene
struct AMainPawnCpp_PlayCutscene_Params
{
public:
	class UMovieSceneSequencePlayer*             InSequencePlayer;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InFakeHeroStart;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InFakeHeroEnd;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ACGAICharacter*>                InSequencerActors;                                 // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        InHideWeaponAnimScale;                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InHeroInterpolationToStartLength;                  // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InCameraInterpolationToStartLength;                // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InCameraInterpolationToEndLength;                  // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InAICharactersBlendOutLength;                      // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRestore;                                        // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F20[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function ChernobylGame.MainPawnCpp.PlayCustomAnim
struct AMainPawnCpp_PlayCustomAnim_Params
{
public:
	class UAnimSequence*                         InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F21[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlayCustomAnimProperties             InProperties;                                      // 0x40(0x60)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ACGFakeHero*                           OutFakeHero;                                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendInTime;                                     // 0xA8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendInCameraTime;                               // 0xAC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendOutCameraTime;                              // 0xB0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShouldInterpolate;                              // 0xB4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInSholdEnableMovementAfter;                       // 0xB5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShouldApplyGodmodeForDuration;                  // 0xB6(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShouldHideCustomHands;                          // 0xB7(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShouldUncrouch;                                 // 0xB8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOldBehavior;                                      // 0xB9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetByHalfCapsule;                              // 0xBA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F22[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xBC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ChernobylGame.MainPawnCpp.OverrideLastDamageEvent
struct AMainPawnCpp_OverrideLastDamageEvent_Params
{
public:
	struct FCGDamageEvent                        InNewLastDamage;                                   // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.OpenBuildSystem
struct AMainPawnCpp_OpenBuildSystem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.MainPawnCpp.OnRadiationPhaseChanged
struct AMainPawnCpp_OnRadiationPhaseChanged_Params
{
public:
	enum class EHealthPhase                      InOldPhase;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHealthPhase                      InNewPhase;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.MainPawnCpp.OnHideShowFinished
struct AMainPawnCpp_OnHideShowFinished_Params
{
public:
	bool                                         InResult;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFPAnimSystemActivity             InTargetState;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.OnHealthPhaseChanged
struct AMainPawnCpp_OnHealthPhaseChanged_Params
{
public:
	enum class EHealthPhase                      InOldPhase;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHealthPhase                      InNewPhase;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F24[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               InDamageType;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.MainPawnCpp.OnEndOverlapWithComponent
struct AMainPawnCpp_OnEndOverlapWithComponent_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F25[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.OnDash
struct AMainPawnCpp_OnDash_Params
{
public:
	enum class EDashDirection                    InDirection;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChernobylGame.MainPawnCpp.OnBeginOverlapWithComponent
struct AMainPawnCpp_OnBeginOverlapWithComponent_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F28[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.MovementStart
struct AMainPawnCpp_MovementStart_Params
{
public:
	TSubclassOf<class ACGMovementState>          InInitialMovementState;                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.IsStealthKillEnabled
struct AMainPawnCpp_IsStealthKillEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.IsPlayerWearingGasMask
struct AMainPawnCpp_IsPlayerWearingGasMask_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.MainPawnCpp.HideShowActiveItem
struct AMainPawnCpp_HideShowActiveItem_Params
{
public:
	bool                                         OutActionSuccessful;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFastAction;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.HasParkourExpert
struct AMainPawnCpp_HasParkourExpert_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetWasInteractionWithInteractableExectued
struct AMainPawnCpp_GetWasInteractionWithInteractableExectued_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetThreatPerCharacter
struct AMainPawnCpp_GetThreatPerCharacter_Params
{
public:
	TMap<class ACGAICharacter*, float>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetPlayerStamina
struct AMainPawnCpp_GetPlayerStamina_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetPlayerMovementStarted
struct AMainPawnCpp_GetPlayerMovementStarted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetNumAvailableGasMaskFilters
struct AMainPawnCpp_GetNumAvailableGasMaskFilters_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetLeanAxis
struct AMainPawnCpp_GetLeanAxis_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetIsWWiseMediumOrHeavySprintState
struct AMainPawnCpp_GetIsWWiseMediumOrHeavySprintState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetIsPlayerSprinting
struct AMainPawnCpp_GetIsPlayerSprinting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetIsPDAToggleActivated
struct AMainPawnCpp_GetIsPDAToggleActivated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetIsExperienceGainBlocked
struct AMainPawnCpp_GetIsExperienceGainBlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetHighestThreat
struct AMainPawnCpp_GetHighestThreat_Params
{
public:
	class ACGAICharacter*                        OutHighestThreatCharacter;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutHighestFloat;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetGasMaskPostprocessInstanceDynamic
struct AMainPawnCpp_GetGasMaskPostprocessInstanceDynamic_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetCurrentResourceType
struct AMainPawnCpp_GetCurrentResourceType_Params
{
public:
	enum class EScannableResourceType            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetCurrentAggroList
struct AMainPawnCpp_GetCurrentAggroList_Params
{
public:
	TArray<class ACGAICharacter*>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetCumulatedVisionAlertModifier
struct AMainPawnCpp_GetCumulatedVisionAlertModifier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.GetClimbPossibility
struct AMainPawnCpp_GetClimbPossibility_Params
{
public:
	struct FCGClimbQuery                         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.FullQueryFinished
struct AMainPawnCpp_FullQueryFinished_Params
{
public:
	enum class EState                            InQueryInitialItemState;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGActiveItem>             InQueryInitialItemClass;                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.ForceInteractionFinished
struct AMainPawnCpp_ForceInteractionFinished_Params
{
public:
	class UActorComponent*                       InComponent;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.FindActiveItemInInventory
struct AMainPawnCpp_FindActiveItemInInventory_Params
{
public:
	TSubclassOf<class ACGActiveItem>             InActiveItemClass;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGActiveItem*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.FadeAudioMaster
struct AMainPawnCpp_FadeAudioMaster_Params
{
public:
	bool                                         InAudioOn;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.MainPawnCpp.DropItem
struct AMainPawnCpp_DropItem_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Upgrades;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.DisableJumpSound
struct AMainPawnCpp_DisableJumpSound_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OverwriteExisting;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F34[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.DisableFallDamage
struct AMainPawnCpp_DisableFallDamage_Params
{
public:
	bool                                         bInNewDisabled;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.DialogueSetFocues
struct AMainPawnCpp_DialogueSetFocues_Params
{
public:
	class AActor*                                ActorToFocus;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.DebugPsycheModify
struct AMainPawnCpp_DebugPsycheModify_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.DamageReceivedReactionCPP
struct AMainPawnCpp_DamageReceivedReactionCPP_Params
{
public:
	float                                        InDivideScale;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.Cutscenes_SequenceUpdateHero
struct AMainPawnCpp_Cutscenes_SequenceUpdateHero_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.Cutscenes_SequenceUpdateCharacters
struct AMainPawnCpp_Cutscenes_SequenceUpdateCharacters_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.Cutscenes_SequenceUpdate
struct AMainPawnCpp_Cutscenes_SequenceUpdate_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.Cutscenes_InterpHeroToStartUpdate
struct AMainPawnCpp_Cutscenes_InterpHeroToStartUpdate_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.CloseInventory
struct AMainPawnCpp_CloseInventory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MainPawnCpp.Climb
struct AMainPawnCpp_Climb_Params
{
public:
	struct FCGClimbQuery                         InQuery;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.CheckUncrouchPossibility
struct AMainPawnCpp_CheckUncrouchPossibility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChernobylGame.MainPawnCpp.CheckPerk
struct AMainPawnCpp_CheckPerk_Params
{
public:
	class FName                                  PerkName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueA;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueB;                                            // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnOneIfNotFound;                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.CheckIfBuildSystemIsAbleToOpen
struct AMainPawnCpp_CheckIfBuildSystemIsAbleToOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.CheckCrouchPossibility
struct AMainPawnCpp_CheckCrouchPossibility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.MainPawnCpp.ChangePsyche_CPP
struct AMainPawnCpp_ChangePsyche_CPP_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.AreInteractionsWithInteractableEnabled
struct AMainPawnCpp_AreInteractionsWithInteractableEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.AddPerkCPP
struct AMainPawnCpp_AddPerkCPP_Params
{
public:
	class FName                                  PerkName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.MainPawnCpp.AddPerk
struct AMainPawnCpp_AddPerk_Params
{
public:
	class FName                                  PerkName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.AddInterrogation
struct AMainPawnCpp_AddInterrogation_Params
{
public:
	class ACGAICharacter*                        InAI;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MainPawnCpp.AddAggro
struct AMainPawnCpp_AddAggro_Params
{
public:
	class ACGAICharacter*                        InAI;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.ActiveItem_TryAlternativeActivate
struct AMainPawnCpp_ActiveItem_TryAlternativeActivate_Params
{
public:
	bool                                         OutActivationSucceeded;                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.ActiveItem_TryActivate
struct AMainPawnCpp_ActiveItem_TryActivate_Params
{
public:
	bool                                         OutActivationSucceeded;                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.ActiveItem_Melee
struct AMainPawnCpp_ActiveItem_Melee_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.MainPawnCpp.AccessInventory
struct AMainPawnCpp_AccessInventory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MiniStorage.Remove
struct UMiniStorage_Remove_Params
{
public:
	enum class EResourceType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Amount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MiniStorage.Count
struct UMiniStorage_Count_Params
{
public:
	enum class EResourceType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.MiniStorage.Add
struct UMiniStorage_Add_Params
{
public:
	enum class EResourceType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Amount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.MorningActivityManager.Update
struct AMorningActivityManager_Update_Params
{
public:
	struct FMorningActivityInfo                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.OverheatingFlashlight.ToggleTurnedOn
struct UOverheatingFlashlight_ToggleTurnedOn_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.OverheatingFlashlight.SetTurnedOn
struct UOverheatingFlashlight_SetTurnedOn_Params
{
public:
	bool                                         On;                                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Force;                                             // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ChernobylGame.OverheatingFlashlight.OverheatingFlashlightEvent__DelegateSignature
struct UOverheatingFlashlight_OverheatingFlashlightEvent__DelegateSignature_Params
{
public:
	class UOverheatingFlashlight*                Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.OverheatingFlashlight.IsTurnedOn
struct UOverheatingFlashlight_IsTurnedOn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.OverheatingFlashlight.FlashlightSetIntensity
struct UOverheatingFlashlight_FlashlightSetIntensity_Params
{
public:
	float                                        InIntensity;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.PassiveDialogueActions.IsDislikedBuildEntityInBase
struct UPassiveDialogueActions_IsDislikedBuildEntityInBase_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.PassiveDialogueActions.IsCompanionInConflict
struct UPassiveDialogueActions_IsCompanionInConflict_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.PassiveDialogueActions.IsCompanionHurt
struct UPassiveDialogueActions_IsCompanionHurt_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.PassiveDialogueActions.HasPlayerHaveLowPsyche
struct UPassiveDialogueActions_HasPlayerHaveLowPsyche_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.PassiveDialogueActions.HasPlayerDoneTraining
struct UPassiveDialogueActions_HasPlayerDoneTraining_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.PassiveDialogueActions.HasCompanionLowMorale
struct UPassiveDialogueActions_HasCompanionLowMorale_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.PassiveDialogueActions.GetNPC
struct UPassiveDialogueActions_GetNPC_Params
{
public:
	class ACGNPC*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.PdaInput.SwitchApp
struct IPdaInput_SwitchApp_Params
{
public:
	int32                                        InAppIndx;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.PdaInput.OpenApp
struct IPdaInput_OpenApp_Params
{
public:
	int32                                        InAppIndx;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.PdaInput.InputUpDown
struct IPdaInput_InputUpDown_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.PdaInput.InputRUpDown
struct IPdaInput_InputRUpDown_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.PdaInput.InputRLeftRight
struct IPdaInput_InputRLeftRight_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.PdaInput.InputLeftRight
struct IPdaInput_InputLeftRight_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.PickableObject.SetItemAndAmount
struct IPickableObject_SetItemAndAmount_Params
{
public:
	enum class EResourceType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Amount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           SM;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseAmountValue;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.PickableObject.GetItemFromDistributor
struct IPickableObject_GetItemFromDistributor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.PlayDialogueCustomPose.PlayDialogueCustomPose
struct UPlayDialogueCustomPose_PlayDialogueCustomPose_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCGCustomDialogueAction>       InCustomDialogueActionArray;                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        InInterpolationLength;                             // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayDialogueCustomPose*               ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.PlayQuickTimeEventNode.Update
struct UPlayQuickTimeEventNode_Update_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function ChernobylGame.PlayQuickTimeEventNode.PlayQuickTimeEventRaw
struct UPlayQuickTimeEventNode_PlayQuickTimeEventRaw_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuickTimeEventData                   QuickTimeEvent;                                    // 0x8(0x1C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x1D0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayQuickTimeEventNode*               ReturnValue;                                       // 0x1D8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.PlayQuickTimeEventNode.PlayQuickTimeEvent
struct UPlayQuickTimeEventNode_PlayQuickTimeEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuickTimeEvent*                       QuickTimeEvent;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayQuickTimeEventNode*               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x250 (0x250 - 0x0)
// Function ChernobylGame.PlayQuickTimeEventNode.GetCurrentPlatformBrush_Raw
struct UPlayQuickTimeEventNode_GetCurrentPlatformBrush_Raw_Params
{
public:
	struct FSlateBrush                           OutBrush;                                          // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FQuickTimeEventData                   EventData;                                         // 0x88(0x1C8)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.PlaySoundWithSubtitlesAsyncNode.ShowSubtitle
struct UPlaySoundWithSubtitlesAsyncNode_ShowSubtitle_Params
{
public:
	class USubtitlesManager*                     SubtitlesManager;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Subtitle;                                          // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        TimeShown;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function ChernobylGame.PlaySoundWithSubtitlesAsyncNode.PlaySoundAttachedToComponentWithSubtitlesFromAudio
struct UPlaySoundWithSubtitlesAsyncNode_PlaySoundAttachedToComponentWithSubtitlesFromAudio_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            Sound;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttachToComponent;                                 // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachPointName;                                   // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ActorName;                                         // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorColor;                                        // 0x38(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsWhisper;                                         // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4C(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x58(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        VolumeMultiplier;                                  // 0x64(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMultiplier;                                   // 0x68(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x70(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     AttenuationSettings;                               // 0x78(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlaySoundWithSubtitlesAsyncNode*      ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ChernobylGame.PlaySoundWithSubtitlesAsyncNode.PlaySoundAtLocationWithSubtitlesFromAudio
struct UPlaySoundWithSubtitlesAsyncNode_PlaySoundAtLocationWithSubtitlesFromAudio_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            Sound;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ActorName;                                         // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorColor;                                        // 0x28(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x38(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsWhisper;                                         // 0x44(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotation;                                          // 0x48(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        VolumeMultiplier;                                  // 0x54(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMultiplier;                                   // 0x58(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     AttenuationSettings;                               // 0x68(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlaySoundWithSubtitlesAsyncNode*      ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.PlaySoundWithSubtitlesAsyncNode.PlaySound2DWithSubtitlesFromAudio
struct UPlaySoundWithSubtitlesAsyncNode_PlaySound2DWithSubtitlesFromAudio_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            Sound;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ActorName;                                         // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorColor;                                        // 0x28(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsWhisper;                                         // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeMultiplier;                                  // 0x3C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMultiplier;                                   // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlaySoundWithSubtitlesAsyncNode*      ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.PlaySoundWithSubtitlesAsyncNode.ClearNativeEventsBoundToAudioFinished
struct UPlaySoundWithSubtitlesAsyncNode_ClearNativeEventsBoundToAudioFinished_Params
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.QteUIBase.UpdateProgress
struct UQteUIBase_UpdateProgress_Params
{
public:
	float                                        ProgressPercent;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.QuickMenuComponent.Use
struct UQuickMenuComponent_Use_Params
{
public:
	enum class EQuickMenuSlot                    Slot;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.QuickMenuComponent.SetQuickUseScrollEnabled
struct UQuickMenuComponent_SetQuickUseScrollEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.QuickMenuComponent.SetQMenuActive
struct UQuickMenuComponent_SetQMenuActive_Params
{
public:
	bool                                         bNewActive;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.QuickMenuComponent.SetLeaveDuplicates
struct UQuickMenuComponent_SetLeaveDuplicates_Params
{
public:
	enum class EQuickMenuSlot                    Slot;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemId;                                            // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FAE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.QuickMenuComponent.SetFirstFreeSlot
struct UQuickMenuComponent_SetFirstFreeSlot_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.QuickMenuComponent.Set
struct UQuickMenuComponent_Set_Params
{
public:
	enum class EQuickMenuSlot                    Slot;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemId;                                            // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.QuickMenuComponent.GetQuickUseScrollEnabled
struct UQuickMenuComponent_GetQuickUseScrollEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.QuickMenuComponent.GetFirstSlotWithName
struct UQuickMenuComponent_GetFirstSlotWithName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuickMenuSlot                    ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB7[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.QuickMenuComponent.Get
struct UQuickMenuComponent_Get_Params
{
public:
	enum class EQuickMenuSlot                    Slot;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChernobylGame.QuickMenuComponent.EquipItemFromInventory
struct UQuickMenuComponent_EquipItemFromInventory_Params
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.QuickTimeEvent.UnbindInputs
struct UQuickTimeEvent_UnbindInputs_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.QuickTimeEvent.StickRotationVertical
struct UQuickTimeEvent_StickRotationVertical_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.QuickTimeEvent.StickRotationHorizontal
struct UQuickTimeEvent_StickRotationHorizontal_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction ChernobylGame.QuickTimeEvent.QTEUpdateDelegate__DelegateSignature
struct UQuickTimeEvent_QTEUpdateDelegate__DelegateSignature_Params
{
public:
	float                                        PercentCompleted;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.QuickTimeEvent.GetRemainingTimePercent
struct UQuickTimeEvent_GetRemainingTimePercent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.QuickTimeEvent.GetRemainingTime
struct UQuickTimeEvent_GetRemainingTime_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function ChernobylGame.QuickTimeEvent.GetCurrentPlatformBrush
struct UQuickTimeEvent_GetCurrentPlatformBrush_Params
{
public:
	struct FSlateBrush                           OutBrush;                                          // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.QuickTimeEvent.BindInputs
struct UQuickTimeEvent_BindInputs_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.QuickTimeEvent.AxisPressed
struct UQuickTimeEvent_AxisPressed_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.QuickTimeEvent.AxisHeld
struct UQuickTimeEvent_AxisHeld_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.RadarAfterImage.SpawnParticleEffect
struct ARadarAfterImage_SpawnParticleEffect_Params
{
public:
	class UParticleSystemComponent*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.RadarAfterImage.GetHeldActor
struct ARadarAfterImage_GetHeldActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.RadarAfterImage.GetDynamicMaterial
struct ARadarAfterImage_GetDynamicMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.RadarAfterImage.GetCurrentLifetime
struct ARadarAfterImage_GetCurrentLifetime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.RadarSphere.UpdateHighlightsToANewType
struct ARadarSphere_UpdateHighlightsToANewType_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.RadarSphere.SpawnRadarWave
struct ARadarSphere_SpawnRadarWave_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARadarSphere*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.RadarSphere.RemoveHightlightFromActor
struct ARadarSphere_RemoveHightlightFromActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutCurrentLifetime;                                // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FDB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ChernobylGame.RadarSphere.RadarSphereDestroyedDelegate__DelegateSignature
struct ARadarSphere_RadarSphereDestroyedDelegate__DelegateSignature_Params
{
public:
	class ARadarSphere*                          Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ChernobylGame.RadarSphere.RadarImageCreatedDelegate__DelegateSignature
struct ARadarSphere_RadarImageCreatedDelegate__DelegateSignature_Params
{
public:
	class ARadarSphere*                          Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARadarAfterImage*                      RadarImage;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ChernobylGame.RadarSphere.RadarDetectionDelegate__DelegateSignature
struct ARadarSphere_RadarDetectionDelegate__DelegateSignature_Params
{
public:
	class ARadarSphere*                          Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorFound;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChernobylGame.RadarSphere.CreateHighlightForActorStartingAtDuration
struct ARadarSphere_CreateHighlightForActorStartingAtDuration_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingDuration;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseForce;                                          // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ARadarAfterImage*                      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.ReportInput.InputUpDown
struct IReportInput_InputUpDown_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChernobylGame.ReportInput.InputLeftRight
struct IReportInput_InputLeftRight_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.ResearchText.WordSelectedVisualChange
struct UResearchText_WordSelectedVisualChange_Params
{
public:
	class UBorder*                               Border;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ResearchText.OnSelected
struct UResearchText_OnSelected_Params
{
public:
	class USelectableTextBase*                   Caller;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Correct;                                           // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FE9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.ResearchText.FinishTextSelection
struct UResearchText_FinishTextSelection_Params
{
public:
	bool                                         InPlayerChoosedCorrectly;                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.SaveableObject.ShouldUpdateOverlapsOnLoad
struct ISaveableObject_ShouldUpdateOverlapsOnLoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.SaveableObject.HasObjectsToSave
struct ISaveableObject_HasObjectsToSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.SaveableObject.GetObjectsToSave
struct ISaveableObject_GetObjectsToSave_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.SaveGameActor.SaveGameAsync
struct ASaveGameActor_SaveGameAsync_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                SlotName;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FEE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.SaveGameActor.SaveGame
struct ASaveGameActor_SaveGame_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FEF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.SaveGameActor.LoadGame
struct ASaveGameActor_LoadGame_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.ScannableObject.ShouldIgnoreScan
struct IScannableObject_ShouldIgnoreScan_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.ScannableObject.ShouldBeHightlighted
struct IScannableObject_ShouldBeHightlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.ScannableObject.GetResourceType
struct IScannableObject_GetResourceType_Params
{
public:
	enum class EScannableResourceType            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ScannableObject.GetMeshesToSkipDuringHighlight
struct IScannableObject_GetMeshesToSkipDuringHighlight_Params
{
public:
	TArray<TSoftObjectPtr<class UPrimitiveComponent>> ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ScannableObject.GetForcedMeshesToHighlight
struct IScannableObject_GetForcedMeshesToHighlight_Params
{
public:
	TArray<class USkeletalMeshComponent*>        ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ScannableObject.GetAdditionalActorsToHighlight
struct IScannableObject_GetAdditionalActorsToHighlight_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChernobylGame.SelectableTextBase.PopulateWordGroups
struct USelectableTextBase_PopulateWordGroups_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                OutWordsMapping;                                   // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWordGroup>                    OutGroups;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTextBlock*>                    OutWordsList;                                      // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.SelectableTextBase.CreateTextBlockWidget
struct USelectableTextBase_CreateTextBlockWidget_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTextBlock*                            OutTextBlock;                                      // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBorder*                               OutBorder;                                         // 0x20(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.SelectableTextBase.BroadcastWordSelection
struct USelectableTextBase_BroadcastWordSelection_Params
{
public:
	bool                                         InCorrectSelection;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ShadowPatrolActor.GetNextCombinedTeleports
struct AShadowPatrolActor_GetNextCombinedTeleports_Params
{
public:
	TArray<class ACGShadowTeleportBase*>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ShadowPatrolActor.GetNextCombinedPatrols
struct AShadowPatrolActor_GetNextCombinedPatrols_Params
{
public:
	TArray<class APatrolActor*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.ShadowPatrolActor.GetClosestTeleportRoute
struct AShadowPatrolActor_GetClosestTeleportRoute_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.ShadowPatrolActor.FindNextNode
struct AShadowPatrolActor_FindNextNode_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.StaticBuffManager.RemoveBuff
struct UStaticBuffManager_RemoveBuff_Params
{
public:
	enum class EStaticBuff                       Buff;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.StaticBuffManager.HaveBuff
struct UStaticBuffManager_HaveBuff_Params
{
public:
	enum class EStaticBuff                       Buff;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChernobylGame.StaticBuffManager.AddBuff
struct UStaticBuffManager_AddBuff_Params
{
public:
	enum class EStaticBuff                       Buff;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChernobylGame.SubtitlesManager.SubtitlesAreInDebugMode
struct USubtitlesManager_SubtitlesAreInDebugMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChernobylGame.SubtitlesManager.RemoveWhisperOrSubtitle
struct USubtitlesManager_RemoveWhisperOrSubtitle_Params
{
public:
	class UUserWidget*                           Whisper;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.SubtitlesManager.GetSubtitlesManager
struct USubtitlesManager_GetSubtitlesManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubtitlesManager*                     ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.SubtitlesManager.GetSubtitlesFromSoundWave
struct USubtitlesManager_GetSubtitlesFromSoundWave_Params
{
public:
	class USoundWave*                            SoundWave;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubtitleCueBP>                OutSubtitleCues;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChernobylGame.SubtitlesManager.AddWhisper
struct USubtitlesManager_AddWhisper_Params
{
public:
	class FText                                  WhisperText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        TimeShown;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x1C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4000[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ReturnValue;                                       // 0x30(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.SubtitlesManager.AddSubtitle
struct USubtitlesManager_AddSubtitle_Params
{
public:
	class FText                                  ActorName;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  SubtitleText;                                      // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        TimeShown;                                         // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorColor;                                        // 0x34(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4002[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleEntry*                        ReturnValue;                                       // 0x48(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.SubtitlesManager.AddAvatarSubtitle
struct USubtitlesManager_AddAvatarSubtitle_Params
{
public:
	class FText                                  ActorName;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  SubtitleText;                                      // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  ActorId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeShown;                                         // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActorColor;                                        // 0x3C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlaceholderText;                                 // 0x4C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4005[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleEntry*                        ReturnValue;                                       // 0x50(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChernobylGame.SwitchHeroToCustomView.FSwitchHeroToGameplayView
struct USwitchHeroToCustomView_FSwitchHeroToGameplayView_Params
{
public:
	class AMainPawnCpp*                          InHero;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4007[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InBlendToTransform;                                // 0x10(0x30)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InBlendInTime;                                     // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4008[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USwitchHeroToCustomView*               ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.SwitchHeroToCustomView.FSwitchHeroToCustomView
struct USwitchHeroToCustomView_FSwitchHeroToCustomView_Params
{
public:
	class AMainPawnCpp*                          InHero;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4009[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InBlendToTransform;                                // 0x10(0x30)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InBlendInTime;                                     // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendInCameraTime;                               // 0x44(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShouldUncrouch;                                 // 0x48(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInNoInputCam;                                     // 0x49(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_400A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USwitchHeroToCustomView*               ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_400C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.UpgradeComponent.LearnBlueprint
struct UUpgradeComponent_LearnBlueprint_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4012[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BlueprintID;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4013[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.UpgradeComponent.HasUpgrades
struct UUpgradeComponent_HasUpgrades_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4014[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.UpgradeComponent.HasAvailableUpgrades
struct UUpgradeComponent_HasAvailableUpgrades_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4015[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetUpgrades
struct UUpgradeComponent_GetUpgrades_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4016[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetUpgradeInfo
struct UUpgradeComponent_GetUpgradeInfo_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4018[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpradeID;                                          // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsVaid;                                            // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4019[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeEntry                         ReturnValue;                                       // 0x10(0x108)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetTriggerAdditionalInfo
struct UUpgradeComponent_GetTriggerAdditionalInfo_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_401A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_401B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGTriggerProperties                  ReturnValue;                                       // 0x10(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetStats
struct UUpgradeComponent_GetStats_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_401C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_401D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetStaticMeshForAnUpgrade
struct UUpgradeComponent_GetStaticMeshForAnUpgrade_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_401F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4020[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetScopeAdditionalInfo
struct UUpgradeComponent_GetScopeAdditionalInfo_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4021[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4022[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetHandleAdditionalInfo
struct UUpgradeComponent_GetHandleAdditionalInfo_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4024[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4025[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGHandleProperties                   ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetCraftedUpgrades
struct UUpgradeComponent_GetCraftedUpgrades_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4026[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetCategories
struct UUpgradeComponent_GetCategories_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUpgradeCategory>              ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetBarrelAdditionalInfo
struct UUpgradeComponent_GetBarrelAdditionalInfo_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4029[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGBarrelProperties                   ReturnValue;                                       // 0x10(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetAvailableUpgrades
struct UUpgradeComponent_GetAvailableUpgrades_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.UpgradeComponent.GetAttachmentPointForUpgrade
struct UUpgradeComponent_GetAttachmentPointForUpgrade_Params
{
public:
	class FName                                  UpgradeName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.UpgradeComponent.ForgetBlueprint
struct UUpgradeComponent_ForgetBlueprint_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BlueprintID;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChernobylGame.UpgradeComponent.AddCraftedUpgrades
struct UUpgradeComponent_AddCraftedUpgrades_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChernobylGame.WaitForLevelUnloadedAsyncNode.WaitForLevelUnloadedAsyncNode
struct UWaitForLevelUnloadedAsyncNode_WaitForLevelUnloadedAsyncNode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckInterval;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaitForLevelUnloadedAsyncNode*        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChernobylGame.WidgetFunctionLibrary.ScalePositionByDPI
struct UWidgetFunctionLibrary_ScalePositionByDPI_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


