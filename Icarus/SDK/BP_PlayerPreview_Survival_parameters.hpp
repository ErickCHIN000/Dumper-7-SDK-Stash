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

// 0x39 (0x39 - 0x0)
// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.On Connected Player Initialised
struct ABP_PlayerPreview_Survival_C_On_Connected_Player_Initialised_Params
{
public:
	struct FConnectedPlayer                      ConnectedPlayer;                                   // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.RefreshPlayerCosmetics
struct ABP_PlayerPreview_Survival_C_RefreshPlayerCosmetics_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2619[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasActiveCharacter_ReturnValue;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2624[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               CallFunc_GetActiveCharacter_ReturnValue;           // 0x18(0xA0)(ConstParm)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.SetPlayer
struct ABP_PlayerPreview_Survival_C_SetPlayer_Params
{
public:
	class AIcarusPlayerCharacter*                InPlayer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UConnectedPlayers*                     CallFunc_GetConnectedPlayers_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.ConstructPlayerMeshArray
struct ABP_PlayerPreview_Survival_C_ConstructPlayerMeshArray_Params
{
public:
	TArray<class USkeletalMesh*>                 MeshArray;                                         // 0x0(0x10)(Parm, OutParm)
	TArray<TSoftClassPtr<class UAnimInstance>>   MeshAnimBPs;                                       // 0x10(0x10)(Parm, OutParm)
	class USkeletalMesh*                         BodyMesh;                                          // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetPlayer_Player;                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                 CallFunc_ConstructPlayerMeshArray_MeshArray;       // 0x30(0x10)(ReferenceParm)
	TArray<TSoftClassPtr<class UAnimInstance>>   CallFunc_ConstructPlayerMeshArray_MeshAnimBPs;     // 0x40(0x10)(ReferenceParm)
	class USkeletalMesh*                         CallFunc_ConstructPlayerMeshArray_BodyMesh;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetThirdPersonMesh_ReturnValue;           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.ResolveVisibility
struct ABP_PlayerPreview_Survival_C_ResolveVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInventoryVisibile_Visible;              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


