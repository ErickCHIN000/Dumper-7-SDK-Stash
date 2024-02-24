#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InsightWidget.WBP_InsightWidget_C
// (None)

class UClass* UWBP_InsightWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InsightWidget_C");

	return Clss;
}


// WBP_InsightWidget_C WBP_InsightWidget.Default__WBP_InsightWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InsightWidget_C* UWBP_InsightWidget_C::GetDefaultObj()
{
	static class UWBP_InsightWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InsightWidget_C*>(UWBP_InsightWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InsightWidget.WBP_InsightWidget_C.BndEvt__WBP_InsightWidget_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InsightWidget_C::BndEvt__WBP_InsightWidget_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InsightWidget_C", "BndEvt__WBP_InsightWidget_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InsightWidget.WBP_InsightWidget_C.BndEvt__WBP_InsightWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InsightWidget_C::BndEvt__WBP_InsightWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InsightWidget_C", "BndEvt__WBP_InsightWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InsightWidget.WBP_InsightWidget_C.OnExitClicked_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InsightWidget_C::OnExitClicked_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InsightWidget_C", "OnExitClicked_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InsightWidget.WBP_InsightWidget_C.ExecuteUbergraph_WBP_InsightWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_EncyclopediaModalWindow_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InsightWidget_C::ExecuteUbergraph_WBP_InsightWidget(int32 EntryPoint, class UWBP_EncyclopediaModalWindow_C* CallFunc_Create_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InsightWidget_C", "ExecuteUbergraph_WBP_InsightWidget");

	Params::UWBP_InsightWidget_C_ExecuteUbergraph_WBP_InsightWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


