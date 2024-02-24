#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RadialMenuWidget_GameAndUIMode.WBP_RadialMenuWidget_GameAndUIMode_C
// (None)

class UClass* UWBP_RadialMenuWidget_GameAndUIMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RadialMenuWidget_GameAndUIMode_C");

	return Clss;
}


// WBP_RadialMenuWidget_GameAndUIMode_C WBP_RadialMenuWidget_GameAndUIMode.Default__WBP_RadialMenuWidget_GameAndUIMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RadialMenuWidget_GameAndUIMode_C* UWBP_RadialMenuWidget_GameAndUIMode_C::GetDefaultObj()
{
	static class UWBP_RadialMenuWidget_GameAndUIMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RadialMenuWidget_GameAndUIMode_C*>(UWBP_RadialMenuWidget_GameAndUIMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RadialMenuWidget_GameAndUIMode.WBP_RadialMenuWidget_GameAndUIMode_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_OnKeyUp_ReturnValue                                     (None)

struct FEventReply UWBP_RadialMenuWidget_GameAndUIMode_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_OnKeyUp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuWidget_GameAndUIMode_C", "OnKeyUp");

	Params::UWBP_RadialMenuWidget_GameAndUIMode_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_OnKeyUp_ReturnValue = CallFunc_OnKeyUp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


