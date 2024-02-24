#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HW_COV_SplatBall_AI.LightProjectile_HW_COV_SplatBall_AI_C
// (None)

class UClass* ULightProjectile_HW_COV_SplatBall_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HW_COV_SplatBall_AI_C");

	return Clss;
}


// LightProjectile_HW_COV_SplatBall_AI_C LightProjectile_HW_COV_SplatBall_AI.Default__LightProjectile_HW_COV_SplatBall_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HW_COV_SplatBall_AI_C* ULightProjectile_HW_COV_SplatBall_AI_C::GetDefaultObj()
{
	static class ULightProjectile_HW_COV_SplatBall_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HW_COV_SplatBall_AI_C*>(ULightProjectile_HW_COV_SplatBall_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_HW_COV_SplatBall_AI.LightProjectile_HW_COV_SplatBall_AI_C.OnExplode
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  SplatData                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_HW_COV_SplatBall_AI_C::OnExplode(class ULightProjectile* Projectile, class USplatData* SplatData, class AActor* CallFunc_GetSource_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_EqualEqual_ClassClass_ReturnValue4, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_SplatBall_AI_C", "OnExplode");

	Params::ULightProjectile_HW_COV_SplatBall_AI_C_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.SplatData = SplatData;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue1 = CallFunc_EqualEqual_ClassClass_ReturnValue1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_EqualEqual_ClassClass_ReturnValue3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue4 = CallFunc_EqualEqual_ClassClass_ReturnValue4;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_HW_COV_SplatBall_AI.LightProjectile_HW_COV_SplatBall_AI_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_HW_COV_SplatBall_AI_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_SplatBall_AI_C", "OnLifetimeExpired");

	Params::ULightProjectile_HW_COV_SplatBall_AI_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


