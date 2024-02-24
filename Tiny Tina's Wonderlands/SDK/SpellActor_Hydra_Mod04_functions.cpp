#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Hydra_Mod04.SpellActor_Hydra_Mod04_C
// (Actor)

class UClass* ASpellActor_Hydra_Mod04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Hydra_Mod04_C");

	return Clss;
}


// SpellActor_Hydra_Mod04_C SpellActor_Hydra_Mod04.Default__SpellActor_Hydra_Mod04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Hydra_Mod04_C* ASpellActor_Hydra_Mod04_C::GetDefaultObj()
{
	static class ASpellActor_Hydra_Mod04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Hydra_Mod04_C*>(ASpellActor_Hydra_Mod04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Hydra_Mod04.SpellActor_Hydra_Mod04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_Mod04_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod04_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_Mod04.SpellActor_Hydra_Mod04_C.HydraMod04_OnCausedDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASpellActor_Hydra_Mod04_C::HydraMod04_OnCausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod04_C", "HydraMod04_OnCausedDeath");

	Params::ASpellActor_Hydra_Mod04_C_HydraMod04_OnCausedDeath_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Hydra_Mod04.SpellActor_Hydra_Mod04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_Mod04_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod04_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_Mod04.SpellActor_Hydra_Mod04_C.ExecuteUbergraph_SpellActor_Hydra_Mod04
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UOakDamageCauserComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_CustomEvent_Damaged                                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_CustomEvent_Details                                       (ConstParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotationFromAxes_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FStatusEffectQuery          K2Node_MakeStruct_StatusEffectQuery                              (NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// struct FStatusEffectQueryResult    CallFunc_QueryStatusEffect_ReturnValue                           (NoDestructor)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void ASpellActor_Hydra_Mod04_C::ExecuteUbergraph_SpellActor_Hydra_Mod04(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod04_C", "ExecuteUbergraph_SpellActor_Hydra_Mod04");

	Params::ASpellActor_Hydra_Mod04_C_ExecuteUbergraph_SpellActor_Hydra_Mod04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_Damaged = K2Node_CustomEvent_Damaged;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_MakeRotationFromAxes_ReturnValue = CallFunc_MakeRotationFromAxes_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectQuery = K2Node_MakeStruct_StatusEffectQuery;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_QueryStatusEffect_ReturnValue = CallFunc_QueryStatusEffect_ReturnValue;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


