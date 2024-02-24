#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuneFancyNotification.BP_RuneFancyNotification_C
// (Actor)

class UClass* ABP_RuneFancyNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuneFancyNotification_C");

	return Clss;
}


// BP_RuneFancyNotification_C BP_RuneFancyNotification.Default__BP_RuneFancyNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RuneFancyNotification_C* ABP_RuneFancyNotification_C::GetDefaultObj()
{
	static class ABP_RuneFancyNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RuneFancyNotification_C*>(ABP_RuneFancyNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RuneFancyNotification.BP_RuneFancyNotification_C.Timeline_FancyNotification__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_RuneFancyNotification_C::Timeline_FancyNotification__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneFancyNotification_C", "Timeline_FancyNotification__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuneFancyNotification.BP_RuneFancyNotification_C.Timeline_FancyNotification__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_RuneFancyNotification_C::Timeline_FancyNotification__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneFancyNotification_C", "Timeline_FancyNotification__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuneFancyNotification.BP_RuneFancyNotification_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_RuneFancyNotification_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneFancyNotification_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuneFancyNotification.BP_RuneFancyNotification_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_RuneFancyNotification_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneFancyNotification_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuneFancyNotification.BP_RuneFancyNotification_C.StartEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RuneFancyNotification_C::StartEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneFancyNotification_C", "StartEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuneFancyNotification.BP_RuneFancyNotification_C.ExecuteUbergraph_BP_RuneFancyNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UUI_RuneFancyNotification_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARadialBlurCustomCurve_UnlockNotification_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARadialBlurCustomCurve_UnlockNotification_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RuneFancyNotification_C::ExecuteUbergraph_BP_RuneFancyNotification(int32 EntryPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UUI_RuneFancyNotification_C* CallFunc_Create_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARadialBlurCustomCurve_UnlockNotification_C* CallFunc_FinishSpawningActor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ARadialBlurCustomCurve_UnlockNotification_C* CallFunc_FinishSpawningActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneFancyNotification_C", "ExecuteUbergraph_BP_RuneFancyNotification");

	Params::ABP_RuneFancyNotification_C_ExecuteUbergraph_BP_RuneFancyNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetCameraLocation_ReturnValue_1 = CallFunc_GetCameraLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_1 = CallFunc_Conv_VectorToTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuneFancyNotification.BP_RuneFancyNotification_C.OnNotificationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RuneFancyNotification_C::OnNotificationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneFancyNotification_C", "OnNotificationFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


