#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BasicTooltip.UMG_BasicTooltip_C
// (None)

class UClass* UUMG_BasicTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BasicTooltip_C");

	return Clss;
}


// UMG_BasicTooltip_C UMG_BasicTooltip.Default__UMG_BasicTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BasicTooltip_C* UUMG_BasicTooltip_C::GetDefaultObj()
{
	static class UUMG_BasicTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BasicTooltip_C*>(UUMG_BasicTooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BasicTooltip.UMG_BasicTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BasicTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BasicTooltip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BasicTooltip.UMG_BasicTooltip_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_BasicTooltip_C::SetText(class FText ToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BasicTooltip_C", "SetText");

	Params::UUMG_BasicTooltip_C_SetText_Params Parms{};

	Parms.ToolTipText = ToolTipText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BasicTooltip.UMG_BasicTooltip_C.ExecuteUbergraph_UMG_BasicTooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ToolTipText                                   (None)

void UUMG_BasicTooltip_C::ExecuteUbergraph_UMG_BasicTooltip(int32 EntryPoint, class FText K2Node_CustomEvent_ToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BasicTooltip_C", "ExecuteUbergraph_UMG_BasicTooltip");

	Params::UUMG_BasicTooltip_C_ExecuteUbergraph_UMG_BasicTooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ToolTipText = K2Node_CustomEvent_ToolTipText;

	UObject::ProcessEvent(Func, &Parms);

}

}


