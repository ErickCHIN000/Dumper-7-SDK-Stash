#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FactionRow.FactionRow_C
// (None)

class UClass* UFactionRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FactionRow_C");

	return Clss;
}


// FactionRow_C FactionRow.Default__FactionRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFactionRow_C* UFactionRow_C::GetDefaultObj()
{
	static class UFactionRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFactionRow_C*>(UFactionRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FactionRow.FactionRow_C.AddFaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFactionRow_C::AddFaction(class FText RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FactionRow_C", "AddFaction");

	Params::UFactionRow_C_AddFaction_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FactionRow.FactionRow_C.ExecuteUbergraph_FactionRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_RowName                                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionMissionsRowHandle   CallFunc_MakeFactionMissions_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UFactionRow_C::ExecuteUbergraph_FactionRow(int32 EntryPoint, class FText K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFactionMissionsRowHandle& CallFunc_MakeFactionMissions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FactionRow_C", "ExecuteUbergraph_FactionRow");

	Params::UFactionRow_C_ExecuteUbergraph_FactionRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeFactionMissions_ReturnValue = CallFunc_MakeFactionMissions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


