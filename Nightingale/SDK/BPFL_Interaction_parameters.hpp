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

// 0x488 (0x488 - 0x0)
// Function BPFL_Interaction.BPFL_Interaction_C.GetInteractionOptions
struct UBPFL_Interaction_C_GetInteractionOptions_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class APawn*                                 Pawn;                                              // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNWXInteractionOption>         InteractionOptions;                                // 0x188(0x10)(Parm, OutParm)
	class UStructureInteraction_PostConstructionInteraction_DataAsset* LInteractionDataAsset;                             // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXInteractionOption                 ExistingInteraction;                               // 0x1A8(0x70)(Edit, BlueprintVisible)
	bool                                         bFoundConnectionMatch;                             // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXInteractionOption                 NewInteraction;                                    // 0x220(0x70)(Edit, BlueprintVisible)
	TArray<struct FNWXInteractionOption>         LInteractionOptions;                               // 0x290(0x10)(Edit, BlueprintVisible)
	TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> LAvailable_Interactions;                           // 0x2A0(0x10)(Edit, BlueprintVisible)
	class APawn*                                 LPawn;                                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UObject*                               LInteractable;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetInteractableObjectFromInteractionData_ReturnValue; // 0x2C0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetUniqueID_ReturnValue;                  // 0x2D4(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureInteractionComponent*        CallFunc_GetDefaultObject_ReturnValue;             // 0x2E8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetConnectionDataAssetUID_ReturnValue;    // 0x2F0(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> CallFunc_GetAllMeshInteractions_Available_Interactions; // 0x300(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_Guid_ReturnValue;                 // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item;                           // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x325(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x326(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B4A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_StructureInteractionObject_C*      CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object; // 0x330(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StructureInteraction_C> K2Node_DynamicCast_AsBPI_Structure_Interaction;    // 0x338(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisabledDescription_Description;       // 0x350(0x18)(None)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNWXInteractionOption                 CallFunc_Array_Get_Item_1;                         // 0x370(0x70)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanExecuteStructureInteraction_bCanInteract; // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CanExecuteStructureInteraction_InteractionText; // 0x400(0x18)(None)
	struct FNWXInteractionOption                 K2Node_MakeStruct_NWXInteractionOption;            // 0x418(0x70)(None)
};

// 0x1BE (0x1BE - 0x0)
// Function BPFL_Interaction.BPFL_Interaction_C.HasMultipleInteractionOptions
struct UBPFL_Interaction_C_HasMultipleInteractionOptions_Params
{
public:
	struct FInteractionData                      CurrentInteractionData;                            // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class APawn*                                 InteractingPawn;                                   // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         HasMultipleInteractions;                           // 0x188(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               LInteractable;                                     // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetInteractableObjectFromInteractionData_ReturnValue; // 0x198(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyKindOfStructureObject_IsValidStructure; // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> CallFunc_GetActiveMeshInteractions_Mesh_Interactions; // 0x1A8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A1 (0x4A1 - 0x0)
// Function BPFL_Interaction.BPFL_Interaction_C.GetInteractableTransform
struct UBPFL_Interaction_C_GetInteractableTransform_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Transform;                                         // 0x180(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      LInteractionData;                                  // 0x1E0(0x178)(Edit, BlueprintVisible, ContainsInstancedReference)
	class AActor*                                LInteractionActor;                                 // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Temp_struct_Variable;                              // 0x360(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractableGetter>  K2Node_DynamicCast_AsInteractable_Getter;          // 0x3C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E46[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x3E0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetInteractableTransform_ReturnValue;     // 0x440(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x490 (0x490 - 0x0)
// Function BPFL_Interaction.BPFL_Interaction_C.InteractWithInteractable
struct UBPFL_Interaction_C_InteractWithInteractable_Params
{
public:
	class UObject*                               Interactable;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x10(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            AbilitySystem;                                     // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface;        // 0x1B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface_1;      // 0x1E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetInteractionTag_InteractionTag;         // 0x1FC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetInteractionTag_ReturnValue;            // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_600C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionTargetData                K2Node_MakeStruct_InteractionTargetData;           // 0x218(0x180)(ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle      CallFunc_TargetDataFromInteractionData_ReturnValue; // 0x398(0x28)(None)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x3C0(0xD0)(None)
};

// 0x2FB (0x2FB - 0x0)
// Function BPFL_Interaction.BPFL_Interaction_C.NotEqual
struct UBPFL_Interaction_C_NotEqual_Params
{
public:
	struct FInteractionData                      A;                                                 // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FInteractionData                      B;                                                 // 0x178(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         NotEqual;                                          // 0x2F8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Equal_IsEqual;                            // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2FA (0x2FA - 0x0)
// Function BPFL_Interaction.BPFL_Interaction_C.Equal
struct UBPFL_Interaction_C_Equal_Params
{
public:
	struct FInteractionData                      A;                                                 // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FInteractionData                      B;                                                 // 0x178(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEqual;                                           // 0x2F8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


