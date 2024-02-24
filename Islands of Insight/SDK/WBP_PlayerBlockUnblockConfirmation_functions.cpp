#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerBlockUnblockConfirmation.WBP_PlayerBlockUnblockConfirmation_C
// (None)

class UClass* UWBP_PlayerBlockUnblockConfirmation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerBlockUnblockConfirmation_C");

	return Clss;
}


// WBP_PlayerBlockUnblockConfirmation_C WBP_PlayerBlockUnblockConfirmation.Default__WBP_PlayerBlockUnblockConfirmation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerBlockUnblockConfirmation_C* UWBP_PlayerBlockUnblockConfirmation_C::GetDefaultObj()
{
	static class UWBP_PlayerBlockUnblockConfirmation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerBlockUnblockConfirmation_C*>(UWBP_PlayerBlockUnblockConfirmation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerBlockUnblockConfirmation.WBP_PlayerBlockUnblockConfirmation_C.Get_TextBlock_90_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_PlayerBlockUnblockConfirmation_C::Get_TextBlock_90_Text_0(bool Temp_bool_Variable, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBlockUnblockConfirmation_C", "Get_TextBlock_90_Text_0");

	Params::UWBP_PlayerBlockUnblockConfirmation_C_Get_TextBlock_90_Text_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerBlockUnblockConfirmation.WBP_PlayerBlockUnblockConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerBlockUnblockConfirmation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBlockUnblockConfirmation_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerBlockUnblockConfirmation.WBP_PlayerBlockUnblockConfirmation_C.BndEvt__WBP_PlayerBlockUnblockConfirmation_WBP_YesNoButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerBlockUnblockConfirmation_C::BndEvt__WBP_PlayerBlockUnblockConfirmation_WBP_YesNoButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(bool Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBlockUnblockConfirmation_C", "BndEvt__WBP_PlayerBlockUnblockConfirmation_WBP_YesNoButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UWBP_PlayerBlockUnblockConfirmation_C_BndEvt__WBP_PlayerBlockUnblockConfirmation_WBP_YesNoButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerBlockUnblockConfirmation.WBP_PlayerBlockUnblockConfirmation_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerBlockUnblockConfirmation_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBlockUnblockConfirmation_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerBlockUnblockConfirmation.WBP_PlayerBlockUnblockConfirmation_C.ExecuteUbergraph_WBP_PlayerBlockUnblockConfirmation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SophiaPlayerState_C*     K2Node_DynamicCast_AsBP_Sophia_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetNicknameID_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKrakenID_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Response                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_PlayerBlockUnblockConfirmation_C::ExecuteUbergraph_WBP_PlayerBlockUnblockConfirmation(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetNicknameID_ReturnValue, const class FString& CallFunc_GetKrakenID_ReturnValue, bool K2Node_ComponentBoundEvent_Response, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBlockUnblockConfirmation_C", "ExecuteUbergraph_WBP_PlayerBlockUnblockConfirmation");

	Params::UWBP_PlayerBlockUnblockConfirmation_C_ExecuteUbergraph_WBP_PlayerBlockUnblockConfirmation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Player_State = K2Node_DynamicCast_AsBP_Sophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetNicknameID_ReturnValue = CallFunc_GetNicknameID_ReturnValue;
	Parms.CallFunc_GetKrakenID_ReturnValue = CallFunc_GetKrakenID_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Response = K2Node_ComponentBoundEvent_Response;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


