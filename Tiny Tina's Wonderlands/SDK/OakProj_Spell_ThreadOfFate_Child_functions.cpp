#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OakProj_Spell_ThreadOfFate_Child.OakProj_Spell_ThreadOfFate_Child_C
// (Actor)

class UClass* AOakProj_Spell_ThreadOfFate_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OakProj_Spell_ThreadOfFate_Child_C");

	return Clss;
}


// OakProj_Spell_ThreadOfFate_Child_C OakProj_Spell_ThreadOfFate_Child.Default__OakProj_Spell_ThreadOfFate_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOakProj_Spell_ThreadOfFate_Child_C* AOakProj_Spell_ThreadOfFate_Child_C::GetDefaultObj()
{
	static class AOakProj_Spell_ThreadOfFate_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOakProj_Spell_ThreadOfFate_Child_C*>(AOakProj_Spell_ThreadOfFate_Child_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OakProj_Spell_ThreadOfFate_Child.OakProj_Spell_ThreadOfFate_Child_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AOakProj_Spell_ThreadOfFate_Child_C::UserConstructionScript(bool CallFunc_RandomBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_ThreadOfFate_Child_C", "UserConstructionScript");

	Params::AOakProj_Spell_ThreadOfFate_Child_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakProj_Spell_ThreadOfFate_Child.OakProj_Spell_ThreadOfFate_Child_C.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOakProj_Spell_ThreadOfFate_Child_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_ThreadOfFate_Child_C", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_ThreadOfFate_Child.OakProj_Spell_ThreadOfFate_Child_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOakProj_Spell_ThreadOfFate_Child_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_ThreadOfFate_Child_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_ThreadOfFate_Child.OakProj_Spell_ThreadOfFate_Child_C.UpdateHomingTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AOakProj_Spell_ThreadOfFate_Child_C::UpdateHomingTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_ThreadOfFate_Child_C", "UpdateHomingTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_ThreadOfFate_Child.OakProj_Spell_ThreadOfFate_Child_C.ExecuteUbergraph_OakProj_Spell_ThreadOfFate_Child
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightBeamQueryData         K2Node_MakeStruct_LightBeamQueryData                             (NoDestructor)
// class UParticleSystemComponent*    CallFunc_PlayExplosion_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomPointInBoundingBox_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceBetweenVectors_Distance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)

void AOakProj_Spell_ThreadOfFate_Child_C::ExecuteUbergraph_OakProj_Spell_ThreadOfFate_Child(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLightBeamQueryData& K2Node_MakeStruct_LightBeamQueryData, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCompanionTargetingSocket_Socket, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_GetDistanceBetweenVectors_Distance, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_ThreadOfFate_Child_C", "ExecuteUbergraph_OakProj_Spell_ThreadOfFate_Child");

	Params::AOakProj_Spell_ThreadOfFate_Child_C_ExecuteUbergraph_OakProj_Spell_ThreadOfFate_Child_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_LightBeamQueryData = K2Node_MakeStruct_LightBeamQueryData;
	Parms.CallFunc_PlayExplosion_ReturnValue = CallFunc_PlayExplosion_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomPointInBoundingBox_ReturnValue = CallFunc_RandomPointInBoundingBox_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetDistanceBetweenVectors_Distance = CallFunc_GetDistanceBetweenVectors_Distance;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


