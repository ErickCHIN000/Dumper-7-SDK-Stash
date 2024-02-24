#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C
// (None)

class UClass* UWBP_HUD_NotificationLayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_NotificationLayer_C");

	return Clss;
}


// WBP_HUD_NotificationLayer_C WBP_HUD_NotificationLayer.Default__WBP_HUD_NotificationLayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_NotificationLayer_C* UWBP_HUD_NotificationLayer_C::GetDefaultObj()
{
	static class UWBP_HUD_NotificationLayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_NotificationLayer_C*>(UWBP_HUD_NotificationLayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.OnRequestTutorialNonModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialDataAsset*          Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_MakeStruct_S_UpdaterNotificatorInfo                       (HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::OnRequestTutorialNonModal(class UTutorialDataAsset* Tutorial, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "OnRequestTutorialNonModal");

	Params::UWBP_HUD_NotificationLayer_C_OnRequestTutorialNonModal_Params Parms{};

	Parms.Tutorial = Tutorial;
	Parms.K2Node_MakeStruct_S_UpdaterNotificatorInfo = K2Node_MakeStruct_S_UpdaterNotificatorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.OnRequestTutorialModal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialDataAsset_SlideDeck*TutorialData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Tutorial_Modal_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::OnRequestTutorialModal(class UTutorialDataAsset_SlideDeck* TutorialData, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_Tutorial_Modal_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "OnRequestTutorialModal");

	Params::UWBP_HUD_NotificationLayer_C_OnRequestTutorialModal_Params Parms{};

	Parms.TutorialData = TutorialData;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.Update Net Notification Card
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::Update_Net_Notification_Card()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "Update Net Notification Card");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.Clear Notification Card Queue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::Clear_Notification_Card_Queue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "Clear Notification Card Queue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.Is Card Notification Queue Empty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::Is_Card_Notification_Queue_Empty(bool* bIsEmpty, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "Is Card Notification Queue Empty");

	Params::UWBP_HUD_NotificationLayer_C_Is_Card_Notification_Queue_Empty_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.RefreshRestBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::RefreshRestBar(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "RefreshRestBar");

	Params::UWBP_HUD_NotificationLayer_C_RefreshRestBar_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.PlayFadeToBlack Animation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Black                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_StartAtTime_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::PlayFadeToBlack_Animation(bool To_Black, double Temp_real_Variable, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, enum class EUMGSequencePlayMode K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, double K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_Select_Option_1_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "PlayFadeToBlack Animation");

	Params::UWBP_HUD_NotificationLayer_C_PlayFadeToBlack_Animation_Params Parms{};

	Parms.To_Black = To_Black;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.CallFunc_PlayAnimation_StartAtTime_ImplicitCast = CallFunc_PlayAnimation_StartAtTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.PlayerIsReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::PlayerIsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "PlayerIsReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::RemoveGlobalNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "RemoveGlobalNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HeadlineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               UseSubBox                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        SubBoxHeader                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SubBoxEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HUD_NotificationLayer_C::DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText, bool UseSubBox, class FText SubBoxHeader, class FText SubBoxEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "DisplayGlobalNotification");

	Params::UWBP_HUD_NotificationLayer_C_DisplayGlobalNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.TypeText = TypeText;
	Parms.HeadlineText = HeadlineText;
	Parms.UseSubBox = UseSubBox;
	Parms.SubBoxHeader = SubBoxHeader;
	Parms.SubBoxEntry = SubBoxEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.RemoveToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::RemoveToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "RemoveToolTip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.DisplayToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "DisplayToolTip");

	Params::UWBP_HUD_NotificationLayer_C_DisplayToolTip_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.RemoveBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::RemoveBigLootNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "RemoveBigLootNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.DisplayBigLootNotification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BigLootNotificationInfo  S_BigLootNotificationInfo                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::DisplayBigLootNotification(struct FS_BigLootNotificationInfo& S_BigLootNotificationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "DisplayBigLootNotification");

	Params::UWBP_HUD_NotificationLayer_C_DisplayBigLootNotification_Params Parms{};

	Parms.S_BigLootNotificationInfo = S_BigLootNotificationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.RemoveQuestNotifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_HUD_Manager_C>K2Node_DynamicCast_AsBPI_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::RemoveQuestNotifier(TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "RemoveQuestNotifier");

	Params::UWBP_HUD_NotificationLayer_C_RemoveQuestNotifier_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_HUD_Manager = K2Node_DynamicCast_AsBPI_HUD_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "DisplayIngameTutorial");

	Params::UWBP_HUD_NotificationLayer_C_DisplayIngameTutorial_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.Display Card Notification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_QuestNotificatorInfo     S_QuestNotificatorInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::Display_Card_Notification(struct FS_QuestNotificatorInfo& S_QuestNotificatorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "Display Card Notification");

	Params::UWBP_HUD_NotificationLayer_C_Display_Card_Notification_Params Parms{};

	Parms.S_QuestNotificatorInfo = S_QuestNotificatorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.ToggleHUD_DetailMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_hud_DetailMode        HUD_DetailedMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::ToggleHUD_DetailMode(enum class E_hud_DetailMode HUD_DetailedMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "ToggleHUD_DetailMode");

	Params::UWBP_HUD_NotificationLayer_C_ToggleHUD_DetailMode_Params Parms{};

	Parms.HUD_DetailedMode = HUD_DetailedMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.FadeToBlack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeTo_StayBlack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::FadeToBlack(double TimeTo_StayBlack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "FadeToBlack");

	Params::UWBP_HUD_NotificationLayer_C_FadeToBlack_Params Parms{};

	Parms.TimeTo_StayBlack = TimeTo_StayBlack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.ResetAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::ResetAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "ResetAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_NotificationLayer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C.ExecuteUbergraph_WBP_HUD_NotificationLayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_hud_DetailMode        K2Node_CustomEvent_HUD_DetailedMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_TimeTo_StayBlack                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_NotificationLayer_C::ExecuteUbergraph_WBP_HUD_NotificationLayer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_hud_DetailMode K2Node_CustomEvent_HUD_DetailedMode, double K2Node_CustomEvent_TimeTo_StayBlack, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_NotificationLayer_C", "ExecuteUbergraph_WBP_HUD_NotificationLayer");

	Params::UWBP_HUD_NotificationLayer_C_ExecuteUbergraph_WBP_HUD_NotificationLayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_HUD_DetailedMode = K2Node_CustomEvent_HUD_DetailedMode;
	Parms.K2Node_CustomEvent_TimeTo_StayBlack = K2Node_CustomEvent_TimeTo_StayBlack;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_DynamicCast_AsBP_Player_State_1 = K2Node_DynamicCast_AsBP_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


