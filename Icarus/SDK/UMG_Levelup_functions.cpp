#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Levelup.UMG_Levelup_C
// (None)

class UClass* UUMG_Levelup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Levelup_C");

	return Clss;
}


// UMG_Levelup_C UMG_Levelup.Default__UMG_Levelup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Levelup_C* UUMG_Levelup_C::GetDefaultObj()
{
	static class UUMG_Levelup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Levelup_C*>(UUMG_Levelup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Levelup.UMG_Levelup_C.UnlockCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FItemableRowHandle          Itemable                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  CallFunc_MakeLiteralTalentArchetypes_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          CallFunc_MakeLiteralItemable_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetype            CallFunc_GetTalentArchetypesStruct_TalentArchetypes              (None)
// enum class EValid                  CallFunc_GetTalentArchetypesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentArchetypesRowHandle  CallFunc_MakeLiteralTalentArchetypes_ReturnValue_1               (NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetype            CallFunc_GetTalentArchetypesStruct_TalentArchetypes_1            (None)
// enum class EValid                  CallFunc_GetTalentArchetypesStruct_Paths_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          CallFunc_MakeLiteralItemable_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentArchetypesRowHandle  CallFunc_MakeLiteralTalentArchetypes_ReturnValue_2               (NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetype            CallFunc_GetTalentArchetypesStruct_TalentArchetypes_2            (None)
// enum class EValid                  CallFunc_GetTalentArchetypesStruct_Paths_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          CallFunc_MakeLiteralItemable_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUMG_Levelup_C::UnlockCheck(int32 Level, struct FItemableRowHandle* Itemable, const struct FTalentArchetypesRowHandle& CallFunc_MakeLiteralTalentArchetypes_ReturnValue, const struct FItemableRowHandle& CallFunc_MakeLiteralItemable_ReturnValue, const struct FTalentArchetype& CallFunc_GetTalentArchetypesStruct_TalentArchetypes, enum class EValid CallFunc_GetTalentArchetypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTalentArchetypesRowHandle& CallFunc_MakeLiteralTalentArchetypes_ReturnValue_1, const struct FTalentArchetype& CallFunc_GetTalentArchetypesStruct_TalentArchetypes_1, enum class EValid CallFunc_GetTalentArchetypesStruct_Paths_1, const struct FItemableRowHandle& CallFunc_MakeLiteralItemable_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FTalentArchetypesRowHandle& CallFunc_MakeLiteralTalentArchetypes_ReturnValue_2, const struct FTalentArchetype& CallFunc_GetTalentArchetypesStruct_TalentArchetypes_2, enum class EValid CallFunc_GetTalentArchetypesStruct_Paths_2, const struct FItemableRowHandle& CallFunc_MakeLiteralItemable_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Levelup_C", "UnlockCheck");

	Params::UUMG_Levelup_C_UnlockCheck_Params Parms{};

	Parms.Level = Level;
	Parms.CallFunc_MakeLiteralTalentArchetypes_ReturnValue = CallFunc_MakeLiteralTalentArchetypes_ReturnValue;
	Parms.CallFunc_MakeLiteralItemable_ReturnValue = CallFunc_MakeLiteralItemable_ReturnValue;
	Parms.CallFunc_GetTalentArchetypesStruct_TalentArchetypes = CallFunc_GetTalentArchetypesStruct_TalentArchetypes;
	Parms.CallFunc_GetTalentArchetypesStruct_Paths = CallFunc_GetTalentArchetypesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralTalentArchetypes_ReturnValue_1 = CallFunc_MakeLiteralTalentArchetypes_ReturnValue_1;
	Parms.CallFunc_GetTalentArchetypesStruct_TalentArchetypes_1 = CallFunc_GetTalentArchetypesStruct_TalentArchetypes_1;
	Parms.CallFunc_GetTalentArchetypesStruct_Paths_1 = CallFunc_GetTalentArchetypesStruct_Paths_1;
	Parms.CallFunc_MakeLiteralItemable_ReturnValue_1 = CallFunc_MakeLiteralItemable_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralTalentArchetypes_ReturnValue_2 = CallFunc_MakeLiteralTalentArchetypes_ReturnValue_2;
	Parms.CallFunc_GetTalentArchetypesStruct_TalentArchetypes_2 = CallFunc_GetTalentArchetypesStruct_TalentArchetypes_2;
	Parms.CallFunc_GetTalentArchetypesStruct_Paths_2 = CallFunc_GetTalentArchetypesStruct_Paths_2;
	Parms.CallFunc_MakeLiteralItemable_ReturnValue_2 = CallFunc_MakeLiteralItemable_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Itemable != nullptr)
		*Itemable = std::move(Parms.Itemable);

	return Parms.ReturnValue;

}


// Function UMG_Levelup.UMG_Levelup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Levelup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Levelup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Levelup.UMG_Levelup_C.OnExperienceUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Levelup_C::OnExperienceUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Levelup_C", "OnExperienceUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Levelup.UMG_Levelup_C.ConnectedPlayerInitialised
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConnectedPlayer            ConnectedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_Levelup_C::ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Levelup_C", "ConnectedPlayerInitialised");

	Params::UUMG_Levelup_C_ConnectedPlayerInitialised_Params Parms{};

	Parms.ConnectedPlayer = ConnectedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Levelup.UMG_Levelup_C.Initialise Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Levelup_C::Initialise_Player()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Levelup_C", "Initialise Player");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Levelup.UMG_Levelup_C.ExecuteUbergraph_UMG_Levelup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExperience_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UnlockCheck_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableRowHandle          CallFunc_UnlockCheck_Itemable                                    (NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            K2Node_CustomEvent_ConnectedPlayer                               (ConstParm)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoloTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlueprintTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPointsForLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForLevel_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForLevel_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_GetPointsForLevel_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForLevel_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForLevel_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterGrowth            CallFunc_GetCharacterGrowthStruct_CharacterGrowth                (None)
// enum class EValid                  CallFunc_GetCharacterGrowthStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Levelup_C::ExecuteUbergraph_UMG_Levelup(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, int32 CallFunc_GetExperience_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetLevel_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_UnlockCheck_ReturnValue, const struct FItemableRowHandle& CallFunc_UnlockCheck_Itemable, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, bool CallFunc_IsLocallyControlled_ReturnValue, bool Temp_bool_Variable_3, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class USoloTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput, class UTalentModelInterface* CallFunc_GetModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UBlueprintTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput_1, class UTalentModelInterface* CallFunc_GetModel_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UPlayerTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput_2, class UTalentModelInterface* CallFunc_GetModel_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_GetPointsForLevel_ReturnValue, int32 CallFunc_GetPointsForLevel_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetPointsForLevel_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetPointsForLevel_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_GetPointsForLevel_ReturnValue_4, int32 CallFunc_GetPointsForLevel_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_2, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_Select_Default_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_4, class UFMODEvent* K2Node_Select_Default_4, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Levelup_C", "ExecuteUbergraph_UMG_Levelup");

	Params::UUMG_Levelup_C_ExecuteUbergraph_UMG_Levelup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid_1 = CallFunc_GetIcarusPlayerCharacter_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_GetExperience_ReturnValue = CallFunc_GetExperience_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue_1 = CallFunc_GetLevel_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_UnlockCheck_ReturnValue = CallFunc_UnlockCheck_ReturnValue;
	Parms.CallFunc_UnlockCheck_Itemable = CallFunc_UnlockCheck_Itemable;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.K2Node_CustomEvent_ConnectedPlayer = K2Node_CustomEvent_ConnectedPlayer;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetModel_self_CastInput = CallFunc_GetModel_self_CastInput;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetModel_self_CastInput_1 = CallFunc_GetModel_self_CastInput_1;
	Parms.CallFunc_GetModel_ReturnValue_1 = CallFunc_GetModel_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetModel_self_CastInput_2 = CallFunc_GetModel_self_CastInput_2;
	Parms.CallFunc_GetModel_ReturnValue_2 = CallFunc_GetModel_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetPointsForLevel_ReturnValue = CallFunc_GetPointsForLevel_ReturnValue;
	Parms.CallFunc_GetPointsForLevel_ReturnValue_1 = CallFunc_GetPointsForLevel_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetPointsForLevel_ReturnValue_2 = CallFunc_GetPointsForLevel_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetPointsForLevel_ReturnValue_3 = CallFunc_GetPointsForLevel_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_GetPointsForLevel_ReturnValue_4 = CallFunc_GetPointsForLevel_ReturnValue_4;
	Parms.CallFunc_GetPointsForLevel_ReturnValue_5 = CallFunc_GetPointsForLevel_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetCharacterGrowthStruct_CharacterGrowth = CallFunc_GetCharacterGrowthStruct_CharacterGrowth;
	Parms.CallFunc_GetCharacterGrowthStruct_Paths = CallFunc_GetCharacterGrowthStruct_Paths;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue = CallFunc_EventInstanceIsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


