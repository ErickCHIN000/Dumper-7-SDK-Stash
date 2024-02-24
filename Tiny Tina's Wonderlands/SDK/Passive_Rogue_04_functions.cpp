#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Rogue_04.Passive_Rogue_04_C
// (None)

class UClass* UPassive_Rogue_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Rogue_04_C");

	return Clss;
}


// Passive_Rogue_04_C Passive_Rogue_04.Default__Passive_Rogue_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Rogue_04_C* UPassive_Rogue_04_C::GetDefaultObj()
{
	static class UPassive_Rogue_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Rogue_04_C*>(UPassive_Rogue_04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Rogue_04.Passive_Rogue_04_C.OakPassiveOnCausedAnyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UPassive_Rogue_04_C::OakPassiveOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_04_C", "OakPassiveOnCausedAnyDamage");

	Params::UPassive_Rogue_04_C_OakPassiveOnCausedAnyDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Rogue_04.Passive_Rogue_04_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Rogue_04_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_04_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Rogue_04.Passive_Rogue_04_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Rogue_04_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_04_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Rogue_04.Passive_Rogue_04_C.ExecuteUbergraph_Passive_Rogue_04
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageInstigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_Event_DamageSource                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_Event_Details                                             (ContainsInstancedReference)
// bool                               CallFunc_Compare_Damage_Source_Equal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UPassive_Rogue_04_C::ExecuteUbergraph_Passive_Rogue_04(int32 EntryPoint, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_04_C", "ExecuteUbergraph_Passive_Rogue_04");

	Params::UPassive_Rogue_04_C_ExecuteUbergraph_Passive_Rogue_04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DamageInstigator = K2Node_Event_DamageInstigator;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_DamageSource = K2Node_Event_DamageSource;
	Parms.K2Node_Event_DamagedActor = K2Node_Event_DamagedActor;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.CallFunc_Compare_Damage_Source_Equal = CallFunc_Compare_Damage_Source_Equal;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal = CallFunc_Compare_Damage_Source_Not_Equal;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


