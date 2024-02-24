#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C
// (Actor)

class UClass* ABP_CreatureCreatedObstacle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureCreatedObstacle_C");

	return Clss;
}


// BP_CreatureCreatedObstacle_C BP_CreatureCreatedObstacle.Default__BP_CreatureCreatedObstacle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureCreatedObstacle_C* ABP_CreatureCreatedObstacle_C::GetDefaultObj()
{
	static class ABP_CreatureCreatedObstacle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureCreatedObstacle_C*>(ABP_CreatureCreatedObstacle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.CanClimb
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_CreatureCreatedObstacle_C::CanClimb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "CanClimb");

	Params::ABP_CreatureCreatedObstacle_C_CanClimb_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.CanTraverse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_CreatureCreatedObstacle_C::CanTraverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "CanTraverse");

	Params::ABP_CreatureCreatedObstacle_C_CanTraverse_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.DamageActor
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              BaseDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayEffectCue>  GameplayCues                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTagValueContainer          AggregatedDamageTags                                             (Parm, OutParm)
// struct FTagValueContainer          CallFunc_Damage_Actor_Internal_OutTagValueContainer              (None)
// double                             CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TEMP_DamageRecieved_Damage_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::DamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast, double CallFunc_TEMP_DamageRecieved_Damage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "DamageActor");

	Params::ABP_CreatureCreatedObstacle_C_DamageActor_Params Parms{};

	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.BaseDamage = BaseDamage;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;
	Parms.GameplayCues = GameplayCues;
	Parms.CallFunc_Damage_Actor_Internal_OutTagValueContainer = CallFunc_Damage_Actor_Internal_OutTagValueContainer;
	Parms.CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast = CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast;
	Parms.CallFunc_TEMP_DamageRecieved_Damage_ImplicitCast = CallFunc_TEMP_DamageRecieved_Damage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (AggregatedDamageTags != nullptr)
		*AggregatedDamageTags = std::move(Parms.AggregatedDamageTags);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnDamageActor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              BaseDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayEffectCue>  GameplayCues                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTagValueContainer          AggregatedDamageTags                                             (Parm, OutParm)
// struct FTagValueContainer          CallFunc_Damage_Actor_Internal_OutTagValueContainer              (None)
// double                             CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnDamageActor");

	Params::ABP_CreatureCreatedObstacle_C_OnDamageActor_Params Parms{};

	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.BaseDamage = BaseDamage;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;
	Parms.GameplayCues = GameplayCues;
	Parms.CallFunc_Damage_Actor_Internal_OutTagValueContainer = CallFunc_Damage_Actor_Internal_OutTagValueContainer;
	Parms.CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast = CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (AggregatedDamageTags != nullptr)
		*AggregatedDamageTags = std::move(Parms.AggregatedDamageTags);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.GetHitResponseComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UHitResponseComponent*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UHitResponseComponent* ABP_CreatureCreatedObstacle_C::GetHitResponseComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "GetHitResponseComponent");

	Params::ABP_CreatureCreatedObstacle_C_GetHitResponseComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.GetVocalizationLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_CreatureCreatedObstacle_C::GetVocalizationLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "GetVocalizationLocation");

	Params::ABP_CreatureCreatedObstacle_C_GetVocalizationLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.GetDamageEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageEffect                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::GetDamageEffect(class UClass** DamageEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "GetDamageEffect");

	Params::ABP_CreatureCreatedObstacle_C_GetDamageEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageEffect != nullptr)
		*DamageEffect = Parms.DamageEffect;

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.GetRedirectedTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRedirect                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      RedirectedTarget                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "GetRedirectedTarget");

	Params::ABP_CreatureCreatedObstacle_C_GetRedirectedTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldRedirect != nullptr)
		*ShouldRedirect = Parms.ShouldRedirect;

	if (RedirectedTarget != nullptr)
		*RedirectedTarget = Parms.RedirectedTarget;

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.DeathLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::DeathLogic(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "DeathLogic");

	Params::ABP_CreatureCreatedObstacle_C_DeathLogic_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.CorpseCleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_C::CorpseCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "CorpseCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnRep_IsDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_C::OnRep_IsDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnRep_IsDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnDamageReceived
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_CreatureCreatedObstacle_C::OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnDamageReceived");

	Params::ABP_CreatureCreatedObstacle_C_OnDamageReceived_Params Parms{};

	Parms.Damage = Damage;
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnAnyAttributeChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnAnyAttributeChanged(struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnAnyAttributeChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnAnyAttributeChanged_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnBuildProgressChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnBuildProgressChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnBuildProgressChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnBuildProgressChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnCharacterOverWeight
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_C::OnCharacterOverWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnCharacterOverWeight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnCharacterUnderWeight
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_C::OnCharacterUnderWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnCharacterUnderWeight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnCharacterWeightChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnCharacterWeightChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnCharacterWeightChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnCharacterWeightChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnCharacterWeightMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnCharacterWeightMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnCharacterWeightMaxChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnCharacterWeightMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnCraftBuildPointsChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnCraftBuildPointsChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnCraftBuildPointsChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnCraftBuildPointsChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnCraftIntegrityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnCraftIntegrityChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnCraftIntegrityChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnCraftIntegrityChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnCraftQualityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnCraftQualityChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnCraftQualityChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnCraftQualityChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnEstateScoreChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnEstateScoreChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnEstateScoreChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnEstateScoreChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnFedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnFedChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnFedChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnFedChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnFedMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnFedMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnFedMaxChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnFedMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnFuelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnFuelChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnFuelChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnFuelChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnHealthChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnHealthChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnHealthChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnHealthChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnHealthMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnHealthMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnHealthMaxChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnHealthMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnHopeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnHopeChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnHopeChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnHopeChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnHopeMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnHopeMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnHopeMaxChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnHopeMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnHopeMinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnHopeMinChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnHopeMinChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnHopeMinChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnLoadoutLevelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnLoadoutLevelChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnLoadoutLevelChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnLoadoutLevelChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnMaxSpeedBonusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnMaxSpeedBonusChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnMaxSpeedBonusChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnMaxSpeedBonusChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnMaxSpeedRunChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnMaxSpeedRunChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnMaxSpeedRunChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnMaxSpeedRunChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnMaxSpeedWalkChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnMaxSpeedWalkChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnMaxSpeedWalkChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnMaxSpeedWalkChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnMaxSpeedWalkFastChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnMaxSpeedWalkFastChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnMaxSpeedWalkFastChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnMaxSpeedWalkFastChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnQuestScoreChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnQuestScoreChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnQuestScoreChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnQuestScoreChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnReachedMinSchematicTimeout
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_C::OnReachedMinSchematicTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnReachedMinSchematicTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnRestedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnRestedChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnRestedChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnRestedChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnRestedMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnRestedMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnRestedMaxChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnRestedMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnStaminaChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnStaminaChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnStaminaChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnStaminaChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnStaminaDepleted
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_C::OnStaminaDepleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnStaminaDepleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.OnStaminaMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::OnStaminaMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "OnStaminaMaxChanged");

	Params::ABP_CreatureCreatedObstacle_C_OnStaminaMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.TEMP_DamageRecieved
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageSource                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::TEMP_DamageRecieved(double Damage, class AActor* DamageSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "TEMP_DamageRecieved");

	Params::ABP_CreatureCreatedObstacle_C_TEMP_DamageRecieved_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageSource = DamageSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C.ExecuteUbergraph_BP_CreatureCreatedObstacle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Source                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_EffectTags                                          (ConstParm)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          K2Node_Event_TagValueContainer                                   (ConstParm)
// struct FGameplayAttribute          K2Node_Event_Attribute                                           (ConstParm, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1             (None)
// int32                              CallFunc_GetCurrentRealmPower_RealmPower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAtMinHealth_AtMinHealth                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageSource                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_InfluenceMultiplier_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_C::ExecuteUbergraph_BP_CreatureCreatedObstacle(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, const struct FGameplayAttribute& K2Node_Event_Attribute, float K2Node_Event_Delta_24, float K2Node_Event_Delta_23, float K2Node_Event_Delta_22, float K2Node_Event_Delta_21, float K2Node_Event_Delta_20, float K2Node_Event_Delta_19, float K2Node_Event_Delta_18, float K2Node_Event_Delta_17, float K2Node_Event_Delta_16, float K2Node_Event_Delta_15, float K2Node_Event_Delta_14, float K2Node_Event_Delta_13, float K2Node_Event_Delta_12, float K2Node_Event_Delta_11, float K2Node_Event_Delta_10, float K2Node_Event_Delta_9, float K2Node_Event_Delta_8, float K2Node_Event_Delta_7, float K2Node_Event_Delta_6, float K2Node_Event_Delta_5, float K2Node_Event_Delta_4, float K2Node_Event_Delta_3, float K2Node_Event_Delta_2, float K2Node_Event_Delta_1, float K2Node_Event_Delta, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAtMinHealth_AtMinHealth, double K2Node_CustomEvent_Damage, class AActor* K2Node_CustomEvent_DamageSource, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_VariableSet_InfluenceMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_C", "ExecuteUbergraph_BP_CreatureCreatedObstacle");

	Params::ABP_CreatureCreatedObstacle_C_ExecuteUbergraph_BP_CreatureCreatedObstacle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Source = K2Node_Event_Source;
	Parms.K2Node_Event_EffectTags = K2Node_Event_EffectTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_TagValueContainer = K2Node_Event_TagValueContainer;
	Parms.K2Node_Event_Attribute = K2Node_Event_Attribute;
	Parms.K2Node_Event_Delta_24 = K2Node_Event_Delta_24;
	Parms.K2Node_Event_Delta_23 = K2Node_Event_Delta_23;
	Parms.K2Node_Event_Delta_22 = K2Node_Event_Delta_22;
	Parms.K2Node_Event_Delta_21 = K2Node_Event_Delta_21;
	Parms.K2Node_Event_Delta_20 = K2Node_Event_Delta_20;
	Parms.K2Node_Event_Delta_19 = K2Node_Event_Delta_19;
	Parms.K2Node_Event_Delta_18 = K2Node_Event_Delta_18;
	Parms.K2Node_Event_Delta_17 = K2Node_Event_Delta_17;
	Parms.K2Node_Event_Delta_16 = K2Node_Event_Delta_16;
	Parms.K2Node_Event_Delta_15 = K2Node_Event_Delta_15;
	Parms.K2Node_Event_Delta_14 = K2Node_Event_Delta_14;
	Parms.K2Node_Event_Delta_13 = K2Node_Event_Delta_13;
	Parms.K2Node_Event_Delta_12 = K2Node_Event_Delta_12;
	Parms.K2Node_Event_Delta_11 = K2Node_Event_Delta_11;
	Parms.K2Node_Event_Delta_10 = K2Node_Event_Delta_10;
	Parms.K2Node_Event_Delta_9 = K2Node_Event_Delta_9;
	Parms.K2Node_Event_Delta_8 = K2Node_Event_Delta_8;
	Parms.K2Node_Event_Delta_7 = K2Node_Event_Delta_7;
	Parms.K2Node_Event_Delta_6 = K2Node_Event_Delta_6;
	Parms.K2Node_Event_Delta_5 = K2Node_Event_Delta_5;
	Parms.K2Node_Event_Delta_4 = K2Node_Event_Delta_4;
	Parms.K2Node_Event_Delta_3 = K2Node_Event_Delta_3;
	Parms.K2Node_Event_Delta_2 = K2Node_Event_Delta_2;
	Parms.K2Node_Event_Delta_1 = K2Node_Event_Delta_1;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_GetCurrentRealmPower_RealmPower = CallFunc_GetCurrentRealmPower_RealmPower;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAtMinHealth_AtMinHealth = CallFunc_IsAtMinHealth_AtMinHealth;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.K2Node_VariableSet_InfluenceMultiplier_ImplicitCast = K2Node_VariableSet_InfluenceMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


