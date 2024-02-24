#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C
// (None)

class UClass* URune_Weapon_HammerAndChisel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_Weapon_HammerAndChisel_C");

	return Clss;
}


// Rune_Weapon_HammerAndChisel_C Rune_Weapon_HammerAndChisel.Default__Rune_Weapon_HammerAndChisel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_Weapon_HammerAndChisel_C* URune_Weapon_HammerAndChisel_C::GetDefaultObj()
{
	static class URune_Weapon_HammerAndChisel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_Weapon_HammerAndChisel_C*>(URune_Weapon_HammerAndChisel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.GetChiselMiasmSpawnTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

struct FTransform URune_Weapon_HammerAndChisel_C::GetChiselMiasmSpawnTransform(const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "GetChiselMiasmSpawnTransform");

	Params::URune_Weapon_HammerAndChisel_C_GetChiselMiasmSpawnTransform_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.GetX%_Percentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_Weapon_HammerAndChisel_C::GetX__Percentage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "GetX%_Percentage");

	Params::URune_Weapon_HammerAndChisel_C_GetX__Percentage_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.GetX_Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_Weapon_HammerAndChisel_C::GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "GetX_Value");

	Params::URune_Weapon_HammerAndChisel_C_GetX_Value_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.InfinityHammer_OnEnemyHit_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::InfinityHammer_OnEnemyHit_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "InfinityHammer_OnEnemyHit_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.InfinityHammer_OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Weapon_HammerAndChisel_C::InfinityHammer_OnEnemyHit(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "InfinityHammer_OnEnemyHit");

	Params::URune_Weapon_HammerAndChisel_C_InfinityHammer_OnEnemyHit_Params Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.OnSuper_1_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::OnSuper_1_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "OnSuper_1_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.OnSuper_1_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::OnSuper_1_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "OnSuper_1_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.OnSuper_2_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::OnSuper_2_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "OnSuper_2_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.OnSuper_2_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::OnSuper_2_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "OnSuper_2_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.ChiselMiasm_OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Weapon_HammerAndChisel_C::ChiselMiasm_OnEnemyHit(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "ChiselMiasm_OnEnemyHit");

	Params::URune_Weapon_HammerAndChisel_C_ChiselMiasm_OnEnemyHit_Params Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.ChiselMiasm_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::ChiselMiasm_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "ChiselMiasm_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.OnHittingEnemyWithDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Weapon_HammerAndChisel_C::OnHittingEnemyWithDamage(float Damage, class AActor* Actor, class FName Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "OnHittingEnemyWithDamage");

	Params::URune_Weapon_HammerAndChisel_C_OnHittingEnemyWithDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.Actor = Actor;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.OnHittingEnemyWithDamage_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_HammerAndChisel_C::OnHittingEnemyWithDamage_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "OnHittingEnemyWithDamage_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C.ExecuteUbergraph_Rune_Weapon_HammerAndChisel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX__Percentage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX__Percentage_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasKilledThisFrame_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_HitActor_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Hammer_SpecialEffect_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX__Percentage_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetX__Percentage_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX__Percentage_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX__Percentage_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_HitActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasKilledThisFrame_bYes_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_GetChiselMiasmSpawnTransform_ReturnValue                (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX__Percentage_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ChiselMiasm_C*           CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX_Value_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Socket                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX__Percentage_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX_Value_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHealPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_Weapon_HammerAndChisel_C::ExecuteUbergraph_Rune_Weapon_HammerAndChisel(int32 EntryPoint, float CallFunc_GetX__Percentage_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, float CallFunc_GetX_Value_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes, class AActor* K2Node_CustomEvent_HitActor_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_Hammer_SpecialEffect_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetX__Percentage_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetX__Percentage_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetX__Percentage_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_NameName_ReturnValue, class AActor* K2Node_CustomEvent_HitActor, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_WasKilledThisFrame_bYes_1, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTransform& CallFunc_GetChiselMiasmSpawnTransform_ReturnValue, float CallFunc_GetX_Value_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, float CallFunc_GetX__Percentage_ReturnValue_6, class ABP_ChiselMiasm_C* CallFunc_FinishSpawningActor_ReturnValue_1, float CallFunc_GetX_Value_ReturnValue_2, float K2Node_CustomEvent_Damage, class AActor* K2Node_CustomEvent_Actor, class FName K2Node_CustomEvent_Socket, float CallFunc_GetX__Percentage_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetX_Value_ReturnValue_3, float CallFunc_FClamp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanHealPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_HammerAndChisel_C", "ExecuteUbergraph_Rune_Weapon_HammerAndChisel");

	Params::URune_Weapon_HammerAndChisel_C_ExecuteUbergraph_Rune_Weapon_HammerAndChisel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetX__Percentage_ReturnValue = CallFunc_GetX__Percentage_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_GetX__Percentage_ReturnValue_1 = CallFunc_GetX__Percentage_ReturnValue_1;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue_1 = CallFunc_RandomBoolWithWeight_ReturnValue_1;
	Parms.CallFunc_GetX_Value_ReturnValue = CallFunc_GetX_Value_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_WasKilledThisFrame_bYes = CallFunc_WasKilledThisFrame_bYes;
	Parms.K2Node_CustomEvent_HitActor_1 = K2Node_CustomEvent_HitActor_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetX__Percentage_ReturnValue_2 = CallFunc_GetX__Percentage_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetX__Percentage_ReturnValue_3 = CallFunc_GetX__Percentage_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetX__Percentage_ReturnValue_4 = CallFunc_GetX__Percentage_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_GetX__Percentage_ReturnValue_5 = CallFunc_GetX__Percentage_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_HitActor = K2Node_CustomEvent_HitActor;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_WasKilledThisFrame_bYes_1 = CallFunc_WasKilledThisFrame_bYes_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetChiselMiasmSpawnTransform_ReturnValue = CallFunc_GetChiselMiasmSpawnTransform_ReturnValue;
	Parms.CallFunc_GetX_Value_ReturnValue_1 = CallFunc_GetX_Value_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_GetX__Percentage_ReturnValue_6 = CallFunc_GetX__Percentage_ReturnValue_6;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetX_Value_ReturnValue_2 = CallFunc_GetX_Value_ReturnValue_2;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_Socket = K2Node_CustomEvent_Socket;
	Parms.CallFunc_GetX__Percentage_ReturnValue_7 = CallFunc_GetX__Percentage_ReturnValue_7;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetX_Value_ReturnValue_3 = CallFunc_GetX_Value_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_DynamicCast_AsEnemy_Character_1 = K2Node_DynamicCast_AsEnemy_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanHealPlayer_ReturnValue = CallFunc_CanHealPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


