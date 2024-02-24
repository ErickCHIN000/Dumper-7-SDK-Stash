#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Realms_sw_LabelAndButton.WBP_DB_Realms_sw_LabelAndButton_C
// (None)

class UClass* UWBP_DB_Realms_sw_LabelAndButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Realms_sw_LabelAndButton_C");

	return Clss;
}


// WBP_DB_Realms_sw_LabelAndButton_C WBP_DB_Realms_sw_LabelAndButton.Default__WBP_DB_Realms_sw_LabelAndButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Realms_sw_LabelAndButton_C* UWBP_DB_Realms_sw_LabelAndButton_C::GetDefaultObj()
{
	static class UWBP_DB_Realms_sw_LabelAndButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Realms_sw_LabelAndButton_C*>(UWBP_DB_Realms_sw_LabelAndButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Realms_sw_LabelAndButton.WBP_DB_Realms_sw_LabelAndButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Realms_sw_LabelAndButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_LabelAndButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Realms_sw_LabelAndButton.WBP_DB_Realms_sw_LabelAndButton_C.BndEvt__WBP_SW_RealmScreen_LabelAndButton_Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Realms_sw_LabelAndButton_C::BndEvt__WBP_SW_RealmScreen_LabelAndButton_Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_LabelAndButton_C", "BndEvt__WBP_SW_RealmScreen_LabelAndButton_Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Realms_sw_LabelAndButton.WBP_DB_Realms_sw_LabelAndButton_C.ExecuteUbergraph_WBP_DB_Realms_sw_LabelAndButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_DB_Realms_sw_LabelAndButton_C::ExecuteUbergraph_WBP_DB_Realms_sw_LabelAndButton(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_LabelAndButton_C", "ExecuteUbergraph_WBP_DB_Realms_sw_LabelAndButton");

	Params::UWBP_DB_Realms_sw_LabelAndButton_C_ExecuteUbergraph_WBP_DB_Realms_sw_LabelAndButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Realms_sw_LabelAndButton.WBP_DB_Realms_sw_LabelAndButton_C.DeleteButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DB_Realms_sw_LabelAndButton_C*LabelButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Realms_sw_LabelAndButton_C::DeleteButtonClicked__DelegateSignature(class UWBP_DB_Realms_sw_LabelAndButton_C* LabelButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_LabelAndButton_C", "DeleteButtonClicked__DelegateSignature");

	Params::UWBP_DB_Realms_sw_LabelAndButton_C_DeleteButtonClicked__DelegateSignature_Params Parms{};

	Parms.LabelButton = LabelButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


