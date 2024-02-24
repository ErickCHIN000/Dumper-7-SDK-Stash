#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_GTFO.Ability_GTFO_C
// (None)

class UClass* UAbility_GTFO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_GTFO_C");

	return Clss;
}


// Ability_GTFO_C Ability_GTFO.Default__Ability_GTFO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_GTFO_C* UAbility_GTFO_C::GetDefaultObj()
{
	static class UAbility_GTFO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_GTFO_C*>(UAbility_GTFO_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_GTFO.Ability_GTFO_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_GTFO_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_GTFO_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_GTFO.Ability_GTFO_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_GTFO_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_GTFO_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_GTFO.Ability_GTFO_C.GroundSlamDone
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails     Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_GTFO_C::GroundSlamDone(struct FGroundSlamEndedDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_GTFO_C", "GroundSlamDone");

	Params::UAbility_GTFO_C_GroundSlamDone_Params Parms{};

	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_GTFO.Ability_GTFO_C.ExecuteUbergraph_Ability_GTFO
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorAimViewPoint_OutLocation                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorAimViewPoint_OutRotation                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGroundSlamEndedDetails     K2Node_CustomEvent_Details                                       (ConstParm, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)

void UAbility_GTFO_C::ExecuteUbergraph_Ability_GTFO(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FGroundSlamEndedDetails& K2Node_CustomEvent_Details, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_GTFO_C", "ExecuteUbergraph_Ability_GTFO");

	Params::UAbility_GTFO_C_ExecuteUbergraph_Ability_GTFO_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorAimViewPoint_OutLocation = CallFunc_GetActorAimViewPoint_OutLocation;
	Parms.CallFunc_GetActorAimViewPoint_OutRotation = CallFunc_GetActorAimViewPoint_OutRotation;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}

}


