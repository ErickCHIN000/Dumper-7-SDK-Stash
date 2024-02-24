#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NarrativeNpcMapPin.WBP_NarrativeNpcMapPin_C
// (None)

class UClass* UWBP_NarrativeNpcMapPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NarrativeNpcMapPin_C");

	return Clss;
}


// WBP_NarrativeNpcMapPin_C WBP_NarrativeNpcMapPin.Default__WBP_NarrativeNpcMapPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NarrativeNpcMapPin_C* UWBP_NarrativeNpcMapPin_C::GetDefaultObj()
{
	static class UWBP_NarrativeNpcMapPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NarrativeNpcMapPin_C*>(UWBP_NarrativeNpcMapPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NarrativeNpcMapPin.WBP_NarrativeNpcMapPin_C.GetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Tooltip_MapMarker_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// class FText                        CallFunc_GetTooltipTitleText_OutputText                          (None)

class UWidget* UWBP_NarrativeNpcMapPin_C::GetTooltipWidget(class UWBP_Tooltip_MapMarker_C* CallFunc_Create_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_GetTooltipTitleText_OutputText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NarrativeNpcMapPin_C", "GetTooltipWidget");

	Params::UWBP_NarrativeNpcMapPin_C_GetTooltipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.CallFunc_GetTooltipTitleText_OutputText = CallFunc_GetTooltipTitleText_OutputText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NarrativeNpcMapPin.WBP_NarrativeNpcMapPin_C.GetTooltipTitleText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutputText                                                       (Parm, OutParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NarrativeNpcMapPin_C::GetTooltipTitleText(class FText* OutputText, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NarrativeNpcMapPin_C", "GetTooltipTitleText");

	Params::UWBP_NarrativeNpcMapPin_C_GetTooltipTitleText_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputText != nullptr)
		*OutputText = Parms.OutputText;

}

}


