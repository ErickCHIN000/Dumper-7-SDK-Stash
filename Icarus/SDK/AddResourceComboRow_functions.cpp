#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AddResourceComboRow.AddResourceComboRow_C
// (None)

class UClass* UAddResourceComboRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddResourceComboRow_C");

	return Clss;
}


// AddResourceComboRow_C AddResourceComboRow.Default__AddResourceComboRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAddResourceComboRow_C* UAddResourceComboRow_C::GetDefaultObj()
{
	static class UAddResourceComboRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddResourceComboRow_C*>(UAddResourceComboRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AddResourceComboRow.AddResourceComboRow_C.LessThan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAddResourceComboRow_C*      K2Node_DynamicCast_AsAdd_Resource_Combo_Row                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LexicalLess_Text_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAddResourceComboRow_C::LessThan(class UObject* Other, class UAddResourceComboRow_C* K2Node_DynamicCast_AsAdd_Resource_Combo_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Text_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AddResourceComboRow_C", "LessThan");

	Params::UAddResourceComboRow_C_LessThan_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsAdd_Resource_Combo_Row = K2Node_DynamicCast_AsAdd_Resource_Combo_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LexicalLess_Text_ReturnValue = CallFunc_LexicalLess_Text_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AddResourceComboRow.AddResourceComboRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAddResourceComboRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AddResourceComboRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AddResourceComboRow.AddResourceComboRow_C.ExecuteUbergraph_AddResourceComboRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FItemTemplateRowHandle      CallFunc_MakeItemTemplate_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAddResourceComboRow_C::ExecuteUbergraph_AddResourceComboRow(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FItemTemplateRowHandle& CallFunc_MakeItemTemplate_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AddResourceComboRow_C", "ExecuteUbergraph_AddResourceComboRow");

	Params::UAddResourceComboRow_C_ExecuteUbergraph_AddResourceComboRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_MakeItemTemplate_ReturnValue = CallFunc_MakeItemTemplate_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


