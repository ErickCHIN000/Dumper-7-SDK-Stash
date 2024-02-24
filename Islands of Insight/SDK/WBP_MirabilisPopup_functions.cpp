#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MirabilisPopup.WBP_MirabilisPopup_C
// (None)

class UClass* UWBP_MirabilisPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MirabilisPopup_C");

	return Clss;
}


// WBP_MirabilisPopup_C WBP_MirabilisPopup.Default__WBP_MirabilisPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MirabilisPopup_C* UWBP_MirabilisPopup_C::GetDefaultObj()
{
	static class UWBP_MirabilisPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MirabilisPopup_C*>(UWBP_MirabilisPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MirabilisPopup.WBP_MirabilisPopup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MirabilisPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MirabilisPopup_C", "Tick");

	Params::UWBP_MirabilisPopup_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MirabilisPopup.WBP_MirabilisPopup_C.BndEvt__WBP_MirabilisPopup_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MirabilisPopup_C::BndEvt__WBP_MirabilisPopup_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MirabilisPopup_C", "BndEvt__WBP_MirabilisPopup_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MirabilisPopup.WBP_MirabilisPopup_C.ExecuteUbergraph_WBP_MirabilisPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MirabilisPopup_C::ExecuteUbergraph_WBP_MirabilisPopup(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsInputKeyDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MirabilisPopup_C", "ExecuteUbergraph_WBP_MirabilisPopup");

	Params::UWBP_MirabilisPopup_C_ExecuteUbergraph_WBP_MirabilisPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MirabilisPopup.WBP_MirabilisPopup_C.OnAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MirabilisPopup_C::OnAccepted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MirabilisPopup_C", "OnAccepted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


