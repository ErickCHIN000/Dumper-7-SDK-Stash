#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadiateDamageActor_Fissure_JaggedTooth.RadiateDamageActor_Fissure_JaggedTooth_C
// (Actor)

class UClass* ARadiateDamageActor_Fissure_JaggedTooth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadiateDamageActor_Fissure_JaggedTooth_C");

	return Clss;
}


// RadiateDamageActor_Fissure_JaggedTooth_C RadiateDamageActor_Fissure_JaggedTooth.Default__RadiateDamageActor_Fissure_JaggedTooth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadiateDamageActor_Fissure_JaggedTooth_C* ARadiateDamageActor_Fissure_JaggedTooth_C::GetDefaultObj()
{
	static class ARadiateDamageActor_Fissure_JaggedTooth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadiateDamageActor_Fissure_JaggedTooth_C*>(ARadiateDamageActor_Fissure_JaggedTooth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadiateDamageActor_Fissure_JaggedTooth.RadiateDamageActor_Fissure_JaggedTooth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ARadiateDamageActor_Fissure_JaggedTooth_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_JaggedTooth_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiateDamageActor_Fissure_JaggedTooth.RadiateDamageActor_Fissure_JaggedTooth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARadiateDamageActor_Fissure_JaggedTooth_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_JaggedTooth_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiateDamageActor_Fissure_JaggedTooth.RadiateDamageActor_Fissure_JaggedTooth_C.Event_SpawnMine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARadiateDamageActor_Fissure_JaggedTooth_C::Event_SpawnMine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_JaggedTooth_C", "Event_SpawnMine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiateDamageActor_Fissure_JaggedTooth.RadiateDamageActor_Fissure_JaggedTooth_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARadiateDamageActor_Fissure_JaggedTooth_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_JaggedTooth_C", "ReceiveEndPlay");

	Params::ARadiateDamageActor_Fissure_JaggedTooth_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadiateDamageActor_Fissure_JaggedTooth.RadiateDamageActor_Fissure_JaggedTooth_C.ExecuteUbergraph_RadiateDamageActor_Fissure_JaggedTooth
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetSpellModRadius_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellStatusEffectDamage_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellStatusEffectChance_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellModDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakLightProjectileInitializationDataK2Node_MakeStruct_OakLightProjectileInitializationData           (ContainsInstancedReference)
// float                              CallFunc_GetSpellModRadius_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellStatusEffectDamage_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellStatusEffectChance_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellModDamage_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCauseDamageStatusEffectOverridesK2Node_MakeStruct_CauseDamageStatusEffectOverrides               (NoDestructor)

void ARadiateDamageActor_Fissure_JaggedTooth_C::ExecuteUbergraph_RadiateDamageActor_Fissure_JaggedTooth(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, const struct FHitResult& Temp_struct_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetSpellModRadius_ReturnValue, float CallFunc_GetSpellStatusEffectDamage_ReturnValue, float CallFunc_GetSpellStatusEffectChance_ReturnValue, float CallFunc_GetSpellModDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, bool Temp_bool_Variable1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, float CallFunc_GetSpellModRadius_ReturnValue1, float CallFunc_GetSpellStatusEffectDamage_ReturnValue1, float CallFunc_GetSpellStatusEffectChance_ReturnValue1, float CallFunc_GetSpellModDamage_ReturnValue1, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_JaggedTooth_C", "ExecuteUbergraph_RadiateDamageActor_Fissure_JaggedTooth");

	Params::ARadiateDamageActor_Fissure_JaggedTooth_C_ExecuteUbergraph_RadiateDamageActor_Fissure_JaggedTooth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetSpellModRadius_ReturnValue = CallFunc_GetSpellModRadius_ReturnValue;
	Parms.CallFunc_GetSpellStatusEffectDamage_ReturnValue = CallFunc_GetSpellStatusEffectDamage_ReturnValue;
	Parms.CallFunc_GetSpellStatusEffectChance_ReturnValue = CallFunc_GetSpellStatusEffectChance_ReturnValue;
	Parms.CallFunc_GetSpellModDamage_ReturnValue = CallFunc_GetSpellModDamage_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_MakeStruct_OakLightProjectileInitializationData = K2Node_MakeStruct_OakLightProjectileInitializationData;
	Parms.CallFunc_GetSpellModRadius_ReturnValue1 = CallFunc_GetSpellModRadius_ReturnValue1;
	Parms.CallFunc_GetSpellStatusEffectDamage_ReturnValue1 = CallFunc_GetSpellStatusEffectDamage_ReturnValue1;
	Parms.CallFunc_GetSpellStatusEffectChance_ReturnValue1 = CallFunc_GetSpellStatusEffectChance_ReturnValue1;
	Parms.CallFunc_GetSpellModDamage_ReturnValue1 = CallFunc_GetSpellModDamage_ReturnValue1;
	Parms.K2Node_MakeStruct_CauseDamageStatusEffectOverrides = K2Node_MakeStruct_CauseDamageStatusEffectOverrides;

	UObject::ProcessEvent(Func, &Parms);

}

}


