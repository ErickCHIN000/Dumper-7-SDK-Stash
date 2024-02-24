#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFiringComponent_DrylsLegacy.BPFiringComponent_DrylsLegacy_C
// (None)

class UClass* UBPFiringComponent_DrylsLegacy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFiringComponent_DrylsLegacy_C");

	return Clss;
}


// BPFiringComponent_DrylsLegacy_C BPFiringComponent_DrylsLegacy.Default__BPFiringComponent_DrylsLegacy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFiringComponent_DrylsLegacy_C* UBPFiringComponent_DrylsLegacy_C::GetDefaultObj()
{
	static class UBPFiringComponent_DrylsLegacy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFiringComponent_DrylsLegacy_C*>(UBPFiringComponent_DrylsLegacy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFiringComponent_DrylsLegacy.BPFiringComponent_DrylsLegacy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPFiringComponent_DrylsLegacy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFiringComponent_DrylsLegacy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPFiringComponent_DrylsLegacy.BPFiringComponent_DrylsLegacy_C.Fire_BonusProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPFiringComponent_DrylsLegacy_C::Fire_BonusProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFiringComponent_DrylsLegacy_C", "Fire_BonusProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPFiringComponent_DrylsLegacy.BPFiringComponent_DrylsLegacy_C.UsedFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPFiringComponent_DrylsLegacy_C::UsedFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFiringComponent_DrylsLegacy_C", "UsedFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPFiringComponent_DrylsLegacy.BPFiringComponent_DrylsLegacy_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPFiringComponent_DrylsLegacy_C::ResetTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFiringComponent_DrylsLegacy_C", "ResetTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPFiringComponent_DrylsLegacy.BPFiringComponent_DrylsLegacy_C.ExecuteUbergraph_BPFiringComponent_DrylsLegacy
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakLightProjectileInitializationDataK2Node_MakeStruct_OakLightProjectileInitializationData           (ContainsInstancedReference)

void UBPFiringComponent_DrylsLegacy_C::ExecuteUbergraph_BPFiringComponent_DrylsLegacy(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_RandomFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFiringComponent_DrylsLegacy_C", "ExecuteUbergraph_BPFiringComponent_DrylsLegacy");

	Params::UBPFiringComponent_DrylsLegacy_C_ExecuteUbergraph_BPFiringComponent_DrylsLegacy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.K2Node_MakeStruct_OakLightProjectileInitializationData = K2Node_MakeStruct_OakLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}

}


