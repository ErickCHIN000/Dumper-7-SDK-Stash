#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x4C0 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C
class UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Tree;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Close;                                         // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_ancestry_tree_C*            WBP_cc_sw_ancestry_tree;                           // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnThumbSelected;                                   // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCloseSelected;                                   // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C* GetDefaultObj();

	void UpdateTree(class UBP_CharacterAppearanceComponent_C* AppearanceComponent);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_7_ED_TreeSlotSelected__DelegateSignature(const struct FDataTableRowHandle& AppearanceRow, int32 FamilyTreeIndex, bool IsEmpty);
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence_Tree(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_AppearanceRow, int32 K2Node_ComponentBoundEvent_FamilyTreeIndex, bool K2Node_ComponentBoundEvent_IsEmpty);
	void OnCloseSelected__DelegateSignature();
	void OnThumbSelected__DelegateSignature(const struct FDataTableRowHandle& Current_Archetype, int32 Index);
};

}


