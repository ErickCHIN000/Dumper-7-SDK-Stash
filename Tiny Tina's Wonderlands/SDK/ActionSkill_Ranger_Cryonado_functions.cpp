#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C
// (None)

class UClass* UActionSkill_Ranger_Cryonado_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionSkill_Ranger_Cryonado_C");

	return Clss;
}


// ActionSkill_Ranger_Cryonado_C ActionSkill_Ranger_Cryonado.Default__ActionSkill_Ranger_Cryonado_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionSkill_Ranger_Cryonado_C* UActionSkill_Ranger_Cryonado_C::GetDefaultObj()
{
	static class UActionSkill_Ranger_Cryonado_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionSkill_Ranger_Cryonado_C*>(UActionSkill_Ranger_Cryonado_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCooldownRestartPercent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UActionSkill_Ranger_Cryonado_C::GetCooldownRestartPercent(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetCooldownRestartPercent_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "GetCooldownRestartPercent");

	Params::UActionSkill_Ranger_Cryonado_C_GetCooldownRestartPercent_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetCooldownRestartPercent_ReturnValue = CallFunc_GetCooldownRestartPercent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.OnDialogSequenceFinished_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Ranger_Cryonado_C::OnDialogSequenceFinished_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "OnDialogSequenceFinished_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.BeginSpawningTornados
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Ranger_Cryonado_C::BeginSpawningTornados()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "BeginSpawningTornados");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Ranger_Cryonado_C::OnStartActionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "OnStartActionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.CryonadoFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Ranger_Cryonado_C::CryonadoFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "CryonadoFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Ranger_Cryonado_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Ranger_Cryonado_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C.ExecuteUbergraph_ActionSkill_Ranger_Cryonado
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)

void UActionSkill_Ranger_Cryonado_C::ExecuteUbergraph_ActionSkill_Ranger_Cryonado(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Ranger_Cryonado_C", "ExecuteUbergraph_ActionSkill_Ranger_Cryonado");

	Params::UActionSkill_Ranger_Cryonado_C_ExecuteUbergraph_ActionSkill_Ranger_Cryonado_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


