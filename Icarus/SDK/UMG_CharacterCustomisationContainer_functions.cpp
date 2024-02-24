#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C
// (None)

class UClass* UUMG_CharacterCustomisationContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterCustomisationContainer_C");

	return Clss;
}


// UMG_CharacterCustomisationContainer_C UMG_CharacterCustomisationContainer.Default__UMG_CharacterCustomisationContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterCustomisationContainer_C* UUMG_CharacterCustomisationContainer_C::GetDefaultObj()
{
	static class UUMG_CharacterCustomisationContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterCustomisationContainer_C*>(UUMG_CharacterCustomisationContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCustomisationUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TScriptInterface<class ICustomisationWidgetInterface_C>K2Node_DynamicCast_AsCustomisation_Widget_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPreviewCameraSettingsEnum  CallFunc_GetCameraFocus_CameraFocus                              (HasGetValueTypeHash)

void UUMG_CharacterCustomisationContainer_C::OnCustomisationUpdated(const struct FCharacterCosmetics& CharacterData, TScriptInterface<class ICustomisationWidgetInterface_C> K2Node_DynamicCast_AsCustomisation_Widget_Interface, bool K2Node_DynamicCast_bSuccess, const struct FPreviewCameraSettingsEnum& CallFunc_GetCameraFocus_CameraFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "OnCustomisationUpdated");

	Params::UUMG_CharacterCustomisationContainer_C_OnCustomisationUpdated_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.K2Node_DynamicCast_AsCustomisation_Widget_Interface = K2Node_DynamicCast_AsCustomisation_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCameraFocus_CameraFocus = CallFunc_GetCameraFocus_CameraFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResUpdateCosmetics         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterCustomisationContainer_C::OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71");

	Params::UUMG_CharacterCustomisationContainer_C_OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResUpdateCosmetics         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterCustomisationContainer_C::OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71");

	Params::UUMG_CharacterCustomisationContainer_C_OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CharacterCustomisationContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCustomisationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     NewCharacterInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterCustomisationContainer_C::OnCustomisationCompleted(bool Success, const struct FOnlineProfileCharacter& NewCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "OnCustomisationCompleted");

	Params::UUMG_CharacterCustomisationContainer_C_OnCustomisationCompleted_Params Parms{};

	Parms.Success = Success;
	Parms.NewCharacterInfo = NewCharacterInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCosmeticUpdateRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReqUpdateCosmetics         Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Retries                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterCustomisationContainer_C::OnCosmeticUpdateRequest(const struct FReqUpdateCosmetics& Request, int32 Retries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "OnCosmeticUpdateRequest");

	Params::UUMG_CharacterCustomisationContainer_C_OnCosmeticUpdateRequest_Params Parms{};

	Parms.Request = Request;
	Parms.Retries = Retries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterCustomisationContainer_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_CharacterCustomisationContainer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.ExecuteUbergraph_UMG_CharacterCustomisationContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCosmetics         K2Node_MakeStruct_CharacterCosmetics                             (NoDestructor)
// struct FResUpdateCosmetics         K2Node_CustomEvent_Response                                      (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FResUpdateCosmetics         Temp_struct_Variable                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerPreviewManager_C*  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     K2Node_CustomEvent_NewCharacterInfo                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FResUpdateCosmetics         K2Node_CustomEvent_Response_1                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReqUpdateCosmetics         K2Node_CustomEvent_Request                                       (None)
// int32                              K2Node_CustomEvent_Retries                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpdateCosmeticsCallbackProxyGen*CallFunc_UpdateCosmetics_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCosmetics         K2Node_Select_Default                                            (NoDestructor)

void UUMG_CharacterCustomisationContainer_C::ExecuteUbergraph_UMG_CharacterCustomisationContainer(int32 EntryPoint, const struct FCharacterCosmetics& K2Node_MakeStruct_CharacterCosmetics, const struct FResUpdateCosmetics& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResUpdateCosmetics& Temp_struct_Variable, bool Temp_bool_Variable, class ABP_PlayerPreviewManager_C* CallFunc_GetActorOfClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Success, const struct FOnlineProfileCharacter& K2Node_CustomEvent_NewCharacterInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FResUpdateCosmetics& K2Node_CustomEvent_Response_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const struct FReqUpdateCosmetics& K2Node_CustomEvent_Request, int32 K2Node_CustomEvent_Retries, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUpdateCosmeticsCallbackProxyGen* CallFunc_UpdateCosmetics_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FCharacterCosmetics& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCustomisationContainer_C", "ExecuteUbergraph_UMG_CharacterCustomisationContainer");

	Params::UUMG_CharacterCustomisationContainer_C_ExecuteUbergraph_UMG_CharacterCustomisationContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_CharacterCosmetics = K2Node_MakeStruct_CharacterCosmetics;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_NewCharacterInfo = K2Node_CustomEvent_NewCharacterInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Request = K2Node_CustomEvent_Request;
	Parms.K2Node_CustomEvent_Retries = K2Node_CustomEvent_Retries;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_UpdateCosmetics_ReturnValue = CallFunc_UpdateCosmetics_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


