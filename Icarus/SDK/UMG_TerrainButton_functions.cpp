#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TerrainButton.UMG_TerrainButton_C
// (None)

class UClass* UUMG_TerrainButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TerrainButton_C");

	return Clss;
}


// UMG_TerrainButton_C UMG_TerrainButton.Default__UMG_TerrainButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TerrainButton_C* UUMG_TerrainButton_C::GetDefaultObj()
{
	static class UUMG_TerrainButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TerrainButton_C*>(UUMG_TerrainButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TerrainButton.UMG_TerrainButton_C.ShouldShowWarningMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisableMapSelectionWarning_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainButton_C::ShouldShowWarningMessage(bool* Show, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_GetDisableMapSelectionWarning_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "ShouldShowWarningMessage");

	Params::UUMG_TerrainButton_C_ShouldShowWarningMessage_Params Parms{};

	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDisableMapSelectionWarning_ReturnValue = CallFunc_GetDisableMapSelectionWarning_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.ShouldShowLevelBoostPrompt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAccountFlagPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculatePlayerLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainButton_C::ShouldShowLevelBoostPrompt(bool* Show, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue_1, bool CallFunc_HasAccountFlagPlayer_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_CalculatePlayerLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "ShouldShowLevelBoostPrompt");

	Params::UUMG_TerrainButton_C_ShouldShowLevelBoostPrompt_Params Parms{};

	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue_1 = CallFunc_GetIcarusPlayerState_ReturnValue_1;
	Parms.CallFunc_HasAccountFlagPlayer_ReturnValue = CallFunc_HasAccountFlagPlayer_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CalculatePlayerLevel_ReturnValue = CallFunc_CalculatePlayerLevel_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "PreConstruct");

	Params::UUMG_TerrainButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.Confirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.GrantLevelBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::GrantLevelBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "GrantLevelBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.BoostButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::BoostButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "BoostButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.UpdateDLCLockOverlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TerrainButton_C::UpdateDLCLockOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "UpdateDLCLockOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.ExecuteUbergraph_UMG_TerrainButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMG_TerrainButtonPromptContents_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_InfoImage_C*            CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFeatureLevelCheckResultCallFunc_IsFeatureLevelMet_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCPackageData             CallFunc_GetDLCPackageDataStruct_DLCPackageData                  (None)
// enum class EValid                  CallFunc_GetDLCPackageDataStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalTalentsForTree_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpentPointsForTree_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FDLCPackageData             CallFunc_GetDLCPackageDataStruct_DLCPackageData_1                (None)
// enum class EValid                  CallFunc_GetDLCPackageDataStruct_Paths_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentTree                 CallFunc_GetTalentTreesStruct_TalentTrees                        (None)
// enum class EValid                  CallFunc_GetTalentTreesStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowLevelBoostPrompt_Show                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterState*       CallFunc_GetActivePlayerCharacterState_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetExperience_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExperienceRequired_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowWarningMessage_Show                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// bool                               CallFunc_DontShowAgain_DontShowAgain                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FResourceAvailabilityData   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureLevelCheckResultCallFunc_IsFeatureLevelMet_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainButton_C::ExecuteUbergraph_UMG_TerrainButton(int32 EntryPoint, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_TerrainButtonPromptContents_C* CallFunc_Create_ReturnValue, class UUMG_InfoImage_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EFeatureLevelCheckResult CallFunc_IsFeatureLevelMet_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FDLCPackageData& CallFunc_GetDLCPackageDataStruct_DLCPackageData, enum class EValid CallFunc_GetDLCPackageDataStruct_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput, class UTalentModelInterface* CallFunc_GetModel_ReturnValue, int32 CallFunc_GetTotalTalentsForTree_ReturnValue, int32 CallFunc_GetSpentPointsForTree_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_SwitchEnum_CmpSuccess_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FDLCPackageData& CallFunc_GetDLCPackageDataStruct_DLCPackageData_1, enum class EValid CallFunc_GetDLCPackageDataStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class FText CallFunc_Format_ReturnValue_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool K2Node_SwitchEnum_CmpSuccess_4, int32 Temp_int_Loop_Counter_Variable, const struct FTalentTree& CallFunc_GetTalentTreesStruct_TalentTrees, enum class EValid CallFunc_GetTalentTreesStruct_Paths, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_ShouldShowLevelBoostPrompt_Show, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue_1, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue_2, class UPlayerCharacterState* CallFunc_GetActivePlayerCharacterState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_6, int32 CallFunc_GetExperience_ReturnValue, int32 CallFunc_GetExperienceRequired_ReturnValue, bool CallFunc_ShouldShowWarningMessage_Show, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool CallFunc_DontShowAgain_DontShowAgain, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const struct FResourceAvailabilityData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, enum class EFeatureLevelCheckResult CallFunc_IsFeatureLevelMet_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "ExecuteUbergraph_UMG_TerrainButton");

	Params::UUMG_TerrainButton_C_ExecuteUbergraph_UMG_TerrainButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsFeatureLevelMet_ReturnValue = CallFunc_IsFeatureLevelMet_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetDLCPackageDataStruct_DLCPackageData = CallFunc_GetDLCPackageDataStruct_DLCPackageData;
	Parms.CallFunc_GetDLCPackageDataStruct_Paths = CallFunc_GetDLCPackageDataStruct_Paths;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetModel_self_CastInput = CallFunc_GetModel_self_CastInput;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_GetTotalTalentsForTree_ReturnValue = CallFunc_GetTotalTalentsForTree_ReturnValue;
	Parms.CallFunc_GetSpentPointsForTree_ReturnValue = CallFunc_GetSpentPointsForTree_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetDLCPackageDataStruct_DLCPackageData_1 = CallFunc_GetDLCPackageDataStruct_DLCPackageData_1;
	Parms.CallFunc_GetDLCPackageDataStruct_Paths_1 = CallFunc_GetDLCPackageDataStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTalentTreesStruct_TalentTrees = CallFunc_GetTalentTreesStruct_TalentTrees;
	Parms.CallFunc_GetTalentTreesStruct_Paths = CallFunc_GetTalentTreesStruct_Paths;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_ShouldShowLevelBoostPrompt_Show = CallFunc_ShouldShowLevelBoostPrompt_Show;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_2 = CallFunc_GetIcarusPlayerController_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue_1 = CallFunc_GetIcarusPlayerState_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue_2 = CallFunc_GetIcarusPlayerState_ReturnValue_2;
	Parms.CallFunc_GetActivePlayerCharacterState_ReturnValue = CallFunc_GetActivePlayerCharacterState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_GetExperience_ReturnValue = CallFunc_GetExperience_ReturnValue;
	Parms.CallFunc_GetExperienceRequired_ReturnValue = CallFunc_GetExperienceRequired_ReturnValue;
	Parms.CallFunc_ShouldShowWarningMessage_Show = CallFunc_ShouldShowWarningMessage_Show;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_DontShowAgain_DontShowAgain = CallFunc_DontShowAgain_DontShowAgain;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_IsFeatureLevelMet_ReturnValue_1 = CallFunc_IsFeatureLevelMet_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainButton.UMG_TerrainButton_C.TerrainSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentArchetypesRowHandle  Terrain                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TerrainButton_C::TerrainSelected__DelegateSignature(const struct FTalentArchetypesRowHandle& Terrain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButton_C", "TerrainSelected__DelegateSignature");

	Params::UUMG_TerrainButton_C_TerrainSelected__DelegateSignature_Params Parms{};

	Parms.Terrain = Terrain;

	UObject::ProcessEvent(Func, &Parms);

}

}


