#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InfoHoverText.UMG_InfoHoverText_C
// (None)

class UClass* UUMG_InfoHoverText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InfoHoverText_C");

	return Clss;
}


// UMG_InfoHoverText_C UMG_InfoHoverText.Default__UMG_InfoHoverText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InfoHoverText_C* UUMG_InfoHoverText_C::GetDefaultObj()
{
	static class UUMG_InfoHoverText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InfoHoverText_C*>(UUMG_InfoHoverText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_InfoHoverText.UMG_InfoHoverText_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_InfoHoverText_C::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InfoHoverText_C", "SetText");

	Params::UUMG_InfoHoverText_C_SetText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InfoHoverText.UMG_InfoHoverText_C.ExecuteUbergraph_UMG_InfoHoverText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InText                                        (None)

void UUMG_InfoHoverText_C::ExecuteUbergraph_UMG_InfoHoverText(int32 EntryPoint, class FText K2Node_CustomEvent_InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InfoHoverText_C", "ExecuteUbergraph_UMG_InfoHoverText");

	Params::UUMG_InfoHoverText_C_ExecuteUbergraph_UMG_InfoHoverText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;

	UObject::ProcessEvent(Func, &Parms);

}

}


