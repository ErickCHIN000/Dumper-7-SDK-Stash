#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_Base_UseAction_Template_Healing.bc_Base_UseAction_Template_Healing_C
// (None)

class UClass* Ubc_Base_UseAction_Template_Healing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_Base_UseAction_Template_Healing_C");

	return Clss;
}


// bc_Base_UseAction_Template_Healing_C bc_Base_UseAction_Template_Healing.Default__bc_Base_UseAction_Template_Healing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_Base_UseAction_Template_Healing_C* Ubc_Base_UseAction_Template_Healing_C::GetDefaultObj()
{
	static class Ubc_Base_UseAction_Template_Healing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_Base_UseAction_Template_Healing_C*>(Ubc_Base_UseAction_Template_Healing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_Base_UseAction_Template_Healing.bc_Base_UseAction_Template_Healing_C.WillModOverTreshhold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SegmentMod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SegmentSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

bool Ubc_Base_UseAction_Template_Healing_C::WillModOverTreshhold(float Target, float SegmentMod, float Max, float SegmentSize, bool Debug, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Base_UseAction_Template_Healing_C", "WillModOverTreshhold");

	Params::Ubc_Base_UseAction_Template_Healing_C_WillModOverTreshhold_Params Parms{};

	Parms.Target = Target;
	Parms.SegmentMod = SegmentMod;
	Parms.Max = Max;
	Parms.SegmentSize = SegmentSize;
	Parms.Debug = Debug;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bc_Base_UseAction_Template_Healing.bc_Base_UseAction_Template_Healing_C.ActionBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  SoundToPlay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MoraleChanged                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RadiationChanged                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HPChanged                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WillModMorale                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WillModRadiation                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WillModHp                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMorale_CurrentMorale                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WillModOverTreshhold_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUIBarSegments_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHP_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentRadiation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WillModOverTreshhold_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUIBarSegments_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentRadiation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHP_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHP_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WillModOverTreshhold_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ChangeRadPercentage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMorale_CurrentMorale_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_ChangeHP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_Base_UseAction_Template_Healing_C::ActionBody(bool* Success, class USoundBase** SoundToPlay, bool MoraleChanged, bool RadiationChanged, bool HPChanged, bool WillModMorale, bool WillModRadiation, bool WillModHp, float CallFunc_Remove_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetMorale_CurrentMorale, bool CallFunc_WillModOverTreshhold_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, int32 CallFunc_GetUIBarSegments_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetMaxHP_ReturnValue, float CallFunc_GetCurrentRadiation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_WillModOverTreshhold_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_5, int32 CallFunc_GetUIBarSegments_ReturnValue_1, float CallFunc_GetCurrentRadiation_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_GetMaxHP_ReturnValue_1, float CallFunc_GetCurrentHP_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_WillModOverTreshhold_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_ChangeRadPercentage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_6, float CallFunc_GetMorale_CurrentMorale_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_K2_ChangeHP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Base_UseAction_Template_Healing_C", "ActionBody");

	Params::Ubc_Base_UseAction_Template_Healing_C_ActionBody_Params Parms{};

	Parms.MoraleChanged = MoraleChanged;
	Parms.RadiationChanged = RadiationChanged;
	Parms.HPChanged = HPChanged;
	Parms.WillModMorale = WillModMorale;
	Parms.WillModRadiation = WillModRadiation;
	Parms.WillModHp = WillModHp;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMorale_CurrentMorale = CallFunc_GetMorale_CurrentMorale;
	Parms.CallFunc_WillModOverTreshhold_ReturnValue = CallFunc_WillModOverTreshhold_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_GetUIBarSegments_ReturnValue = CallFunc_GetUIBarSegments_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetMaxHP_ReturnValue = CallFunc_GetMaxHP_ReturnValue;
	Parms.CallFunc_GetCurrentRadiation_ReturnValue = CallFunc_GetCurrentRadiation_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_WillModOverTreshhold_ReturnValue_1 = CallFunc_WillModOverTreshhold_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_2 = CallFunc_NotEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_GetUIBarSegments_ReturnValue_1 = CallFunc_GetUIBarSegments_ReturnValue_1;
	Parms.CallFunc_GetCurrentRadiation_ReturnValue_1 = CallFunc_GetCurrentRadiation_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetMaxHP_ReturnValue_1 = CallFunc_GetMaxHP_ReturnValue_1;
	Parms.CallFunc_GetCurrentHP_ReturnValue = CallFunc_GetCurrentHP_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_WillModOverTreshhold_ReturnValue_2 = CallFunc_WillModOverTreshhold_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_ChangeRadPercentage_ReturnValue = CallFunc_ChangeRadPercentage_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_GetMorale_CurrentMorale_1 = CallFunc_GetMorale_CurrentMorale_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_ChangeHP_ReturnValue = CallFunc_K2_ChangeHP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

}

}


