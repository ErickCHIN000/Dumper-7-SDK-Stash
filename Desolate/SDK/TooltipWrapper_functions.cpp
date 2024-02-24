#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TooltipWrapper.TooltipWrapper_C
// (None)

class UClass* UTooltipWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TooltipWrapper_C");

	return Clss;
}


// TooltipWrapper_C TooltipWrapper.Default__TooltipWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTooltipWrapper_C* UTooltipWrapper_C::GetDefaultObj()
{
	static class UTooltipWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTooltipWrapper_C*>(UTooltipWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TooltipWrapper.TooltipWrapper_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UTooltipWrapper_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipWrapper_C", "OnAddedToFocusPath");

	Params::UTooltipWrapper_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipWrapper.TooltipWrapper_C.ExecuteUbergraph_TooltipWrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)

void UTooltipWrapper_C::ExecuteUbergraph_TooltipWrapper(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipWrapper_C", "ExecuteUbergraph_TooltipWrapper");

	Params::UTooltipWrapper_C_ExecuteUbergraph_TooltipWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipWrapper.TooltipWrapper_C.OnTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipWrapper_C::OnTooltip__DelegateSignature(class UWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipWrapper_C", "OnTooltip__DelegateSignature");

	Params::UTooltipWrapper_C_OnTooltip__DelegateSignature_Params Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);

}

}


