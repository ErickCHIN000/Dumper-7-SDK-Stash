#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VerticalRadioSelect.VerticalRadioSelect_C
// (None)

class UClass* UVerticalRadioSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerticalRadioSelect_C");

	return Clss;
}


// VerticalRadioSelect_C VerticalRadioSelect.Default__VerticalRadioSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerticalRadioSelect_C* UVerticalRadioSelect_C::GetDefaultObj()
{
	static class UVerticalRadioSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerticalRadioSelect_C*>(UVerticalRadioSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VerticalRadioSelect.VerticalRadioSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVerticalRadioSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalRadioSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VerticalRadioSelect.VerticalRadioSelect_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UVerticalRadioSelect_C::CustomEvent_0(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalRadioSelect_C", "CustomEvent_0");

	Params::UVerticalRadioSelect_C_CustomEvent_0_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerticalRadioSelect.VerticalRadioSelect_C.ExecuteUbergraph_VerticalRadioSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Value                                         (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UVerticalRadioSelect_C::ExecuteUbergraph_VerticalRadioSelect(int32 EntryPoint, const class FString& K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalRadioSelect_C", "ExecuteUbergraph_VerticalRadioSelect");

	Params::UVerticalRadioSelect_C_ExecuteUbergraph_VerticalRadioSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


