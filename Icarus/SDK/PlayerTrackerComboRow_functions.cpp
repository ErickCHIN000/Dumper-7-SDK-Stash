#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerTrackerComboRow.PlayerTrackerComboRow_C
// (None)

class UClass* UPlayerTrackerComboRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrackerComboRow_C");

	return Clss;
}


// PlayerTrackerComboRow_C PlayerTrackerComboRow.Default__PlayerTrackerComboRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrackerComboRow_C* UPlayerTrackerComboRow_C::GetDefaultObj()
{
	static class UPlayerTrackerComboRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrackerComboRow_C*>(UPlayerTrackerComboRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerTrackerComboRow.PlayerTrackerComboRow_C.LessThan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UPlayerTrackerComboRow_C*    K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LexicalLess_Name_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPlayerTrackerComboRow_C::LessThan(class UObject* Other, class UPlayerTrackerComboRow_C* K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTrackerComboRow_C", "LessThan");

	Params::UPlayerTrackerComboRow_C_LessThan_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row = K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LexicalLess_Name_ReturnValue = CallFunc_LexicalLess_Name_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerTrackerComboRow.PlayerTrackerComboRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerTrackerComboRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTrackerComboRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTrackerComboRow.PlayerTrackerComboRow_C.ExecuteUbergraph_PlayerTrackerComboRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UPlayerTrackerComboRow_C::ExecuteUbergraph_PlayerTrackerComboRow(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTrackerComboRow_C", "ExecuteUbergraph_PlayerTrackerComboRow");

	Params::UPlayerTrackerComboRow_C_ExecuteUbergraph_PlayerTrackerComboRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


