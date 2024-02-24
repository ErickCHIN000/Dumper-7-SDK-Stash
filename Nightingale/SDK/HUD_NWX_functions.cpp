#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_NWX.HUD_NWX_C
// (Actor)

class UClass* AHUD_NWX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_NWX_C");

	return Clss;
}


// HUD_NWX_C HUD_NWX.Default__HUD_NWX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUD_NWX_C* AHUD_NWX_C::GetDefaultObj()
{
	static class AHUD_NWX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUD_NWX_C*>(AHUD_NWX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_NWX.HUD_NWX_C.IsEntityPinned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPinned                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::IsEntityPinned(class FName ID, bool* IsPinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "IsEntityPinned");

	Params::AHUD_NWX_C_IsEntityPinned_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPinned != nullptr)
		*IsPinned = Parms.IsPinned;

}


// Function HUD_NWX.HUD_NWX_C.IsCardNotificationQueueEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::IsCardNotificationQueueEmpty(bool* bIsEmpty, bool CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "IsCardNotificationQueueEmpty");

	Params::AHUD_NWX_C_IsCardNotificationQueueEmpty_Params Parms{};

	Parms.CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty = CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;

}


// Function HUD_NWX.HUD_NWX_C.IsChatComponentFocused
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AHUD_NWX_C::IsChatComponentFocused(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "IsChatComponentFocused");

	Params::AHUD_NWX_C_IsChatComponentFocused_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HUD_NWX.HUD_NWX_C.SetChatVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::SetChatVisible(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "SetChatVisible");

	Params::AHUD_NWX_C_SetChatVisible_Params Parms{};

	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.SetHUDVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::SetHUDVisible(bool Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "SetHUDVisible");

	Params::AHUD_NWX_C_SetHUDVisible_Params Parms{};

	Parms.Visible = Visible;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.RefreshFeedbackIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Indicator_IncorrectActionFeedback_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::RefreshFeedbackIndicator(const struct FStructurePlacementFeedback& Feedback, bool CallFunc_Not_PreBool_ReturnValue, class UWBP_HUD_Indicator_IncorrectActionFeedback_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "RefreshFeedbackIndicator");

	Params::AHUD_NWX_C_RefreshFeedbackIndicator_Params Parms{};

	Parms.Feedback = Feedback;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.OnSkillUnlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillDataReference         UnlockedSkill                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FSkillPresentationData      LCurrentUnlockedSkill                                            (Edit, BlueprintVisible)
// struct FSkillPresentationData      CallFunc_GetSkillPresentationData_ReturnValue                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     K2Node_MakeStruct_S_QuestNotificatorInfo                         (HasGetValueTypeHash)
// struct FSkillReferenceContainer    CallFunc_GetSkillUnlockables_OutSkillUnlockables                 (None)
// bool                               CallFunc_GetSkillUnlockables_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillDataReference         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FSkillPresentationData      CallFunc_GetSkillPresentationData_ReturnValue_1                  (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     K2Node_MakeStruct_S_QuestNotificatorInfo_1                       (HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::OnSkillUnlocked(struct FSkillDataReference& UnlockedSkill, const struct FSkillPresentationData& LCurrentUnlockedSkill, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo, const struct FSkillReferenceContainer& CallFunc_GetSkillUnlockables_OutSkillUnlockables, bool CallFunc_GetSkillUnlockables_ReturnValue, const struct FSkillDataReference& CallFunc_Array_Get_Item, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo_1, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "OnSkillUnlocked");

	Params::AHUD_NWX_C_OnSkillUnlocked_Params Parms{};

	Parms.UnlockedSkill = UnlockedSkill;
	Parms.LCurrentUnlockedSkill = LCurrentUnlockedSkill;
	Parms.CallFunc_GetSkillPresentationData_ReturnValue = CallFunc_GetSkillPresentationData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_MakeStruct_S_QuestNotificatorInfo = K2Node_MakeStruct_S_QuestNotificatorInfo;
	Parms.CallFunc_GetSkillUnlockables_OutSkillUnlockables = CallFunc_GetSkillUnlockables_OutSkillUnlockables;
	Parms.CallFunc_GetSkillUnlockables_ReturnValue = CallFunc_GetSkillUnlockables_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSkillPresentationData_ReturnValue_1 = CallFunc_GetSkillPresentationData_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_QuestNotificatorInfo_1 = K2Node_MakeStruct_S_QuestNotificatorInfo_1;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.BUILDMODEPrototype_SetupBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_BuildModeFeedback_C>K2Node_DynamicCast_AsBPI_Build_Mode_Feedback                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackComponent_C*CallFunc_GetBuildModeFeedbackComponent_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::BUILDMODEPrototype_SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "BUILDMODEPrototype_SetupBindings");

	Params::AHUD_NWX_C_BUILDMODEPrototype_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Build_Mode_Feedback = K2Node_DynamicCast_AsBPI_Build_Mode_Feedback;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBuildModeFeedbackComponent_Component = CallFunc_GetBuildModeFeedbackComponent_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.SetupBinding_EnableNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::SetupBinding_EnableNotifications(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "SetupBinding_EnableNotifications");

	Params::AHUD_NWX_C_SetupBinding_EnableNotifications_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.SetBuildModeVisibilty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_UI_BoolSet_Visibility_Visible_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::SetBuildModeVisibilty(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility CallFunc_UI_BoolSet_Visibility_Visible_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "SetBuildModeVisibilty");

	Params::AHUD_NWX_C_SetBuildModeVisibilty_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_UI_BoolSet_Visibility_Visible_Result = CallFunc_UI_BoolSet_Visibility_Visible_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.BuildModeSwitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BuildModeFeedbackData_C* Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildModeContext       Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::BuildModeSwitch(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "BuildModeSwitch");

	Params::AHUD_NWX_C_BuildModeSwitch_Params Parms{};

	Parms.Data = Data;
	Parms.Mode = Mode;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.ToggleHUDNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::ToggleHUDNotifications(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ToggleHUDNotifications");

	Params::AHUD_NWX_C_ToggleHUDNotifications_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HideHUD(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HideHUD");

	Params::AHUD_NWX_C_HideHUD_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Init_NWXPostProcessActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::Init_NWXPostProcessActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Init_NWXPostProcessActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.DrawColouredBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenY_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenX_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenX_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenY_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_LineThickness_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenX_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenY_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenY_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenX_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_LineThickness_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenX_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenX_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenY_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenY_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_LineThickness_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenX_ImplicitCast_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenX_ImplicitCast_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_StartScreenY_ImplicitCast_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_EndScreenY_ImplicitCast_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawLine_LineThickness_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DrawColouredBox(const struct FVector2D& Min, const struct FVector2D& Max, const struct FLinearColor& Colour, double Thickness, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, double CallFunc_BreakVector2D_X_7, double CallFunc_BreakVector2D_Y_7, float CallFunc_DrawLine_StartScreenY_ImplicitCast, float CallFunc_DrawLine_EndScreenX_ImplicitCast, float CallFunc_DrawLine_StartScreenX_ImplicitCast, float CallFunc_DrawLine_EndScreenY_ImplicitCast, float CallFunc_DrawLine_LineThickness_ImplicitCast, float CallFunc_DrawLine_StartScreenX_ImplicitCast_1, float CallFunc_DrawLine_EndScreenY_ImplicitCast_1, float CallFunc_DrawLine_StartScreenY_ImplicitCast_1, float CallFunc_DrawLine_EndScreenX_ImplicitCast_1, float CallFunc_DrawLine_LineThickness_ImplicitCast_1, float CallFunc_DrawLine_StartScreenX_ImplicitCast_2, float CallFunc_DrawLine_EndScreenX_ImplicitCast_2, float CallFunc_DrawLine_EndScreenY_ImplicitCast_2, float CallFunc_DrawLine_StartScreenY_ImplicitCast_2, float CallFunc_DrawLine_LineThickness_ImplicitCast_2, float CallFunc_DrawLine_EndScreenX_ImplicitCast_3, float CallFunc_DrawLine_StartScreenX_ImplicitCast_3, float CallFunc_DrawLine_StartScreenY_ImplicitCast_3, float CallFunc_DrawLine_EndScreenY_ImplicitCast_3, float CallFunc_DrawLine_LineThickness_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DrawColouredBox");

	Params::AHUD_NWX_C_DrawColouredBox_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.Colour = Colour;
	Parms.Thickness = Thickness;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.CallFunc_BreakVector2D_X_7 = CallFunc_BreakVector2D_X_7;
	Parms.CallFunc_BreakVector2D_Y_7 = CallFunc_BreakVector2D_Y_7;
	Parms.CallFunc_DrawLine_StartScreenY_ImplicitCast = CallFunc_DrawLine_StartScreenY_ImplicitCast;
	Parms.CallFunc_DrawLine_EndScreenX_ImplicitCast = CallFunc_DrawLine_EndScreenX_ImplicitCast;
	Parms.CallFunc_DrawLine_StartScreenX_ImplicitCast = CallFunc_DrawLine_StartScreenX_ImplicitCast;
	Parms.CallFunc_DrawLine_EndScreenY_ImplicitCast = CallFunc_DrawLine_EndScreenY_ImplicitCast;
	Parms.CallFunc_DrawLine_LineThickness_ImplicitCast = CallFunc_DrawLine_LineThickness_ImplicitCast;
	Parms.CallFunc_DrawLine_StartScreenX_ImplicitCast_1 = CallFunc_DrawLine_StartScreenX_ImplicitCast_1;
	Parms.CallFunc_DrawLine_EndScreenY_ImplicitCast_1 = CallFunc_DrawLine_EndScreenY_ImplicitCast_1;
	Parms.CallFunc_DrawLine_StartScreenY_ImplicitCast_1 = CallFunc_DrawLine_StartScreenY_ImplicitCast_1;
	Parms.CallFunc_DrawLine_EndScreenX_ImplicitCast_1 = CallFunc_DrawLine_EndScreenX_ImplicitCast_1;
	Parms.CallFunc_DrawLine_LineThickness_ImplicitCast_1 = CallFunc_DrawLine_LineThickness_ImplicitCast_1;
	Parms.CallFunc_DrawLine_StartScreenX_ImplicitCast_2 = CallFunc_DrawLine_StartScreenX_ImplicitCast_2;
	Parms.CallFunc_DrawLine_EndScreenX_ImplicitCast_2 = CallFunc_DrawLine_EndScreenX_ImplicitCast_2;
	Parms.CallFunc_DrawLine_EndScreenY_ImplicitCast_2 = CallFunc_DrawLine_EndScreenY_ImplicitCast_2;
	Parms.CallFunc_DrawLine_StartScreenY_ImplicitCast_2 = CallFunc_DrawLine_StartScreenY_ImplicitCast_2;
	Parms.CallFunc_DrawLine_LineThickness_ImplicitCast_2 = CallFunc_DrawLine_LineThickness_ImplicitCast_2;
	Parms.CallFunc_DrawLine_EndScreenX_ImplicitCast_3 = CallFunc_DrawLine_EndScreenX_ImplicitCast_3;
	Parms.CallFunc_DrawLine_StartScreenX_ImplicitCast_3 = CallFunc_DrawLine_StartScreenX_ImplicitCast_3;
	Parms.CallFunc_DrawLine_StartScreenY_ImplicitCast_3 = CallFunc_DrawLine_StartScreenY_ImplicitCast_3;
	Parms.CallFunc_DrawLine_EndScreenY_ImplicitCast_3 = CallFunc_DrawLine_EndScreenY_ImplicitCast_3;
	Parms.CallFunc_DrawLine_LineThickness_ImplicitCast_3 = CallFunc_DrawLine_LineThickness_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.CreateHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_ChatLayer_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_NotificationLayer_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Screen_C*           CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::CreateHUD(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_ChatLayer_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UWBP_HUD_NotificationLayer_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UWBP_HUD_Screen_C* CallFunc_Create_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "CreateHUD");

	Params::AHUD_NWX_C_CreateHUD_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.IsAnyWindowOpen
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIsAnyWindowOpen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UIMenusComponent_C*      CallFunc_GetLocalPlayerMenusComponent_MenusComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWindowOpen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::IsAnyWindowOpen(bool* bIsAnyWindowOpen, class UBP_UIMenusComponent_C* CallFunc_GetLocalPlayerMenusComponent_MenusComponent, bool CallFunc_IsWindowOpen_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "IsAnyWindowOpen");

	Params::AHUD_NWX_C_IsAnyWindowOpen_Params Parms{};

	Parms.CallFunc_GetLocalPlayerMenusComponent_MenusComponent = CallFunc_GetLocalPlayerMenusComponent_MenusComponent;
	Parms.CallFunc_IsWindowOpen_ReturnValue = CallFunc_IsWindowOpen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsAnyWindowOpen != nullptr)
		*bIsAnyWindowOpen = Parms.bIsAnyWindowOpen;

}


// Function HUD_NWX.HUD_NWX_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                BackgroundColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayIngameTutorial");

	Params::AHUD_NWX_C_DisplayIngameTutorial_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;
	Parms.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.DisplayBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BigLootNotificationInfo  Big_Loot_Notify_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayBigLootNotification");

	Params::AHUD_NWX_C_DisplayBigLootNotification_Params Parms{};

	Parms.Big_Loot_Notify_Info = Big_Loot_Notify_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.RemoveBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::RemoveBigLootNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "RemoveBigLootNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.Chat_Message_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_Message_SendToServer(const class FString& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_Message_SendToServer");

	Params::AHUD_NWX_C_Chat_Message_SendToServer_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_Message_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatMessage              ChatMessageS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_Message_ReceiveFromServer(const struct FS_ChatMessage& ChatMessageS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_Message_ReceiveFromServer");

	Params::AHUD_NWX_C_Chat_Message_ReceiveFromServer_Params Parms{};

	Parms.ChatMessageS = ChatMessageS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_LeaveChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_LeaveChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_LeaveChannel");

	Params::AHUD_NWX_C_Chat_LeaveChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_JoinChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_JoinChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_JoinChannel");

	Params::AHUD_NWX_C_Chat_JoinChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_PM_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_PM_SendToServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_PM_SendToServer");

	Params::AHUD_NWX_C_Chat_PM_SendToServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_PM_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_PM_ReceiveFromServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_PM_ReceiveFromServer");

	Params::AHUD_NWX_C_Chat_PM_ReceiveFromServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Away                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_SetStatus(bool Away)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_SetStatus");

	Params::AHUD_NWX_C_Chat_SetStatus_Params Parms{};

	Parms.Away = Away;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_ServerCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_ServerCommand(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_ServerCommand");

	Params::AHUD_NWX_C_Chat_ServerCommand_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_Yell_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_Yell_SendToServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_Yell_SendToServer");

	Params::AHUD_NWX_C_Chat_Yell_SendToServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Chat_Yell_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_NWX_C::Chat_Yell_ReceiveFromServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Chat_Yell_ReceiveFromServer");

	Params::AHUD_NWX_C_Chat_Yell_ReceiveFromServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Crosshair_ShowReloadText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::Crosshair_ShowReloadText(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Crosshair_ShowReloadText");

	Params::AHUD_NWX_C_Crosshair_ShowReloadText_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Crosshair_UpdateReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::Crosshair_UpdateReload(double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Crosshair_UpdateReload");

	Params::AHUD_NWX_C_Crosshair_UpdateReload_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_UpdateInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       InteractionContext                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHUD_NWX_C::HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_UpdateInteractText");

	Params::AHUD_NWX_C_HUD_UpdateInteractText_Params Parms{};

	Parms.InteractionContext = InteractionContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_DisplayApexCreature_BossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_DisplayApexCreature_BossBar(bool Display_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_DisplayApexCreature_BossBar");

	Params::AHUD_NWX_C_HUD_DisplayApexCreature_BossBar_Params Parms{};

	Parms.Display_ = Display_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_UpdateBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Whatever_                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_NWX_C::HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_UpdateBossBar");

	Params::AHUD_NWX_C_HUD_UpdateBossBar_Params Parms{};

	Parms.Bar_Label = Bar_Label;
	Parms.Whatever_ = Whatever_;
	Parms.Health = Health;
	Parms.Bar_Header = Bar_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_AddNewBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Progress_Bar_Tint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Progress_Bar_Direction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Bar_Sub_Header                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_NWX_C::HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_AddNewBossBar");

	Params::AHUD_NWX_C_HUD_AddNewBossBar_Params Parms{};

	Parms.Progress_Bar_Tint = Progress_Bar_Tint;
	Parms.Progress_Bar_Direction = Progress_Bar_Direction;
	Parms.Bar_Label = Bar_Label;
	Parms.Bar_Header = Bar_Header;
	Parms.Bar_Sub_Header = Bar_Sub_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_RemoveBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_RemoveBossBar(const class FString& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_RemoveBossBar");

	Params::AHUD_NWX_C_HUD_RemoveBossBar_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_ChangeHudMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UI_HUD_Modes          HUD_Mode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_ChangeHudMode");

	Params::AHUD_NWX_C_HUD_ChangeHudMode_Params Parms{};

	Parms.HUD_Mode = HUD_Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_SetRealmStartTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RealmStartTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_SetRealmStartTime(double RealmStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_SetRealmStartTime");

	Params::AHUD_NWX_C_HUD_SetRealmStartTime_Params Parms{};

	Parms.RealmStartTime = RealmStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.Crosshair_UpdateWeaponSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::Crosshair_UpdateWeaponSpread(double Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "Crosshair_UpdateWeaponSpread");

	Params::AHUD_NWX_C_Crosshair_UpdateWeaponSpread_Params Parms{};

	Parms.Spread = Spread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_StatusEffect_TextNotificationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ManuallyRemove_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_StatusEffect_TextNotificationUpdate");

	Params::AHUD_NWX_C_HUD_StatusEffect_TextNotificationUpdate_Params Parms{};

	Parms.ManuallyRemove_ = ManuallyRemove_;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_StatusEffect_TextNotification_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::HUD_StatusEffect_TextNotification_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_StatusEffect_TextNotification_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.UI_VFX_CraftingSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "UI_VFX_CraftingSuccess");

	Params::AHUD_NWX_C_UI_VFX_CraftingSuccess_Params Parms{};

	Parms.Location = Location;
	Parms.Quality = Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.UI_VFX_CC_ChangeCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::UI_VFX_CC_ChangeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "UI_VFX_CC_ChangeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.FadeToBlack_andBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToStayBlack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::FadeToBlack_andBack(double TimeToStayBlack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "FadeToBlack_andBack");

	Params::AHUD_NWX_C_FadeToBlack_andBack_Params Parms{};

	Parms.TimeToStayBlack = TimeToStayBlack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.FadeToBlack_Manual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Black_true__From_Black__False                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::FadeToBlack_Manual(bool To_Black_true__From_Black__False)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "FadeToBlack_Manual");

	Params::AHUD_NWX_C_FadeToBlack_Manual_Params Parms{};

	Parms.To_Black_true__From_Black__False = To_Black_true__From_Black__False;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.BuildUX_Feedback_Invalid_Intersecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback_CollisionFeedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHUD_NWX_C::BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "BuildUX_Feedback_Invalid_Intersecting");

	Params::AHUD_NWX_C_BuildUX_Feedback_Invalid_Intersecting_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.BuildUX_Feedback_RotationControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRotate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentRotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "BuildUX_Feedback_RotationControls");

	Params::AHUD_NWX_C_BuildUX_Feedback_RotationControls_Params Parms{};

	Parms.CanRotate = CanRotate;
	Parms.CurrentRotation = CurrentRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.BuildUX_Feedback_HeightControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAdjustHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Current                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Max                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Min                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "BuildUX_Feedback_HeightControls");

	Params::AHUD_NWX_C_BuildUX_Feedback_HeightControls_Params Parms{};

	Parms.CanAdjustHeight = CanAdjustHeight;
	Parms.Height_Current = Height_Current;
	Parms.Height_Max = Height_Max;
	Parms.Height_Min = Height_Min;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.BuildUX_Feedback_Invalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHUD_NWX_C::BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "BuildUX_Feedback_Invalid");

	Params::AHUD_NWX_C_BuildUX_Feedback_Invalid_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.UpdateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             MarkerPrecision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ParticlesVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ParticlesColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "UpdateMarker");

	Params::AHUD_NWX_C_UpdateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.MarkerPrecision = MarkerPrecision;
	Parms.ParticlesVisible = ParticlesVisible;
	Parms.ParticlesColor = ParticlesColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_UpdateActionProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_UpdateActionProgressBar");

	Params::AHUD_NWX_C_HUD_UpdateActionProgressBar_Params Parms{};

	Parms.Visible = Visible;
	Parms.CurrentProgress = CurrentProgress;
	Parms.Label = Label;
	Parms.ShowImage = ShowImage;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.RemoveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::RemoveMarker(class AActor* ActorToMark)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "RemoveMarker");

	Params::AHUD_NWX_C_RemoveMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.CreateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            PlayerCamera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             IconDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "CreateMarker");

	Params::AHUD_NWX_C_CreateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.PlayerCamera = PlayerCamera;
	Parms.Colour = Colour;
	Parms.IconDistance = IconDistance;
	Parms.Row = Row;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.GameStateReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::GameStateReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "GameStateReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.TrackBuildingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureAssetRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "TrackBuildingEntity");

	Params::AHUD_NWX_C_TrackBuildingEntity_Params Parms{};

	Parms.StructureAssetRef = StructureAssetRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.TrackCraftingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    CraftingRecipeRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "TrackCraftingEntity");

	Params::AHUD_NWX_C_TrackCraftingEntity_Params Parms{};

	Parms.CraftingRecipeRef = CraftingRecipeRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRecoil                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayRecoil(bool IsRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayRecoil");

	Params::AHUD_NWX_C_DisplayRecoil_Params Parms{};

	Parms.IsRecoil = IsRecoil;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CrosshairTypes        Crosshair_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CrosshairVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Crosshair_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     HitIndicator_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitIndicatorVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayCrosshair");

	Params::AHUD_NWX_C_DisplayCrosshair_Params Parms{};

	Parms.Crosshair_Type = Crosshair_Type;
	Parms.CrosshairVisibility = CrosshairVisibility;
	Parms.Crosshair_Color = Crosshair_Color;
	Parms.HitIndicator_Type = HitIndicator_Type;
	Parms.HitIndicatorVisibility = HitIndicatorVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IndicatorTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IndicatorColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               Hit_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayHitIndicator");

	Params::AHUD_NWX_C_DisplayHitIndicator_Params Parms{};

	Parms.IndicatorTime = IndicatorTime;
	Parms.IndicatorColor = IndicatorColor;
	Parms.Hit_Type = Hit_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::CrosshairVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "CrosshairVisibility");

	Params::AHUD_NWX_C_CrosshairVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::DisplaySingleRecoil()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplaySingleRecoil");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.DisplayCompass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayFX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayCompass(bool bVisible, bool PlayFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayCompass");

	Params::AHUD_NWX_C_DisplayCompass_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.PlayFX = PlayFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_Damage_CreateIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEffectContextData    DamageContextData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Intensity__Amount_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_Damage_CreateIndicator");

	Params::AHUD_NWX_C_HUD_Damage_CreateIndicator_Params Parms{};

	Parms.DamageContextData = DamageContextData;
	Parms.Time_to_Display = Time_to_Display;
	Parms.Damage_Intensity__Amount_ = Damage_Intensity__Amount_;
	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.ToggleHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::ToggleHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ToggleHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.ShowContextualControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   ContextualControlsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ShowContextualControls");

	Params::AHUD_NWX_C_ShowContextualControls_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.ContextualControlsData = ContextualControlsData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.ShowSpyglass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::ShowSpyglass(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ShowSpyglass");

	Params::AHUD_NWX_C_ShowSpyglass_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.UI_Spyglass_AdjustZoomLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::UI_Spyglass_AdjustZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "UI_Spyglass_AdjustZoomLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.RemoveQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::RemoveQuestNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "RemoveQuestNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.DisplayQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     Quest_Notificator_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               DisplayToolTip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ToolTipIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ToolTipOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayQuestNotification");

	Params::AHUD_NWX_C_DisplayQuestNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Quest_Notificator_Info = Quest_Notificator_Info;
	Parms.DisplayToolTip = DisplayToolTip;
	Parms.ToolTipIcon = ToolTipIcon;
	Parms.ToolTipText = ToolTipText;
	Parms.ToolTipOnly = ToolTipOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.RemoveToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::RemoveToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "RemoveToolTip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.DisplayToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayToolTip");

	Params::AHUD_NWX_C_DisplayToolTip_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HeadlineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_NWX_C::DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayGlobalNotification");

	Params::AHUD_NWX_C_DisplayGlobalNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.TypeText = TypeText;
	Parms.HeadlineText = HeadlineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::RemoveGlobalNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "RemoveGlobalNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.DisplayEncounterUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      EncounterMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_NWX_C::DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayEncounterUpdate");

	Params::AHUD_NWX_C_DisplayEncounterUpdate_Params Parms{};

	Parms.EncounterData = EncounterData;
	Parms.EncounterMessage = EncounterMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_Encounter_MiniMessage_Pinned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      MessageContent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Pin_or_Unpin__Pin_true_will_add_                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_Encounter_MiniMessage_Pinned");

	Params::AHUD_NWX_C_HUD_Encounter_MiniMessage_Pinned_Params Parms{};

	Parms.MessageContent = MessageContent;
	Parms.Pin_or_Unpin__Pin_true_will_add_ = Pin_or_Unpin__Pin_true_will_add_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_Encounter_MiniMessage_Timed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      Message_Content                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_Encounter_MiniMessage_Timed");

	Params::AHUD_NWX_C_HUD_Encounter_MiniMessage_Timed_Params Parms{};

	Parms.Message_Content = Message_Content;
	Parms.TimeToDisplay = TimeToDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_GeneralNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Remove_Manually                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_GeneralNotification");

	Params::AHUD_NWX_C_HUD_GeneralNotification_Params Parms{};

	Parms.Content = Content;
	Parms.Remove_Manually = Remove_Manually;
	Parms.Time_to_Display = Time_to_Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.DisplayErrorNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MainText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AHUD_NWX_C::DisplayErrorNotification(class FText MainText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayErrorNotification");

	Params::AHUD_NWX_C_DisplayErrorNotification_Params Parms{};

	Parms.MainText = MainText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.DisplayHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowingHUD                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayHUD(bool ShowingHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayHUD");

	Params::AHUD_NWX_C_DisplayHUD_Params Parms{};

	Parms.ShowingHUD = ShowingHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.OnClientReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::OnClientReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "OnClientReady");

	Params::AHUD_NWX_C_OnClientReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.HUD_FocusChatInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::HUD_FocusChatInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_FocusChatInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.HUD_InputChatCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::HUD_InputChatCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "HUD_InputChatCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.DisplayHUD_Internal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowingHUD                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::DisplayHUD_Internal(bool bShowingHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "DisplayHUD_Internal");

	Params::AHUD_NWX_C_DisplayHUD_Internal_Params Parms{};

	Parms.bShowingHUD = bShowingHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.CallServerUpdatePlayerStateCharacterState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAddState                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDialogue                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::CallServerUpdatePlayerStateCharacterState(bool bAddState, bool bDialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "CallServerUpdatePlayerStateCharacterState");

	Params::AHUD_NWX_C_CallServerUpdatePlayerStateCharacterState_Params Parms{};

	Parms.bAddState = bAddState;
	Parms.bDialogue = bDialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ReceiveEndPlay");

	Params::AHUD_NWX_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.RefreshHUD
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::RefreshHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "RefreshHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.ClearNotificationCardQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::ClearNotificationCardQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ClearNotificationCardQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.UpdateNextNotificationCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_NWX_C::UpdateNextNotificationCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "UpdateNextNotificationCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_NWX.HUD_NWX_C.OnPlayerControllerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::OnPlayerControllerReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "OnPlayerControllerReady");

	Params::AHUD_NWX_C_OnPlayerControllerReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.ExecuteUbergraph_HUD_NWX
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionUIContext       K2Node_Event_InteractionContext                                  (ConstParm)
// bool                               K2Node_Event_Display_                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Bar_Label_1                                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_            (None)
// double                             K2Node_Event_Health                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header_1                                        (None)
// struct FLinearColor                K2Node_Event_Progress_Bar_Tint                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_Event_Progress_Bar_Direction                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Bar_Label                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header                                          (None)
// class FText                        K2Node_Event_Bar_Sub_Header                                      (None)
// class FString                      K2Node_Event_Label_1                                             (ZeroConstructor, HasGetValueTypeHash)
// enum class E_UI_HUD_Modes          K2Node_Event_HUD_Mode                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_RealmStartTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Spread                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ManuallyRemove_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TimeToDisplay_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content_1                                           (HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            K2Node_Event_Quality                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TimeToStayBlack                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_To_Black_true__From_Black__False                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback_CollisionK2Node_Event_Feedback_1                                          (ContainsInstancedReference)
// bool                               K2Node_Event_CanRotate                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentRotation                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CanAdjustHeight                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Current                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Max                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Min                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback K2Node_Event_Feedback                                            (ContainsInstancedReference)
// class AActor*                      K2Node_Event_ActorToMark_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_MarkerPrecision                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ParticlesVisible                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ParticlesColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentProgress                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Label                                               (None)
// bool                               K2Node_Event_ShowImage                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_Image                                               (HasGetValueTypeHash)
// class FString                      K2Node_Event_message                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_2                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Away                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_3                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_4                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_PlayerCharacter                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            K2Node_Event_PlayerCamera                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IconDistance                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Row                                                 (NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureAssetRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    K2Node_Event_CraftingRecipeRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsRecoil                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CrosshairTypes        K2Node_Event_Crosshair_Type                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CrosshairVisibility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Crosshair_Color                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     K2Node_Event_HitIndicator_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_HitIndicatorVisibility                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IndicatorTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_IndicatorColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               K2Node_Event_Hit_Type                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayFX                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ChatMessage              K2Node_Event_ChatMessageS                                        (HasGetValueTypeHash)
// class FString                      K2Node_Event_ChatMessage                                         (ZeroConstructor, HasGetValueTypeHash)
// struct FDamageEffectContextData    K2Node_Event_DamageContextData                                   (None)
// double                             K2Node_Event_Time_to_Display_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Damage_Intensity__Amount_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToPlayerScreen_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHideHUDAndChatInFlycam_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Ping_Spyglass_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BigLootNotificationInfo  K2Node_Event_Big_Loot_Notify_Info                                (HasGetValueTypeHash)
// bool                               K2Node_Event_IsVisible                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   K2Node_Event_ContextualControlsData                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row1_1                                              (HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row2_1                                              (HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_BackgroundColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show_                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_FlyCamOverlay_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSpectator_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_MessageContent                                      (None)
// bool                               K2Node_Event_Pin_or_Unpin__Pin_true_will_add_                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_Message_Content                                     (None)
// double                             K2Node_Event_TimeToDisplay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content                                             (HasGetValueTypeHash)
// bool                               K2Node_Event_Remove_Manually                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time_to_Display                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MainText                                            (None)
// class FText                        K2Node_Event_BodyText                                            (None)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShowingHUD                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicAwaiter*               CallFunc_GetHUDAwaiter_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Success                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHideHUDAndChatInFlycam_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditorSimulateMode_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyWindowOpen_bIsAnyWindowOpen                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowingHUD                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAddState                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDialogue                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStartMenu_IsStartMenu                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditorSimulateMode_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSpectator_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             CallFunc_GetCoreGameState_GameState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_2        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::ExecuteUbergraph_HUD_NWX(int32 EntryPoint, bool K2Node_Event_Show, double K2Node_Event_Time, const struct FInteractionUIContext& K2Node_Event_InteractionContext, bool K2Node_Event_Display_, const class FString& K2Node_Event_Bar_Label_1, class FText K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_, double K2Node_Event_Health, class FText K2Node_Event_Bar_Header_1, const struct FLinearColor& K2Node_Event_Progress_Bar_Tint, enum class EProgressBarFillType K2Node_Event_Progress_Bar_Direction, const class FString& K2Node_Event_Bar_Label, class FText K2Node_Event_Bar_Header, class FText K2Node_Event_Bar_Sub_Header, const class FString& K2Node_Event_Label_1, enum class E_UI_HUD_Modes K2Node_Event_HUD_Mode, double K2Node_Event_RealmStartTime, double K2Node_Event_Spread, bool K2Node_Event_ManuallyRemove_, double K2Node_Event_TimeToDisplay_1, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content_1, const struct FVector& K2Node_Event_Location, enum class EItemQuality K2Node_Event_Quality, double K2Node_Event_TimeToStayBlack, bool K2Node_Event_To_Black_true__From_Black__False, const struct FStructurePlacementFeedback_Collision& K2Node_Event_Feedback_1, bool K2Node_Event_CanRotate, double K2Node_Event_CurrentRotation, bool K2Node_Event_CanAdjustHeight, double K2Node_Event_Height_Current, double K2Node_Event_Height_Max, double K2Node_Event_Height_Min, const struct FStructurePlacementFeedback& K2Node_Event_Feedback, class AActor* K2Node_Event_ActorToMark_2, double K2Node_Event_MarkerPrecision, bool K2Node_Event_ParticlesVisible, const struct FLinearColor& K2Node_Event_ParticlesColor, bool K2Node_Event_Visible, double K2Node_Event_CurrentProgress, class FText K2Node_Event_Label, bool K2Node_Event_ShowImage, TSoftObjectPtr<class UTexture2D> K2Node_Event_Image, const class FString& K2Node_Event_message, bool CallFunc_Not_PreBool_ReturnValue, const class FString& K2Node_Event_message_1, const class FString& K2Node_Event_message_2, bool K2Node_Event_Away, int32 K2Node_Event_PlayerID, const class FString& K2Node_Event_message_3, int32 K2Node_Event_PlayerID_1, const class FString& K2Node_Event_message_4, int32 K2Node_Event_ChannelID, int32 K2Node_Event_ChannelID_1, class AActor* K2Node_Event_ActorToMark_1, class AActor* K2Node_Event_ActorToMark, class ACharacter* K2Node_Event_PlayerCharacter, class UCameraComponent* K2Node_Event_PlayerCamera, const struct FLinearColor& K2Node_Event_Colour_1, double K2Node_Event_IconDistance, const struct FDataTableRowHandle& K2Node_Event_Row, const struct FStructureAssetReference& K2Node_Event_StructureAssetRef, bool K2Node_Event_IsAdding_1, const struct FCraftingRecipeReference& K2Node_Event_CraftingRecipeRef, bool K2Node_Event_IsAdding, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsRecoil, enum class E_CrosshairTypes K2Node_Event_Crosshair_Type, bool K2Node_Event_CrosshairVisibility, const struct FLinearColor& K2Node_Event_Crosshair_Color, enum class E_HitIndicatorTypes K2Node_Event_HitIndicator_Type, bool K2Node_Event_HitIndicatorVisibility, double K2Node_Event_IndicatorTime, const struct FLinearColor& K2Node_Event_IndicatorColor, enum class E_HitType K2Node_Event_Hit_Type, bool K2Node_Event_bVisible_1, bool K2Node_Event_bVisible, bool K2Node_Event_PlayFX, const struct FS_ChatMessage& K2Node_Event_ChatMessageS, const class FString& K2Node_Event_ChatMessage, const struct FDamageEffectContextData& K2Node_Event_DamageContextData, double K2Node_Event_Time_to_Display_1, double K2Node_Event_Damage_Intensity__Amount_, const struct FLinearColor& K2Node_Event_Colour, bool CallFunc_AddToPlayerScreen_ReturnValue, bool CallFunc_GetHideHUDAndChatInFlycam_ReturnValue, class UWBP_Ping_Spyglass_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FS_BigLootNotificationInfo& K2Node_Event_Big_Loot_Notify_Info, bool K2Node_Event_IsVisible, const struct FS_ContextualControlsData& K2Node_Event_ContextualControlsData, double K2Node_Event_DisplayTime_3, const struct FS_IngameTutorial& K2Node_Event_Row1_1, const struct FS_IngameTutorial& K2Node_Event_Row2_1, const struct FLinearColor& K2Node_Event_BackgroundColor, enum class E_CharacterGameStatus Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_CharacterGameStatus Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_Show_, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UWBP_DB_FlyCamOverlay_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GetIsSpectator_ReturnValue, double K2Node_Event_DisplayTime_2, const struct FS_QuestNotificatorInfo& K2Node_Event_Quest_Notificator_Info, bool K2Node_Event_DisplayToolTip, class UObject* K2Node_Event_ToolTipIcon, class FText K2Node_Event_ToolTipText, bool K2Node_Event_ToolTipOnly, double K2Node_Event_DisplayTime_1, const struct FS_IngameTutorial& K2Node_Event_Row1, const struct FS_IngameTutorial& K2Node_Event_Row2, double K2Node_Event_DisplayTime, class FText K2Node_Event_TypeText, class FText K2Node_Event_HeadlineText, TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData, const struct FNotificationEncounter& K2Node_Event_EncounterMessage, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FNotificationEncounter& K2Node_Event_MessageContent, bool K2Node_Event_Pin_or_Unpin__Pin_true_will_add_, bool CallFunc_IsValid_ReturnValue_11, const struct FNotificationEncounter& K2Node_Event_Message_Content, double K2Node_Event_TimeToDisplay, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content, bool K2Node_Event_Remove_Manually, double K2Node_Event_Time_to_Display, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_18, class FText K2Node_Event_MainText, class FText K2Node_Event_BodyText, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_21, bool K2Node_Event_ShowingHUD, bool CallFunc_IsValid_ReturnValue_22, class UBasicAwaiter* CallFunc_GetHUDAwaiter_ReturnValue, bool K2Node_Event_Success, bool CallFunc_GetHideHUDAndChatInFlycam_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, bool CallFunc_IsValid_ReturnValue_23, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_IsPlayInEditorSimulateMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsAnyWindowOpen_bIsAnyWindowOpen, bool CallFunc_Not_PreBool_ReturnValue_4, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_IsValid_ReturnValue_28, bool K2Node_Event_bShowingHUD, bool K2Node_Event_bAddState, bool K2Node_Event_bDialogue, bool CallFunc_IsValid_ReturnValue_29, enum class E_CharacterGameStatus K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_30, bool CallFunc_Not_PreBool_ReturnValue_5, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetIsStartMenu_IsStartMenu, bool CallFunc_IsValid_ReturnValue_31, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsPlayInEditorSimulateMode_ReturnValue_1, bool CallFunc_GetIsSpectator_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_7, const class FString& CallFunc_SelectString_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_32, bool CallFunc_CanUseSupportCommands_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, class ABP_GameState_C* CallFunc_GetCoreGameState_GameState, bool CallFunc_IsValid_ReturnValue_33, bool CallFunc_AreAutomatedTestsRunning_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_34, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, bool K2Node_CustomEvent_Success, bool CallFunc_IsValid_ReturnValue_35, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_36, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "ExecuteUbergraph_HUD_NWX");

	Params::AHUD_NWX_C_ExecuteUbergraph_HUD_NWX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_Event_Time = K2Node_Event_Time;
	Parms.K2Node_Event_InteractionContext = K2Node_Event_InteractionContext;
	Parms.K2Node_Event_Display_ = K2Node_Event_Display_;
	Parms.K2Node_Event_Bar_Label_1 = K2Node_Event_Bar_Label_1;
	Parms.K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_ = K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_;
	Parms.K2Node_Event_Health = K2Node_Event_Health;
	Parms.K2Node_Event_Bar_Header_1 = K2Node_Event_Bar_Header_1;
	Parms.K2Node_Event_Progress_Bar_Tint = K2Node_Event_Progress_Bar_Tint;
	Parms.K2Node_Event_Progress_Bar_Direction = K2Node_Event_Progress_Bar_Direction;
	Parms.K2Node_Event_Bar_Label = K2Node_Event_Bar_Label;
	Parms.K2Node_Event_Bar_Header = K2Node_Event_Bar_Header;
	Parms.K2Node_Event_Bar_Sub_Header = K2Node_Event_Bar_Sub_Header;
	Parms.K2Node_Event_Label_1 = K2Node_Event_Label_1;
	Parms.K2Node_Event_HUD_Mode = K2Node_Event_HUD_Mode;
	Parms.K2Node_Event_RealmStartTime = K2Node_Event_RealmStartTime;
	Parms.K2Node_Event_Spread = K2Node_Event_Spread;
	Parms.K2Node_Event_ManuallyRemove_ = K2Node_Event_ManuallyRemove_;
	Parms.K2Node_Event_TimeToDisplay_1 = K2Node_Event_TimeToDisplay_1;
	Parms.K2Node_Event_Content_1 = K2Node_Event_Content_1;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_Quality = K2Node_Event_Quality;
	Parms.K2Node_Event_TimeToStayBlack = K2Node_Event_TimeToStayBlack;
	Parms.K2Node_Event_To_Black_true__From_Black__False = K2Node_Event_To_Black_true__From_Black__False;
	Parms.K2Node_Event_Feedback_1 = K2Node_Event_Feedback_1;
	Parms.K2Node_Event_CanRotate = K2Node_Event_CanRotate;
	Parms.K2Node_Event_CurrentRotation = K2Node_Event_CurrentRotation;
	Parms.K2Node_Event_CanAdjustHeight = K2Node_Event_CanAdjustHeight;
	Parms.K2Node_Event_Height_Current = K2Node_Event_Height_Current;
	Parms.K2Node_Event_Height_Max = K2Node_Event_Height_Max;
	Parms.K2Node_Event_Height_Min = K2Node_Event_Height_Min;
	Parms.K2Node_Event_Feedback = K2Node_Event_Feedback;
	Parms.K2Node_Event_ActorToMark_2 = K2Node_Event_ActorToMark_2;
	Parms.K2Node_Event_MarkerPrecision = K2Node_Event_MarkerPrecision;
	Parms.K2Node_Event_ParticlesVisible = K2Node_Event_ParticlesVisible;
	Parms.K2Node_Event_ParticlesColor = K2Node_Event_ParticlesColor;
	Parms.K2Node_Event_Visible = K2Node_Event_Visible;
	Parms.K2Node_Event_CurrentProgress = K2Node_Event_CurrentProgress;
	Parms.K2Node_Event_Label = K2Node_Event_Label;
	Parms.K2Node_Event_ShowImage = K2Node_Event_ShowImage;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.K2Node_Event_message = K2Node_Event_message;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_message_1 = K2Node_Event_message_1;
	Parms.K2Node_Event_message_2 = K2Node_Event_message_2;
	Parms.K2Node_Event_Away = K2Node_Event_Away;
	Parms.K2Node_Event_PlayerID = K2Node_Event_PlayerID;
	Parms.K2Node_Event_message_3 = K2Node_Event_message_3;
	Parms.K2Node_Event_PlayerID_1 = K2Node_Event_PlayerID_1;
	Parms.K2Node_Event_message_4 = K2Node_Event_message_4;
	Parms.K2Node_Event_ChannelID = K2Node_Event_ChannelID;
	Parms.K2Node_Event_ChannelID_1 = K2Node_Event_ChannelID_1;
	Parms.K2Node_Event_ActorToMark_1 = K2Node_Event_ActorToMark_1;
	Parms.K2Node_Event_ActorToMark = K2Node_Event_ActorToMark;
	Parms.K2Node_Event_PlayerCharacter = K2Node_Event_PlayerCharacter;
	Parms.K2Node_Event_PlayerCamera = K2Node_Event_PlayerCamera;
	Parms.K2Node_Event_Colour_1 = K2Node_Event_Colour_1;
	Parms.K2Node_Event_IconDistance = K2Node_Event_IconDistance;
	Parms.K2Node_Event_Row = K2Node_Event_Row;
	Parms.K2Node_Event_StructureAssetRef = K2Node_Event_StructureAssetRef;
	Parms.K2Node_Event_IsAdding_1 = K2Node_Event_IsAdding_1;
	Parms.K2Node_Event_CraftingRecipeRef = K2Node_Event_CraftingRecipeRef;
	Parms.K2Node_Event_IsAdding = K2Node_Event_IsAdding;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_IsRecoil = K2Node_Event_IsRecoil;
	Parms.K2Node_Event_Crosshair_Type = K2Node_Event_Crosshair_Type;
	Parms.K2Node_Event_CrosshairVisibility = K2Node_Event_CrosshairVisibility;
	Parms.K2Node_Event_Crosshair_Color = K2Node_Event_Crosshair_Color;
	Parms.K2Node_Event_HitIndicator_Type = K2Node_Event_HitIndicator_Type;
	Parms.K2Node_Event_HitIndicatorVisibility = K2Node_Event_HitIndicatorVisibility;
	Parms.K2Node_Event_IndicatorTime = K2Node_Event_IndicatorTime;
	Parms.K2Node_Event_IndicatorColor = K2Node_Event_IndicatorColor;
	Parms.K2Node_Event_Hit_Type = K2Node_Event_Hit_Type;
	Parms.K2Node_Event_bVisible_1 = K2Node_Event_bVisible_1;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_PlayFX = K2Node_Event_PlayFX;
	Parms.K2Node_Event_ChatMessageS = K2Node_Event_ChatMessageS;
	Parms.K2Node_Event_ChatMessage = K2Node_Event_ChatMessage;
	Parms.K2Node_Event_DamageContextData = K2Node_Event_DamageContextData;
	Parms.K2Node_Event_Time_to_Display_1 = K2Node_Event_Time_to_Display_1;
	Parms.K2Node_Event_Damage_Intensity__Amount_ = K2Node_Event_Damage_Intensity__Amount_;
	Parms.K2Node_Event_Colour = K2Node_Event_Colour;
	Parms.CallFunc_AddToPlayerScreen_ReturnValue = CallFunc_AddToPlayerScreen_ReturnValue;
	Parms.CallFunc_GetHideHUDAndChatInFlycam_ReturnValue = CallFunc_GetHideHUDAndChatInFlycam_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_Big_Loot_Notify_Info = K2Node_Event_Big_Loot_Notify_Info;
	Parms.K2Node_Event_IsVisible = K2Node_Event_IsVisible;
	Parms.K2Node_Event_ContextualControlsData = K2Node_Event_ContextualControlsData;
	Parms.K2Node_Event_DisplayTime_3 = K2Node_Event_DisplayTime_3;
	Parms.K2Node_Event_Row1_1 = K2Node_Event_Row1_1;
	Parms.K2Node_Event_Row2_1 = K2Node_Event_Row2_1;
	Parms.K2Node_Event_BackgroundColor = K2Node_Event_BackgroundColor;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Show_ = K2Node_Event_Show_;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetIsSpectator_ReturnValue = CallFunc_GetIsSpectator_ReturnValue;
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
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_Event_MessageContent = K2Node_Event_MessageContent;
	Parms.K2Node_Event_Pin_or_Unpin__Pin_true_will_add_ = K2Node_Event_Pin_or_Unpin__Pin_true_will_add_;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_Event_Message_Content = K2Node_Event_Message_Content;
	Parms.K2Node_Event_TimeToDisplay = K2Node_Event_TimeToDisplay;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_Event_Content = K2Node_Event_Content;
	Parms.K2Node_Event_Remove_Manually = K2Node_Event_Remove_Manually;
	Parms.K2Node_Event_Time_to_Display = K2Node_Event_Time_to_Display;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.K2Node_Event_MainText = K2Node_Event_MainText;
	Parms.K2Node_Event_BodyText = K2Node_Event_BodyText;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.K2Node_Event_ShowingHUD = K2Node_Event_ShowingHUD;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_GetHUDAwaiter_ReturnValue = CallFunc_GetHUDAwaiter_ReturnValue;
	Parms.K2Node_Event_Success = K2Node_Event_Success;
	Parms.CallFunc_GetHideHUDAndChatInFlycam_ReturnValue_1 = CallFunc_GetHideHUDAndChatInFlycam_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_1 = CallFunc_GetLocalPlayerController_LocalPlayerController_1;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_IsPlayInEditorSimulateMode_ReturnValue = CallFunc_IsPlayInEditorSimulateMode_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_IsAnyWindowOpen_bIsAnyWindowOpen = CallFunc_IsAnyWindowOpen_bIsAnyWindowOpen;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.K2Node_Event_bShowingHUD = K2Node_Event_bShowingHUD;
	Parms.K2Node_Event_bAddState = K2Node_Event_bAddState;
	Parms.K2Node_Event_bDialogue = K2Node_Event_bDialogue;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetIsStartMenu_IsStartMenu = CallFunc_GetIsStartMenu_IsStartMenu;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsPlayInEditorSimulateMode_ReturnValue_1 = CallFunc_IsPlayInEditorSimulateMode_ReturnValue_1;
	Parms.CallFunc_GetIsSpectator_ReturnValue_1 = CallFunc_GetIsSpectator_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_GetCoreGameState_GameState = CallFunc_GetCoreGameState_GameState;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue_1 = CallFunc_AreAutomatedTestsRunning_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_2 = CallFunc_GetLocalPlayerController_LocalPlayerController_2;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_NWX.HUD_NWX_C.PlaceSchematicRecipe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      PlaceableClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_NWX_C::PlaceSchematicRecipe__DelegateSignature(class UClass* PlaceableClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_NWX_C", "PlaceSchematicRecipe__DelegateSignature");

	Params::AHUD_NWX_C_PlaceSchematicRecipe__DelegateSignature_Params Parms{};

	Parms.PlaceableClass = PlaceableClass;

	UObject::ProcessEvent(Func, &Parms);

}

}


