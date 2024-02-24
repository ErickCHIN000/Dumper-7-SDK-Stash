#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C
// (None)

class UClass* UAbility_Melee_HiltMod_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Melee_HiltMod_Base_C");

	return Clss;
}


// Ability_Melee_HiltMod_Base_C Ability_Melee_HiltMod_Base.Default__Ability_Melee_HiltMod_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Melee_HiltMod_Base_C* UAbility_Melee_HiltMod_Base_C::GetDefaultObj()
{
	static class UAbility_Melee_HiltMod_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Melee_HiltMod_Base_C*>(UAbility_Melee_HiltMod_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.GetConsecutiveHits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Melee_HiltMod_Base_C::GetConsecutiveHits(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "GetConsecutiveHits");

	Params::UAbility_Melee_HiltMod_Base_C_GetConsecutiveHits_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.PlayHiltModFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Melee_HiltMod_Base_C::PlayHiltModFX(const struct FVector& Location, const struct FVector& Scale, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "PlayHiltModFX");

	Params::UAbility_Melee_HiltMod_Base_C_PlayHiltModFX_Params Parms{};

	Parms.Location = Location;
	Parms.Scale = Scale;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.SetConsecutiveHits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Melee_HiltMod_Base_C::SetConsecutiveHits(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "SetConsecutiveHits");

	Params::UAbility_Melee_HiltMod_Base_C_SetConsecutiveHits_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.IncrementConsecutiveHits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)

void UAbility_Melee_HiltMod_Base_C::IncrementConsecutiveHits(int32 CallFunc_Add_IntInt_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "IncrementConsecutiveHits");

	Params::UAbility_Melee_HiltMod_Base_C_IncrementConsecutiveHits_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Melee_HiltMod_Base_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.OnMeleeHit_HiltMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_HiltMod_Base_C::OnMeleeHit_HiltMod(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "OnMeleeHit_HiltMod");

	Params::UAbility_Melee_HiltMod_Base_C_OnMeleeHit_HiltMod_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Melee_HiltMod_Base_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.DoHiltMod_Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_HiltMod_Base_C::DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "DoHiltMod_Hit");

	Params::UAbility_Melee_HiltMod_Base_C_DoHiltMod_Hit_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.OnMeleeFinisher_HiltMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_HiltMod_Base_C::OnMeleeFinisher_HiltMod(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "OnMeleeFinisher_HiltMod");

	Params::UAbility_Melee_HiltMod_Base_C_OnMeleeFinisher_HiltMod_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.DoHiltMod_Finisher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_HiltMod_Base_C::DoHiltMod_Finisher(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "DoHiltMod_Finisher");

	Params::UAbility_Melee_HiltMod_Base_C_DoHiltMod_Finisher_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.OnMeleeXHit_HiltMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_HiltMod_Base_C::OnMeleeXHit_HiltMod(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "OnMeleeXHit_HiltMod");

	Params::UAbility_Melee_HiltMod_Base_C_OnMeleeXHit_HiltMod_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.DoHiltMod_XHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_HiltMod_Base_C::DoHiltMod_XHit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "DoHiltMod_XHit");

	Params::UAbility_Melee_HiltMod_Base_C_DoHiltMod_XHit_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.UnlockHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Melee_HiltMod_Base_C::UnlockHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "UnlockHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_Melee_HiltMod_Base_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "OnAbilityTimerEnded");

	Params::UAbility_Melee_HiltMod_Base_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C.ExecuteUbergraph_Ability_Melee_HiltMod_Base
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageInstigator2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType5                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource2                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details5                                      (ContainsInstancedReference)
// enum class ETeamAttitude           CallFunc_GetAttitudeTowardPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType4                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details4                                      (ContainsInstancedReference)
// class AActor*                      K2Node_CustomEvent_DamageInstigator1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType3                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details3                                      (ContainsInstancedReference)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType2                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details2                                      (ContainsInstancedReference)
// enum class ETeamAttitude           CallFunc_GetAttitudeTowardPlayer_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType1                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details1                                      (ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETeamAttitude           CallFunc_GetAttitudeTowardPlayer_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3         (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4         (NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5         (NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakAbilityTimerResult  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7         (NoDestructor)

void UAbility_Melee_HiltMod_Base_C::ExecuteUbergraph_Ability_Melee_HiltMod_Base(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamageInstigator2, float K2Node_CustomEvent_Damage2, class UGbxDamageType* K2Node_CustomEvent_DamageType5, class UDamageSource* K2Node_CustomEvent_DamageSource2, class AActor* K2Node_CustomEvent_DamagedActor5, const struct FCausedDamageDetails& K2Node_CustomEvent_Details5, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGbxDamageType* K2Node_CustomEvent_DamageType4, class AActor* K2Node_CustomEvent_DamagedActor4, const struct FCausedDamageDetails& K2Node_CustomEvent_Details4, class AActor* K2Node_CustomEvent_DamageInstigator1, float K2Node_CustomEvent_Damage1, class UGbxDamageType* K2Node_CustomEvent_DamageType3, class UDamageSource* K2Node_CustomEvent_DamageSource1, class AActor* K2Node_CustomEvent_DamagedActor3, const struct FCausedDamageDetails& K2Node_CustomEvent_Details3, class UGbxDamageType* K2Node_CustomEvent_DamageType2, class AActor* K2Node_CustomEvent_DamagedActor2, const struct FCausedDamageDetails& K2Node_CustomEvent_Details2, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue1, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType1, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor1, const struct FCausedDamageDetails& K2Node_CustomEvent_Details1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue2, class UGbxDamageType* K2Node_CustomEvent_DamageType, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_BooleanAND_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, bool CallFunc_BooleanAND_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5, bool Temp_bool_Variable3, enum class EOakAbilityTimerResult Temp_byte_Variable, bool K2Node_Select_Default, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_Base_C", "ExecuteUbergraph_Ability_Melee_HiltMod_Base");

	Params::UAbility_Melee_HiltMod_Base_C_ExecuteUbergraph_Ability_Melee_HiltMod_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DamageInstigator2 = K2Node_CustomEvent_DamageInstigator2;
	Parms.K2Node_CustomEvent_Damage2 = K2Node_CustomEvent_Damage2;
	Parms.K2Node_CustomEvent_DamageType5 = K2Node_CustomEvent_DamageType5;
	Parms.K2Node_CustomEvent_DamageSource2 = K2Node_CustomEvent_DamageSource2;
	Parms.K2Node_CustomEvent_DamagedActor5 = K2Node_CustomEvent_DamagedActor5;
	Parms.K2Node_CustomEvent_Details5 = K2Node_CustomEvent_Details5;
	Parms.CallFunc_GetAttitudeTowardPlayer_ReturnValue = CallFunc_GetAttitudeTowardPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_DamageType4 = K2Node_CustomEvent_DamageType4;
	Parms.K2Node_CustomEvent_DamagedActor4 = K2Node_CustomEvent_DamagedActor4;
	Parms.K2Node_CustomEvent_Details4 = K2Node_CustomEvent_Details4;
	Parms.K2Node_CustomEvent_DamageInstigator1 = K2Node_CustomEvent_DamageInstigator1;
	Parms.K2Node_CustomEvent_Damage1 = K2Node_CustomEvent_Damage1;
	Parms.K2Node_CustomEvent_DamageType3 = K2Node_CustomEvent_DamageType3;
	Parms.K2Node_CustomEvent_DamageSource1 = K2Node_CustomEvent_DamageSource1;
	Parms.K2Node_CustomEvent_DamagedActor3 = K2Node_CustomEvent_DamagedActor3;
	Parms.K2Node_CustomEvent_Details3 = K2Node_CustomEvent_Details3;
	Parms.K2Node_CustomEvent_DamageType2 = K2Node_CustomEvent_DamageType2;
	Parms.K2Node_CustomEvent_DamagedActor2 = K2Node_CustomEvent_DamagedActor2;
	Parms.K2Node_CustomEvent_Details2 = K2Node_CustomEvent_Details2;
	Parms.CallFunc_GetAttitudeTowardPlayer_ReturnValue1 = CallFunc_GetAttitudeTowardPlayer_ReturnValue1;
	Parms.K2Node_CustomEvent_DamageInstigator = K2Node_CustomEvent_DamageInstigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType1 = K2Node_CustomEvent_DamageType1;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamagedActor1 = K2Node_CustomEvent_DamagedActor1;
	Parms.K2Node_CustomEvent_Details1 = K2Node_CustomEvent_Details1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetAttitudeTowardPlayer_ReturnValue2 = CallFunc_GetAttitudeTowardPlayer_ReturnValue2;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7;

	UObject::ProcessEvent(Func, &Parms);

}

}


