#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.Default__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C* UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C*>(UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.UpdateTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterAppearanceComponent_C*AppearanceComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::UpdateTree(class UBP_CharacterAppearanceComponent_C* AppearanceComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C", "UpdateTree");

	Params::UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_UpdateTree_Params Parms{};

	Parms.AppearanceComponent = AppearanceComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C", "BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_7_ED_TreeSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         AppearanceRow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              FamilyTreeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_7_ED_TreeSlotSelected__DelegateSignature(const struct FDataTableRowHandle& AppearanceRow, int32 FamilyTreeIndex, bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C", "BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_7_ED_TreeSlotSelected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_7_ED_TreeSlotSelected__DelegateSignature_Params Parms{};

	Parms.AppearanceRow = AppearanceRow;
	Parms.FamilyTreeIndex = FamilyTreeIndex;
	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence_Tree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_AppearanceRow                         (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_FamilyTreeIndex                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsEmpty                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence_Tree(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_AppearanceRow, int32 K2Node_ComponentBoundEvent_FamilyTreeIndex, bool K2Node_ComponentBoundEvent_IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence_Tree");

	Params::UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_AppearanceRow = K2Node_ComponentBoundEvent_AppearanceRow;
	Parms.K2Node_ComponentBoundEvent_FamilyTreeIndex = K2Node_ComponentBoundEvent_FamilyTreeIndex;
	Parms.K2Node_ComponentBoundEvent_IsEmpty = K2Node_ComponentBoundEvent_IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.OnCloseSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::OnCloseSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C", "OnCloseSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_AncestryInfluence_Tree.WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C.OnThumbSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Current_Archetype                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C::OnThumbSelected__DelegateSignature(const struct FDataTableRowHandle& Current_Archetype, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C", "OnThumbSelected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C_OnThumbSelected__DelegateSignature_Params Parms{};

	Parms.Current_Archetype = Current_Archetype;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


