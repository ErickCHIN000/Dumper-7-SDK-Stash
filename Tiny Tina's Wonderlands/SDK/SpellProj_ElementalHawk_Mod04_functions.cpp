#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C
// (Actor)

class UClass* ASpellProj_ElementalHawk_Mod04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellProj_ElementalHawk_Mod04_C");

	return Clss;
}


// SpellProj_ElementalHawk_Mod04_C SpellProj_ElementalHawk_Mod04.Default__SpellProj_ElementalHawk_Mod04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellProj_ElementalHawk_Mod04_C* ASpellProj_ElementalHawk_Mod04_C::GetDefaultObj()
{
	static class ASpellProj_ElementalHawk_Mod04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellProj_ElementalHawk_Mod04_C*>(ASpellProj_ElementalHawk_Mod04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.CauseHawkDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCauseDamageStatusEffectOverridesK2Node_MakeStruct_CauseDamageStatusEffectOverrides               (NoDestructor)

void ASpellProj_ElementalHawk_Mod04_C::CauseHawkDamage(const struct FHitResult& Temp_struct_Variable, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "CauseHawkDamage");

	Params::ASpellProj_ElementalHawk_Mod04_C_CauseHawkDamage_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_CauseDamageStatusEffectOverrides = K2Node_MakeStruct_CauseDamageStatusEffectOverrides;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.OnRep_EnableSingularity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::OnRep_EnableSingularity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "OnRep_EnableSingularity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.OnRep_SpellOwningMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::OnRep_SpellOwningMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "OnRep_SpellOwningMod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.SetupSpawnedActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 OwningSpell                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellProj_ElementalHawk_Mod04_C::SetupSpawnedActor(class AGrenadeMod* OwningSpell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "SetupSpawnedActor");

	Params::ASpellProj_ElementalHawk_Mod04_C_SetupSpawnedActor_Params Parms{};

	Parms.OwningSpell = OwningSpell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.StartSingularity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::StartSingularity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "StartSingularity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.StopSingularity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::StopSingularity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "StopSingularity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.SetupSingularity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::SetupSingularity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "SetupSingularity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_SpellProj_ElementalHawk_Mod04
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpellProj_ElementalHawk_Mod04_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_SpellProj_ElementalHawk_Mod04(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_SpellProj_ElementalHawk_Mod04");

	Params::ASpellProj_ElementalHawk_Mod04_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_SpellProj_ElementalHawk_Mod04_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.DamageReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_ElementalHawk_Mod04_C::DamageReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "DamageReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.OnHitWorld
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpellProj_ElementalHawk_Mod04_C::OnHitWorld(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "OnHitWorld");

	Params::ASpellProj_ElementalHawk_Mod04_C_OnHitWorld_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C.ExecuteUbergraph_SpellProj_ElementalHawk_Mod04
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGrenadeMod*                 K2Node_Event_OwningSpell                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FSingularityInitializationInfoK2Node_MakeStruct_SingularityInitializationInfo                  (None)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USingularityComponent*       CallFunc_CreateSingularity_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_StaticGetParticleEffect_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpellProj_ElementalHawk_Mod04_C::ExecuteUbergraph_SpellProj_ElementalHawk_Mod04(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class AGrenadeMod* K2Node_Event_OwningSpell, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, bool Temp_bool_IsClosed_Variable1, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, const struct FHitResult& K2Node_Event_Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_ElementalHawk_Mod04_C", "ExecuteUbergraph_SpellProj_ElementalHawk_Mod04");

	Params::ASpellProj_ElementalHawk_Mod04_C_ExecuteUbergraph_SpellProj_ElementalHawk_Mod04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.K2Node_Event_OwningSpell = K2Node_Event_OwningSpell;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_SingularityInitializationInfo = K2Node_MakeStruct_SingularityInitializationInfo;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.CallFunc_CreateSingularity_ReturnValue = CallFunc_CreateSingularity_ReturnValue;
	Parms.CallFunc_StaticGetParticleEffect_ReturnValue = CallFunc_StaticGetParticleEffect_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue = CallFunc_K2_EvaluateConditionType_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;

	UObject::ProcessEvent(Func, &Parms);

}

}


