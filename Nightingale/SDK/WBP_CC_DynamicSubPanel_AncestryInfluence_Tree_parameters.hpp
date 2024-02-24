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

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.UpdateTree
struct UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_UpdateTree_Params
{
public:
	class UBP_CharacterAppearanceComponent_C*    AppearanceComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_7_ED_TreeSlotSelected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_7_ED_TreeSlotSelected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   AppearanceRow;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        FamilyTreeIndex;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEmpty;                                           // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence_Tree
struct UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_762B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_AppearanceRow;          // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_FamilyTreeIndex;        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsEmpty;                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.OnThumbSelected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_OnThumbSelected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   Current_Archetype;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


