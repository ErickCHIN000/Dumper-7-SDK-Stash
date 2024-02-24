#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _ActionSkill_Parent._ActionSkill_Parent_C
// (None)

class UClass* U_ActionSkill_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_ActionSkill_Parent_C");

	return Clss;
}


// _ActionSkill_Parent_C _ActionSkill_Parent.Default___ActionSkill_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_ActionSkill_Parent_C* U_ActionSkill_Parent_C::GetDefaultObj()
{
	static class U_ActionSkill_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_ActionSkill_Parent_C*>(U_ActionSkill_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.ShouldAbortActivation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// uint8                              OutAbortCode                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_ShouldAbortActivation_OutAbortCode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldAbortActivation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCastingSpell_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool U_ActionSkill_Parent_C::ShouldAbortActivation(uint8* OutAbortCode, uint8 CallFunc_ShouldAbortActivation_OutAbortCode, bool CallFunc_ShouldAbortActivation_ReturnValue, bool CallFunc_IsCastingSpell_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "ShouldAbortActivation");

	Params::U_ActionSkill_Parent_C_ShouldAbortActivation_Params Parms{};

	Parms.CallFunc_ShouldAbortActivation_OutAbortCode = CallFunc_ShouldAbortActivation_OutAbortCode;
	Parms.CallFunc_ShouldAbortActivation_ReturnValue = CallFunc_ShouldAbortActivation_ReturnValue;
	Parms.CallFunc_IsCastingSpell_ReturnValue = CallFunc_IsCastingSpell_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAbortCode != nullptr)
		*OutAbortCode = Parms.OutAbortCode;

	return Parms.ReturnValue;

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.UnpauseActionSkillDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_ActionSkill_Parent_C::UnpauseActionSkillDuration(bool* Res, bool CallFunc_RemoveAttributeModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "UnpauseActionSkillDuration");

	Params::U_ActionSkill_Parent_C_UnpauseActionSkillDuration_Params Parms{};

	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.PauseActionSkillDuration
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_ActionSkill_Parent_C::PauseActionSkillDuration(bool* Res, bool CallFunc_RemoveAttributeModifier_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "PauseActionSkillDuration");

	Params::U_ActionSkill_Parent_C_PauseActionSkillDuration_Params Parms{};

	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult = CallFunc_AddModifierToGbxAttribute_ModifierActionResult;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue = CallFunc_AddModifierToGbxAttribute_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.FindAllCompanions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Res                                                              (Parm, OutParm, ZeroConstructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_ActionSkill_Parent_C::FindAllCompanions(TArray<class AActor*>* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "FindAllCompanions");

	Params::U_ActionSkill_Parent_C_FindAllCompanions_Params Parms{};

	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.FindAllPlayerCharacters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Res                                                              (Parm, OutParm, ZeroConstructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_ActionSkill_Parent_C::FindAllPlayerCharacters(TArray<class AActor*>* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "FindAllPlayerCharacters");

	Params::U_ActionSkill_Parent_C_FindAllPlayerCharacters_Params Parms{};

	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.HandleActionSkillEndedEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_ActionSkill_Parent_C::HandleActionSkillEndedEvents(class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "HandleActionSkillEndedEvents");

	Params::U_ActionSkill_Parent_C_HandleActionSkillEndedEvents_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.HandleActionSkillStartedEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void U_ActionSkill_Parent_C::HandleActionSkillStartedEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "HandleActionSkillStartedEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.InitActionSkillResourcePools
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_EvaluateAttributeInitializationData_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateAttributeInitializationData_ReturnValue1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue                   (None)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue1                  (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_ActionSkill_Parent_C::InitActionSkillResourcePools(float CallFunc_EvaluateAttributeInitializationData_ReturnValue, float CallFunc_EvaluateAttributeInitializationData_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_RemoveAttributeModifier_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue1, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "InitActionSkillResourcePools");

	Params::U_ActionSkill_Parent_C_InitActionSkillResourcePools_Params Parms{};

	Parms.CallFunc_EvaluateAttributeInitializationData_ReturnValue = CallFunc_EvaluateAttributeInitializationData_ReturnValue;
	Parms.CallFunc_EvaluateAttributeInitializationData_ReturnValue1 = CallFunc_EvaluateAttributeInitializationData_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue1 = CallFunc_RemoveAttributeModifier_ReturnValue1;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult = CallFunc_AddModifierToGbxAttribute_ModifierActionResult;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue = CallFunc_AddModifierToGbxAttribute_ReturnValue;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult1 = CallFunc_AddModifierToGbxAttribute_ModifierActionResult1;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue1 = CallFunc_AddModifierToGbxAttribute_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void U_ActionSkill_Parent_C::OnStartActionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "OnStartActionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.OnCoolingDown
// (Event, Protected, BlueprintEvent)
// Parameters:

void U_ActionSkill_Parent_C::OnCoolingDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "OnCoolingDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void U_ActionSkill_Parent_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.OnAbilitySlotted
// (Event, Public, BlueprintEvent)
// Parameters:

void U_ActionSkill_Parent_C::OnAbilitySlotted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "OnAbilitySlotted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _ActionSkill_Parent._ActionSkill_Parent_C.ExecuteUbergraph__ActionSkill_Parent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityManagerComponent*K2Node_DynamicCast_AsOak_Player_Ability_Manager_Component        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_ActionSkill_Parent_C::ExecuteUbergraph__ActionSkill_Parent(int32 EntryPoint, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, class UOakPlayerAbilityManagerComponent* K2Node_DynamicCast_AsOak_Player_Ability_Manager_Component, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_ActionSkill_Parent_C", "ExecuteUbergraph__ActionSkill_Parent");

	Params::U_ActionSkill_Parent_C_ExecuteUbergraph__ActionSkill_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOak_Player_Ability_Manager_Component = K2Node_DynamicCast_AsOak_Player_Ability_Manager_Component;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


