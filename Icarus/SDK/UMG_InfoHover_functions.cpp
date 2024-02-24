#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InfoHover.UMG_InfoHover_C
// (None)

class UClass* UUMG_InfoHover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InfoHover_C");

	return Clss;
}


// UMG_InfoHover_C UMG_InfoHover.Default__UMG_InfoHover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InfoHover_C* UUMG_InfoHover_C::GetDefaultObj()
{
	static class UUMG_InfoHover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InfoHover_C*>(UUMG_InfoHover_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_InfoHover.UMG_InfoHover_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_InfoHover_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InfoHover_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InfoHover.UMG_InfoHover_C.SetInnerTooltipText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_InfoHover_C::SetInnerTooltipText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InfoHover_C", "SetInnerTooltipText");

	Params::UUMG_InfoHover_C_SetInnerTooltipText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InfoHover.UMG_InfoHover_C.ExecuteUbergraph_UMG_InfoHover
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_InfoHoverText_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InText                                        (None)

void UUMG_InfoHover_C::ExecuteUbergraph_UMG_InfoHover(int32 EntryPoint, class UUMG_InfoHoverText_C* CallFunc_Create_ReturnValue, class FText K2Node_CustomEvent_InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InfoHover_C", "ExecuteUbergraph_UMG_InfoHover");

	Params::UUMG_InfoHover_C_ExecuteUbergraph_UMG_InfoHover_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;

	UObject::ProcessEvent(Func, &Parms);

}

}


