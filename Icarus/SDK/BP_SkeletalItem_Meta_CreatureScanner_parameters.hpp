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
// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.OnRep_Scanning
struct ABP_SkeletalItem_Meta_CreatureScanner_C_OnRep_Scanning_Params
{
public:
	class UUserWidget*                           CallFunc_GetWidget_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_CreatureScanner_C*                  K2Node_DynamicCast_AsW_Creature_Scanner;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.OnRep_AI
struct ABP_SkeletalItem_Meta_CreatureScanner_C_OnRep_AI_Params
{
public:
	class UUserWidget*                           CallFunc_GetWidget_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_CreatureScanner_C*                  K2Node_DynamicCast_AsW_Creature_Scanner;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.Play Fish Finder Finish Sound
struct ABP_SkeletalItem_Meta_CreatureScanner_C_Play_Fish_Finder_Finish_Sound_Params
{
public:
	enum class EFMODValid                        CallFunc_PlayEventAttached_IsValid;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.Play Sonar Sound
struct ABP_SkeletalItem_Meta_CreatureScanner_C_Play_Sonar_Sound_Params
{
public:
	enum class EFMODValid                        CallFunc_PlayEventAttached_IsValid;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.GetScreenWidget
struct ABP_SkeletalItem_Meta_CreatureScanner_C_GetScreenWidget_Params
{
public:
	class UWidgetComponent*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.GenericActionWithCharacter
struct ABP_SkeletalItem_Meta_CreatureScanner_C_GenericActionWithCharacter_Params
{
public:
	class AIcarusPlayerCharacter*                Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B8 (0x3B8 - 0x0)
// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner
struct ABP_SkeletalItem_Meta_CreatureScanner_C_ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_417B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x8(0x48)(None)
	struct FAISetupRowHandle                     Temp_struct_Variable;                              // 0x50(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetup                              CallFunc_GetAISetupStruct_AISetup;                 // 0x68(0x230)(None)
	enum class EValid                            CallFunc_GetAISetupStruct_Paths;                   // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4193[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x29C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4196[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetWidget_ReturnValue;                    // 0x2B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_CreatureScanner_C*                  K2Node_DynamicCast_AsW_Creature_Scanner;           // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_Event_Character;                            // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_IcarusNPCGOAPCharacter_C*>  CallFunc_GetAllActorsOfClass_OutActors;            // 0x2D0(0x10)(ReferenceParm)
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x2E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_SortActorsByDistanceFromOrigin_ReturnValue; // 0x2F8(0x10)(ReferenceParm)
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x308(0x20)(NoDestructor)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISpawnableAI>         K2Node_DynamicCast_AsSpawnable_AI;                 // 0x338(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAISetupRowHandle                     CallFunc_GetAISetupRowHandle_ReturnValue;          // 0x34C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetGameplayTagContainer_OutContainer;     // 0x368(0x20)(None)
	bool                                         CallFunc_GetGameplayTagContainer_ReturnValue;      // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FBestiaryPointsRowHandle              CallFunc_MakeLiteralBestiaryPoints_ReturnValue;    // 0x3A0(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


