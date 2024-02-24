#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_CommonNWX.HUD_CommonNWX_C
// (Actor)

class UClass* AHUD_CommonNWX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_CommonNWX_C");

	return Clss;
}


// HUD_CommonNWX_C HUD_CommonNWX.Default__HUD_CommonNWX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUD_CommonNWX_C* AHUD_CommonNWX_C::GetDefaultObj()
{
	static class AHUD_CommonNWX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUD_CommonNWX_C*>(AHUD_CommonNWX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_CommonNWX.HUD_CommonNWX_C.IsCardNotificationQueueEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::IsCardNotificationQueueEmpty(bool* bIsEmpty, bool CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "IsCardNotificationQueueEmpty");

	Params::AHUD_CommonNWX_C_IsCardNotificationQueueEmpty_Params Parms{};

	Parms.CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty = CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.OnActiveWindowClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::OnActiveWindowClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "OnActiveWindowClosed");

	Params::AHUD_CommonNWX_C_OnActiveWindowClosed_Params Parms{};

	Parms.Window = Window;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateLayers
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::ActivateLayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ActivateLayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.UninitializeHUD
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::UninitializeHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "UninitializeHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.InitializeHUD
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      LActiveWindow                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_GetActiveWindowInLayer_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::InitializeHUD(class UNWXCommonWindowWidget* LActiveWindow, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXCommonWindowWidget* CallFunc_GetActiveWindowInLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "InitializeHUD");

	Params::AHUD_CommonNWX_C_InitializeHUD_Params Parms{};

	Parms.LActiveWindow = LActiveWindow;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveWindowInLayer_ReturnValue = CallFunc_GetActiveWindowInLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateSubtitles
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Subtitle_Window_C*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ActivateSubtitles(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Subtitle_Window_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ActivateSubtitles");

	Params::AHUD_CommonNWX_C_ActivateSubtitles_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateInteract
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DeactivateInteract(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DeactivateInteract");

	Params::AHUD_CommonNWX_C_DeactivateInteract_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateInteract
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_InteractionLayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ActivateInteract(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_HUD_InteractionLayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ActivateInteract");

	Params::AHUD_CommonNWX_C_ActivateInteract_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.OnSkillUnlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillDataReference         UnlockedSkill                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FSkillPresentationData      LCurrentUnlockedSkill                                            (Edit, BlueprintVisible)
// bool                               CallFunc_AreNotificationsEnabled_Enabled                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillPresentationData      CallFunc_GetSkillPresentationData_ReturnValue                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillReferenceContainer    CallFunc_GetSkillUnlockables_OutSkillUnlockables                 (None)
// bool                               CallFunc_GetSkillUnlockables_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillDataReference         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FSkillPresentationData      CallFunc_GetSkillPresentationData_ReturnValue_1                  (None)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     K2Node_MakeStruct_S_QuestNotificatorInfo                         (HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     K2Node_MakeStruct_S_QuestNotificatorInfo_1                       (HasGetValueTypeHash)

void AHUD_CommonNWX_C::OnSkillUnlocked(struct FSkillDataReference& UnlockedSkill, const struct FSkillPresentationData& LCurrentUnlockedSkill, bool CallFunc_AreNotificationsEnabled_Enabled, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillUnlockables_OutSkillUnlockables, bool CallFunc_GetSkillUnlockables_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSkillDataReference& CallFunc_Array_Get_Item, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "OnSkillUnlocked");

	Params::AHUD_CommonNWX_C_OnSkillUnlocked_Params Parms{};

	Parms.UnlockedSkill = UnlockedSkill;
	Parms.LCurrentUnlockedSkill = LCurrentUnlockedSkill;
	Parms.CallFunc_AreNotificationsEnabled_Enabled = CallFunc_AreNotificationsEnabled_Enabled;
	Parms.CallFunc_GetSkillPresentationData_ReturnValue = CallFunc_GetSkillPresentationData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkillUnlockables_OutSkillUnlockables = CallFunc_GetSkillUnlockables_OutSkillUnlockables;
	Parms.CallFunc_GetSkillUnlockables_ReturnValue = CallFunc_GetSkillUnlockables_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSkillPresentationData_ReturnValue_1 = CallFunc_GetSkillPresentationData_ReturnValue_1;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_S_QuestNotificatorInfo = K2Node_MakeStruct_S_QuestNotificatorInfo;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_QuestNotificatorInfo_1 = K2Node_MakeStruct_S_QuestNotificatorInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ToggleHUDVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXPrimaryGameLayout*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXPrimaryGameLayout*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ToggleHUDVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TArray<class UNWXPrimaryGameLayout*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UNWXPrimaryGameLayout* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ToggleHUDVisibility");

	Params::AHUD_CommonNWX_C_ToggleHUDVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateSpectatorHUD
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetAllLayerTags_ReturnValue                             (ReferenceParm)
// class UNWXCommonWindowWidget*      CallFunc_FindWindowInLayers_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DeactivateSpectatorHUD(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DeactivateSpectatorHUD");

	Params::AHUD_CommonNWX_C_DeactivateSpectatorHUD_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetAllLayerTags_ReturnValue = CallFunc_GetAllLayerTags_ReturnValue;
	Parms.CallFunc_FindWindowInLayers_ReturnValue = CallFunc_FindWindowInLayers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateSpectatorHUD
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_FlyCamOverlay_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ActivateSpectatorHUD(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_DB_FlyCamOverlay_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ActivateSpectatorHUD");

	Params::AHUD_CommonNWX_C_ActivateSpectatorHUD_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.AreNotificationsEnabled
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::AreNotificationsEnabled(bool* Enabled, class APlayerState* CallFunc_GetPlayerState_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "AreNotificationsEnabled");

	Params::AHUD_CommonNWX_C_AreNotificationsEnabled_Params Parms{};

	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateChat
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DeactivateChat(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DeactivateChat");

	Params::AHUD_CommonNWX_C_DeactivateChat_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateChat
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_ChatLayer_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ActivateChat(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_HUD_ChatLayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ActivateChat");

	Params::AHUD_CommonNWX_C_ActivateChat_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateNotifications
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DeactivateNotifications(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DeactivateNotifications");

	Params::AHUD_CommonNWX_C_DeactivateNotifications_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateNotifications
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_NotificationLayer_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ActivateNotifications(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_HUD_NotificationLayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ActivateNotifications");

	Params::AHUD_CommonNWX_C_ActivateNotifications_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowingHUD                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayHUD(bool ShowingHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayHUD");

	Params::AHUD_CommonNWX_C_DisplayHUD_Params Parms{};

	Parms.ShowingHUD = ShowingHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.CreateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            PlayerCamera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             IconDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "CreateMarker");

	Params::AHUD_CommonNWX_C_CreateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.PlayerCamera = PlayerCamera;
	Parms.Colour = Colour;
	Parms.IconDistance = IconDistance;
	Parms.Row = Row;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.RemoveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::RemoveMarker(class AActor* ActorToMark)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "RemoveMarker");

	Params::AHUD_CommonNWX_C_RemoveMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.UpdateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             MarkerPrecision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ParticlesVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ParticlesColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "UpdateMarker");

	Params::AHUD_CommonNWX_C_UpdateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.MarkerPrecision = MarkerPrecision;
	Parms.ParticlesVisible = ParticlesVisible;
	Parms.ParticlesColor = ParticlesColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayCompass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayFX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayCompass(bool bVisible, bool PlayFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayCompass");

	Params::AHUD_CommonNWX_C_DisplayCompass_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.PlayFX = PlayFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                BackgroundColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayIngameTutorial");

	Params::AHUD_CommonNWX_C_DisplayIngameTutorial_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;
	Parms.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CrosshairTypes        Crosshair_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CrosshairVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Crosshair_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     HitIndicator_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitIndicatorVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayCrosshair");

	Params::AHUD_CommonNWX_C_DisplayCrosshair_Params Parms{};

	Parms.Crosshair_Type = Crosshair_Type;
	Parms.CrosshairVisibility = CrosshairVisibility;
	Parms.Crosshair_Color = Crosshair_Color;
	Parms.HitIndicator_Type = HitIndicator_Type;
	Parms.HitIndicatorVisibility = HitIndicatorVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IndicatorTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IndicatorColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               Hit_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayHitIndicator");

	Params::AHUD_CommonNWX_C_DisplayHitIndicator_Params Parms{};

	Parms.IndicatorTime = IndicatorTime;
	Parms.IndicatorColor = IndicatorColor;
	Parms.Hit_Type = Hit_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRecoil                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayRecoil(bool IsRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayRecoil");

	Params::AHUD_CommonNWX_C_DisplayRecoil_Params Parms{};

	Parms.IsRecoil = IsRecoil;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BigLootNotificationInfo  Big_Loot_Notify_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayBigLootNotification");

	Params::AHUD_CommonNWX_C_DisplayBigLootNotification_Params Parms{};

	Parms.Big_Loot_Notify_Info = Big_Loot_Notify_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.RemoveBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::RemoveBigLootNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "RemoveBigLootNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Message_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_Message_SendToServer(const class FString& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_Message_SendToServer");

	Params::AHUD_CommonNWX_C_Chat_Message_SendToServer_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Message_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatMessage              ChatMessageS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_Message_ReceiveFromServer(const struct FS_ChatMessage& ChatMessageS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_Message_ReceiveFromServer");

	Params::AHUD_CommonNWX_C_Chat_Message_ReceiveFromServer_Params Parms{};

	Parms.ChatMessageS = ChatMessageS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_LeaveChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_LeaveChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_LeaveChannel");

	Params::AHUD_CommonNWX_C_Chat_LeaveChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_JoinChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_JoinChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_JoinChannel");

	Params::AHUD_CommonNWX_C_Chat_JoinChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_PM_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_PM_SendToServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_PM_SendToServer");

	Params::AHUD_CommonNWX_C_Chat_PM_SendToServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_PM_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_PM_ReceiveFromServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_PM_ReceiveFromServer");

	Params::AHUD_CommonNWX_C_Chat_PM_ReceiveFromServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Away                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_SetStatus(bool Away)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_SetStatus");

	Params::AHUD_CommonNWX_C_Chat_SetStatus_Params Parms{};

	Parms.Away = Away;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_ServerCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_ServerCommand(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_ServerCommand");

	Params::AHUD_CommonNWX_C_Chat_ServerCommand_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Yell_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_Yell_SendToServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_Yell_SendToServer");

	Params::AHUD_CommonNWX_C_Chat_Yell_SendToServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Yell_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Chat_Yell_ReceiveFromServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Chat_Yell_ReceiveFromServer");

	Params::AHUD_CommonNWX_C_Chat_Yell_ReceiveFromServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Crosshair_ShowReloadText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Crosshair_ShowReloadText(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Crosshair_ShowReloadText");

	Params::AHUD_CommonNWX_C_Crosshair_ShowReloadText_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Crosshair_UpdateReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Crosshair_UpdateReload(double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Crosshair_UpdateReload");

	Params::AHUD_CommonNWX_C_Crosshair_UpdateReload_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ShowSpyglass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ShowSpyglass(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ShowSpyglass");

	Params::AHUD_CommonNWX_C_ShowSpyglass_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_DisplayApexCreature_BossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_DisplayApexCreature_BossBar(bool Display_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_DisplayApexCreature_BossBar");

	Params::AHUD_CommonNWX_C_HUD_DisplayApexCreature_BossBar_Params Parms{};

	Parms.Display_ = Display_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_UpdateBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Whatever_                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_CommonNWX_C::HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_UpdateBossBar");

	Params::AHUD_CommonNWX_C_HUD_UpdateBossBar_Params Parms{};

	Parms.Bar_Label = Bar_Label;
	Parms.Whatever_ = Whatever_;
	Parms.Health = Health;
	Parms.Bar_Header = Bar_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_AddNewBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Progress_Bar_Tint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Progress_Bar_Direction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Bar_Sub_Header                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_CommonNWX_C::HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_AddNewBossBar");

	Params::AHUD_CommonNWX_C_HUD_AddNewBossBar_Params Parms{};

	Parms.Progress_Bar_Tint = Progress_Bar_Tint;
	Parms.Progress_Bar_Direction = Progress_Bar_Direction;
	Parms.Bar_Label = Bar_Label;
	Parms.Bar_Header = Bar_Header;
	Parms.Bar_Sub_Header = Bar_Sub_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_RemoveBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_RemoveBossBar(const class FString& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_RemoveBossBar");

	Params::AHUD_CommonNWX_C_HUD_RemoveBossBar_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_ChangeHudMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UI_HUD_Modes          HUD_Mode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_ChangeHudMode");

	Params::AHUD_CommonNWX_C_HUD_ChangeHudMode_Params Parms{};

	Parms.HUD_Mode = HUD_Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_SetRealmStartTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RealmStartTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_SetRealmStartTime(double RealmStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_SetRealmStartTime");

	Params::AHUD_CommonNWX_C_HUD_SetRealmStartTime_Params Parms{};

	Parms.RealmStartTime = RealmStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.Crosshair_UpdateWeaponSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::Crosshair_UpdateWeaponSpread(double Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "Crosshair_UpdateWeaponSpread");

	Params::AHUD_CommonNWX_C_Crosshair_UpdateWeaponSpread_Params Parms{};

	Parms.Spread = Spread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ShowContextualControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   ContextualControlsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ShowContextualControls");

	Params::AHUD_CommonNWX_C_ShowContextualControls_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.ContextualControlsData = ContextualControlsData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_StatusEffect_TextNotificationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ManuallyRemove_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_StatusEffect_TextNotificationUpdate");

	Params::AHUD_CommonNWX_C_HUD_StatusEffect_TextNotificationUpdate_Params Parms{};

	Parms.ManuallyRemove_ = ManuallyRemove_;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_StatusEffect_TextNotification_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::HUD_StatusEffect_TextNotification_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_StatusEffect_TextNotification_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.UI_Spyglass_AdjustZoomLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::UI_Spyglass_AdjustZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "UI_Spyglass_AdjustZoomLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.UI_VFX_CraftingSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "UI_VFX_CraftingSuccess");

	Params::AHUD_CommonNWX_C_UI_VFX_CraftingSuccess_Params Parms{};

	Parms.Location = Location;
	Parms.Quality = Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.UI_VFX_CC_ChangeCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::UI_VFX_CC_ChangeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "UI_VFX_CC_ChangeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.FadeToBlack_andBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToStayBlack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::FadeToBlack_andBack(double TimeToStayBlack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "FadeToBlack_andBack");

	Params::AHUD_CommonNWX_C_FadeToBlack_andBack_Params Parms{};

	Parms.TimeToStayBlack = TimeToStayBlack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.FadeToBlack_Manual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Black_true__From_Black__False                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::FadeToBlack_Manual(bool To_Black_true__From_Black__False)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "FadeToBlack_Manual");

	Params::AHUD_CommonNWX_C_FadeToBlack_Manual_Params Parms{};

	Parms.To_Black_true__From_Black__False = To_Black_true__From_Black__False;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_Invalid_Intersecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback_CollisionFeedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHUD_CommonNWX_C::BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "BuildUX_Feedback_Invalid_Intersecting");

	Params::AHUD_CommonNWX_C_BuildUX_Feedback_Invalid_Intersecting_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_Invalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHUD_CommonNWX_C::BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "BuildUX_Feedback_Invalid");

	Params::AHUD_CommonNWX_C_BuildUX_Feedback_Invalid_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_RotationControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRotate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentRotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "BuildUX_Feedback_RotationControls");

	Params::AHUD_CommonNWX_C_BuildUX_Feedback_RotationControls_Params Parms{};

	Parms.CanRotate = CanRotate;
	Parms.CurrentRotation = CurrentRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_HeightControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAdjustHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Current                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Max                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Min                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "BuildUX_Feedback_HeightControls");

	Params::AHUD_CommonNWX_C_BuildUX_Feedback_HeightControls_Params Parms{};

	Parms.CanAdjustHeight = CanAdjustHeight;
	Parms.Height_Current = Height_Current;
	Parms.Height_Max = Height_Max;
	Parms.Height_Min = Height_Min;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_FocusChatInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::HUD_FocusChatInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_FocusChatInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_InputChatCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::HUD_InputChatCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_InputChatCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.RemoveQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::RemoveQuestNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "RemoveQuestNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     Quest_Notificator_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               DisplayToolTip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ToolTipIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ToolTipOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayQuestNotification");

	Params::AHUD_CommonNWX_C_DisplayQuestNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Quest_Notificator_Info = Quest_Notificator_Info;
	Parms.DisplayToolTip = DisplayToolTip;
	Parms.ToolTipIcon = ToolTipIcon;
	Parms.ToolTipText = ToolTipText;
	Parms.ToolTipOnly = ToolTipOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.RemoveToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::RemoveToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "RemoveToolTip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_CommonNWX_C::DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayToolTip");

	Params::AHUD_CommonNWX_C_DisplayToolTip_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HeadlineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_CommonNWX_C::DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayGlobalNotification");

	Params::AHUD_CommonNWX_C_DisplayGlobalNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.TypeText = TypeText;
	Parms.HeadlineText = HeadlineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::RemoveGlobalNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "RemoveGlobalNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayEncounterUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      EncounterMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_CommonNWX_C::DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayEncounterUpdate");

	Params::AHUD_CommonNWX_C_DisplayEncounterUpdate_Params Parms{};

	Parms.EncounterData = EncounterData;
	Parms.EncounterMessage = EncounterMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_Encounter_MiniMessage_Pinned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      MessageContent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Pin_or_Unpin__Pin_true_will_add_                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_Encounter_MiniMessage_Pinned");

	Params::AHUD_CommonNWX_C_HUD_Encounter_MiniMessage_Pinned_Params Parms{};

	Parms.MessageContent = MessageContent;
	Parms.Pin_or_Unpin__Pin_true_will_add_ = Pin_or_Unpin__Pin_true_will_add_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_Encounter_MiniMessage_Timed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      Message_Content                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_Encounter_MiniMessage_Timed");

	Params::AHUD_CommonNWX_C_HUD_Encounter_MiniMessage_Timed_Params Parms{};

	Parms.Message_Content = Message_Content;
	Parms.TimeToDisplay = TimeToDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_GeneralNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Remove_Manually                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_GeneralNotification");

	Params::AHUD_CommonNWX_C_HUD_GeneralNotification_Params Parms{};

	Parms.Content = Content;
	Parms.Remove_Manually = Remove_Manually;
	Parms.Time_to_Display = Time_to_Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayErrorNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MainText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_CommonNWX_C::DisplayErrorNotification(class FText MainText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplayErrorNotification");

	Params::AHUD_CommonNWX_C_DisplayErrorNotification_Params Parms{};

	Parms.MainText = MainText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ClearNotificationCardQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::ClearNotificationCardQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ClearNotificationCardQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.UpdateNextNotificationCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::UpdateNextNotificationCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "UpdateNextNotificationCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_UpdateInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       InteractionContext                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHUD_CommonNWX_C::HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_UpdateInteractText");

	Params::AHUD_CommonNWX_C_HUD_UpdateInteractText_Params Parms{};

	Parms.InteractionContext = InteractionContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_UpdateActionProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_UpdateActionProgressBar");

	Params::AHUD_CommonNWX_C_HUD_UpdateActionProgressBar_Params Parms{};

	Parms.Visible = Visible;
	Parms.CurrentProgress = CurrentProgress;
	Parms.Label = Label;
	Parms.ShowImage = ShowImage;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_Damage_CreateIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEffectContextData    DamageContextData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Intensity__Amount_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "HUD_Damage_CreateIndicator");

	Params::AHUD_CommonNWX_C_HUD_Damage_CreateIndicator_Params Parms{};

	Parms.DamageContextData = DamageContextData;
	Parms.Time_to_Display = Time_to_Display;
	Parms.Damage_Intensity__Amount_ = Damage_Intensity__Amount_;
	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.OnClientReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::OnClientReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "OnClientReady");

	Params::AHUD_CommonNWX_C_OnClientReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::CrosshairVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "CrosshairVisibility");

	Params::AHUD_CommonNWX_C_CrosshairVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::DisplaySingleRecoil()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "DisplaySingleRecoil");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.OnPlayerPawnPossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::OnPlayerPawnPossessed(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "OnPlayerPawnPossessed");

	Params::AHUD_CommonNWX_C_OnPlayerPawnPossessed_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.OnPlayerPawnUnPossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::OnPlayerPawnUnPossessed(class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "OnPlayerPawnUnPossessed");

	Params::AHUD_CommonNWX_C_OnPlayerPawnUnPossessed_Params Parms{};

	Parms.OldPawn = OldPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.OnPlayerSpectatorPawnPossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASpectatorPawn*              NewSpectatorPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::OnPlayerSpectatorPawnPossessed(class ASpectatorPawn* NewSpectatorPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "OnPlayerSpectatorPawnPossessed");

	Params::AHUD_CommonNWX_C_OnPlayerSpectatorPawnPossessed_Params Parms{};

	Parms.NewSpectatorPawn = NewSpectatorPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.OnPlayerSpectatorPawnUnPossessed
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHUD_CommonNWX_C::OnPlayerSpectatorPawnUnPossessed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "OnPlayerSpectatorPawnUnPossessed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ReceiveEndPlay");

	Params::AHUD_CommonNWX_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_CommonNWX.HUD_CommonNWX_C.ExecuteUbergraph_HUD_CommonNWX
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_HUD_Modes          K2Node_Event_HUD_Mode                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_RealmStartTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Spread                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsVisible                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   K2Node_Event_ContextualControlsData                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ManuallyRemove_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TimeToDisplay_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content_1                                           (HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            K2Node_Event_Quality                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TimeToStayBlack                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_To_Black_true__From_Black__False                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback_CollisionK2Node_Event_Feedback_1                                          (ContainsInstancedReference)
// struct FStructurePlacementFeedback K2Node_Event_Feedback                                            (ContainsInstancedReference)
// bool                               K2Node_Event_CanRotate                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentRotation                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CanAdjustHeight                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Current                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Max                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Min                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     K2Node_Event_Quest_Notificator_Info                              (HasGetValueTypeHash)
// bool                               K2Node_Event_DisplayToolTip                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ToolTipIcon                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ToolTipText                                         (None)
// bool                               K2Node_Event_ToolTipOnly                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row1                                                (HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row2                                                (HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_TypeText                                            (None)
// class FText                        K2Node_Event_HeadlineText                                        (None)
// TScriptInterface<class IEncounterUIDataInterface>K2Node_Event_EncounterData                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_EncounterMessage                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_MessageContent                                      (None)
// bool                               K2Node_Event_Pin_or_Unpin__Pin_true_will_add_                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_Message_Content                                     (None)
// double                             K2Node_Event_TimeToDisplay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content                                             (HasGetValueTypeHash)
// bool                               K2Node_Event_Remove_Manually                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time_to_Display_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MainText                                            (None)
// class FText                        K2Node_Event_BodyText                                            (None)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreNotificationsEnabled_Enabled                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreNotificationsEnabled_Enabled_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreNotificationsEnabled_Enabled_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreNotificationsEnabled_Enabled_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreNotificationsEnabled_Enabled_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreNotificationsEnabled_Enabled_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreNotificationsEnabled_Enabled_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Label_1                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Progress_Bar_Tint                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_Event_Progress_Bar_Direction                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Bar_Label                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header                                          (None)
// class FText                        K2Node_Event_Bar_Sub_Header                                      (None)
// class FString                      K2Node_Event_Bar_Label_1                                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_            (None)
// double                             K2Node_Event_Health                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header_1                                        (None)
// bool                               K2Node_Event_Display_                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show_                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_2                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Away                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_3                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_4                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ChatMessage              K2Node_Event_ChatMessageS                                        (HasGetValueTypeHash)
// class FString                      K2Node_Event_ChatMessage                                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_BigLootNotificationInfo  K2Node_Event_Big_Loot_Notify_Info                                (HasGetValueTypeHash)
// bool                               K2Node_Event_IsRecoil                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IndicatorTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_IndicatorColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               K2Node_Event_Hit_Type                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CrosshairTypes        K2Node_Event_Crosshair_Type                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CrosshairVisibility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Crosshair_Color                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     K2Node_Event_HitIndicator_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_HitIndicatorVisibility                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row1_1                                              (HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row2_1                                              (HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_BackgroundColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayFX                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_MarkerPrecision                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ParticlesVisible                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ParticlesColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_PlayerCharacter                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            K2Node_Event_PlayerCamera                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IconDistance                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Row                                                 (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShowingHUD                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionUIContext       K2Node_Event_InteractionContext                                  (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentProgress                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Label                                               (None)
// bool                               K2Node_Event_ShowImage                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_Image                                               (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_GetActiveWindowInLayer_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Screen_C*           K2Node_DynamicCast_AsWBP_HUD_Screen                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEffectContextData    K2Node_Event_DamageContextData                                   (None)
// double                             K2Node_Event_Time_to_Display                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Damage_Intensity__Amount_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             CallFunc_GetCoreGameState_GameState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Success                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetHUDScreen_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Screen_C*           K2Node_DynamicCast_AsWBP_HUD_Screen_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetHUDScreen_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Screen_C*           K2Node_DynamicCast_AsWBP_HUD_Screen_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_OldPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASpectatorPawn*              K2Node_Event_NewSpectatorPawn                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_CommonNWX_C::ExecuteUbergraph_HUD_CommonNWX(int32 EntryPoint, enum class E_UI_HUD_Modes K2Node_Event_HUD_Mode, double K2Node_Event_RealmStartTime, double K2Node_Event_Spread, bool K2Node_Event_IsVisible, const struct FS_ContextualControlsData& K2Node_Event_ContextualControlsData, bool K2Node_Event_ManuallyRemove_, double K2Node_Event_TimeToDisplay_1, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content_1, const struct FVector& K2Node_Event_Location, enum class EItemQuality K2Node_Event_Quality, double K2Node_Event_TimeToStayBlack, bool K2Node_Event_To_Black_true__From_Black__False, const struct FStructurePlacementFeedback_Collision& K2Node_Event_Feedback_1, const struct FStructurePlacementFeedback& K2Node_Event_Feedback, bool K2Node_Event_CanRotate, double K2Node_Event_CurrentRotation, bool K2Node_Event_CanAdjustHeight, double K2Node_Event_Height_Current, double K2Node_Event_Height_Max, double K2Node_Event_Height_Min, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_Event_DisplayTime_2, const struct FS_QuestNotificatorInfo& K2Node_Event_Quest_Notificator_Info, bool K2Node_Event_DisplayToolTip, class UObject* K2Node_Event_ToolTipIcon, class FText K2Node_Event_ToolTipText, bool K2Node_Event_ToolTipOnly, double K2Node_Event_DisplayTime_1, const struct FS_IngameTutorial& K2Node_Event_Row1, const struct FS_IngameTutorial& K2Node_Event_Row2, double K2Node_Event_DisplayTime, class FText K2Node_Event_TypeText, class FText K2Node_Event_HeadlineText, TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData, const struct FNotificationEncounter& K2Node_Event_EncounterMessage, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FNotificationEncounter& K2Node_Event_MessageContent, bool K2Node_Event_Pin_or_Unpin__Pin_true_will_add_, bool CallFunc_IsValid_ReturnValue_4, const struct FNotificationEncounter& K2Node_Event_Message_Content, double K2Node_Event_TimeToDisplay, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content, bool K2Node_Event_Remove_Manually, double K2Node_Event_Time_to_Display_1, bool CallFunc_IsValid_ReturnValue_5, class FText K2Node_Event_MainText, class FText K2Node_Event_BodyText, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_AreNotificationsEnabled_Enabled, bool CallFunc_AreNotificationsEnabled_Enabled_1, bool CallFunc_AreNotificationsEnabled_Enabled_2, bool CallFunc_AreNotificationsEnabled_Enabled_3, bool CallFunc_AreNotificationsEnabled_Enabled_4, bool CallFunc_AreNotificationsEnabled_Enabled_5, bool CallFunc_AreNotificationsEnabled_Enabled_6, const class FString& K2Node_Event_Label_1, const struct FLinearColor& K2Node_Event_Progress_Bar_Tint, enum class EProgressBarFillType K2Node_Event_Progress_Bar_Direction, const class FString& K2Node_Event_Bar_Label, class FText K2Node_Event_Bar_Header, class FText K2Node_Event_Bar_Sub_Header, const class FString& K2Node_Event_Bar_Label_1, class FText K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_, double K2Node_Event_Health, class FText K2Node_Event_Bar_Header_1, bool K2Node_Event_Display_, bool K2Node_Event_Show_, double K2Node_Event_Time, bool K2Node_Event_Show, const class FString& K2Node_Event_message, const class FString& K2Node_Event_message_1, const class FString& K2Node_Event_message_2, bool K2Node_Event_Away, int32 K2Node_Event_PlayerID, const class FString& K2Node_Event_message_3, int32 K2Node_Event_PlayerID_1, const class FString& K2Node_Event_message_4, int32 K2Node_Event_ChannelID, int32 K2Node_Event_ChannelID_1, const struct FS_ChatMessage& K2Node_Event_ChatMessageS, const class FString& K2Node_Event_ChatMessage, const struct FS_BigLootNotificationInfo& K2Node_Event_Big_Loot_Notify_Info, bool K2Node_Event_IsRecoil, double K2Node_Event_IndicatorTime, const struct FLinearColor& K2Node_Event_IndicatorColor, enum class E_HitType K2Node_Event_Hit_Type, enum class E_CrosshairTypes K2Node_Event_Crosshair_Type, bool K2Node_Event_CrosshairVisibility, const struct FLinearColor& K2Node_Event_Crosshair_Color, enum class E_HitIndicatorTypes K2Node_Event_HitIndicator_Type, bool K2Node_Event_HitIndicatorVisibility, double K2Node_Event_DisplayTime_3, const struct FS_IngameTutorial& K2Node_Event_Row1_1, const struct FS_IngameTutorial& K2Node_Event_Row2_1, const struct FLinearColor& K2Node_Event_BackgroundColor, bool K2Node_Event_bVisible_1, bool K2Node_Event_PlayFX, class AActor* K2Node_Event_ActorToMark, double K2Node_Event_MarkerPrecision, bool K2Node_Event_ParticlesVisible, const struct FLinearColor& K2Node_Event_ParticlesColor, class AActor* K2Node_Event_ActorToMark_1, class AActor* K2Node_Event_ActorToMark_2, class ACharacter* K2Node_Event_PlayerCharacter, class UCameraComponent* K2Node_Event_PlayerCamera, const struct FLinearColor& K2Node_Event_Colour_1, double K2Node_Event_IconDistance, const struct FDataTableRowHandle& K2Node_Event_Row, bool K2Node_Event_ShowingHUD, const struct FInteractionUIContext& K2Node_Event_InteractionContext, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool K2Node_Event_Visible, double K2Node_Event_CurrentProgress, class FText K2Node_Event_Label, bool K2Node_Event_ShowImage, TSoftObjectPtr<class UTexture2D> K2Node_Event_Image, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UNWXCommonWindowWidget* CallFunc_GetActiveWindowInLayer_ReturnValue, class UWBP_HUD_Screen_C* K2Node_DynamicCast_AsWBP_HUD_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, const struct FDamageEffectContextData& K2Node_Event_DamageContextData, double K2Node_Event_Time_to_Display, double K2Node_Event_Damage_Intensity__Amount_, const struct FLinearColor& K2Node_Event_Colour, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, class ABP_GameState_C* CallFunc_GetCoreGameState_GameState, bool CallFunc_IsValid_ReturnValue_18, bool K2Node_Event_Success, bool K2Node_Event_bVisible, class UCommonActivatableWidget* CallFunc_GetHUDScreen_ReturnValue, class UWBP_HUD_Screen_C* K2Node_DynamicCast_AsWBP_HUD_Screen_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_19, class UCommonActivatableWidget* CallFunc_GetHUDScreen_ReturnValue_1, class APawn* K2Node_Event_NewPawn, class UWBP_HUD_Screen_C* K2Node_DynamicCast_AsWBP_HUD_Screen_2, bool K2Node_DynamicCast_bSuccess_2, class APawn* K2Node_Event_OldPawn, class ASpectatorPawn* K2Node_Event_NewSpectatorPawn, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CommonNWX_C", "ExecuteUbergraph_HUD_CommonNWX");

	Params::AHUD_CommonNWX_C_ExecuteUbergraph_HUD_CommonNWX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_HUD_Mode = K2Node_Event_HUD_Mode;
	Parms.K2Node_Event_RealmStartTime = K2Node_Event_RealmStartTime;
	Parms.K2Node_Event_Spread = K2Node_Event_Spread;
	Parms.K2Node_Event_IsVisible = K2Node_Event_IsVisible;
	Parms.K2Node_Event_ContextualControlsData = K2Node_Event_ContextualControlsData;
	Parms.K2Node_Event_ManuallyRemove_ = K2Node_Event_ManuallyRemove_;
	Parms.K2Node_Event_TimeToDisplay_1 = K2Node_Event_TimeToDisplay_1;
	Parms.K2Node_Event_Content_1 = K2Node_Event_Content_1;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_Quality = K2Node_Event_Quality;
	Parms.K2Node_Event_TimeToStayBlack = K2Node_Event_TimeToStayBlack;
	Parms.K2Node_Event_To_Black_true__From_Black__False = K2Node_Event_To_Black_true__From_Black__False;
	Parms.K2Node_Event_Feedback_1 = K2Node_Event_Feedback_1;
	Parms.K2Node_Event_Feedback = K2Node_Event_Feedback;
	Parms.K2Node_Event_CanRotate = K2Node_Event_CanRotate;
	Parms.K2Node_Event_CurrentRotation = K2Node_Event_CurrentRotation;
	Parms.K2Node_Event_CanAdjustHeight = K2Node_Event_CanAdjustHeight;
	Parms.K2Node_Event_Height_Current = K2Node_Event_Height_Current;
	Parms.K2Node_Event_Height_Max = K2Node_Event_Height_Max;
	Parms.K2Node_Event_Height_Min = K2Node_Event_Height_Min;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_DisplayTime_2 = K2Node_Event_DisplayTime_2;
	Parms.K2Node_Event_Quest_Notificator_Info = K2Node_Event_Quest_Notificator_Info;
	Parms.K2Node_Event_DisplayToolTip = K2Node_Event_DisplayToolTip;
	Parms.K2Node_Event_ToolTipIcon = K2Node_Event_ToolTipIcon;
	Parms.K2Node_Event_ToolTipText = K2Node_Event_ToolTipText;
	Parms.K2Node_Event_ToolTipOnly = K2Node_Event_ToolTipOnly;
	Parms.K2Node_Event_DisplayTime_1 = K2Node_Event_DisplayTime_1;
	Parms.K2Node_Event_Row1 = K2Node_Event_Row1;
	Parms.K2Node_Event_Row2 = K2Node_Event_Row2;
	Parms.K2Node_Event_DisplayTime = K2Node_Event_DisplayTime;
	Parms.K2Node_Event_TypeText = K2Node_Event_TypeText;
	Parms.K2Node_Event_HeadlineText = K2Node_Event_HeadlineText;
	Parms.K2Node_Event_EncounterData = K2Node_Event_EncounterData;
	Parms.K2Node_Event_EncounterMessage = K2Node_Event_EncounterMessage;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_MessageContent = K2Node_Event_MessageContent;
	Parms.K2Node_Event_Pin_or_Unpin__Pin_true_will_add_ = K2Node_Event_Pin_or_Unpin__Pin_true_will_add_;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_Message_Content = K2Node_Event_Message_Content;
	Parms.K2Node_Event_TimeToDisplay = K2Node_Event_TimeToDisplay;
	Parms.K2Node_Event_Content = K2Node_Event_Content;
	Parms.K2Node_Event_Remove_Manually = K2Node_Event_Remove_Manually;
	Parms.K2Node_Event_Time_to_Display_1 = K2Node_Event_Time_to_Display_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_MainText = K2Node_Event_MainText;
	Parms.K2Node_Event_BodyText = K2Node_Event_BodyText;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_AreNotificationsEnabled_Enabled = CallFunc_AreNotificationsEnabled_Enabled;
	Parms.CallFunc_AreNotificationsEnabled_Enabled_1 = CallFunc_AreNotificationsEnabled_Enabled_1;
	Parms.CallFunc_AreNotificationsEnabled_Enabled_2 = CallFunc_AreNotificationsEnabled_Enabled_2;
	Parms.CallFunc_AreNotificationsEnabled_Enabled_3 = CallFunc_AreNotificationsEnabled_Enabled_3;
	Parms.CallFunc_AreNotificationsEnabled_Enabled_4 = CallFunc_AreNotificationsEnabled_Enabled_4;
	Parms.CallFunc_AreNotificationsEnabled_Enabled_5 = CallFunc_AreNotificationsEnabled_Enabled_5;
	Parms.CallFunc_AreNotificationsEnabled_Enabled_6 = CallFunc_AreNotificationsEnabled_Enabled_6;
	Parms.K2Node_Event_Label_1 = K2Node_Event_Label_1;
	Parms.K2Node_Event_Progress_Bar_Tint = K2Node_Event_Progress_Bar_Tint;
	Parms.K2Node_Event_Progress_Bar_Direction = K2Node_Event_Progress_Bar_Direction;
	Parms.K2Node_Event_Bar_Label = K2Node_Event_Bar_Label;
	Parms.K2Node_Event_Bar_Header = K2Node_Event_Bar_Header;
	Parms.K2Node_Event_Bar_Sub_Header = K2Node_Event_Bar_Sub_Header;
	Parms.K2Node_Event_Bar_Label_1 = K2Node_Event_Bar_Label_1;
	Parms.K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_ = K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_;
	Parms.K2Node_Event_Health = K2Node_Event_Health;
	Parms.K2Node_Event_Bar_Header_1 = K2Node_Event_Bar_Header_1;
	Parms.K2Node_Event_Display_ = K2Node_Event_Display_;
	Parms.K2Node_Event_Show_ = K2Node_Event_Show_;
	Parms.K2Node_Event_Time = K2Node_Event_Time;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_Event_message = K2Node_Event_message;
	Parms.K2Node_Event_message_1 = K2Node_Event_message_1;
	Parms.K2Node_Event_message_2 = K2Node_Event_message_2;
	Parms.K2Node_Event_Away = K2Node_Event_Away;
	Parms.K2Node_Event_PlayerID = K2Node_Event_PlayerID;
	Parms.K2Node_Event_message_3 = K2Node_Event_message_3;
	Parms.K2Node_Event_PlayerID_1 = K2Node_Event_PlayerID_1;
	Parms.K2Node_Event_message_4 = K2Node_Event_message_4;
	Parms.K2Node_Event_ChannelID = K2Node_Event_ChannelID;
	Parms.K2Node_Event_ChannelID_1 = K2Node_Event_ChannelID_1;
	Parms.K2Node_Event_ChatMessageS = K2Node_Event_ChatMessageS;
	Parms.K2Node_Event_ChatMessage = K2Node_Event_ChatMessage;
	Parms.K2Node_Event_Big_Loot_Notify_Info = K2Node_Event_Big_Loot_Notify_Info;
	Parms.K2Node_Event_IsRecoil = K2Node_Event_IsRecoil;
	Parms.K2Node_Event_IndicatorTime = K2Node_Event_IndicatorTime;
	Parms.K2Node_Event_IndicatorColor = K2Node_Event_IndicatorColor;
	Parms.K2Node_Event_Hit_Type = K2Node_Event_Hit_Type;
	Parms.K2Node_Event_Crosshair_Type = K2Node_Event_Crosshair_Type;
	Parms.K2Node_Event_CrosshairVisibility = K2Node_Event_CrosshairVisibility;
	Parms.K2Node_Event_Crosshair_Color = K2Node_Event_Crosshair_Color;
	Parms.K2Node_Event_HitIndicator_Type = K2Node_Event_HitIndicator_Type;
	Parms.K2Node_Event_HitIndicatorVisibility = K2Node_Event_HitIndicatorVisibility;
	Parms.K2Node_Event_DisplayTime_3 = K2Node_Event_DisplayTime_3;
	Parms.K2Node_Event_Row1_1 = K2Node_Event_Row1_1;
	Parms.K2Node_Event_Row2_1 = K2Node_Event_Row2_1;
	Parms.K2Node_Event_BackgroundColor = K2Node_Event_BackgroundColor;
	Parms.K2Node_Event_bVisible_1 = K2Node_Event_bVisible_1;
	Parms.K2Node_Event_PlayFX = K2Node_Event_PlayFX;
	Parms.K2Node_Event_ActorToMark = K2Node_Event_ActorToMark;
	Parms.K2Node_Event_MarkerPrecision = K2Node_Event_MarkerPrecision;
	Parms.K2Node_Event_ParticlesVisible = K2Node_Event_ParticlesVisible;
	Parms.K2Node_Event_ParticlesColor = K2Node_Event_ParticlesColor;
	Parms.K2Node_Event_ActorToMark_1 = K2Node_Event_ActorToMark_1;
	Parms.K2Node_Event_ActorToMark_2 = K2Node_Event_ActorToMark_2;
	Parms.K2Node_Event_PlayerCharacter = K2Node_Event_PlayerCharacter;
	Parms.K2Node_Event_PlayerCamera = K2Node_Event_PlayerCamera;
	Parms.K2Node_Event_Colour_1 = K2Node_Event_Colour_1;
	Parms.K2Node_Event_IconDistance = K2Node_Event_IconDistance;
	Parms.K2Node_Event_Row = K2Node_Event_Row;
	Parms.K2Node_Event_ShowingHUD = K2Node_Event_ShowingHUD;
	Parms.K2Node_Event_InteractionContext = K2Node_Event_InteractionContext;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_Event_Visible = K2Node_Event_Visible;
	Parms.K2Node_Event_CurrentProgress = K2Node_Event_CurrentProgress;
	Parms.K2Node_Event_Label = K2Node_Event_Label;
	Parms.K2Node_Event_ShowImage = K2Node_Event_ShowImage;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetActiveWindowInLayer_ReturnValue = CallFunc_GetActiveWindowInLayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_HUD_Screen = K2Node_DynamicCast_AsWBP_HUD_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_Event_DamageContextData = K2Node_Event_DamageContextData;
	Parms.K2Node_Event_Time_to_Display = K2Node_Event_Time_to_Display;
	Parms.K2Node_Event_Damage_Intensity__Amount_ = K2Node_Event_Damage_Intensity__Amount_;
	Parms.K2Node_Event_Colour = K2Node_Event_Colour;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_GetCoreGameState_GameState = CallFunc_GetCoreGameState_GameState;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.K2Node_Event_Success = K2Node_Event_Success;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.CallFunc_GetHUDScreen_ReturnValue = CallFunc_GetHUDScreen_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_HUD_Screen_1 = K2Node_DynamicCast_AsWBP_HUD_Screen_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_GetHUDScreen_ReturnValue_1 = CallFunc_GetHUDScreen_ReturnValue_1;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;
	Parms.K2Node_DynamicCast_AsWBP_HUD_Screen_2 = K2Node_DynamicCast_AsWBP_HUD_Screen_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_OldPawn = K2Node_Event_OldPawn;
	Parms.K2Node_Event_NewSpectatorPawn = K2Node_Event_NewSpectatorPawn;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_1 = CallFunc_GetLocalPlayerState_PlayerState_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


