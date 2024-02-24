#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C
// (None)

class UClass* UUMG_UserInterface_TitleScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_UserInterface_TitleScreen_C");

	return Clss;
}


// UMG_UserInterface_TitleScreen_C UMG_UserInterface_TitleScreen.Default__UMG_UserInterface_TitleScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_UserInterface_TitleScreen_C* UUMG_UserInterface_TitleScreen_C::GetDefaultObj()
{
	static class UUMG_UserInterface_TitleScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_UserInterface_TitleScreen_C*>(UUMG_UserInterface_TitleScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.GetIcarusLogWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_ClientLogging_C*        LogWindow                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_TitleScreen_C::GetIcarusLogWindow(class UUMG_ClientLogging_C** LogWindow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "GetIcarusLogWindow");

	Params::UUMG_UserInterface_TitleScreen_C_GetIcarusLogWindow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LogWindow != nullptr)
		*LogWindow = Parms.LogWindow;

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.HideLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_TitleScreen_C::HideLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "HideLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.ShowLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Optional_Message                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                     OptionalWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_TitleScreen_C::ShowLoadingScreen(class FText Optional_Message, class UWidget* OptionalWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "ShowLoadingScreen");

	Params::UUMG_UserInterface_TitleScreen_C_ShowLoadingScreen_Params Parms{};

	Parms.Optional_Message = Optional_Message;
	Parms.OptionalWidget = OptionalWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.GetConfirmationWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_ConfirmationPopup_C*    ConfirmationWidget                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_TitleScreen_C::GetConfirmationWindow(class UUMG_ConfirmationPopup_C** ConfirmationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "GetConfirmationWindow");

	Params::UUMG_UserInterface_TitleScreen_C_GetConfirmationWindow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ConfirmationWidget != nullptr)
		*ConfirmationWidget = Parms.ConfirmationWidget;

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.UpdateQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_TitleScreen_C::UpdateQueue(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "UpdateQueue");

	Params::UUMG_UserInterface_TitleScreen_C_UpdateQueue_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.UpdateMaintenaceText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_TitleScreen_C::UpdateMaintenaceText(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "UpdateMaintenaceText");

	Params::UUMG_UserInterface_TitleScreen_C_UpdateMaintenaceText_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.HideErrorCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_TitleScreen_C::HideErrorCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "HideErrorCode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_TitleScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_UserInterface_TitleScreen_C::BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_UserInterface_TitleScreen_C::BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.FocusDynamicWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 DynamicWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_TitleScreen_C::FocusDynamicWidget(class UUserWidget* DynamicWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "FocusDynamicWidget");

	Params::UUMG_UserInterface_TitleScreen_C_FocusDynamicWidget_Params Parms{};

	Parms.DynamicWidget = DynamicWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.DisplayIcarusError
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             OutgoingError                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_UserInterface_TitleScreen_C::DisplayIcarusError(const struct FErrorCodesEnum& OutgoingError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "DisplayIcarusError");

	Params::UUMG_UserInterface_TitleScreen_C_DisplayIcarusError_Params Parms{};

	Parms.OutgoingError = OutgoingError;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.ExecuteUbergraph_UMG_UserInterface_TitleScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_DynamicWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FErrorCodesEnum             K2Node_Event_OutgoingError                                       (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_TitleScreen_C::ExecuteUbergraph_UMG_UserInterface_TitleScreen(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UUserWidget* K2Node_Event_DynamicWidget, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FErrorCodesEnum& K2Node_Event_OutgoingError, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_TitleScreen_C", "ExecuteUbergraph_UMG_UserInterface_TitleScreen");

	Params::UUMG_UserInterface_TitleScreen_C_ExecuteUbergraph_UMG_UserInterface_TitleScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_Event_DynamicWidget = K2Node_Event_DynamicWidget;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Event_OutgoingError = K2Node_Event_OutgoingError;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


