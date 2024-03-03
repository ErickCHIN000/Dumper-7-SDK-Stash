#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Friendly_Widget.Friendly_Widget_C
// (None)

class UClass* UFriendly_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Friendly_Widget_C");

	return Clss;
}


// Friendly_Widget_C Friendly_Widget.Default__Friendly_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendly_Widget_C* UFriendly_Widget_C::GetDefaultObj()
{
	static class UFriendly_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendly_Widget_C*>(UFriendly_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Friendly_Widget.Friendly_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendly_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Friendly_Widget_C", "PreConstruct");

	Params::UFriendly_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Friendly_Widget.Friendly_Widget_C.ExecuteUbergraph_Friendly_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendly_Widget_C::ExecuteUbergraph_Friendly_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Friendly_Widget_C", "ExecuteUbergraph_Friendly_Widget");

	Params::UFriendly_Widget_C_ExecuteUbergraph_Friendly_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


