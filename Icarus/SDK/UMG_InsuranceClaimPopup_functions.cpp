#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C
// (None)

class UClass* UUMG_InsuranceClaimPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InsuranceClaimPopup_C");

	return Clss;
}


// UMG_InsuranceClaimPopup_C UMG_InsuranceClaimPopup.Default__UMG_InsuranceClaimPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InsuranceClaimPopup_C* UUMG_InsuranceClaimPopup_C::GetDefaultObj()
{
	static class UUMG_InsuranceClaimPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InsuranceClaimPopup_C*>(UUMG_InsuranceClaimPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.UpdateClaimButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRemainingTimeText_TimeText                           (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_InsuranceClaimPopup_C::UpdateClaimButton(class FText CallFunc_GetRemainingTimeText_TimeText, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "UpdateClaimButton");

	Params::UUMG_InsuranceClaimPopup_C_UpdateClaimButton_Params Parms{};

	Parms.CallFunc_GetRemainingTimeText_TimeText = CallFunc_GetRemainingTimeText_TimeText;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.GetRemainingTimeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        TimeText                                                         (Parm, OutParm)
// class FString                      CallFunc_FormatRawSecondsToTimeLength_Formatted                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_InsuranceClaimPopup_C::GetRemainingTimeText(class FText* TimeText, const class FString& CallFunc_FormatRawSecondsToTimeLength_Formatted, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "GetRemainingTimeText");

	Params::UUMG_InsuranceClaimPopup_C_GetRemainingTimeText_Params Parms{};

	Parms.CallFunc_FormatRawSecondsToTimeLength_Formatted = CallFunc_FormatRawSecondsToTimeLength_Formatted;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeText != nullptr)
		*TimeText = Parms.TimeText;

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.BndEvt__UMG_InsuranceClaimPopup_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::BndEvt__UMG_InsuranceClaimPopup_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "BndEvt__UMG_InsuranceClaimPopup_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.BndEvt__UMG_InsuranceClaimPopup_CloseButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::BndEvt__UMG_InsuranceClaimPopup_CloseButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "BndEvt__UMG_InsuranceClaimPopup_CloseButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "UpdateTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.BndEvt__UMG_InsuranceClaimPopup_DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::BndEvt__UMG_InsuranceClaimPopup_DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "BndEvt__UMG_InsuranceClaimPopup_DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.OnConfirmDelete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::OnConfirmDelete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "OnConfirmDelete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.OnCancelDelete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::OnCancelDelete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "OnCancelDelete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.ExecuteUbergraph_UMG_InsuranceClaimPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_InsuranceClaimPopup_C::ExecuteUbergraph_UMG_InsuranceClaimPopup(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class FText K2Node_Select_Default, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "ExecuteUbergraph_UMG_InsuranceClaimPopup");

	Params::UUMG_InsuranceClaimPopup_C_ExecuteUbergraph_UMG_InsuranceClaimPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.OnDelete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::OnDelete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "OnDelete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.OnClaim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::OnClaim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "OnClaim__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_InsuranceClaimPopup_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InsuranceClaimPopup_C", "OnClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


