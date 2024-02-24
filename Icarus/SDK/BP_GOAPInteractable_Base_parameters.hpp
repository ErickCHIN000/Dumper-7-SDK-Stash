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

// 0xA (0xA - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.ShouldOverrideTargetNeutrality
struct ABP_GOAPInteractable_Base_C_ShouldOverrideTargetNeutrality_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTargetHostile;                                  // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetCriticalHitBones
struct ABP_GOAPInteractable_Base_C_GetCriticalHitBones_Params
{
public:
	TArray<struct FCriticalHitLocation>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetRelationshipData
struct ABP_GOAPInteractable_Base_C_GetRelationshipData_Params
{
public:
	struct FAIRelationshipsRowHandle             ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetTargetAlertness
struct ABP_GOAPInteractable_Base_C_GetTargetAlertness_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetTargetLocation
struct ABP_GOAPInteractable_Base_C_GetTargetLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.IsActorAlive
struct ABP_GOAPInteractable_Base_C_IsActorAlive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.IsCriticalHitDisabled
struct ABP_GOAPInteractable_Base_C_IsCriticalHitDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.IsHidden
struct ABP_GOAPInteractable_Base_C_IsHidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.OnInteractionComplete
struct ABP_GOAPInteractable_Base_C_OnInteractionComplete_Params
{
public:
	class AIcarusNPCGOAPController*              Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature
struct ABP_GOAPInteractable_Base_C_BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature_Params
{
public:
	class UIcarusGOAPInteractableComponent*      Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.OnMontageComplete
struct ABP_GOAPInteractable_Base_C_OnMontageComplete_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInterrupted;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature
struct ABP_GOAPInteractable_Base_C_BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature_Params
{
public:
	class UIcarusGOAPInteractableComponent*      Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature
struct ABP_GOAPInteractable_Base_C_BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature_Params
{
public:
	class UIcarusGOAPInteractableComponent*      Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x250 (0x250 - 0x0)
// Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.ExecuteUbergraph_BP_GOAPInteractable_Base
struct ABP_GOAPInteractable_Base_C_ExecuteUbergraph_BP_GOAPInteractable_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D9B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusGOAPInteractableComponent*      K2Node_ComponentBoundEvent_Component_2;            // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusNPCGOAPCharacter*               CallFunc_GetNPCCharacter_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UIcarusGOAPAction>       CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x40(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x68(0x18)(None)
	class ABP_IcarusNPCGOAPCharacter_C*          K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter;   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x90(0x40)(HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CompleteCurrentAction_ReturnValue;        // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DCD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_CustomEvent_Montage;                        // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bInterrupted;                   // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DD7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0xF0(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusGameStateSurvival*              K2Node_DynamicCast_AsIcarus_Game_State_Survival;   // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DF9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusGOAPInteractableComponent*      K2Node_ComponentBoundEvent_Component_1;            // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusGOAPInteractableComponent*      K2Node_ComponentBoundEvent_Component;              // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x140(0x10)(ZeroConstructor, NoDestructor)
	TSoftObjectPtr<class UAnimMontage>           CallFunc_GetMontageForAction_ActionMontage;        // 0x150(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FName                                  CallFunc_GetMontageForAction_MontageSection;       // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetMontageForAction_MontageNotify;        // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMontageForAction_ReturnValue;          // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_DynamicCast_AsAnim_Montage;                 // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_DynamicCast_AsAnim_Montage_1;               // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_SoftObjectReference_ReturnValue; // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_1;          // 0x1C0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1D8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x218(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x228(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


