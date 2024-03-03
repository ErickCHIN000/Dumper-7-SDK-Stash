#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hostile_Widget.Hostile_Widget_C
// (None)

class UClass* UHostile_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hostile_Widget_C");

	return Clss;
}


// Hostile_Widget_C Hostile_Widget.Default__Hostile_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHostile_Widget_C* UHostile_Widget_C::GetDefaultObj()
{
	static class UHostile_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHostile_Widget_C*>(UHostile_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hostile_Widget.Hostile_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHostile_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hostile_Widget_C", "PreConstruct");

	Params::UHostile_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Hostile_Widget.Hostile_Widget_C.ExecuteUbergraph_Hostile_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHostile_Widget_C::ExecuteUbergraph_Hostile_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hostile_Widget_C", "ExecuteUbergraph_Hostile_Widget");

	Params::UHostile_Widget_C_ExecuteUbergraph_Hostile_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


