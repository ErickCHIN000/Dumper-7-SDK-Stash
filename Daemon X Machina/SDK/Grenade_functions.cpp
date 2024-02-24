#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade.Grenade_C
// (Actor)

class UClass* AGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_C");

	return Clss;
}


// Grenade_C Grenade.Default__Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenade_C* AGrenade_C::GetDefaultObj()
{
	static class AGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenade_C*>(AGrenade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Grenade.Grenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGrenade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenade.Grenade_C.OnInputStartBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGrenade_C::OnInputStartBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_C", "OnInputStartBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenade.Grenade_C.OnInputEndBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGrenade_C::OnInputEndBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_C", "OnInputEndBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenade.Grenade_C.ExecuteUbergraph_Grenade
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArsenalCatchableActorMovement_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArsenalCatchableActorMovement_C*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryStartAim_isStartAim                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCatchGrenadeEitherHand_Succeed                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGrenade_C::ExecuteUbergraph_Grenade(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UArsenalCatchableActorMovement_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UArsenalCatchableActorMovement_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_TryStartAim_isStartAim, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_TryCatchGrenadeEitherHand_Succeed, bool CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_C", "ExecuteUbergraph_Grenade");

	Params::AGrenade_C_ExecuteUbergraph_Grenade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_TryStartAim_isStartAim = CallFunc_TryStartAim_isStartAim;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_TryCatchGrenadeEitherHand_Succeed = CallFunc_TryCatchGrenadeEitherHand_Succeed;
	Parms.CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult = CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


