#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeathEffect.BP_DeathEffect_C
// (Actor)

class UClass* ABP_DeathEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeathEffect_C");

	return Clss;
}


// BP_DeathEffect_C BP_DeathEffect.Default__BP_DeathEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeathEffect_C* ABP_DeathEffect_C::GetDefaultObj()
{
	static class ABP_DeathEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeathEffect_C*>(ABP_DeathEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeathEffect.BP_DeathEffect_C.EffectTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_DeathEffect_C::EffectTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathEffect_C", "EffectTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathEffect.BP_DeathEffect_C.EffectTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_DeathEffect_C::EffectTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathEffect_C", "EffectTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathEffect.BP_DeathEffect_C.EffectTimeline__FadeOut__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_DeathEffect_C::EffectTimeline__FadeOut__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathEffect_C", "EffectTimeline__FadeOut__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathEffect.BP_DeathEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeathEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathEffect.BP_DeathEffect_C.ExecuteUbergraph_BP_DeathEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_FloatToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraShake*                CallFunc_PlayCameraShake_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathEffect_C::ExecuteUbergraph_BP_DeathEffect(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, const struct FLinearColor& CallFunc_Conv_FloatToLinearColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathEffect_C", "ExecuteUbergraph_BP_DeathEffect");

	Params::ABP_DeathEffect_C_ExecuteUbergraph_BP_DeathEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_Conv_FloatToLinearColor_ReturnValue = CallFunc_Conv_FloatToLinearColor_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_PlayCameraShake_ReturnValue = CallFunc_PlayCameraShake_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


