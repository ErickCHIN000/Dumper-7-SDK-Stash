#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeathDarkForm.BP_DeathDarkForm_C
// (Actor, Pawn)

class UClass* ABP_DeathDarkForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeathDarkForm_C");

	return Clss;
}


// BP_DeathDarkForm_C BP_DeathDarkForm.Default__BP_DeathDarkForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeathDarkForm_C* ABP_DeathDarkForm_C::GetDefaultObj()
{
	static class ABP_DeathDarkForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeathDarkForm_C*>(ABP_DeathDarkForm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.CreateDarkFormMID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathDarkForm_C::CreateDarkFormMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "CreateDarkFormMID");

	Params::ABP_DeathDarkForm_C_CreateDarkFormMID_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.Timeline_SmearEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_DeathDarkForm_C::Timeline_SmearEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "Timeline_SmearEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.Timeline_SmearEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_DeathDarkForm_C::Timeline_SmearEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "Timeline_SmearEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.CoolEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeathDarkForm_C::CoolEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "CoolEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathDarkForm_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "ReceiveTick");

	Params::ABP_DeathDarkForm_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeathDarkForm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DeathDarkForm_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathDarkForm.BP_DeathDarkForm_C.ExecuteUbergraph_BP_DeathDarkForm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetPhysicsLinearVelocity_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARagdollImpactEffect_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DeathDarkForm_C::ExecuteUbergraph_BP_DeathDarkForm(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetPhysicsLinearVelocity_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class ARagdollImpactEffect_C* CallFunc_FinishSpawningActor_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathDarkForm_C", "ExecuteUbergraph_BP_DeathDarkForm");

	Params::ABP_DeathDarkForm_C_ExecuteUbergraph_BP_DeathDarkForm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetPhysicsLinearVelocity_ReturnValue = CallFunc_GetPhysicsLinearVelocity_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


