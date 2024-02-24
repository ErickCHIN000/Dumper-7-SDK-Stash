#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StringRow.StringRow_C
// (None)

class UClass* UStringRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StringRow_C");

	return Clss;
}


// StringRow_C StringRow.Default__StringRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStringRow_C* UStringRow_C::GetDefaultObj()
{
	static class UStringRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStringRow_C*>(UStringRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StringRow.StringRow_C.Set String
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UStringRow_C::Set_String(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StringRow_C", "Set String");

	Params::UStringRow_C_Set_String_Params Parms{};

	Parms.InString = InString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StringRow.StringRow_C.ExecuteUbergraph_StringRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InString                                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UStringRow_C::ExecuteUbergraph_StringRow(int32 EntryPoint, const class FString& K2Node_CustomEvent_InString, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StringRow_C", "ExecuteUbergraph_StringRow");

	Params::UStringRow_C_ExecuteUbergraph_StringRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InString = K2Node_CustomEvent_InString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


