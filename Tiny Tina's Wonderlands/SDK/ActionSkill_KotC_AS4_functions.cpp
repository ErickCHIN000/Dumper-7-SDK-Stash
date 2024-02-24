#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C
// (None)

class UClass* UActionSkill_KotC_AS4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionSkill_KotC_AS4_C");

	return Clss;
}


// ActionSkill_KotC_AS4_C ActionSkill_KotC_AS4.Default__ActionSkill_KotC_AS4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionSkill_KotC_AS4_C* UActionSkill_KotC_AS4_C::GetDefaultObj()
{
	static class UActionSkill_KotC_AS4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionSkill_KotC_AS4_C*>(UActionSkill_KotC_AS4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.KnightOfTheClawGetHammerRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionSkill_KotC_AS4_C::KnightOfTheClawGetHammerRef(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "KnightOfTheClawGetHammerRef");

	Params::UActionSkill_KotC_AS4_C_KnightOfTheClawGetHammerRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.KnightOfTheClawRegisterHammer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Hammer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_KotC_AS4_C::KnightOfTheClawRegisterHammer(class AActor* Hammer, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "KnightOfTheClawRegisterHammer");

	Params::UActionSkill_KotC_AS4_C_KnightOfTheClawRegisterHammer_Params Parms{};

	Parms.Hammer = Hammer;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.OnRep_HideHammer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_KotC_AS4_C::OnRep_HideHammer(TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "OnRep_HideHammer");

	Params::UActionSkill_KotC_AS4_C_OnRep_HideHammer_Params Parms{};

	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCooldownRestartPercent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDurationPercent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UActionSkill_KotC_AS4_C::GetCooldownRestartPercent(float CallFunc_GetCooldownRestartPercent_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDurationPercent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "GetCooldownRestartPercent");

	Params::UActionSkill_KotC_AS4_C_GetCooldownRestartPercent_Params Parms{};

	Parms.CallFunc_GetCooldownRestartPercent_ReturnValue = CallFunc_GetCooldownRestartPercent_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetDurationPercent_ReturnValue = CallFunc_GetDurationPercent_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::OnStartActionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "OnStartActionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.OnActionAbilityRetrigger
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::OnActionAbilityRetrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "OnActionAbilityRetrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.KnightOfTheClawStartRecall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::KnightOfTheClawStartRecall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "KnightOfTheClawStartRecall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.HammerOnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UActionSkill_KotC_AS4_C::HammerOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "HammerOnCausedAnyDamage");

	Params::UActionSkill_KotC_AS4_C_HammerOnCausedAnyDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.KnightOfTheClawAllowHammerRecall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::KnightOfTheClawAllowHammerRecall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "KnightOfTheClawAllowHammerRecall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.OnStopActionAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::OnStopActionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "OnStopActionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.KotC_AS4_OnPlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS4_C::KotC_AS4_OnPlayerDied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "KotC_AS4_OnPlayerDied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C.ExecuteUbergraph_ActionSkill_KotC_AS4
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamageInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res1              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_KotC_AS4_C::ExecuteUbergraph_ActionSkill_KotC_AS4(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGbxAction* CallFunc_K2Play_ReturnValue, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class UClass* CallFunc_GetObjectClass_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool Temp_bool_Has_Been_Initd_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res, bool CallFunc_IsValid_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class UGbxAction* CallFunc_K2Play_ReturnValue1, class UGbxAbility* CallFunc_GetClassFeat_Res1, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS4_C", "ExecuteUbergraph_ActionSkill_KotC_AS4");

	Params::UActionSkill_KotC_AS4_C_ExecuteUbergraph_ActionSkill_KotC_AS4_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_DamageInstigator = K2Node_CustomEvent_DamageInstigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res = CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_K2Play_ReturnValue1 = CallFunc_K2Play_ReturnValue1;
	Parms.CallFunc_GetClassFeat_Res1 = CallFunc_GetClassFeat_Res1;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1 = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res1 = CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res1;

	UObject::ProcessEvent(Func, &Parms);

}

}


