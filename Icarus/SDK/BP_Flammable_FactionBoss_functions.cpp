#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flammable_FactionBoss.BP_Flammable_FactionBoss_C
// (None)

class UClass* UBP_Flammable_FactionBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flammable_FactionBoss_C");

	return Clss;
}


// BP_Flammable_FactionBoss_C BP_Flammable_FactionBoss.Default__BP_Flammable_FactionBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flammable_FactionBoss_C* UBP_Flammable_FactionBoss_C::GetDefaultObj()
{
	static class UBP_Flammable_FactionBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flammable_FactionBoss_C*>(UBP_Flammable_FactionBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Flammable_FactionBoss.BP_Flammable_FactionBoss_C.SetupCosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Flammable_FactionBoss_C::SetupCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FactionBoss_C", "SetupCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Flammable_FactionBoss.BP_Flammable_FactionBoss_C.GetLocalBounds
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            K2Node_MakeStruct_BoxSphereBounds                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPawn*                 K2Node_DynamicCast_AsIcarus_Pawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetAnimatedMeshComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            K2Node_MakeStruct_BoxSphereBounds_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FBoxSphereBounds UBP_Flammable_FactionBoss_C::GetLocalBounds(const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPawn* K2Node_DynamicCast_AsIcarus_Pawn, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetAnimatedMeshComponent_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FactionBoss_C", "GetLocalBounds");

	Params::UBP_Flammable_FactionBoss_C_GetLocalBounds_Params Parms{};

	Parms.K2Node_MakeStruct_BoxSphereBounds = K2Node_MakeStruct_BoxSphereBounds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Pawn = K2Node_DynamicCast_AsIcarus_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimatedMeshComponent_ReturnValue = CallFunc_GetAnimatedMeshComponent_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.K2Node_MakeStruct_BoxSphereBounds_1 = K2Node_MakeStruct_BoxSphereBounds_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


