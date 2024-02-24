#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Player_Dagger_Throwable.Projectile_Player_Dagger_Throwable_C
// (Actor)

class UClass* AProjectile_Player_Dagger_Throwable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Player_Dagger_Throwable_C");

	return Clss;
}


// Projectile_Player_Dagger_Throwable_C Projectile_Player_Dagger_Throwable.Default__Projectile_Player_Dagger_Throwable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_Player_Dagger_Throwable_C* AProjectile_Player_Dagger_Throwable_C::GetDefaultObj()
{
	static class AProjectile_Player_Dagger_Throwable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_Player_Dagger_Throwable_C*>(AProjectile_Player_Dagger_Throwable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_Player_Dagger_Throwable.Projectile_Player_Dagger_Throwable_C.ActivateDagger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InherithedVelocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Player_Dagger_Throwable_C::ActivateDagger(const struct FVector& InherithedVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Player_Dagger_Throwable_C", "ActivateDagger");

	Params::AProjectile_Player_Dagger_Throwable_C_ActivateDagger_Params Parms{};

	Parms.InherithedVelocity = InherithedVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_Player_Dagger_Throwable.Projectile_Player_Dagger_Throwable_C.ExecuteUbergraph_Projectile_Player_Dagger_Throwable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_InherithedVelocity                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Player_Dagger_Throwable_C::ExecuteUbergraph_Projectile_Player_Dagger_Throwable(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_InherithedVelocity, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Player_Dagger_Throwable_C", "ExecuteUbergraph_Projectile_Player_Dagger_Throwable");

	Params::AProjectile_Player_Dagger_Throwable_C_ExecuteUbergraph_Projectile_Player_Dagger_Throwable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InherithedVelocity = K2Node_CustomEvent_InherithedVelocity;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


