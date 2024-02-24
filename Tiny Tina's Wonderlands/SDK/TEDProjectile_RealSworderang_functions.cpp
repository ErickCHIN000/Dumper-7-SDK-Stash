#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C
// (Actor)

class UClass* ATEDProjectile_RealSworderang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TEDProjectile_RealSworderang_C");

	return Clss;
}


// TEDProjectile_RealSworderang_C TEDProjectile_RealSworderang.Default__TEDProjectile_RealSworderang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATEDProjectile_RealSworderang_C* ATEDProjectile_RealSworderang_C::GetDefaultObj()
{
	static class ATEDProjectile_RealSworderang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATEDProjectile_RealSworderang_C*>(ATEDProjectile_RealSworderang_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_RealSworderang_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATEDProjectile_RealSworderang_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.ReturnToSender
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_RealSworderang_C::ReturnToSender()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "ReturnToSender");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.FindNewFriends
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_RealSworderang_C::FindNewFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "FindNewFriends");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.OnBounce
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     ImpactVelocity                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATEDProjectile_RealSworderang_C::OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "OnBounce");

	Params::ATEDProjectile_RealSworderang_C_OnBounce_Params Parms{};

	Parms.Hit = Hit;
	Parms.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang
// (BlueprintEvent)
// Parameters:

void ATEDProjectile_RealSworderang_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.OnBeginWeaponTransform
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_RealSworderang_C::OnBeginWeaponTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "OnBeginWeaponTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C.ExecuteUbergraph_TEDProjectile_RealSworderang
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveAmmo_ThrowType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     K2Node_Event_ImpactVelocity                                      (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATEDProjectile_RealSworderang_C::ExecuteUbergraph_TEDProjectile_RealSworderang(int32 EntryPoint, int32 CallFunc_RemoveAmmo_ThrowType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetInstigator_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FHitResult& K2Node_Event_Hit, const struct FVector& K2Node_Event_ImpactVelocity, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_RealSworderang_C", "ExecuteUbergraph_TEDProjectile_RealSworderang");

	Params::ATEDProjectile_RealSworderang_C_ExecuteUbergraph_TEDProjectile_RealSworderang_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RemoveAmmo_ThrowType = CallFunc_RemoveAmmo_ThrowType;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_Event_ImpactVelocity = K2Node_Event_ImpactVelocity;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor1 = CallFunc_RunEnvQueryForBestActor_ResultActor1;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue1 = CallFunc_RunEnvQueryForBestActor_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


