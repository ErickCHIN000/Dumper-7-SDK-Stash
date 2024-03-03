#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_InGameMenu.W_InGameMenu_C
// (None)

class UClass* UW_InGameMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_InGameMenu_C");

	return Clss;
}


// W_InGameMenu_C W_InGameMenu.Default__W_InGameMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_InGameMenu_C* UW_InGameMenu_C::GetDefaultObj()
{
	static class UW_InGameMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_InGameMenu_C*>(UW_InGameMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_InGameMenu.W_InGameMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        Key_Input                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_InGameMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key_Input, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "OnKeyDown");

	Params::UW_InGameMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.Key_Input = Key_Input;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_InGameMenu.W_InGameMenu_C.ShowHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_CanPause_                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeY                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InGameMenu_C::ShowHide(bool Local_CanPause_, bool CallFunc_SetGamePaused_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "ShowHide");

	Params::UW_InGameMenu_C_ShowHide_Params Parms{};

	Parms.Local_CanPause_ = Local_CanPause_;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetViewportSize_SizeX = CallFunc_GetViewportSize_SizeX;
	Parms.CallFunc_GetViewportSize_SizeY = CallFunc_GetViewportSize_SizeY;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Graphics_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Graphics_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Graphics_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Load_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Load_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Save_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Save_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Resume_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Resume_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Save_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Save_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Save_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Save_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Load_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Load_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Load_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Load_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Options_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Options_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Options_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Options_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Exit_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Exit_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Graphics_5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Graphics_5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Graphics_5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Graphics_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Graphics_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Graphics_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_CharacterScreen_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.ResumeGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::ResumeGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "ResumeGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_MainMenu_1_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_MainMenu_1_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_MainMenu_1_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_Extra_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_Extra_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_Extra_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_Extra_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_Extra_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_Extra_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_Resume2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.CloseBoxExtra
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::CloseBoxExtra()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "CloseBoxExtra");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_KillPlayer_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_InGameMenu_C::BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "BndEvt__W_InGameMenu_Button_CompleteQuests_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenu.W_InGameMenu_C.ExecuteUbergraph_W_InGameMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FS_bodySystem               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FS_bodySystem               CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_bodySystem               CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_bodySystem               CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Options_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeSave_C*            CallFunc_LoadUserSettings_AntizeSave                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URPGInventory_GameInstance_C*K2Node_DynamicCast_AsRPGInventory_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANpc_merednew_C*             CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_1                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)

void UW_InGameMenu_C::ExecuteUbergraph_W_InGameMenu(int32 EntryPoint, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_Options_C* CallFunc_Create_ReturnValue, class UBP_AntizeSave_C* CallFunc_LoadUserSettings_AntizeSave, bool CallFunc_IsValid_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_2, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_3, class FText Temp_text_Variable, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_4, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class ANpc_merednew_C* CallFunc_GetActorOfClass_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenu_C", "ExecuteUbergraph_W_InGameMenu");

	Params::UW_InGameMenu_C_ExecuteUbergraph_W_InGameMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_1 = CallFunc_Get_AC_Inventory_AC_Inventory_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_LoadUserSettings_AntizeSave = CallFunc_LoadUserSettings_AntizeSave;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_2 = CallFunc_Get_AC_Inventory_AC_Inventory_2;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsRPGInventory_Game_Instance = K2Node_DynamicCast_AsRPGInventory_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_3 = CallFunc_Get_AC_Inventory_AC_Inventory_3;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Get_Player_Reference_Player_1 = CallFunc_Get_Player_Reference_Player_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_4 = CallFunc_Get_AC_Inventory_AC_Inventory_4;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_MakeStruct_FontOutlineSettings_1 = K2Node_MakeStruct_FontOutlineSettings_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


