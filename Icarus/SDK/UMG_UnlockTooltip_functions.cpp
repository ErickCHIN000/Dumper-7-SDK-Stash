#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_UnlockTooltip.UMG_UnlockTooltip_C
// (None)

class UClass* UUMG_UnlockTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_UnlockTooltip_C");

	return Clss;
}


// UMG_UnlockTooltip_C UMG_UnlockTooltip.Default__UMG_UnlockTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_UnlockTooltip_C* UUMG_UnlockTooltip_C::GetDefaultObj()
{
	static class UUMG_UnlockTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_UnlockTooltip_C*>(UUMG_UnlockTooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_UnlockTooltip.UMG_UnlockTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_UnlockTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UnlockTooltip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UnlockTooltip.UMG_UnlockTooltip_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_UnlockTooltip_C::SetText(class FText ToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UnlockTooltip_C", "SetText");

	Params::UUMG_UnlockTooltip_C_SetText_Params Parms{};

	Parms.ToolTipText = ToolTipText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UnlockTooltip.UMG_UnlockTooltip_C.ExecuteUbergraph_UMG_UnlockTooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ToolTipText                                   (None)

void UUMG_UnlockTooltip_C::ExecuteUbergraph_UMG_UnlockTooltip(int32 EntryPoint, class FText K2Node_CustomEvent_ToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UnlockTooltip_C", "ExecuteUbergraph_UMG_UnlockTooltip");

	Params::UUMG_UnlockTooltip_C_ExecuteUbergraph_UMG_UnlockTooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ToolTipText = K2Node_CustomEvent_ToolTipText;

	UObject::ProcessEvent(Func, &Parms);

}

}


