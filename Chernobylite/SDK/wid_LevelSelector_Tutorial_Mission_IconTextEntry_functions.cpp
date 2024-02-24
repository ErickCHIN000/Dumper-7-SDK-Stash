#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LevelSelector_Tutorial_Mission_IconTextEntry.wid_LevelSelector_Tutorial_Mission_IconTextEntry_C
// (None)

class UClass* UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LevelSelector_Tutorial_Mission_IconTextEntry_C");

	return Clss;
}


// wid_LevelSelector_Tutorial_Mission_IconTextEntry_C wid_LevelSelector_Tutorial_Mission_IconTextEntry.Default__wid_LevelSelector_Tutorial_Mission_IconTextEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C* UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C::GetDefaultObj()
{
	static class UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C*>(UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LevelSelector_Tutorial_Mission_IconTextEntry.wid_LevelSelector_Tutorial_Mission_IconTextEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Mission_IconTextEntry_C", "PreConstruct");

	Params::UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelector_Tutorial_Mission_IconTextEntry.wid_LevelSelector_Tutorial_Mission_IconTextEntry_C.ExecuteUbergraph_wid_LevelSelector_Tutorial_Mission_IconTextEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C::ExecuteUbergraph_wid_LevelSelector_Tutorial_Mission_IconTextEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Mission_IconTextEntry_C", "ExecuteUbergraph_wid_LevelSelector_Tutorial_Mission_IconTextEntry");

	Params::UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C_ExecuteUbergraph_wid_LevelSelector_Tutorial_Mission_IconTextEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


