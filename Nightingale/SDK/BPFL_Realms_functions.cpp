#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Realms.BPFL_Realms_C
// (None)

class UClass* UBPFL_Realms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Realms_C");

	return Clss;
}


// BPFL_Realms_C BPFL_Realms.Default__BPFL_Realms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Realms_C* UBPFL_Realms_C::GetDefaultObj()
{
	static class UBPFL_Realms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Realms_C*>(UBPFL_Realms_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Realms.BPFL_Realms_C.Get Accessibility Zone 
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Power                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AccessibilityMaxPL                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::Get_Accessibility_Zone_(class UObject* __WorldContext, int32* Realm_Power, int32 AccessibilityMaxPL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "Get Accessibility Zone ");

	Params::UBPFL_Realms_C_Get_Accessibility_Zone__Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.AccessibilityMaxPL = AccessibilityMaxPL;

	UObject::ProcessEvent(Func, &Parms);

	if (Realm_Power != nullptr)
		*Realm_Power = Parms.Realm_Power;

}


// Function BPFL_Realms.BPFL_Realms_C.GetCurrentRealmDifficulty
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Realm_Difficulty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetCurrentRealmDifficulty(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, enum class ERealmDifficulty* Realm_Difficulty, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetCurrentRealmDifficulty");

	Params::UBPFL_Realms_C_GetCurrentRealmDifficulty_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Realm_Difficulty != nullptr)
		*Realm_Difficulty = Parms.Realm_Difficulty;

}


// Function BPFL_Realms.BPFL_Realms_C.GetNextRealmPower
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERealmDifficulty        DifficultySetting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseRealmPower                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              NextRealmPower                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        DifficultyCurveTable_Extreme                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        DifficultyCurveTable_Hard                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        DifficultyCurveTable_Medium                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        DifficultyCurveTable_Easy                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        DifficultyCurveTable                                             (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetNextRealmPower(enum class ERealmDifficulty DifficultySetting, int32 BaseRealmPower, class UObject* __WorldContext, int32* NextRealmPower, const struct FCurveTableRowHandle& DifficultyCurveTable_Extreme, const struct FCurveTableRowHandle& DifficultyCurveTable_Hard, const struct FCurveTableRowHandle& DifficultyCurveTable_Medium, const struct FCurveTableRowHandle& DifficultyCurveTable_Easy, const struct FCurveTableRowHandle& DifficultyCurveTable, enum class ERealmDifficulty Temp_byte_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCurveTableRowHandle& K2Node_Select_Default, float CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetNextRealmPower");

	Params::UBPFL_Realms_C_GetNextRealmPower_Params Parms{};

	Parms.DifficultySetting = DifficultySetting;
	Parms.BaseRealmPower = BaseRealmPower;
	Parms.__WorldContext = __WorldContext;
	Parms.DifficultyCurveTable_Extreme = DifficultyCurveTable_Extreme;
	Parms.DifficultyCurveTable_Hard = DifficultyCurveTable_Hard;
	Parms.DifficultyCurveTable_Medium = DifficultyCurveTable_Medium;
	Parms.DifficultyCurveTable_Easy = DifficultyCurveTable_Easy;
	Parms.DifficultyCurveTable = DifficultyCurveTable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast = CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NextRealmPower != nullptr)
		*NextRealmPower = Parms.NextRealmPower;

}


// Function BPFL_Realms.BPFL_Realms_C.DoesRealmAndRequirementMeetMinorCard
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FRealmPlacementRequirement>RealmRequirements                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     WorldContext                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               MeetMinorCard                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RealmSettingsAndRequirementsSatisfyMinorCardTag_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::DoesRealmAndRequirementMeetMinorCard(TArray<struct FRealmPlacementRequirement>& RealmRequirements, class UObject* WorldContext, class UObject* __WorldContext, bool* MeetMinorCard, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RealmSettingsAndRequirementsSatisfyMinorCardTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "DoesRealmAndRequirementMeetMinorCard");

	Params::UBPFL_Realms_C_DoesRealmAndRequirementMeetMinorCard_Params Parms{};

	Parms.RealmRequirements = RealmRequirements;
	Parms.WorldContext = WorldContext;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RealmSettingsAndRequirementsSatisfyMinorCardTag_ReturnValue = CallFunc_RealmSettingsAndRequirementsSatisfyMinorCardTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeetMinorCard != nullptr)
		*MeetMinorCard = Parms.MeetMinorCard;

}


// Function BPFL_Realms.BPFL_Realms_C.GetCurrentRealmBiomeID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBiomeID                BiomeId                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetCurrentRealmBiomeID(class UObject* WorldContextObject, class UObject* __WorldContext, enum class EBiomeID* BiomeId, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetCurrentRealmBiomeID");

	Params::UBPFL_Realms_C_GetCurrentRealmBiomeID_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BiomeId != nullptr)
		*BiomeId = Parms.BiomeId;

}


// Function BPFL_Realms.BPFL_Realms_C.GetCurrentRealmPower
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              RealmPower                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetCurrentRealmPower(class UObject* WorldContextObject, class UObject* __WorldContext, int32* RealmPower, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetCurrentRealmPower");

	Params::UBPFL_Realms_C_GetCurrentRealmPower_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RealmPower != nullptr)
		*RealmPower = Parms.RealmPower;

}


// Function BPFL_Realms.BPFL_Realms_C.GetCurrentRealmTags
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RealmTags                                                        (Parm, OutParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetCurrentRealmTags(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, struct FGameplayTagContainer* RealmTags, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetCurrentRealmTags");

	Params::UBPFL_Realms_C_GetCurrentRealmTags_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (RealmTags != nullptr)
		*RealmTags = std::move(Parms.RealmTags);

}


// Function BPFL_Realms.BPFL_Realms_C.GetCurrentRealmSettings
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              RealmSettings                                                    (Parm, OutParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetCurrentRealmSettings(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, struct FRealmSettings* RealmSettings, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetCurrentRealmSettings");

	Params::UBPFL_Realms_C_GetCurrentRealmSettings_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (RealmSettings != nullptr)
		*RealmSettings = std::move(Parms.RealmSettings);

}


// Function BPFL_Realms.BPFL_Realms_C.DoesRealmMeetRequirement
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRealmPlacementRequirement  RealmRequirements                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequirementMet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RealmSettingsSatisfyRequirement_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::DoesRealmMeetRequirement(const struct FRealmPlacementRequirement& RealmRequirements, class UObject*& WorldContextObject, class UObject* __WorldContext, bool* RequirementMet, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RealmSettingsSatisfyRequirement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "DoesRealmMeetRequirement");

	Params::UBPFL_Realms_C_DoesRealmMeetRequirement_Params Parms{};

	Parms.RealmRequirements = RealmRequirements;
	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RealmSettingsSatisfyRequirement_ReturnValue = CallFunc_RealmSettingsSatisfyRequirement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RequirementMet != nullptr)
		*RequirementMet = Parms.RequirementMet;

}


// Function BPFL_Realms.BPFL_Realms_C.DoesRealmMeetOneRequirement
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FRealmPlacementRequirement>RealmRequirements                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AtLeastOneMet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              RealmSettings                                                    (Edit, BlueprintVisible)
// enum class EBiomeID                Biome                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RealmTags                                                        (Edit, BlueprintVisible)
// struct FRealmInfluenceValues       Influence                                                        (Edit, BlueprintVisible, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RealmSettingsSatisfyOneOfRequirements_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::DoesRealmMeetOneRequirement(TArray<struct FRealmPlacementRequirement>& RealmRequirements, class UObject* WorldContextObject, class UObject* __WorldContext, bool* AtLeastOneMet, const struct FRealmSettings& RealmSettings, enum class EBiomeID Biome, const struct FGameplayTagContainer& RealmTags, const struct FRealmInfluenceValues& Influence, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RealmSettingsSatisfyOneOfRequirements_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "DoesRealmMeetOneRequirement");

	Params::UBPFL_Realms_C_DoesRealmMeetOneRequirement_Params Parms{};

	Parms.RealmRequirements = RealmRequirements;
	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.RealmSettings = RealmSettings;
	Parms.Biome = Biome;
	Parms.RealmTags = RealmTags;
	Parms.Influence = Influence;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RealmSettingsSatisfyOneOfRequirements_ReturnValue = CallFunc_RealmSettingsSatisfyOneOfRequirements_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AtLeastOneMet != nullptr)
		*AtLeastOneMet = Parms.AtLeastOneMet;

}


// Function BPFL_Realms.BPFL_Realms_C.GetCurrentInfluenceLevels
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmInfluenceValues       Influence_Levels                                                 (Parm, OutParm, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetCurrentInfluenceLevels(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, struct FRealmInfluenceValues* Influence_Levels, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetCurrentInfluenceLevels");

	Params::UBPFL_Realms_C_GetCurrentInfluenceLevels_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Influence_Levels != nullptr)
		*Influence_Levels = std::move(Parms.Influence_Levels);

}


// Function BPFL_Realms.BPFL_Realms_C.InfluenceValueInRange
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ActualValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               InRange                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::InfluenceValueInRange(int32 ActualValue, int32 MinValue, int32 MaxValue, class UObject* __WorldContext, bool* InRange, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "InfluenceValueInRange");

	Params::UBPFL_Realms_C_InfluenceValueInRange_Params Parms{};

	Parms.ActualValue = ActualValue;
	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InRange != nullptr)
		*InRange = Parms.InRange;

}


// Function BPFL_Realms.BPFL_Realms_C.InfluenceLevelInRange
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRealmInfluenceValues       ActualInfluence                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRealmInfluenceValues       MinimumInfluence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRealmInfluenceValues       MaximumInfluence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsInRange                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InfluenceValueInRange_InRange                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InfluenceValueInRange_InRange_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InfluenceValueInRange_InRange_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InfluenceValueInRange_InRange_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Realms_C::InfluenceLevelInRange(const struct FRealmInfluenceValues& ActualInfluence, const struct FRealmInfluenceValues& MinimumInfluence, const struct FRealmInfluenceValues& MaximumInfluence, class UObject* __WorldContext, bool* IsInRange, bool CallFunc_InfluenceValueInRange_InRange, bool CallFunc_InfluenceValueInRange_InRange_1, bool CallFunc_InfluenceValueInRange_InRange_2, bool CallFunc_InfluenceValueInRange_InRange_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "InfluenceLevelInRange");

	Params::UBPFL_Realms_C_InfluenceLevelInRange_Params Parms{};

	Parms.ActualInfluence = ActualInfluence;
	Parms.MinimumInfluence = MinimumInfluence;
	Parms.MaximumInfluence = MaximumInfluence;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_InfluenceValueInRange_InRange = CallFunc_InfluenceValueInRange_InRange;
	Parms.CallFunc_InfluenceValueInRange_InRange_1 = CallFunc_InfluenceValueInRange_InRange_1;
	Parms.CallFunc_InfluenceValueInRange_InRange_2 = CallFunc_InfluenceValueInRange_InRange_2;
	Parms.CallFunc_InfluenceValueInRange_InRange_3 = CallFunc_InfluenceValueInRange_InRange_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInRange != nullptr)
		*IsInRange = Parms.IsInRange;

}


// Function BPFL_Realms.BPFL_Realms_C.GetRecipeName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRealmRecipe                Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      RecipeName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetRecipeName(struct FRealmRecipe& Recipe, class UObject* __WorldContext, class FString* RecipeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetRecipeName");

	Params::UBPFL_Realms_C_GetRecipeName_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RecipeName != nullptr)
		*RecipeName = std::move(Parms.RecipeName);

}


// Function BPFL_Realms.BPFL_Realms_C.GetCardsRequired
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRealmRecipe                RealmRecipe                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemDataReference>  CardsRequired                                                    (Parm, OutParm)

void UBPFL_Realms_C::GetCardsRequired(struct FRealmRecipe& RealmRecipe, class UObject* __WorldContext, TArray<struct FItemDataReference>* CardsRequired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetCardsRequired");

	Params::UBPFL_Realms_C_GetCardsRequired_Params Parms{};

	Parms.RealmRecipe = RealmRecipe;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CardsRequired != nullptr)
		*CardsRequired = std::move(Parms.CardsRequired);

}


// Function BPFL_Realms.BPFL_Realms_C.GetMapName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRealmRecipe                Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      MapName                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Realms_C::GetMapName(struct FRealmRecipe& Recipe, class UObject* __WorldContext, class FString* MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Realms_C", "GetMapName");

	Params::UBPFL_Realms_C_GetMapName_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MapName != nullptr)
		*MapName = std::move(Parms.MapName);

}

}


