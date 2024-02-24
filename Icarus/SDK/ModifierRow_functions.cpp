#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModifierRow.ModifierRow_C
// (None)

class UClass* UModifierRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModifierRow_C");

	return Clss;
}


// ModifierRow_C ModifierRow.Default__ModifierRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModifierRow_C* UModifierRow_C::GetDefaultObj()
{
	static class UModifierRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModifierRow_C*>(UModifierRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModifierRow.ModifierRow_C.LessThan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UModifierRow_C*              K2Node_DynamicCast_AsModifier_Row                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LexicalLess_Name_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UModifierRow_C::LessThan(class UObject* Other, class UModifierRow_C* K2Node_DynamicCast_AsModifier_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModifierRow_C", "LessThan");

	Params::UModifierRow_C_LessThan_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsModifier_Row = K2Node_DynamicCast_AsModifier_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LexicalLess_Name_ReturnValue = CallFunc_LexicalLess_Name_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ModifierRow.ModifierRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UModifierRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModifierRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModifierRow.ModifierRow_C.ExecuteUbergraph_ModifierRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifierStatesRowHandle    CallFunc_MakeModifierStates_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FModifierStateData          CallFunc_GetModifierStatesStruct_ModifierStates                  (None)
// enum class EValid                  CallFunc_GetModifierStatesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UModifierRow_C::ExecuteUbergraph_ModifierRow(int32 EntryPoint, const struct FModifierStatesRowHandle& CallFunc_MakeModifierStates_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStatesStruct_ModifierStates, enum class EValid CallFunc_GetModifierStatesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModifierRow_C", "ExecuteUbergraph_ModifierRow");

	Params::UModifierRow_C_ExecuteUbergraph_ModifierRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeModifierStates_ReturnValue = CallFunc_MakeModifierStates_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_GetModifierStatesStruct_ModifierStates = CallFunc_GetModifierStatesStruct_ModifierStates;
	Parms.CallFunc_GetModifierStatesStruct_Paths = CallFunc_GetModifierStatesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


