#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InputQueueDebug_Entry.UI_InputQueueDebug_Entry_C
// (None)

class UClass* UUI_InputQueueDebug_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InputQueueDebug_Entry_C");

	return Clss;
}


// UI_InputQueueDebug_Entry_C UI_InputQueueDebug_Entry.Default__UI_InputQueueDebug_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InputQueueDebug_Entry_C* UUI_InputQueueDebug_Entry_C::GetDefaultObj()
{
	static class UUI_InputQueueDebug_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InputQueueDebug_Entry_C*>(UUI_InputQueueDebug_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_InputQueueDebug_Entry.UI_InputQueueDebug_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_InputQueueDebug_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InputQueueDebug_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InputQueueDebug_Entry.UI_InputQueueDebug_Entry_C.Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InputQueueDebug_Entry_C::Timer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InputQueueDebug_Entry_C", "Timer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InputQueueDebug_Entry.UI_InputQueueDebug_Entry_C.ExecuteUbergraph_UI_InputQueueDebug_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UUI_InputQueueDebug_Entry_C::ExecuteUbergraph_UI_InputQueueDebug_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InputQueueDebug_Entry_C", "ExecuteUbergraph_UI_InputQueueDebug_Entry");

	Params::UUI_InputQueueDebug_Entry_C_ExecuteUbergraph_UI_InputQueueDebug_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


