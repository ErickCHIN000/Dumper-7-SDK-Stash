#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GenericTooltip.WBP_GenericTooltip_C
// (None)

class UClass* UWBP_GenericTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GenericTooltip_C");

	return Clss;
}


// WBP_GenericTooltip_C WBP_GenericTooltip.Default__WBP_GenericTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GenericTooltip_C* UWBP_GenericTooltip_C::GetDefaultObj()
{
	static class UWBP_GenericTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GenericTooltip_C*>(UWBP_GenericTooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GenericTooltip.WBP_GenericTooltip_C.SetNewTooltipText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringWithOutMarkUp_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GenericTooltip_C::SetNewTooltipText(class FText NewText, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetStringWithOutMarkUp_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericTooltip_C", "SetNewTooltipText");

	Params::UWBP_GenericTooltip_C_SetNewTooltipText_Params Parms{};

	Parms.NewText = NewText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetStringWithOutMarkUp_ReturnValue = CallFunc_GetStringWithOutMarkUp_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericTooltip.WBP_GenericTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GenericTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericTooltip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GenericTooltip.WBP_GenericTooltip_C.ExecuteUbergraph_WBP_GenericTooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericTooltip_C::ExecuteUbergraph_WBP_GenericTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericTooltip_C", "ExecuteUbergraph_WBP_GenericTooltip");

	Params::UWBP_GenericTooltip_C_ExecuteUbergraph_WBP_GenericTooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


