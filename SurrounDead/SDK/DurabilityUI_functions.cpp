#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DurabilityUI.DurabilityUI_C
// (None)

class UClass* UDurabilityUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DurabilityUI_C");

	return Clss;
}


// DurabilityUI_C DurabilityUI.Default__DurabilityUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDurabilityUI_C* UDurabilityUI_C::GetDefaultObj()
{
	static class UDurabilityUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDurabilityUI_C*>(UDurabilityUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DurabilityUI.DurabilityUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDurabilityUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DurabilityUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DurabilityUI.DurabilityUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDurabilityUI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DurabilityUI_C", "PreConstruct");

	Params::UDurabilityUI_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DurabilityUI.DurabilityUI_C.ExecuteUbergraph_DurabilityUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDurabilityUI_C::ExecuteUbergraph_DurabilityUI(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DurabilityUI_C", "ExecuteUbergraph_DurabilityUI");

	Params::UDurabilityUI_C_ExecuteUbergraph_DurabilityUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


