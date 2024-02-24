#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LureDisplay.UMG_LureDisplay_C
// (None)

class UClass* UUMG_LureDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LureDisplay_C");

	return Clss;
}


// UMG_LureDisplay_C UMG_LureDisplay.Default__UMG_LureDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LureDisplay_C* UUMG_LureDisplay_C::GetDefaultObj()
{
	static class UUMG_LureDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LureDisplay_C*>(UUMG_LureDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LureDisplay.UMG_LureDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LureDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LureDisplay_C", "PreConstruct");

	Params::UUMG_LureDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LureDisplay.UMG_LureDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_LureDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LureDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_LureDisplay.UMG_LureDisplay_C.ExecuteUbergraph_UMG_LureDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LureDisplay_C::ExecuteUbergraph_UMG_LureDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LureDisplay_C", "ExecuteUbergraph_UMG_LureDisplay");

	Params::UUMG_LureDisplay_C_ExecuteUbergraph_UMG_LureDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


