#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AfflictionRow.AfflictionRow_C
// (None)

class UClass* UAfflictionRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AfflictionRow_C");

	return Clss;
}


// AfflictionRow_C AfflictionRow.Default__AfflictionRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAfflictionRow_C* UAfflictionRow_C::GetDefaultObj()
{
	static class UAfflictionRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAfflictionRow_C*>(UAfflictionRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AfflictionRow.AfflictionRow_C.LessThan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAfflictionRow_C*            K2Node_DynamicCast_AsAffliction_Row                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LexicalLess_Name_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAfflictionRow_C::LessThan(class UObject* Other, class UAfflictionRow_C* K2Node_DynamicCast_AsAffliction_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AfflictionRow_C", "LessThan");

	Params::UAfflictionRow_C_LessThan_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsAffliction_Row = K2Node_DynamicCast_AsAffliction_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LexicalLess_Name_ReturnValue = CallFunc_LexicalLess_Name_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AfflictionRow.AfflictionRow_C.Set Row
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAfflictionRow_C::Set_Row(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AfflictionRow_C", "Set Row");

	Params::UAfflictionRow_C_Set_Row_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AfflictionRow.AfflictionRow_C.ExecuteUbergraph_AfflictionRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        K2Node_CustomEvent_RowName                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAfflictionChanceRowHandle  CallFunc_MakeAfflictionChance_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAfflictionChance           CallFunc_GetAfflictionChanceStruct_AfflictionChance              (None)
// enum class EValid                  CallFunc_GetAfflictionChanceStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAfflictionRow_C::ExecuteUbergraph_AfflictionRow(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class FName K2Node_CustomEvent_RowName, const struct FAfflictionChanceRowHandle& CallFunc_MakeAfflictionChance_ReturnValue, int32 CallFunc_ReplaceInline_ReturnValue, const struct FAfflictionChance& CallFunc_GetAfflictionChanceStruct_AfflictionChance, enum class EValid CallFunc_GetAfflictionChanceStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AfflictionRow_C", "ExecuteUbergraph_AfflictionRow");

	Params::UAfflictionRow_C_ExecuteUbergraph_AfflictionRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_MakeAfflictionChance_ReturnValue = CallFunc_MakeAfflictionChance_ReturnValue;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_GetAfflictionChanceStruct_AfflictionChance = CallFunc_GetAfflictionChanceStruct_AfflictionChance;
	Parms.CallFunc_GetAfflictionChanceStruct_Paths = CallFunc_GetAfflictionChanceStruct_Paths;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


