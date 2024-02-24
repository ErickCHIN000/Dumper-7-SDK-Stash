#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirageAISample.MirageAISample_C
// (Actor)

class UClass* AMirageAISample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirageAISample_C");

	return Clss;
}


// MirageAISample_C MirageAISample.Default__MirageAISample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMirageAISample_C* AMirageAISample_C::GetDefaultObj()
{
	static class AMirageAISample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMirageAISample_C*>(AMirageAISample_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MirageAISample.MirageAISample_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMirageAISample_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageAISample_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirageAISample.MirageAISample_C.AIProcess
// (Event, Public, BlueprintEvent)
// Parameters:

void AMirageAISample_C::AIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageAISample_C", "AIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirageAISample.MirageAISample_C.AIAttackFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AMirageAISample_C::AIAttackFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageAISample_C", "AIAttackFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirageAISample.MirageAISample_C.AIHateTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMirageAISample_C::AIHateTargetChanged(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageAISample_C", "AIHateTargetChanged");

	Params::AMirageAISample_C_AIHateTargetChanged_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MirageAISample.MirageAISample_C.AIReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETTLAIReaction          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLAIReactionParam         Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMirageAISample_C::AIReaction(enum class ETTLAIReaction Type, const struct FTTLAIReactionParam& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageAISample_C", "AIReaction");

	Params::AMirageAISample_C_AIReaction_Params Parms{};

	Parms.Type = Type;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MirageAISample.MirageAISample_C.AIInit
// (Event, Public, BlueprintEvent)
// Parameters:

void AMirageAISample_C::AIInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageAISample_C", "AIInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirageAISample.MirageAISample_C.ExecuteUbergraph_MirageAISample
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishParallelAttack_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_targetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishParallelAttack_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDeadActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AttackWeaponAuto_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAIReaction          K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLAIReactionParam         K2Node_Event_param                                               (None)
// bool                               CallFunc_PresetAI_ACT___________ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttackWeaponAuto_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDeadActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSupportTarget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FinishParallelAttack_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AI_________BattleDistance                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionChase_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NPC________Do_Routine                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc______________________ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc______________________ReturnDistance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLAIYesNoEnum         CallFunc_BranchPercent_OutputYesNo                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEquippedWeaponRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEquippedWeaponRange_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAIYesNoEnum         CallFunc_BranchPercent_OutputYesNo1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionExchangeWeapon_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionExchangeWeapon_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CouldTake_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CouldTake_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CouldTake_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CouldTake_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionExchangeWeapon_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionExchangeWeapon_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FinishParallelAttack_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMirageAISample_C::ExecuteUbergraph_MirageAISample(int32 EntryPoint, bool CallFunc_FinishParallelAttack_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* K2Node_Event_targetActor, bool CallFunc_FinishParallelAttack_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDeadActor_ReturnValue, bool CallFunc_AttackWeaponAuto_ReturnValue, enum class ETTLAIReaction K2Node_Event_Type, const struct FTTLAIReactionParam& K2Node_Event_param, bool CallFunc_PresetAI_ACT___________ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, class AActor* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_AttackWeaponAuto_ReturnValue1, bool CallFunc_IsDeadActor_ReturnValue1, bool CallFunc_IsSupportTarget_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, float CallFunc_AI_________BattleDistance, bool CallFunc_ActionChase_ReturnValue, bool CallFunc_NPC________Do_Routine, bool CallFunc______________________ReturnValue, float CallFunc______________________ReturnDistance, enum class ETTLAIYesNoEnum CallFunc_BranchPercent_OutputYesNo, bool K2Node_SwitchEnum3_CmpSuccess, float CallFunc_GetEquippedWeaponRange_ReturnValue, float CallFunc_GetEquippedWeaponRange_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ETTLAIYesNoEnum CallFunc_BranchPercent_OutputYesNo1, bool K2Node_SwitchEnum4_CmpSuccess, bool CallFunc_ActionExchangeWeapon_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActionExchangeWeapon_ReturnValue1, bool CallFunc_CouldTake_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_CouldTake_ReturnValue1, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_CouldTake_ReturnValue2, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_CouldTake_ReturnValue3, bool CallFunc_ActionExchangeWeapon_ReturnValue2, bool CallFunc_ActionExchangeWeapon_ReturnValue3, bool CallFunc_FinishParallelAttack_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageAISample_C", "ExecuteUbergraph_MirageAISample");

	Params::AMirageAISample_C_ExecuteUbergraph_MirageAISample_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FinishParallelAttack_ReturnValue = CallFunc_FinishParallelAttack_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_targetActor = K2Node_Event_targetActor;
	Parms.CallFunc_FinishParallelAttack_ReturnValue1 = CallFunc_FinishParallelAttack_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDeadActor_ReturnValue = CallFunc_IsDeadActor_ReturnValue;
	Parms.CallFunc_AttackWeaponAuto_ReturnValue = CallFunc_AttackWeaponAuto_ReturnValue;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_param = K2Node_Event_param;
	Parms.CallFunc_PresetAI_ACT___________ReturnValue = CallFunc_PresetAI_ACT___________ReturnValue;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_AttackWeaponAuto_ReturnValue1 = CallFunc_AttackWeaponAuto_ReturnValue1;
	Parms.CallFunc_IsDeadActor_ReturnValue1 = CallFunc_IsDeadActor_ReturnValue1;
	Parms.CallFunc_IsSupportTarget_ReturnValue = CallFunc_IsSupportTarget_ReturnValue;
	Parms.CallFunc_FinishParallelAttack_ReturnValue2 = CallFunc_FinishParallelAttack_ReturnValue2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_AI_________BattleDistance = CallFunc_AI_________BattleDistance;
	Parms.CallFunc_ActionChase_ReturnValue = CallFunc_ActionChase_ReturnValue;
	Parms.CallFunc_NPC________Do_Routine = CallFunc_NPC________Do_Routine;
	Parms.CallFunc______________________ReturnValue = CallFunc______________________ReturnValue;
	Parms.CallFunc______________________ReturnDistance = CallFunc______________________ReturnDistance;
	Parms.CallFunc_BranchPercent_OutputYesNo = CallFunc_BranchPercent_OutputYesNo;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_GetEquippedWeaponRange_ReturnValue = CallFunc_GetEquippedWeaponRange_ReturnValue;
	Parms.CallFunc_GetEquippedWeaponRange_ReturnValue1 = CallFunc_GetEquippedWeaponRange_ReturnValue1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BranchPercent_OutputYesNo1 = CallFunc_BranchPercent_OutputYesNo1;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.CallFunc_ActionExchangeWeapon_ReturnValue = CallFunc_ActionExchangeWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common = K2Node_DynamicCast_AsTTLCharacter_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ActionExchangeWeapon_ReturnValue1 = CallFunc_ActionExchangeWeapon_ReturnValue1;
	Parms.CallFunc_CouldTake_ReturnValue = CallFunc_CouldTake_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common1 = K2Node_DynamicCast_AsTTLCharacter_Common1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_CouldTake_ReturnValue1 = CallFunc_CouldTake_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common2 = K2Node_DynamicCast_AsTTLCharacter_Common2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_CouldTake_ReturnValue2 = CallFunc_CouldTake_ReturnValue2;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common3 = K2Node_DynamicCast_AsTTLCharacter_Common3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_CouldTake_ReturnValue3 = CallFunc_CouldTake_ReturnValue3;
	Parms.CallFunc_ActionExchangeWeapon_ReturnValue2 = CallFunc_ActionExchangeWeapon_ReturnValue2;
	Parms.CallFunc_ActionExchangeWeapon_ReturnValue3 = CallFunc_ActionExchangeWeapon_ReturnValue3;
	Parms.CallFunc_FinishParallelAttack_ReturnValue3 = CallFunc_FinishParallelAttack_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


