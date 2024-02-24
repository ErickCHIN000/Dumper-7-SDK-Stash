#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SkillTreeWidgetTest.SkillTreeWidgetTest_C
// (None)

class UClass* USkillTreeWidgetTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkillTreeWidgetTest_C");

	return Clss;
}


// SkillTreeWidgetTest_C SkillTreeWidgetTest.Default__SkillTreeWidgetTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkillTreeWidgetTest_C* USkillTreeWidgetTest_C::GetDefaultObj()
{
	static class USkillTreeWidgetTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkillTreeWidgetTest_C*>(USkillTreeWidgetTest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkillTreeWidgetTest.SkillTreeWidgetTest_C.SkillTreeTooltip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SkillType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class UWidget* USkillTreeWidgetTest_C::SkillTreeTooltip(enum class Enum_SkillType Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkillTreeWidgetTest_C", "SkillTreeTooltip");

	Params::USkillTreeWidgetTest_C_SkillTreeTooltip_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SkillTreeWidgetTest.SkillTreeWidgetTest_C.UpdateUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeWidgetTest_C::UpdateUnlocked(bool Unlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkillTreeWidgetTest_C", "UpdateUnlocked");

	Params::USkillTreeWidgetTest_C_UpdateUnlocked_Params Parms{};

	Parms.Unlocked = Unlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkillTreeWidgetTest.SkillTreeWidgetTest_C.OnTechNodeInitialized
// (Event, Public, BlueprintEvent)
// Parameters:

void USkillTreeWidgetTest_C::OnTechNodeInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkillTreeWidgetTest_C", "OnTechNodeInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkillTreeWidgetTest.SkillTreeWidgetTest_C.OnTechnologyUnlockStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTTTechNode*                 TechNode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsUnlocked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeWidgetTest_C::OnTechnologyUnlockStateChanged(class UTTTechNode* TechNode, bool IsUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkillTreeWidgetTest_C", "OnTechnologyUnlockStateChanged");

	Params::USkillTreeWidgetTest_C_OnTechnologyUnlockStateChanged_Params Parms{};

	Parms.TechNode = TechNode;
	Parms.IsUnlocked = IsUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkillTreeWidgetTest.SkillTreeWidgetTest_C.BndEvt__SkillTreeWidget_UnlockButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USkillTreeWidgetTest_C::BndEvt__SkillTreeWidget_UnlockButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkillTreeWidgetTest_C", "BndEvt__SkillTreeWidget_UnlockButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkillTreeWidgetTest.SkillTreeWidgetTest_C.ExecuteUbergraph_SkillTreeWidgetTest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SkillType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJournal_SkillTreeTooltip_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTTTechNode*                 K2Node_CustomEvent_TechNode                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsUnlocked                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SkillTreeAsset_C*        K2Node_DynamicCast_AsBP_Skill_Tree_Asset                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTechnologyTree*             CallFunc_GetAssignedTechTree_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTechnologyUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeWidgetTest_C::ExecuteUbergraph_SkillTreeWidgetTest(int32 EntryPoint, enum class Enum_SkillType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, class UJournal_SkillTreeTooltip_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTTTechNode* K2Node_CustomEvent_TechNode, bool K2Node_CustomEvent_IsUnlocked, class UBP_SkillTreeAsset_C* K2Node_DynamicCast_AsBP_Skill_Tree_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree_1, class UTechnologyTree* CallFunc_GetAssignedTechTree_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTechnologyUnlocked_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkillTreeWidgetTest_C", "ExecuteUbergraph_SkillTreeWidgetTest");

	Params::USkillTreeWidgetTest_C_ExecuteUbergraph_SkillTreeWidgetTest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TechNode = K2Node_CustomEvent_TechNode;
	Parms.K2Node_CustomEvent_IsUnlocked = K2Node_CustomEvent_IsUnlocked;
	Parms.K2Node_DynamicCast_AsBP_Skill_Tree_Asset = K2Node_DynamicCast_AsBP_Skill_Tree_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetSkillTreeManager_TechTree = CallFunc_GetSkillTreeManager_TechTree;
	Parms.CallFunc_GetSkillTreeManager_TechTree_1 = CallFunc_GetSkillTreeManager_TechTree_1;
	Parms.CallFunc_GetAssignedTechTree_ReturnValue = CallFunc_GetAssignedTechTree_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTechnologyUnlocked_ReturnValue = CallFunc_IsTechnologyUnlocked_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


