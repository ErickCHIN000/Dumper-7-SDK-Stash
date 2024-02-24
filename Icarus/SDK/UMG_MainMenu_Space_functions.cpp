#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MainMenu_Space.UMG_MainMenu_Space_C
// (None)

class UClass* UUMG_MainMenu_Space_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MainMenu_Space_C");

	return Clss;
}


// UMG_MainMenu_Space_C UMG_MainMenu_Space.Default__UMG_MainMenu_Space_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MainMenu_Space_C* UUMG_MainMenu_Space_C::GetDefaultObj()
{
	static class UUMG_MainMenu_Space_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MainMenu_Space_C*>(UUMG_MainMenu_Space_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.EscapePressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ResetProspectView_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_Space_C::EscapePressed(bool* Handled, bool CallFunc_ResetProspectView_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "EscapePressed");

	Params::UUMG_MainMenu_Space_C_EscapePressed_Params Parms{};

	Parms.CallFunc_ResetProspectView_ReturnValue = CallFunc_ResetProspectView_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue_3 = CallFunc_IsVisible_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.InitCharacterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAssociatedProspectInfo     CallFunc_GetLastProspect_AssociatedProspectInfo                  (None)
// bool                               CallFunc_GetLastProspect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWorkshopTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_Space_C::InitCharacterData(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FAssociatedProspectInfo& CallFunc_GetLastProspect_AssociatedProspectInfo, bool CallFunc_GetLastProspect_ReturnValue, class UWorkshopTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput, class UTalentViewInterface* CallFunc_GetView_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "InitCharacterData");

	Params::UUMG_MainMenu_Space_C_InitCharacterData_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue = CallFunc_GetPlayerDataComponent_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetLastProspect_AssociatedProspectInfo = CallFunc_GetLastProspect_AssociatedProspectInfo;
	Parms.CallFunc_GetLastProspect_ReturnValue = CallFunc_GetLastProspect_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetView_self_CastInput = CallFunc_GetView_self_CastInput;
	Parms.CallFunc_GetView_ReturnValue = CallFunc_GetView_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.NotificationsUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNotificationSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNotification>       CallFunc_GetNotifications_ReturnValue                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::NotificationsUpdated(class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<struct FNotification>& CallFunc_GetNotifications_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "NotificationsUpdated");

	Params::UUMG_MainMenu_Space_C_NotificationsUpdated_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetNotifications_ReturnValue = CallFunc_GetNotifications_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ContractUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIcarusGameStateSpace_bValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSpace*       CallFunc_GetIcarusGameStateSpace_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpaceStation_GameState_C*   K2Node_DynamicCast_AsSpace_Station_Game_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProspectInfoIsValid_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_Space_C::ContractUpdated(bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ProspectInfoIsValid_Valid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "ContractUpdated");

	Params::UUMG_MainMenu_Space_C_ContractUpdated_Params Parms{};

	Parms.CallFunc_GetIcarusGameStateSpace_bValid = CallFunc_GetIcarusGameStateSpace_bValid;
	Parms.CallFunc_GetIcarusGameStateSpace_ReturnValue = CallFunc_GetIcarusGameStateSpace_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpace_Station_Game_State = K2Node_DynamicCast_AsSpace_Station_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ProspectInfoIsValid_Valid = CallFunc_ProspectInfoIsValid_Valid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ShowOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESpaceMainMenuOptions   Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_Space_C::ShowOption(enum class ESpaceMainMenuOptions Option, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "ShowOption");

	Params::UUMG_MainMenu_Space_C_ShowOption_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.SetContentState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESpaceMainMenuOptions   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::SetContentState(enum class ESpaceMainMenuOptions State, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "SetContentState");

	Params::UUMG_MainMenu_Space_C_SetContentState_Params Parms{};

	Parms.State = State;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.SetBackReturnsToLastMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldReturn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUMG_MainMenu_Space_C::SetBackReturnsToLastMenu(bool ShouldReturn, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "SetBackReturnsToLastMenu");

	Params::UUMG_MainMenu_Space_C_SetBackReturnsToLastMenu_Params Parms{};

	Parms.ShouldReturn = ShouldReturn;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_Space_C::Initialise(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "Initialise");

	Params::UUMG_MainMenu_Space_C_Initialise_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ResetContentSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::ResetContentSwitcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "ResetContentSwitcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ShowTopMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::ShowTopMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "ShowTopMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToHost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::GoToHost(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "GoToHost");

	Params::UUMG_MainMenu_Space_C_GoToHost_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToContract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::GoToContract(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "GoToContract");

	Params::UUMG_MainMenu_Space_C_GoToContract_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.CreateDropship
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::CreateDropship(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "CreateDropship");

	Params::UUMG_MainMenu_Space_C_CreateDropship_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.LeaveToMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::LeaveToMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "LeaveToMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ReturnToCharacterSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::ReturnToCharacterSelect(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "ReturnToCharacterSelect");

	Params::UUMG_MainMenu_Space_C_ReturnToCharacterSelect_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "Tick");

	Params::UUMG_MainMenu_Space_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.CancelLeaveToMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::CancelLeaveToMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "CancelLeaveToMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.OnConnectedPlayerInitialised
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConnectedPlayer            ConnectedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_MainMenu_Space_C::OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "OnConnectedPlayerInitialised");

	Params::UUMG_MainMenu_Space_C_OnConnectedPlayerInitialised_Params Parms{};

	Parms.ConnectedPlayer = ConnectedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::GoToJoin(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "GoToJoin");

	Params::UUMG_MainMenu_Space_C_GoToJoin_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__UMG_MainMenu_Space_ButtonOutposts_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__UMG_MainMenu_Space_ButtonOutposts_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__UMG_MainMenu_Space_ButtonOutposts_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__UMG_MainMenu_Space_ButtonOutposts_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToOutpostScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::GoToOutpostScreen(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "GoToOutpostScreen");

	Params::UUMG_MainMenu_Space_C_GoToOutpostScreen_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoBackToHome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::GoBackToHome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "GoBackToHome");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToOpenWorldScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::GoToOpenWorldScreen(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "GoToOpenWorldScreen");

	Params::UUMG_MainMenu_Space_C_GoToOpenWorldScreen_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__UMG_MainMenu_Space_ButtonOpenWorld_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__UMG_MainMenu_Space_ButtonOpenWorld_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__UMG_MainMenu_Space_ButtonOpenWorld_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__UMG_MainMenu_Space_ButtonOpenWorld_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ResumeLastProspectClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::ResumeLastProspectClicked(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "ResumeLastProspectClicked");

	Params::UUMG_MainMenu_Space_C_ResumeLastProspectClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_Space_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToOpenProspectScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::GoToOpenProspectScreen(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "GoToOpenProspectScreen");

	Params::UUMG_MainMenu_Space_C_GoToOpenProspectScreen_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__UMG_MainMenu_Space_ButtonLivingWeapons_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::BndEvt__UMG_MainMenu_Space_ButtonLivingWeapons_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "BndEvt__UMG_MainMenu_Space_ButtonLivingWeapons_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature");

	Params::UUMG_MainMenu_Space_C_BndEvt__UMG_MainMenu_Space_ButtonLivingWeapons_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ExecuteUbergraph_UMG_MainMenu_Space
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UNotificationSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_8                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_7                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_6                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_5                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerPreview_HAB_C*     CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            K2Node_CustomEvent_ConnectedPlayer                               (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_4                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_3                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSpace*K2Node_DynamicCast_AsIcarus_Player_Controller_Space              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSpace_bValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSpace*       CallFunc_GetIcarusGameStateSpace_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpaceStation_GameState_C*   K2Node_DynamicCast_AsSpace_Station_Game_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// struct FAssociatedProspectInfo     CallFunc_GetLastProspect_AssociatedProspectInfo                  (None)
// bool                               CallFunc_GetLastProspect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_Space_C::ExecuteUbergraph_UMG_MainMenu_Space(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_8, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_4, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_6, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_5, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_4, bool CallFunc_IsValid_ReturnValue_2, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_3, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_5, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class ABP_PlayerPreview_HAB_C* CallFunc_GetActorOfClass_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_4, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class AIcarusPlayerControllerSpace* K2Node_DynamicCast_AsIcarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess_4, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_2, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, const struct FAssociatedProspectInfo& CallFunc_GetLastProspect_AssociatedProspectInfo, bool CallFunc_GetLastProspect_ReturnValue, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_Space_C", "ExecuteUbergraph_UMG_MainMenu_Space");

	Params::UUMG_MainMenu_Space_C_ExecuteUbergraph_UMG_MainMenu_Space_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Button_8 = K2Node_CustomEvent_Button_8;
	Parms.K2Node_CustomEvent_Button_7 = K2Node_CustomEvent_Button_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_CustomEvent_Button_6 = K2Node_CustomEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_5 = K2Node_ComponentBoundEvent_ToggleButton_5;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_4 = K2Node_ComponentBoundEvent_ToggleButton_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_3 = K2Node_ComponentBoundEvent_ToggleButton_3;
	Parms.K2Node_CustomEvent_Button_5 = K2Node_CustomEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_2 = K2Node_ComponentBoundEvent_ToggleButton_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_1 = K2Node_ComponentBoundEvent_ToggleButton_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ToggleButton = K2Node_ComponentBoundEvent_ToggleButton;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.K2Node_CustomEvent_ConnectedPlayer = K2Node_CustomEvent_ConnectedPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_Button_4 = K2Node_CustomEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CustomEvent_Button_3 = K2Node_CustomEvent_Button_3;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface_2 = K2Node_DynamicCast_AsUIController_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface_2 = CallFunc_GetUserInterface_UserInterface_2;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Space = K2Node_DynamicCast_AsIcarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_GetIcarusGameStateSpace_bValid = CallFunc_GetIcarusGameStateSpace_bValid;
	Parms.CallFunc_GetIcarusGameStateSpace_ReturnValue = CallFunc_GetIcarusGameStateSpace_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpace_Station_Game_State = K2Node_DynamicCast_AsSpace_Station_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_Button_2 = K2Node_CustomEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_2 = CallFunc_GetIcarusPlayerController_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue = CallFunc_GetPlayerDataComponent_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_GetLastProspect_AssociatedProspectInfo = CallFunc_GetLastProspect_AssociatedProspectInfo;
	Parms.CallFunc_GetLastProspect_ReturnValue = CallFunc_GetLastProspect_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


