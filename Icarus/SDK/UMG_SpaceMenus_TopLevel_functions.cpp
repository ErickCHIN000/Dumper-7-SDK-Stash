#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C
// (None)

class UClass* UUMG_SpaceMenus_TopLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SpaceMenus_TopLevel_C");

	return Clss;
}


// UMG_SpaceMenus_TopLevel_C UMG_SpaceMenus_TopLevel.Default__UMG_SpaceMenus_TopLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SpaceMenus_TopLevel_C* UUMG_SpaceMenus_TopLevel_C::GetDefaultObj()
{
	static class UUMG_SpaceMenus_TopLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SpaceMenus_TopLevel_C*>(UUMG_SpaceMenus_TopLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.ShouldShowNewGameTutorialPrompt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAccountFlagPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SpaceMenus_TopLevel_C::ShouldShowNewGameTutorialPrompt(bool* ShouldShow, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_HasAccountFlagPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "ShouldShowNewGameTutorialPrompt");

	Params::UUMG_SpaceMenus_TopLevel_C_ShouldShowNewGameTutorialPrompt_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_HasAccountFlagPlayer_ReturnValue = CallFunc_HasAccountFlagPlayer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.SwitchTalents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Solo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::SwitchTalents(bool Solo, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "SwitchTalents");

	Params::UUMG_SpaceMenus_TopLevel_C_SwitchTalents_Params Parms{};

	Parms.Solo = Solo;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.InitCharacterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FCharacterGrowth            CallFunc_GetCharacterGrowthStruct_CharacterGrowth                (None)
// enum class EValid                  CallFunc_GetCharacterGrowthStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoloTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlueprintTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>K2Node_DynamicCast_AsTalent_Controller_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>K2Node_DynamicCast_AsTalent_Controller_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentView_Solo_C*      K2Node_DynamicCast_AsUMG_Talent_View_Solo                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// TScriptInterface<class ITalentControllerInterface>K2Node_DynamicCast_AsTalent_Controller_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculatePlayerLevelFromExp_Level                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculatePlayerLevelFromExp_RemainingXP                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculatePlayerLevelFromExp_PercentageToNextLevel       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentView_Player_C*    K2Node_DynamicCast_AsUMG_Talent_View_Player                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::InitCharacterData(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool Temp_bool_Variable, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class USoloTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue, class UBlueprintTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue_1, TScriptInterface<class ITalentControllerInterface> K2Node_DynamicCast_AsTalent_Controller_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ITalentControllerInterface> K2Node_DynamicCast_AsTalent_Controller_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput, class UTalentViewInterface* CallFunc_GetView_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput_1, class UTalentViewInterface* CallFunc_GetView_ReturnValue_1, class UUMG_TalentView_Solo_C* K2Node_DynamicCast_AsUMG_Talent_View_Solo, bool K2Node_DynamicCast_bSuccess_2, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UPlayerTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue_2, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, TScriptInterface<class ITalentControllerInterface> K2Node_DynamicCast_AsTalent_Controller_Interface_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_CalculatePlayerLevelFromExp_Level, int32 CallFunc_CalculatePlayerLevelFromExp_RemainingXP, float CallFunc_CalculatePlayerLevelFromExp_PercentageToNextLevel, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_Select_Default, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput_2, class UTalentViewInterface* CallFunc_GetView_ReturnValue_2, class UUMG_TalentView_Player_C* K2Node_DynamicCast_AsUMG_Talent_View_Player, bool K2Node_DynamicCast_bSuccess_4, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UPanelSlot* CallFunc_SetContent_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "InitCharacterData");

	Params::UUMG_SpaceMenus_TopLevel_C_InitCharacterData_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetCharacterGrowthStruct_CharacterGrowth = CallFunc_GetCharacterGrowthStruct_CharacterGrowth;
	Parms.CallFunc_GetCharacterGrowthStruct_Paths = CallFunc_GetCharacterGrowthStruct_Paths;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTalent_Controller_Interface = K2Node_DynamicCast_AsTalent_Controller_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTalent_Controller_Interface_1 = K2Node_DynamicCast_AsTalent_Controller_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetView_self_CastInput = CallFunc_GetView_self_CastInput;
	Parms.CallFunc_GetView_ReturnValue = CallFunc_GetView_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetView_self_CastInput_1 = CallFunc_GetView_self_CastInput_1;
	Parms.CallFunc_GetView_ReturnValue_1 = CallFunc_GetView_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Solo = K2Node_DynamicCast_AsUMG_Talent_View_Solo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsTalent_Controller_Interface_2 = K2Node_DynamicCast_AsTalent_Controller_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CalculatePlayerLevelFromExp_Level = CallFunc_CalculatePlayerLevelFromExp_Level;
	Parms.CallFunc_CalculatePlayerLevelFromExp_RemainingXP = CallFunc_CalculatePlayerLevelFromExp_RemainingXP;
	Parms.CallFunc_CalculatePlayerLevelFromExp_PercentageToNextLevel = CallFunc_CalculatePlayerLevelFromExp_PercentageToNextLevel;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetView_self_CastInput_2 = CallFunc_GetView_self_CastInput_2;
	Parms.CallFunc_GetView_ReturnValue_2 = CallFunc_GetView_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Player = K2Node_DynamicCast_AsUMG_Talent_View_Player;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_SetContent_ReturnValue_1 = CallFunc_SetContent_ReturnValue_1;
	Parms.CallFunc_SetContent_ReturnValue_2 = CallFunc_SetContent_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.ContractUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIcarusGameStateSpace_bValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSpace*       CallFunc_GetIcarusGameStateSpace_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpaceStation_GameState_C*   K2Node_DynamicCast_AsSpace_Station_Game_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProspectInfoIsValid_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SpaceMenus_TopLevel_C::ContractUpdated(bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ProspectInfoIsValid_Valid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "ContractUpdated");

	Params::UUMG_SpaceMenus_TopLevel_C_ContractUpdated_Params Parms{};

	Parms.CallFunc_GetIcarusGameStateSpace_bValid = CallFunc_GetIcarusGameStateSpace_bValid;
	Parms.CallFunc_GetIcarusGameStateSpace_ReturnValue = CallFunc_GetIcarusGameStateSpace_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpace_Station_Game_State = K2Node_DynamicCast_AsSpace_Station_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ProspectInfoIsValid_Valid = CallFunc_ProspectInfoIsValid_Valid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_SpaceMenus_TopLevel_C_BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SpaceMenus_TopLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_SpaceMenus_TopLevel_C_BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUMG_SpaceMenus_TopLevel_C_BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUMG_SpaceMenus_TopLevel_C_BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SpaceMenus_TopLevel_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.CustomisationComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     NewCharacterInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_SpaceMenus_TopLevel_C::CustomisationComplete(bool Success, const struct FOnlineProfileCharacter& NewCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "CustomisationComplete");

	Params::UUMG_SpaceMenus_TopLevel_C_CustomisationComplete_Params Parms{};

	Parms.Success = Success;
	Parms.NewCharacterInfo = NewCharacterInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.OnConnectedPlayerInitialised
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConnectedPlayer            ConnectedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_SpaceMenus_TopLevel_C::OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "OnConnectedPlayerInitialised");

	Params::UUMG_SpaceMenus_TopLevel_C_OnConnectedPlayerInitialised_Params Parms{};

	Parms.ConnectedPlayer = ConnectedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_SpaceMenus_TopLevel_C_BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SpaceMenus_TopLevel_C::BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SpaceMenus_TopLevel_C::BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UUMG_SpaceMenus_TopLevel_C_BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenus_TopLevel_C::BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	Params::UUMG_SpaceMenus_TopLevel_C_BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.OnClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SpaceMenus_TopLevel_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.ExecuteUbergraph_UMG_SpaceMenus_TopLevel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     K2Node_CustomEvent_NewCharacterInfo                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CharacterCustomisationContainer_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterfaceSpace_C*   K2Node_DynamicCast_AsUMG_User_Interface_Space                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowMainMenu_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FConnectedPlayer            K2Node_CustomEvent_ConnectedPlayer                               (ConstParm)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSpace_bValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSpace*       CallFunc_GetIcarusGameStateSpace_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpaceStation_GameState_C*   K2Node_DynamicCast_AsSpace_Station_Game_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowNewGameTutorialPrompt_ShouldShow              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuide_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SpaceMenus_TopLevel_C::ExecuteUbergraph_UMG_SpaceMenus_TopLevel(int32 EntryPoint, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_6, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_5, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_4, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, bool K2Node_CustomEvent_Success, const struct FOnlineProfileCharacter& K2Node_CustomEvent_NewCharacterInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_CharacterCustomisationContainer_C* CallFunc_Create_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_UserInterfaceSpace_C* K2Node_DynamicCast_AsUMG_User_Interface_Space, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ShowMainMenu_Success, const struct FAnchors& K2Node_MakeStruct_Anchors, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess_3, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_ShouldShowNewGameTutorialPrompt_ShouldShow, class UUMG_FieldGuide_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_SetContent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_4, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenus_TopLevel_C", "ExecuteUbergraph_UMG_SpaceMenus_TopLevel");

	Params::UUMG_SpaceMenus_TopLevel_C_ExecuteUbergraph_UMG_SpaceMenus_TopLevel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_NewCharacterInfo = K2Node_CustomEvent_NewCharacterInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_DynamicCast_AsUMG_User_Interface_Space = K2Node_DynamicCast_AsUMG_User_Interface_Space;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ShowMainMenu_Success = CallFunc_ShowMainMenu_Success;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_ConnectedPlayer = K2Node_CustomEvent_ConnectedPlayer;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetIcarusGameStateSpace_bValid = CallFunc_GetIcarusGameStateSpace_bValid;
	Parms.CallFunc_GetIcarusGameStateSpace_ReturnValue = CallFunc_GetIcarusGameStateSpace_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpace_Station_Game_State = K2Node_DynamicCast_AsSpace_Station_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_ShouldShowNewGameTutorialPrompt_ShouldShow = CallFunc_ShouldShowNewGameTutorialPrompt_ShouldShow;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


