#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C
// (None)

class UClass* UWBP_LoginScreenUpdated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoginScreenUpdated_C");

	return Clss;
}


// WBP_LoginScreenUpdated_C WBP_LoginScreenUpdated.Default__WBP_LoginScreenUpdated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoginScreenUpdated_C* UWBP_LoginScreenUpdated_C::GetDefaultObj()
{
	static class UWBP_LoginScreenUpdated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoginScreenUpdated_C*>(UWBP_LoginScreenUpdated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.AcceptedEULA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Val                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SophiaGameInstance_C*    K2Node_DynamicCast_AsBP_Sophia_Game_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_LoginScreenUpdated_C::AcceptedEULA(bool* Val, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SophiaGameInstance_C* K2Node_DynamicCast_AsBP_Sophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "AcceptedEULA");

	Params::UWBP_LoginScreenUpdated_C_AcceptedEULA_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Game_Instance = K2Node_DynamicCast_AsBP_Sophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Val != nullptr)
		*Val = Parms.Val;

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Open Tiktok
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::Open_Tiktok()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Open Tiktok");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Open Twitter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::Open_Twitter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Open Twitter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Open Game Website
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::Open_Game_Website()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Open Game Website");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_LoginScreenUpdated_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "OnMouseButtonDown_0");

	Params::UWBP_LoginScreenUpdated_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.HandleSideMenus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_LoginScreenUpdated_C::HandleSideMenus(int32 Index, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "HandleSideMenus");

	Params::UWBP_LoginScreenUpdated_C_HandleSideMenus_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Get_PlayName_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaController*           K2Node_DynamicCast_AsSophia_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWBP_LoginScreenUpdated_C::Get_PlayName_Text_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ASophiaController* K2Node_DynamicCast_AsSophia_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Get_PlayName_Text_0");

	Params::UWBP_LoginScreenUpdated_C_Get_PlayName_Text_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Controller = K2Node_DynamicCast_AsSophia_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.HandleButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoginScreenUpdated_C::HandleButtonClicked(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "HandleButtonClicked");

	Params::UWBP_LoginScreenUpdated_C_HandleButtonClicked_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Finished_E12D8DA842A361E0EE46B9ACF8EC0F58
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::Finished_E12D8DA842A361E0EE46B9ACF8EC0F58()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Finished_E12D8DA842A361E0EE46B9ACF8EC0F58");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Finished_18B2003B4116C1CA3D3C5AB3A6AFF299
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::Finished_18B2003B4116C1CA3D3C5AB3A6AFF299()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Finished_18B2003B4116C1CA3D3C5AB3A6AFF299");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BPI_FailedToGetNickname
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BPI_FailedToGetNickname()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BPI_FailedToGetNickname");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BPI_ReceivedPlayerKrakenName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_LoginScreenUpdated_C::BPI_ReceivedPlayerKrakenName(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BPI_ReceivedPlayerKrakenName");

	Params::UWBP_LoginScreenUpdated_C_BPI_ReceivedPlayerKrakenName_Params Parms{};

	Parms.String = String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.OnMMFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::OnMMFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "OnMMFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoginScreenUpdated_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "Tick");

	Params::UWBP_LoginScreenUpdated_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreen_WBP_StyledButton_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreen_WBP_StyledButton_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreen_WBP_StyledButton_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreen_WBP_StyledButton_0_K2Node_ComponentBoundEvent_6_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreen_WBP_StyledButton_0_K2Node_ComponentBoundEvent_6_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreen_WBP_StyledButton_0_K2Node_ComponentBoundEvent_6_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreen_VideoSettingsPage_K2Node_ComponentBoundEvent_11_CancelEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreen_VideoSettingsPage_K2Node_ComponentBoundEvent_11_CancelEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreen_VideoSettingsPage_K2Node_ComponentBoundEvent_11_CancelEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreen_HorizontalRadioSelect_K2Node_ComponentBoundEvent_12_RadioSelectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreen_HorizontalRadioSelect_K2Node_ComponentBoundEvent_12_RadioSelectedSignature__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreen_HorizontalRadioSelect_K2Node_ComponentBoundEvent_12_RadioSelectedSignature__DelegateSignature");

	Params::UWBP_LoginScreenUpdated_C_BndEvt__WBP_LoginScreen_HorizontalRadioSelect_K2Node_ComponentBoundEvent_12_RadioSelectedSignature__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreen_Button_122_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreen_Button_122_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreen_Button_122_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BP_OpenMail
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BP_OpenMail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BP_OpenMail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BP_OpenFriends
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BP_OpenFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BP_OpenFriends");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_WBP_PlayGameBar_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_WBP_PlayGameBar_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_WBP_PlayGameBar_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_GameWebsiteButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_GameWebsiteButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_GameWebsiteButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_TwitterButton_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_TwitterButton_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_TwitterButton_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_TikTokButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_TikTokButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_TikTokButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_WBP_ChooseNameScreen_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_WBP_ChooseNameScreen_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_WBP_ChooseNameScreen_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.StartMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::StartMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "StartMatch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BPI_OnBanReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKrakenBanInfo              BanInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_LoginScreenUpdated_C::BPI_OnBanReceived(struct FKrakenBanInfo& BanInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BPI_OnBanReceived");

	Params::UWBP_LoginScreenUpdated_C_BPI_OnBanReceived_Params Parms{};

	Parms.BanInfo = BanInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BPI_OnUnbanReceived
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BPI_OnUnbanReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BPI_OnUnbanReceived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_WBP_LoginScreenButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_WBP_LoginScreenButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_WBP_LoginScreenButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_MailButton_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_MailButton_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_MailButton_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_AccountButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_AccountButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_AccountButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_CreditsButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_CreditsButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_CreditsButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BndEvt__WBP_LoginScreenUpdated_WBP_PlayGameBarPrimary_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BndEvt__WBP_LoginScreenUpdated_WBP_PlayGameBarPrimary_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BndEvt__WBP_LoginScreenUpdated_WBP_PlayGameBarPrimary_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.EventAgeConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::EventAgeConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "EventAgeConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.OnAgeGateClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::OnAgeGateClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "OnAgeGateClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.CheckShowDeluxeClaimUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::CheckShowDeluxeClaimUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "CheckShowDeluxeClaimUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.BP_CloseSubmenus
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_LoginScreenUpdated_C::BP_CloseSubmenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "BP_CloseSubmenus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoginScreenUpdated.WBP_LoginScreenUpdated_C.ExecuteUbergraph_WBP_LoginScreenUpdated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGISKraken*                  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGISSteam*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasDeluxe_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_String                                              (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaController*           K2Node_DynamicCast_AsSophia_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_AcceptedEULA_Val                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_EULA_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKrakenBanInfo              K2Node_Event_BanInfo                                             (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SophiaGameInstance_C*    K2Node_DynamicCast_AsBP_Sophia_Game_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGISKraken*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalPlayerSteamName_ReturnValue                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalPlayerSteamName_ReturnValue_1                   (None)
// class ASophiaController*           K2Node_DynamicCast_AsSophia_Controller_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BPC_GetKrakenID_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BPC_GetKrakenID_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWBP_LoginScreenButton_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetOnlineFriendCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_GetParentalConsentRequirement_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGISKraken*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_AgeGate_C*              CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISSocial*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKrakenID_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class UWBP_Credits_C*              CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_DeluxeItemClaimed_C*    CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_LoginScreenUpdated_C::ExecuteUbergraph_WBP_LoginScreenUpdated(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGISSteam* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_HasDeluxe_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const class FString& K2Node_Event_String, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UUserWidget*>& K2Node_MakeArray_Array, const class FString& K2Node_ComponentBoundEvent_Value, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class ASophiaController* K2Node_DynamicCast_AsSophia_Controller, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_AcceptedEULA_Val, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UWBP_EULA_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_4, const struct FKrakenBanInfo& K2Node_Event_BanInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UBP_SophiaGameInstance_C* K2Node_DynamicCast_AsBP_Sophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class FText CallFunc_GetLocalPlayerSteamName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class FText CallFunc_GetLocalPlayerSteamName_ReturnValue_1, class ASophiaController* K2Node_DynamicCast_AsSophia_Controller_1, bool K2Node_DynamicCast_bSuccess_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_BPC_GetKrakenID_ReturnValue, const class FString& CallFunc_BPC_GetKrakenID_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class UWBP_LoginScreenButton_C*>& K2Node_MakeArray_Array_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_4, bool K2Node_DynamicCast_bSuccess_7, int32 CallFunc_GetOnlineFriendCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GetParentalConsentRequirement_ReturnValue, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UWBP_AgeGate_C* CallFunc_Create_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UGISSocial* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, const class FString& CallFunc_GetKrakenID_ReturnValue, class UWBP_Credits_C* CallFunc_Create_ReturnValue_2, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_5, bool K2Node_DynamicCast_bSuccess_8, class UWBP_DeluxeItemClaimed_C* CallFunc_Create_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoginScreenUpdated_C", "ExecuteUbergraph_WBP_LoginScreenUpdated");

	Params::UWBP_LoginScreenUpdated_C_ExecuteUbergraph_WBP_LoginScreenUpdated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue = CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_HasDeluxe_ReturnValue = CallFunc_HasDeluxe_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_1 = K2Node_DynamicCast_AsSophia_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_Event_String = K2Node_Event_String;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_2 = K2Node_DynamicCast_AsSophia_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsSophia_Controller = K2Node_DynamicCast_AsSophia_Controller;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_AcceptedEULA_Val = CallFunc_AcceptedEULA_Val;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_3 = K2Node_DynamicCast_AsSophia_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_BanInfo = K2Node_Event_BanInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Game_Instance = K2Node_DynamicCast_AsBP_Sophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_GetLocalPlayerSteamName_ReturnValue = CallFunc_GetLocalPlayerSteamName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetLocalPlayerSteamName_ReturnValue_1 = CallFunc_GetLocalPlayerSteamName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Controller_1 = K2Node_DynamicCast_AsSophia_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_BPC_GetKrakenID_ReturnValue = CallFunc_BPC_GetKrakenID_ReturnValue;
	Parms.CallFunc_BPC_GetKrakenID_ReturnValue_1 = CallFunc_BPC_GetKrakenID_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_4 = K2Node_DynamicCast_AsSophia_Game_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetOnlineFriendCount_ReturnValue = CallFunc_GetOnlineFriendCount_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetParentalConsentRequirement_ReturnValue = CallFunc_GetParentalConsentRequirement_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetKrakenID_ReturnValue = CallFunc_GetKrakenID_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_5 = K2Node_DynamicCast_AsSophia_Game_Instance_5;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


