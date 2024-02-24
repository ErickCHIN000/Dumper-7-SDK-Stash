#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StartScreen.WBP_StartScreen_C
// (None)

class UClass* UWBP_StartScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StartScreen_C");

	return Clss;
}


// WBP_StartScreen_C WBP_StartScreen.Default__WBP_StartScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StartScreen_C* UWBP_StartScreen_C::GetDefaultObj()
{
	static class UWBP_StartScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StartScreen_C*>(UWBP_StartScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StartScreen.WBP_StartScreen_C.UpdateNDAText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::UpdateNDAText(bool CallFunc_IsFeatureFlagEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "UpdateNDAText");

	Params::UWBP_StartScreen_C_UpdateNDAText_Params Parms{};

	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_StartScreen_C::BP_GetDesiredFocusTarget(bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_StartScreen_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StartScreen.WBP_StartScreen_C.Platform To Platform Service String
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Platform_Type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Platform_Service_String                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Platform_Service_Key                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_StringTableIdAndKeyFromText_OutTableId                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_StringTableIdAndKeyFromText_OutKey                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StringTableIdAndKeyFromText_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTableEntrySourceString_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Platform_To_Platform_Service_String(const class FString& Platform_Type, class FString* Platform_Service_String, const class FString& Platform_Service_Key, bool K2Node_SwitchString_CmpSuccess, class FName CallFunc_StringTableIdAndKeyFromText_OutTableId, const class FString& CallFunc_StringTableIdAndKeyFromText_OutKey, bool CallFunc_StringTableIdAndKeyFromText_ReturnValue, const class FString& CallFunc_GetTableEntrySourceString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Platform To Platform Service String");

	Params::UWBP_StartScreen_C_Platform_To_Platform_Service_String_Params Parms{};

	Parms.Platform_Type = Platform_Type;
	Parms.Platform_Service_Key = Platform_Service_Key;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_StringTableIdAndKeyFromText_OutTableId = CallFunc_StringTableIdAndKeyFromText_OutTableId;
	Parms.CallFunc_StringTableIdAndKeyFromText_OutKey = CallFunc_StringTableIdAndKeyFromText_OutKey;
	Parms.CallFunc_StringTableIdAndKeyFromText_ReturnValue = CallFunc_StringTableIdAndKeyFromText_ReturnValue;
	Parms.CallFunc_GetTableEntrySourceString_ReturnValue = CallFunc_GetTableEntrySourceString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Platform_Service_String != nullptr)
		*Platform_Service_String = std::move(Parms.Platform_Service_String);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Debug_VisualizationModes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDevEnvironment_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Debug_VisualizationModes(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsDevEnvironment_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Debug_VisualizationModes");

	Params::UWBP_StartScreen_C_Debug_VisualizationModes_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsDevEnvironment_ReturnValue = CallFunc_IsDevEnvironment_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Show Error ID Status Popup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Error_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description_override                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// FDelegateProperty_                 CancelFunc                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Description_Text_Local                                           (Edit, BlueprintVisible)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FErrorMessageData           CallFunc_GetErrorMessage_OutErrorMessageData                     (None)
// bool                               CallFunc_GetErrorMessage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_Show_Status_Popup_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Show_Error_ID_Status_Popup(int32 Error_ID, class FText Description_override, FDelegateProperty_& CancelFunc, class UWBP_Popup_General_C** Widget, class FText Description_Text_Local, bool CallFunc_TextIsEmpty_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FErrorMessageData& CallFunc_GetErrorMessage_OutErrorMessageData, bool CallFunc_GetErrorMessage_ReturnValue, class UWBP_Popup_General_C* CallFunc_Show_Status_Popup_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Show Error ID Status Popup");

	Params::UWBP_StartScreen_C_Show_Error_ID_Status_Popup_Params Parms{};

	Parms.Error_ID = Error_ID;
	Parms.Description_override = Description_override;
	Parms.CancelFunc = CancelFunc;
	Parms.Description_Text_Local = Description_Text_Local;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetErrorMessage_OutErrorMessageData = CallFunc_GetErrorMessage_OutErrorMessageData;
	Parms.CallFunc_GetErrorMessage_ReturnValue = CallFunc_GetErrorMessage_ReturnValue;
	Parms.CallFunc_Show_Status_Popup_Widget = CallFunc_Show_Status_Popup_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_StartScreen.WBP_StartScreen_C.HandleServerErrorMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineServiceStatus        OnlineServiceStatus                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::HandleServerErrorMessage(struct FOnlineServiceStatus& OnlineServiceStatus, class FText Temp_text_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "HandleServerErrorMessage");

	Params::UWBP_StartScreen_C_HandleServerErrorMessage_Params Parms{};

	Parms.OnlineServiceStatus = OnlineServiceStatus;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CloseErrorPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::CloseErrorPopup(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CloseErrorPopup");

	Params::UWBP_StartScreen_C_CloseErrorPopup_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnUILoginStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UILoginState          UILoginState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue                                     (ConstParm)
// class FString                      CallFunc_Platform_To_Platform_Service_String_Platform_Service_String(ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_Show_Status_Popup_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnUILoginStateChanged(enum class E_UILoginState UILoginState, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, const class FString& CallFunc_Platform_To_Platform_Service_String_Platform_Service_String, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Popup_General_C* CallFunc_Show_Status_Popup_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnUILoginStateChanged");

	Params::UWBP_StartScreen_C_OnUILoginStateChanged_Params Parms{};

	Parms.UILoginState = UILoginState;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetInfo_ReturnValue = CallFunc_GetInfo_ReturnValue;
	Parms.CallFunc_Platform_To_Platform_Service_String_Platform_Service_String = CallFunc_Platform_To_Platform_Service_String_Platform_Service_String;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Show_Status_Popup_Widget = CallFunc_Show_Status_Popup_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CameraMode_Updated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CC_CameraMode         CameraView                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Zoom                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::CameraMode_Updated(enum class E_CC_CameraMode CameraView, double Zoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CameraMode_Updated");

	Params::UWBP_StartScreen_C_CameraMode_Updated_Params Parms{};

	Parms.CameraView = CameraView;
	Parms.Zoom = Zoom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CharacterProfileCreate_Cancelled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::CharacterProfileCreate_Cancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CharacterProfileCreate_Cancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CreateQuitWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerLoggedIn_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_QuitGame_C*       CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::CreateQuitWidget(class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, bool CallFunc_IsPlayerLoggedIn_ReturnValue, class UWBP_Popup_QuitGame_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CreateQuitWidget");

	Params::UWBP_StartScreen_C_CreateQuitWidget_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_IsPlayerLoggedIn_ReturnValue = CallFunc_IsPlayerLoggedIn_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.InvalidateTimer_FlashBulb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::InvalidateTimer_FlashBulb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "InvalidateTimer_FlashBulb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Cinematic Video Done Or Skipped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReadyToTravel_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMusicManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Cinematic_Video_Done_Or_Skipped(TArray<struct FGameplayTag>& K2Node_MakeArray_Array, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_ReadyToTravel_ReturnValue, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Cinematic Video Done Or Skipped");

	Params::UWBP_StartScreen_C_Cinematic_Video_Done_Or_Skipped_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_ReadyToTravel_ReturnValue = CallFunc_ReadyToTravel_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlayInEditor_ReturnValue = CallFunc_IsPlayInEditor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Set Character Proxy Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Set_Character_Proxy_Visibility(bool Show_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Set Character Proxy Visibility");

	Params::UWBP_StartScreen_C_Set_Character_Proxy_Visibility_Params Parms{};

	Parms.Show_ = Show_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnInputCancel
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_StartScreen_C::OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnInputCancel");

	Params::UWBP_StartScreen_C_OnInputCancel_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnEulaAcceptResponse
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnEulaAcceptResponse(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnEulaAcceptResponse");

	Params::UWBP_StartScreen_C_OnEulaAcceptResponse_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.On Show Eula
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::On_Show_Eula(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "On Show Eula");

	Params::UWBP_StartScreen_C_On_Show_Eula_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_StartScreen_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double Temp_real_Variable, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnAnalogValueChanged");

	Params::UWBP_StartScreen_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StartScreen.WBP_StartScreen_C.Check If Steam Join
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoesPresenceExist                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCommandLineArgument_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCommandLineArgument_ReturnValue_1                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCommandLineArgument_ReturnValue_2                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Check_If_Steam_Join(bool* DoesPresenceExist, const class FString& CallFunc_GetCommandLineArgument_ReturnValue, const class FString& CallFunc_GetCommandLineArgument_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_GetCommandLineArgument_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Check If Steam Join");

	Params::UWBP_StartScreen_C_Check_If_Steam_Join_Params Parms{};

	Parms.CallFunc_GetCommandLineArgument_ReturnValue = CallFunc_GetCommandLineArgument_ReturnValue;
	Parms.CallFunc_GetCommandLineArgument_ReturnValue_1 = CallFunc_GetCommandLineArgument_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetCommandLineArgument_ReturnValue_2 = CallFunc_GetCommandLineArgument_ReturnValue_2;
	Parms.CallFunc_IsEmpty_ReturnValue_2 = CallFunc_IsEmpty_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DoesPresenceExist != nullptr)
		*DoesPresenceExist = Parms.DoesPresenceExist;

}


// Function WBP_StartScreen.WBP_StartScreen_C.UsingGamepadChangedHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::UsingGamepadChangedHandler(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "UsingGamepadChangedHandler");

	Params::UWBP_StartScreen_C_UsingGamepadChangedHandler_Params Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Set Destination Realm on Profile Picker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ProfilePicker_C*        Picker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_StartScreen_C::Set_Destination_Realm_on_Profile_Picker(class UWBP_ProfilePicker_C* Picker, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Set Destination Realm on Profile Picker");

	Params::UWBP_StartScreen_C_Set_Destination_Realm_on_Profile_Picker_Params Parms{};

	Parms.Picker = Picker;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.cc_Return to AppearanceOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Cc_Return_to_AppearanceOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "cc_Return to AppearanceOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Timer_AdvanceToConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Timer_AdvanceToConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Timer_AdvanceToConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CCAdvanceToConfirmSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::CCAdvanceToConfirmSelected(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CCAdvanceToConfirmSelected");

	Params::UWBP_StartScreen_C_CCAdvanceToConfirmSelected_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.RandomChanceForFun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::RandomChanceForFun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "RandomChanceForFun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CharacterCreationStart_RandomAppearance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::CharacterCreationStart_RandomAppearance(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CharacterCreationStart_RandomAppearance");

	Params::UWBP_StartScreen_C_CharacterCreationStart_RandomAppearance_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.EmptyProfileSlotSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         EmptySlot_CharacterAppearance                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::EmptyProfileSlotSelected(const struct FDataTableRowHandle& EmptySlot_CharacterAppearance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "EmptyProfileSlotSelected");

	Params::UWBP_StartScreen_C_EmptyProfileSlotSelected_Params Parms{};

	Parms.EmptySlot_CharacterAppearance = EmptySlot_CharacterAppearance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnProfileSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSelectableProfile          Profile                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StartScreen_C::OnProfileSelected(const struct FSelectableProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnProfileSelected");

	Params::UWBP_StartScreen_C_OnProfileSelected_Params Parms{};

	Parms.Profile = Profile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Refresh_Visibility_SignIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Refresh_Visibility_SignIn(bool Visible, bool Enabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Refresh_Visibility_SignIn");

	Params::UWBP_StartScreen_C_Refresh_Visibility_SignIn_Params Parms{};

	Parms.Visible = Visible;
	Parms.Enabled = Enabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CC Assign Player Appearance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         AppearanceHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterCustomization_Component_C*CustomizationComponent                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterAppearanceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterCustomization_Component_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::CC_Assign_Player_Appearance(const struct FDataTableRowHandle& AppearanceHandle, class UBP_CharacterCustomization_Component_C* CustomizationComponent, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_CharacterCustomization_Component_C* CallFunc_GetComponentByClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CC Assign Player Appearance");

	Params::UWBP_StartScreen_C_CC_Assign_Player_Appearance_Params Parms{};

	Parms.AppearanceHandle = AppearanceHandle;
	Parms.CustomizationComponent = CustomizationComponent;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.ClearLoginState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::ClearLoginState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "ClearLoginState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Show Status Popup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// FDelegateProperty_                 CancelFunc                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Show_Status_Popup(class FText Title, class FText Body, FDelegateProperty_& CancelFunc, class UWBP_Popup_General_C** Widget, class FText Temp_text_Variable, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Show Status Popup");

	Params::UWBP_StartScreen_C_Show_Status_Popup_Params Parms{};

	Parms.Title = Title;
	Parms.Body = Body;
	Parms.CancelFunc = CancelFunc;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_StartScreen.WBP_StartScreen_C.CC Create Profile Confirm Cancelled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::CC_Create_Profile_Confirm_Cancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CC Create Profile Confirm Cancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.AfterPush_63A500764B952E900E304888F0B7E085
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::AfterPush_63A500764B952E900E304888F0B7E085(class UCommonActivatableWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "AfterPush_63A500764B952E900E304888F0B7E085");

	Params::UWBP_StartScreen_C_AfterPush_63A500764B952E900E304888F0B7E085_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BeforePush_63A500764B952E900E304888F0B7E085
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::BeforePush_63A500764B952E900E304888F0B7E085(class UCommonActivatableWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BeforePush_63A500764B952E900E304888F0B7E085");

	Params::UWBP_StartScreen_C_BeforePush_63A500764B952E900E304888F0B7E085_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.WashFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::WashFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "WashFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Toggle Cancel Join Vis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_Cancel_Button                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::Toggle_Cancel_Join_Vis(bool Show_Cancel_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Toggle Cancel Join Vis");

	Params::UWBP_StartScreen_C_Toggle_Cancel_Join_Vis_Params Parms{};

	Parms.Show_Cancel_Button = Show_Cancel_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Check Presence Args
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Check_Presence_Args()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Check Presence Args");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Cancel Steam Join
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Cancel_Steam_Join()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Cancel Steam Join");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_CancelJoin_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_CBU_CancelJoin_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_CBU_CancelJoin_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_CancelJoin_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Quit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Quit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Quit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnAccountLoginCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnAccountLoginCanceled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnAccountLoginCanceled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CreateCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::CreateCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CreateCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.JoinGameAsProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSelectableProfile          Profile                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StartScreen_C::JoinGameAsProfile(const struct FSelectableProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "JoinGameAsProfile");

	Params::UWBP_StartScreen_C_JoinGameAsProfile_Params Parms{};

	Parms.Profile = Profile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.ShowSelectCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::ShowSelectCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "ShowSelectCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.AccountLoginFailedClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::AccountLoginFailedClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "AccountLoginFailedClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.SelectShard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::SelectShard(const class FString& Shard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "SelectShard");

	Params::UWBP_StartScreen_C_SelectShard_Params Parms{};

	Parms.Shard = Shard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.ChooseShard
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Shards                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StartScreen_C::ChooseShard(TArray<class FString>& Shards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "ChooseShard");

	Params::UWBP_StartScreen_C_ChooseShard_Params Parms{};

	Parms.Shards = Shards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnShardSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnShardSelected(const class FString& Shard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnShardSelected");

	Params::UWBP_StartScreen_C_OnShardSelected_Params Parms{};

	Parms.Shard = Shard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnShardSelectCanclled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnShardSelectCanclled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnShardSelectCanclled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnDeploySelectCancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnDeploySelectCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnDeploySelectCancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnDeploySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeployment                 Deployment                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StartScreen_C::OnDeploySelected(const struct FDeployment& Deployment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnDeploySelected");

	Params::UWBP_StartScreen_C_OnDeploySelected_Params Parms{};

	Parms.Deployment = Deployment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.DismissBootstrapError
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::DismissBootstrapError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "DismissBootstrapError");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnProfileLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnProfileLogin(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnProfileLogin");

	Params::UWBP_StartScreen_C_OnProfileLogin_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.PlayInEditor Loop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::PlayInEditor_Loop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "PlayInEditor Loop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.InitConceptArt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::InitConceptArt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "InitConceptArt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.JoinGameAsNewProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCreateProfile              Profile                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StartScreen_C::JoinGameAsNewProfile(const struct FCreateProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "JoinGameAsNewProfile");

	Params::UWBP_StartScreen_C_JoinGameAsNewProfile_Params Parms{};

	Parms.Profile = Profile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Setup Wash Material
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Setup_Wash_Material()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Setup Wash Material");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.WashTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::WashTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "WashTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnCreateProfileComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnCreateProfileComplete(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnCreateProfileComplete");

	Params::UWBP_StartScreen_C_OnCreateProfileComplete_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnFetchDeployment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnFetchDeployment(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnFetchDeployment");

	Params::UWBP_StartScreen_C_OnFetchDeployment_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnDeploymentBootstrapping
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnDeploymentBootstrapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnDeploymentBootstrapping");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnDeploymentBootstrapComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnDeploymentBootstrapComplete(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnDeploymentBootstrapComplete");

	Params::UWBP_StartScreen_C_OnDeploymentBootstrapComplete_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnFetchProfiles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnFetchProfiles(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnFetchProfiles");

	Params::UWBP_StartScreen_C_OnFetchProfiles_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnGetShards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnGetShards(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnGetShards");

	Params::UWBP_StartScreen_C_OnGetShards_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnPlatformLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnPlatformLogin(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnPlatformLogin");

	Params::UWBP_StartScreen_C_OnPlatformLogin_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.Return to Sign in
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Return_to_Sign_in()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "Return to Sign in");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnFFAccept2Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnFFAccept2Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnFFAccept2Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnFFAccept1Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnFFAccept1Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnFFAccept1Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnFFAcceptClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnFFAcceptClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnFFAcceptClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.ShowIntroCinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::ShowIntroCinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "ShowIntroCinematic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.CloseEulaAcceptance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::CloseEulaAcceptance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "CloseEulaAcceptance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_WBP_GammaScreen_K2Node_ComponentBoundEvent_2_GammaAccepted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_WBP_GammaScreen_K2Node_ComponentBoundEvent_2_GammaAccepted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_WBP_GammaScreen_K2Node_ComponentBoundEvent_2_GammaAccepted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnSanctuarySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnSanctuarySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnSanctuarySelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.AUTOSIGNIN
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::AUTOSIGNIN()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "AUTOSIGNIN");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_WBP_PrivacyAgreement1_K2Node_ComponentBoundEvent_4_OnUserRejectedPrivacyAgreement__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_WBP_PrivacyAgreement1_K2Node_ComponentBoundEvent_4_OnUserRejectedPrivacyAgreement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_WBP_PrivacyAgreement1_K2Node_ComponentBoundEvent_4_OnUserRejectedPrivacyAgreement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_WBP_PrivacyAgreement1_K2Node_ComponentBoundEvent_3_OnUserAcceptedPrivacyAgreement__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_WBP_PrivacyAgreement1_K2Node_ComponentBoundEvent_3_OnUserAcceptedPrivacyAgreement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_WBP_PrivacyAgreement1_K2Node_ComponentBoundEvent_3_OnUserAcceptedPrivacyAgreement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartMenu_WBP_EndUserLicenseAgreement_K2Node_ComponentBoundEvent_1_OnUserRejectedLicenseAgreement__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::BndEvt__WBP_StartMenu_WBP_EndUserLicenseAgreement_K2Node_ComponentBoundEvent_1_OnUserRejectedLicenseAgreement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartMenu_WBP_EndUserLicenseAgreement_K2Node_ComponentBoundEvent_1_OnUserRejectedLicenseAgreement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartMenu_WBP_EndUserLicenseAgreement_K2Node_ComponentBoundEvent_0_OnUserAcceptedLicenseAgreement__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::BndEvt__WBP_StartMenu_WBP_EndUserLicenseAgreement_K2Node_ComponentBoundEvent_0_OnUserAcceptedLicenseAgreement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartMenu_WBP_EndUserLicenseAgreement_K2Node_ComponentBoundEvent_0_OnUserAcceptedLicenseAgreement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnUsingGamepadChanged_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnUsingGamepadChanged_1(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnUsingGamepadChanged_1");

	Params::UWBP_StartScreen_C_OnUsingGamepadChanged_1_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_SignIn_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_CBU_SignIn_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_CBU_SignIn_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_SignIn_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnButtonBaseClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::OnButtonBaseClicked_Event(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnButtonBaseClicked_Event");

	Params::UWBP_StartScreen_C_OnButtonBaseClicked_Event_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_AcceptNext_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_CBU_AcceptNext_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_CBU_AcceptNext_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_AcceptNext_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_AcceptanceFail_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_CBU_AcceptanceFail_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_CBU_AcceptanceFail_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_AcceptanceFail_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_AcceptComplete_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::BndEvt__WBP_StartScreen_CBU_AcceptComplete_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "BndEvt__WBP_StartScreen_CBU_AcceptComplete_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_AcceptComplete_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnTravelToRespiteConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnTravelToRespiteConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnTravelToRespiteConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnPopupCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnPopupCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnPopupCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnPopupClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnPopupClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnPopupClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.OnDeploymentAtCapacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::OnDeploymentAtCapacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "OnDeploymentAtCapacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StartScreen.WBP_StartScreen_C.ExecuteUbergraph_WBP_StartScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMusicManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    K2Node_CustomEvent_UserWidget_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAcceptEula_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_RevealTrailerVideoWidget_C*K2Node_DynamicCast_AsWBP_Reveal_Trailer_Video_Widget             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidMedia_HasMedia                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryBootstrapDeploymentToRespite_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBootstrappedDeploymentRespite_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReadyToTravel_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show_Cancel_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSelectableProfile          K2Node_CustomEvent_Profile_1                                     (None)
// class FString                      K2Node_CustomEvent_Shard_1                                       (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_Shards                                        (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_Shard                                         (ZeroConstructor, HasGetValueTypeHash)
// struct FDeployment                 K2Node_CustomEvent_Deployment                                    (None)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LogoutPlayer_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_SplashScreenArt       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_9                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue                                     (ConstParm)
// struct FCreateProfile              K2Node_CustomEvent_Profile                                       (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_10                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue_1                                   (ConstParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_11                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue_2                                   (ConstParm)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_12                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue_3                                   (ConstParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_13                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_14                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue_4                                   (ConstParm)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue_5                                   (ConstParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryPlayerProfileLogin_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_15                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_16                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryPlayerProfileLogin_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_17                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryFetchProfiles_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_18                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_19                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue_6                                   (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Platform_To_Platform_Service_String_Platform_Service_String(ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TrySignin_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UWBP_Popup_General_C*        CallFunc_Show_Error_ID_Status_Popup_Widget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_Show_Error_ID_Status_Popup_Widget_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_7                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_Show_Error_ID_Status_Popup_Widget_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXJoinFriendSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_20                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditor_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditorSimulateMode_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXJoinFriendSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_21                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPendingJoinRequest_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_8                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetGamerTag_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class UTexture*                    Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_Shard_Screen_C*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_Shard_sw_DeploymentSelect_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ProfilePicker_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterAppearanceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAppearanceComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString> CallFunc_GetAppearanceMetadata_OutMetadata                       (None)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCreateProfile              K2Node_SetFieldsInStruct_StructOut                               (None)
// bool                               CallFunc_TryPlayerProfileCreate_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_PushContentToLayerForPlayer*CallFunc_PushContentToLayerForPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PushError_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameInstance*            K2Node_DynamicCast_AsNWXGame_Instance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PushError_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameInstance*            K2Node_DynamicCast_AsNWXGame_Instance_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnConsolePlatform_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameInstance*            K2Node_DynamicCast_AsNWXGame_Instance_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameInstance*            K2Node_DynamicCast_AsNWXGame_Instance_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_5                                             (ConstParm)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::ExecuteUbergraph_WBP_StartScreen(int32 EntryPoint, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonActivatableWidget* K2Node_CustomEvent_UserWidget_1, class UCommonActivatableWidget* K2Node_CustomEvent_UserWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCommonActivatableWidget* Temp_object_Variable, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_TryAcceptEula_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_RevealTrailerVideoWidget_C* K2Node_DynamicCast_AsWBP_Reveal_Trailer_Video_Widget, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasValidMedia_HasMedia, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_TryBootstrapDeploymentToRespite_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsBootstrappedDeploymentRespite_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, enum class ENWXLogLevel Temp_byte_Variable, bool CallFunc_ReadyToTravel_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_CustomEvent_Show_Cancel_Button, enum class ENWXLogLevel Temp_byte_Variable_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FText Temp_text_Variable, bool Temp_bool_Variable, const struct FSelectableProfile& K2Node_CustomEvent_Profile_1, const class FString& K2Node_CustomEvent_Shard_1, TArray<class FString>& K2Node_CustomEvent_Shards, const class FString& K2Node_CustomEvent_Shard, const struct FDeployment& K2Node_CustomEvent_Deployment, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool K2Node_CustomEvent_Success_6, bool CallFunc_LogoutPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_UI_SplashScreenArt& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, const struct FCreateProfile& K2Node_CustomEvent_Profile, class FText CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue_2, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue_4, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_TryPlayerProfileLogin_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_15, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_16, bool CallFunc_TryPlayerProfileLogin_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_17, bool CallFunc_TryFetchProfiles_ReturnValue, bool K2Node_CustomEvent_Success_5, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_18, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_19, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, const class FString& CallFunc_Platform_To_Platform_Service_String_Platform_Service_String, bool CallFunc_TrySignin_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_CustomEvent_Success_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UWBP_Popup_General_C* CallFunc_Show_Error_ID_Status_Popup_Widget, bool K2Node_CustomEvent_Success_3, bool K2Node_CustomEvent_Success_2, bool K2Node_CustomEvent_Success_1, const class FString& Temp_string_Variable, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool K2Node_CustomEvent_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class UWBP_Popup_General_C* CallFunc_Show_Error_ID_Status_Popup_Widget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class UWBP_Popup_General_C* CallFunc_Show_Error_ID_Status_Popup_Widget_2, enum class ENWXLogLevel K2Node_Select_Default_1, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_IsValid_ReturnValue_2, class UNWXJoinFriendSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, bool CallFunc_IsPlayInEditor_ReturnValue_2, bool CallFunc_IsPlayInEditorSimulateMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UNWXJoinFriendSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_21, bool CallFunc_HasPendingJoinRequest_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, const class FString& CallFunc_GetGamerTag_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_TextIsEmpty_ReturnValue, class FText Temp_text_Variable_1, class UTexture* Temp_object_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, bool K2Node_Event_bUsingGamepad, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_DB_Shard_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class FText Temp_text_Variable_2, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_1, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_2, class UWBP_DB_Shard_sw_DeploymentSelect_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class UWBP_ProfilePicker_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UAppearanceComponent* CallFunc_GetComponentByClass_ReturnValue_1, TMap<class FString, class FString> CallFunc_GetAppearanceMetadata_OutMetadata, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FCreateProfile& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_TryPlayerProfileCreate_ReturnValue, class FText Temp_text_Variable_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_CustomEvent_Button, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UTexture* Temp_object_Variable_4, class UAsyncAction_PushContentToLayerForPlayer* CallFunc_PushContentToLayerForPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_PushError_ReturnValue, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, bool CallFunc_PushError_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance_1, bool K2Node_DynamicCast_bSuccess_2, class UTexture* Temp_object_Variable_5, bool CallFunc_IsOnConsolePlatform_ReturnValue, class FText Temp_text_Variable_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance_2, bool K2Node_DynamicCast_bSuccess_3, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance_3, bool K2Node_DynamicCast_bSuccess_4, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UTexture* K2Node_Select_Default_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText Temp_text_Variable_5, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_3, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_4, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "ExecuteUbergraph_WBP_StartScreen");

	Params::UWBP_StartScreen_C_ExecuteUbergraph_WBP_StartScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_UserWidget_1 = K2Node_CustomEvent_UserWidget_1;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_TryAcceptEula_ReturnValue = CallFunc_TryAcceptEula_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Reveal_Trailer_Video_Widget = K2Node_DynamicCast_AsWBP_Reveal_Trailer_Video_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_HasValidMedia_HasMedia = CallFunc_HasValidMedia_HasMedia;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_TryBootstrapDeploymentToRespite_ReturnValue = CallFunc_TryBootstrapDeploymentToRespite_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsBootstrappedDeploymentRespite_ReturnValue = CallFunc_IsBootstrappedDeploymentRespite_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_ReadyToTravel_ReturnValue = CallFunc_ReadyToTravel_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_CustomEvent_Show_Cancel_Button = K2Node_CustomEvent_Show_Cancel_Button;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Profile_1 = K2Node_CustomEvent_Profile_1;
	Parms.K2Node_CustomEvent_Shard_1 = K2Node_CustomEvent_Shard_1;
	Parms.K2Node_CustomEvent_Shards = K2Node_CustomEvent_Shards;
	Parms.K2Node_CustomEvent_Shard = K2Node_CustomEvent_Shard;
	Parms.K2Node_CustomEvent_Deployment = K2Node_CustomEvent_Deployment;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_Success_6 = K2Node_CustomEvent_Success_6;
	Parms.CallFunc_LogoutPlayer_ReturnValue = CallFunc_LogoutPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_IsPlayInEditor_ReturnValue = CallFunc_IsPlayInEditor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsPlayInEditor_ReturnValue_1 = CallFunc_IsPlayInEditor_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
	Parms.CallFunc_GetInfo_ReturnValue = CallFunc_GetInfo_ReturnValue;
	Parms.K2Node_CustomEvent_Profile = K2Node_CustomEvent_Profile;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_10 = CallFunc_GetGameInstanceSubsystem_ReturnValue_10;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetInfo_ReturnValue_1 = CallFunc_GetInfo_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_11 = CallFunc_GetGameInstanceSubsystem_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_GetInfo_ReturnValue_2 = CallFunc_GetInfo_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_12 = CallFunc_GetGameInstanceSubsystem_ReturnValue_12;
	Parms.CallFunc_GetInfo_ReturnValue_3 = CallFunc_GetInfo_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_13 = CallFunc_GetGameInstanceSubsystem_ReturnValue_13;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_14 = CallFunc_GetGameInstanceSubsystem_ReturnValue_14;
	Parms.CallFunc_GetInfo_ReturnValue_4 = CallFunc_GetInfo_ReturnValue_4;
	Parms.CallFunc_GetInfo_ReturnValue_5 = CallFunc_GetInfo_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_TryPlayerProfileLogin_ReturnValue = CallFunc_TryPlayerProfileLogin_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_15 = CallFunc_GetGameInstanceSubsystem_ReturnValue_15;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_16 = CallFunc_GetGameInstanceSubsystem_ReturnValue_16;
	Parms.CallFunc_TryPlayerProfileLogin_ReturnValue_1 = CallFunc_TryPlayerProfileLogin_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_17 = CallFunc_GetGameInstanceSubsystem_ReturnValue_17;
	Parms.CallFunc_TryFetchProfiles_ReturnValue = CallFunc_TryFetchProfiles_ReturnValue;
	Parms.K2Node_CustomEvent_Success_5 = K2Node_CustomEvent_Success_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_18 = CallFunc_GetGameInstanceSubsystem_ReturnValue_18;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_19 = CallFunc_GetGameInstanceSubsystem_ReturnValue_19;
	Parms.CallFunc_GetInfo_ReturnValue_6 = CallFunc_GetInfo_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_Platform_To_Platform_Service_String_Platform_Service_String = CallFunc_Platform_To_Platform_Service_String_Platform_Service_String;
	Parms.CallFunc_TrySignin_ReturnValue = CallFunc_TrySignin_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_Success_4 = K2Node_CustomEvent_Success_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Show_Error_ID_Status_Popup_Widget = CallFunc_Show_Error_ID_Status_Popup_Widget;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_Show_Error_ID_Status_Popup_Widget_1 = CallFunc_Show_Error_ID_Status_Popup_Widget_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_7 = CallFunc_PlayAnimation_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.CallFunc_Show_Error_ID_Status_Popup_Widget_2 = CallFunc_Show_Error_ID_Status_Popup_Widget_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_20 = CallFunc_GetGameInstanceSubsystem_ReturnValue_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_IsPlayInEditor_ReturnValue_2 = CallFunc_IsPlayInEditor_ReturnValue_2;
	Parms.CallFunc_IsPlayInEditorSimulateMode_ReturnValue = CallFunc_IsPlayInEditorSimulateMode_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_21 = CallFunc_GetGameInstanceSubsystem_ReturnValue_21;
	Parms.CallFunc_HasPendingJoinRequest_ReturnValue = CallFunc_HasPendingJoinRequest_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_8 = CallFunc_PlayAnimation_ReturnValue_8;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_GetGamerTag_ReturnValue = CallFunc_GetGamerTag_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue_1 = CallFunc_GetOwningLocalPlayer_ReturnValue_1;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue_2 = CallFunc_GetOwningLocalPlayer_ReturnValue_2;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue_1 = CallFunc_GetOwningPlayerState_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetAppearanceMetadata_OutMetadata = CallFunc_GetAppearanceMetadata_OutMetadata;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_TryPlayerProfileCreate_ReturnValue = CallFunc_TryPlayerProfileCreate_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_PushContentToLayerForPlayer_ReturnValue = CallFunc_PushContentToLayerForPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_PushError_ReturnValue = CallFunc_PushError_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_Instance = K2Node_DynamicCast_AsNWXGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;
	Parms.CallFunc_PushError_ReturnValue_1 = CallFunc_PushError_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXGame_Instance_1 = K2Node_DynamicCast_AsNWXGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.CallFunc_IsOnConsolePlatform_ReturnValue = CallFunc_IsOnConsolePlatform_ReturnValue;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsNWXGame_Instance_2 = K2Node_DynamicCast_AsNWXGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsNWXGame_Instance_3 = K2Node_DynamicCast_AsNWXGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue_3 = CallFunc_GetOwningLocalPlayer_ReturnValue_3;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue_4 = CallFunc_GetOwningLocalPlayer_ReturnValue_4;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.ED_CameraModeChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CC_CameraMode         CameraMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Zoom_Level                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StartScreen_C::ED_CameraModeChange__DelegateSignature(enum class E_CC_CameraMode CameraMode, double Zoom_Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "ED_CameraModeChange__DelegateSignature");

	Params::UWBP_StartScreen_C_ED_CameraModeChange__DelegateSignature_Params Parms{};

	Parms.CameraMode = CameraMode;
	Parms.Zoom_Level = Zoom_Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StartScreen.WBP_StartScreen_C.event_stop_menu_music__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StartScreen_C::Event_stop_menu_music__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StartScreen_C", "event_stop_menu_music__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


