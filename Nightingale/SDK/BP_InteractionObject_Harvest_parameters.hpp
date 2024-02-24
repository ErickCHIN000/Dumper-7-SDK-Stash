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

// 0x580 (0x580 - 0x0)
// Function BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C.GetInteractionTextForResourceNode
struct UBP_InteractionObject_Harvest_C_GetInteractionTextForResourceNode_Params
{
public:
	class AResourceNodeIIMBase*                  ResourceNode;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        InstanceID;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_734E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InteractText;                                      // 0x10(0x18)(Parm, OutParm)
	class UInstancedResourceNodeComponent*       IIMComponent;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  DefaultCollectText;                                // 0x30(0x18)(Edit, BlueprintVisible)
	uint8                                        Pad_7384[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIIMInstance                          CallFunc_GetInstance_OutInstance;                  // 0x50(0x170)(None)
	bool                                         CallFunc_GetInstance_ReturnValue;                  // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7393[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInstancedResourceNodeComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FIIMInstance                          K2Node_SetFieldsInStruct_StructOut;                // 0x1D0(0x170)(None)
	struct FResourceSpawn                        CallFunc_GetResourceForInstance_OutResource;       // 0x340(0x10)(NoDestructor)
	struct FItemRewardDef                        CallFunc_Array_Get_Item;                           // 0x350(0xB0)(ContainsInstancedReference)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_TryGetItemData_ItemData;                  // 0x408(0xD8)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetItemData_Branches;                  // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73DE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x4E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFeatureFlagStatus                CallFunc_FeatureFlagBranch_Result;                 // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXItemPresentationDataAsset*         K2Node_DynamicCast_AsNWXItem_Presentation_Data_Asset; // 0x4F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x502(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73F8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x508(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x558(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x568(0x18)(None)
};

// 0x19C (0x19C - 0x0)
// Function BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C.ExecuteInteractionOnResourceNode
struct UBP_InteractionObject_Harvest_C_ExecuteInteractionOnResourceNode_Params
{
public:
	class ABP_ResourceNode_IIM_C*                ResourceNode;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class AController*                           Controller;                                        // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x188(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue;            // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInstanceIdFromInteractionData_InstanceId; // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x352 (0x352 - 0x0)
// Function BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C.CanInteractWithResourceNode
struct UBP_InteractionObject_Harvest_C_CanInteractWithResourceNode_Params
{
public:
	class AResourceNodeIIMBase*                  ResourceNode;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        InstanceID;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanInteract;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionData                      LInteraction;                                      // 0x10(0x178)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FInteractionData                      LInteractionData;                                  // 0x188(0x178)(Edit, BlueprintVisible, ContainsInstancedReference)
	class ABP_ResourceNode_IIM_C*                LResourceNode;                                     // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        LInstanceID;                                       // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7610[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_ResourceNode_C>  K2Node_DynamicCast_AsBPI_Resource_Node;            // 0x310(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInstanceHarvestable_IsHarvestable;      // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7620[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Interactable_C>  K2Node_DynamicCast_AsBPI_Interactable;             // 0x328(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesHaveResourceType_bHasResourceType;    // 0x339(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_762E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Interactable_C>  K2Node_DynamicCast_AsBPI_Interactable_1;           // 0x340(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesHaveResourceType_bHasResourceType_1;  // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


