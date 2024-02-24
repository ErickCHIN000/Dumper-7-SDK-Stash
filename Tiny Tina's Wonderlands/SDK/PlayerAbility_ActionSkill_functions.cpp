#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C
// (None)

class UClass* UPlayerAbility_ActionSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_ActionSkill_C");

	return Clss;
}


// PlayerAbility_ActionSkill_C PlayerAbility_ActionSkill.Default__PlayerAbility_ActionSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_ActionSkill_C* UPlayerAbility_ActionSkill_C::GetDefaultObj()
{
	static class UPlayerAbility_ActionSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_ActionSkill_C*>(UPlayerAbility_ActionSkill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetOakCharacterPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AOakCharacter_Player*        Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_ActionSkill_C::GetOakCharacterPlayer(class AOakCharacter_Player** Res, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GetOakCharacterPlayer");

	Params::UPlayerAbility_ActionSkill_C_GetOakCharacterPlayer_Params Parms{};

	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetPlayerCharacterComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayerCharacterComponent*   Res                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GetPlayerCharacterComponent(class UPlayerCharacterComponent** Res, class UPlayerCharacterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GetPlayerCharacterComponent");

	Params::UPlayerAbility_ActionSkill_C_GetPlayerCharacterComponent_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkillHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_ActionSkill_C::HandleStopActionSkillHold(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "HandleStopActionSkillHold");

	Params::UPlayerAbility_ActionSkill_C_HandleStopActionSkillHold_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkillHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_ActionSkill_C::HandleStartActionSkillHold(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "HandleStartActionSkillHold");

	Params::UPlayerAbility_ActionSkill_C_HandleStartActionSkillHold_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_ActionSkill_C::HandleStopActionSkill(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "HandleStopActionSkill");

	Params::UPlayerAbility_ActionSkill_C_HandleStopActionSkill_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_ActionSkill_C::HandleStartActionSkill(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "HandleStartActionSkill");

	Params::UPlayerAbility_ActionSkill_C_HandleStartActionSkill_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetActionSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOakActionAbility*           Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GetActionSkill(class UOakActionAbility** Res, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GetActionSkill");

	Params::UPlayerAbility_ActionSkill_C_GetActionSkill_Params Parms{};

	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue = CallFunc_GetPrimaryActionAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_K2Node_GbxInputActionEvent_Discrete_15
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_action_skill_K2Node_GbxInputActionEvent_Discrete_15(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_action_skill_K2Node_GbxInputActionEvent_Discrete_15");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_K2Node_GbxInputActionEvent_Discrete_15_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_14
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_14(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_14");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_14_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_13
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_13(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_13");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_13_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_12
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_12(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_12");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_12_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_11
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_11(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_11");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_11_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_pre_action_skill_K2Node_GbxInputActionEvent_Discrete_10
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_pre_action_skill_K2Node_GbxInputActionEvent_Discrete_10(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_pre_action_skill_K2Node_GbxInputActionEvent_Discrete_10");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_pre_action_skill_K2Node_GbxInputActionEvent_Discrete_10_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_9
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_9(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_9");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_9_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_8
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_8(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_8");

	Params::UPlayerAbility_ActionSkill_C_GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_8_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.ExecuteUbergraph_PlayerAbility_ActionSkill
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        CallFunc_GetOakCharacterPlayer_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryStopSecondarySpell_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartSecondarySpell_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           CallFunc_GetActionSkill_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           CallFunc_GetActionSkill_Res1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           CallFunc_GetActionSkill_Res2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterComponent*   CallFunc_GetPlayerCharacterComponent_Res                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterComponent*   CallFunc_GetPlayerCharacterComponent_Res1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterComponent*   CallFunc_GetPlayerCharacterComponent_Res2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_ActionSkill_C::ExecuteUbergraph_PlayerAbility_ActionSkill(int32 EntryPoint, class AOakCharacter_Player* CallFunc_GetOakCharacterPlayer_Res, class FName K2Node_GbxInputActionEvent_Discrete_Action4, bool CallFunc_TryStopSecondarySpell_ReturnValue, bool CallFunc_TryStartSecondarySpell_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action3, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action2, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable1, class FName K2Node_GbxInputActionEvent_Discrete_Action5, class UOakActionAbility* CallFunc_GetActionSkill_Res, class UOakActionAbility* CallFunc_GetActionSkill_Res1, class UOakActionAbility* CallFunc_GetActionSkill_Res2, class FName K2Node_GbxInputActionEvent_Discrete_Action6, class UPlayerCharacterComponent* CallFunc_GetPlayerCharacterComponent_Res, class UPlayerCharacterComponent* CallFunc_GetPlayerCharacterComponent_Res1, class FName Temp_name_Variable2, class UPlayerCharacterComponent* CallFunc_GetPlayerCharacterComponent_Res2, class FName K2Node_GbxInputActionEvent_Discrete_Action7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_ActionSkill_C", "ExecuteUbergraph_PlayerAbility_ActionSkill");

	Params::UPlayerAbility_ActionSkill_C_ExecuteUbergraph_PlayerAbility_ActionSkill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOakCharacterPlayer_Res = CallFunc_GetOakCharacterPlayer_Res;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action4 = K2Node_GbxInputActionEvent_Discrete_Action4;
	Parms.CallFunc_TryStopSecondarySpell_ReturnValue = CallFunc_TryStopSecondarySpell_ReturnValue;
	Parms.CallFunc_TryStartSecondarySpell_ReturnValue = CallFunc_TryStartSecondarySpell_ReturnValue;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action3 = K2Node_GbxInputActionEvent_Discrete_Action3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action2 = K2Node_GbxInputActionEvent_Discrete_Action2;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action5 = K2Node_GbxInputActionEvent_Discrete_Action5;
	Parms.CallFunc_GetActionSkill_Res = CallFunc_GetActionSkill_Res;
	Parms.CallFunc_GetActionSkill_Res1 = CallFunc_GetActionSkill_Res1;
	Parms.CallFunc_GetActionSkill_Res2 = CallFunc_GetActionSkill_Res2;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action6 = K2Node_GbxInputActionEvent_Discrete_Action6;
	Parms.CallFunc_GetPlayerCharacterComponent_Res = CallFunc_GetPlayerCharacterComponent_Res;
	Parms.CallFunc_GetPlayerCharacterComponent_Res1 = CallFunc_GetPlayerCharacterComponent_Res1;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.CallFunc_GetPlayerCharacterComponent_Res2 = CallFunc_GetPlayerCharacterComponent_Res2;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action7 = K2Node_GbxInputActionEvent_Discrete_Action7;

	UObject::ProcessEvent(Func, &Parms);

}

}


