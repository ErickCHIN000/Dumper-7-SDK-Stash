#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbstractShellStats.AbstractShellStats_C
// (None)

class UClass* UAbstractShellStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbstractShellStats_C");

	return Clss;
}


// AbstractShellStats_C AbstractShellStats.Default__AbstractShellStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbstractShellStats_C* UAbstractShellStats_C::GetDefaultObj()
{
	static class UAbstractShellStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbstractShellStats_C*>(UAbstractShellStats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AbstractShellStats.AbstractShellStats_C.UpdateBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumSquaresFilled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbstractShellStats_C::UpdateBar(int32 NumSquaresFilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbstractShellStats_C", "UpdateBar");

	Params::UAbstractShellStats_C_UpdateBar_Params Parms{};

	Parms.NumSquaresFilled = NumSquaresFilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbstractShellStats.AbstractShellStats_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UAbstractShellStats_C::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbstractShellStats_C", "GetText");

	Params::UAbstractShellStats_C_GetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AbstractShellStats.AbstractShellStats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbstractShellStats_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbstractShellStats_C", "PreConstruct");

	Params::UAbstractShellStats_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbstractShellStats.AbstractShellStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAbstractShellStats_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbstractShellStats_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbstractShellStats.AbstractShellStats_C.ExecuteUbergraph_AbstractShellStats
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UAbstractShellStats_C::ExecuteUbergraph_AbstractShellStats(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbstractShellStats_C", "ExecuteUbergraph_AbstractShellStats");

	Params::UAbstractShellStats_C_ExecuteUbergraph_AbstractShellStats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


