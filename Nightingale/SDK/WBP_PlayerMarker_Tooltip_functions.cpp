#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerMarker_Tooltip.WBP_PlayerMarker_Tooltip_C
// (None)

class UClass* UWBP_PlayerMarker_Tooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerMarker_Tooltip_C");

	return Clss;
}


// WBP_PlayerMarker_Tooltip_C WBP_PlayerMarker_Tooltip.Default__WBP_PlayerMarker_Tooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerMarker_Tooltip_C* UWBP_PlayerMarker_Tooltip_C::GetDefaultObj()
{
	static class UWBP_PlayerMarker_Tooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerMarker_Tooltip_C*>(UWBP_PlayerMarker_Tooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerMarker_Tooltip.WBP_PlayerMarker_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerMarker_Tooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMarker_Tooltip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMarker_Tooltip.WBP_PlayerMarker_Tooltip_C.ExecuteUbergraph_WBP_PlayerMarker_Tooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringWithOutMarkUp_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PlayerMarker_Tooltip_C::ExecuteUbergraph_WBP_PlayerMarker_Tooltip(int32 EntryPoint, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetStringWithOutMarkUp_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMarker_Tooltip_C", "ExecuteUbergraph_WBP_PlayerMarker_Tooltip");

	Params::UWBP_PlayerMarker_Tooltip_C_ExecuteUbergraph_WBP_PlayerMarker_Tooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetStringWithOutMarkUp_ReturnValue = CallFunc_GetStringWithOutMarkUp_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


