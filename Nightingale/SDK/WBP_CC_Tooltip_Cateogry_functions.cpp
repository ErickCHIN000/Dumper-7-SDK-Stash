#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_Tooltip_Cateogry.WBP_CC_Tooltip_Cateogry_C
// (None)

class UClass* UWBP_CC_Tooltip_Cateogry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_Tooltip_Cateogry_C");

	return Clss;
}


// WBP_CC_Tooltip_Cateogry_C WBP_CC_Tooltip_Cateogry.Default__WBP_CC_Tooltip_Cateogry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_Tooltip_Cateogry_C* UWBP_CC_Tooltip_Cateogry_C::GetDefaultObj()
{
	static class UWBP_CC_Tooltip_Cateogry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_Tooltip_Cateogry_C*>(UWBP_CC_Tooltip_Cateogry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_Tooltip_Cateogry.WBP_CC_Tooltip_Cateogry_C.SetNewTooltipText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringWithOutMarkUp_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_CC_Tooltip_Cateogry_C::SetNewTooltipText(class FText NewText, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetStringWithOutMarkUp_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Tooltip_Cateogry_C", "SetNewTooltipText");

	Params::UWBP_CC_Tooltip_Cateogry_C_SetNewTooltipText_Params Parms{};

	Parms.NewText = NewText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetStringWithOutMarkUp_ReturnValue = CallFunc_GetStringWithOutMarkUp_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Tooltip_Cateogry.WBP_CC_Tooltip_Cateogry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_Tooltip_Cateogry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Tooltip_Cateogry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_Tooltip_Cateogry.WBP_CC_Tooltip_Cateogry_C.ExecuteUbergraph_WBP_CC_Tooltip_Cateogry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_Tooltip_Cateogry_C::ExecuteUbergraph_WBP_CC_Tooltip_Cateogry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Tooltip_Cateogry_C", "ExecuteUbergraph_WBP_CC_Tooltip_Cateogry");

	Params::UWBP_CC_Tooltip_Cateogry_C_ExecuteUbergraph_WBP_CC_Tooltip_Cateogry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


