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

// 0x11 (0x11 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnClientDataRequested
struct IBP_JigCharacterInterface_C_OnClientDataRequested_Params
{
public:
	TArray<int32>                                ActionbarUIDs;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnSpecialContainerattachmentUpdated
struct IBP_JigCharacterInterface_C_OnSpecialContainerattachmentUpdated_Params
{
public:
	class UJSI_Slot_C*                           ItemRef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnLoadSavedDataRequested
struct IBP_JigCharacterInterface_C_OnLoadSavedDataRequested_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnInteractActorOverDistance
struct IBP_JigCharacterInterface_C_OnInteractActorOverDistance_Params
{
public:
	class AActor*                                ActorRef;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.JigCheckWeaponAmmoCount
struct IBP_JigCharacterInterface_C_JigCheckWeaponAmmoCount_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.GetAnimationInfo
struct IBP_JigCharacterInterface_C_GetAnimationInfo_Params
{
public:
	enum class EPlayerSlots                      ActiveSlot;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Leaning;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ADS;                                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Crouched;                                          // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstPerson_;                                    // 0x12(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_170C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WeaponID;                                          // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnPickupInteractExecuted
struct IBP_JigCharacterInterface_C_OnPickupInteractExecuted_Params
{
public:
	class AActor*                                PickupRef;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.RequestServerData
struct IBP_JigCharacterInterface_C_RequestServerData_Params
{
public:
	class UBP_JigMultiplayer_C*                  TargetComp;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.AddJigWidgetToContent
struct IBP_JigCharacterInterface_C_AddJigWidgetToContent_Params
{
public:
	class UUserWidget*                           WidgetRef;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  ContentName;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


