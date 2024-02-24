#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ScriptedEventRow.ScriptedEventRow_C
// (None)

class UClass* UScriptedEventRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedEventRow_C");

	return Clss;
}


// ScriptedEventRow_C ScriptedEventRow.Default__ScriptedEventRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScriptedEventRow_C* UScriptedEventRow_C::GetDefaultObj()
{
	static class UScriptedEventRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScriptedEventRow_C*>(UScriptedEventRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScriptedEventRow.ScriptedEventRow_C.AddScriptedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UScriptedEventRow_C::AddScriptedEvent(class FText RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedEventRow_C", "AddScriptedEvent");

	Params::UScriptedEventRow_C_AddScriptedEvent_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedEventRow.ScriptedEventRow_C.ExecuteUbergraph_ScriptedEventRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_RowName                                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptedEventsRowHandle    CallFunc_MakeScriptedEvents_ReturnValue                          (NoDestructor, HasGetValueTypeHash)

void UScriptedEventRow_C::ExecuteUbergraph_ScriptedEventRow(int32 EntryPoint, class FText K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FScriptedEventsRowHandle& CallFunc_MakeScriptedEvents_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedEventRow_C", "ExecuteUbergraph_ScriptedEventRow");

	Params::UScriptedEventRow_C_ExecuteUbergraph_ScriptedEventRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeScriptedEvents_ReturnValue = CallFunc_MakeScriptedEvents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


