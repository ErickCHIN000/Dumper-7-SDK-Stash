#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterHandGun.OuterHandGun_C
// (Actor)

class UClass* AOuterHandGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterHandGun_C");

	return Clss;
}


// OuterHandGun_C OuterHandGun.Default__OuterHandGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterHandGun_C* AOuterHandGun_C::GetDefaultObj()
{
	static class AOuterHandGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterHandGun_C*>(AOuterHandGun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OuterHandGun.OuterHandGun_C.ChargeAttackEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::ChargeAttackEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ChargeAttackEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.ChargeAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::ChargeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ChargeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOuterHandGun_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ReceiveTick");

	Params::AOuterHandGun_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OuterHandGun.OuterHandGun_C.OnInputStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::OnInputStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "OnInputStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.OnInputEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::OnInputEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "OnInputEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.ExecuteAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::ExecuteAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ExecuteAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.ExtraActionOnDamaged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::ExtraActionOnDamaged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ExtraActionOnDamaged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.ReattachWeaponBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterHandGun_C::ReattachWeaponBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ReattachWeaponBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterHandGun.OuterHandGun_C.ExecuteUbergraph_OuterHandGun
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AOuterHandGun_C::ExecuteUbergraph_OuterHandGun(int32 EntryPoint, float CallFunc_GetFloatValue_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterHandGun_C", "ExecuteUbergraph_OuterHandGun");

	Params::AOuterHandGun_C_ExecuteUbergraph_OuterHandGun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


