#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Teleporter.BP_Teleporter_C
// (Actor)

class UClass* ABP_Teleporter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Teleporter_C");

	return Clss;
}


// BP_Teleporter_C BP_Teleporter.Default__BP_Teleporter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Teleporter_C* ABP_Teleporter_C::GetDefaultObj()
{
	static class ABP_Teleporter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Teleporter_C*>(ABP_Teleporter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Teleporter.BP_Teleporter_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Teleporter_C::OnRep_IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "OnRep_IsActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Teleporter.BP_Teleporter_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Teleporter_C::SetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "SetActive");

	Params::ABP_Teleporter_C_SetActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.GetLaunchForce
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_Teleporter_C::GetLaunchForce(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "GetLaunchForce");

	Params::ABP_Teleporter_C_GetLaunchForce_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Teleporter.BP_Teleporter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Teleporter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Teleporter.BP_Teleporter_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Teleporter_C::BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_Teleporter_C_BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.PlayTeleportEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Loc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Teleporter_C::PlayTeleportEffects(const struct FVector& Loc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "PlayTeleportEffects");

	Params::ABP_Teleporter_C_PlayTeleportEffects_Params Parms{};

	Parms.Loc = Loc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.LaunchVictim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Teleporter_C::LaunchVictim(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "LaunchVictim");

	Params::ABP_Teleporter_C_LaunchVictim_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.DeactivateTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Teleporter_C::DeactivateTeleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "DeactivateTeleport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Teleporter.BP_Teleporter_C.PlayerTeleported
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Teleporter_C::PlayerTeleported(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "PlayerTeleported");

	Params::ABP_Teleporter_C_PlayerTeleported_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.TeleportPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Teleporter_C::TeleportPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "TeleportPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Teleporter.BP_Teleporter_C.SetActiveEffectsEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Teleporter_C::SetActiveEffectsEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "SetActiveEffectsEnabled");

	Params::ABP_Teleporter_C_SetActiveEffectsEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.ActorTryingToTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Teleporter_C::ActorTryingToTeleport(class UPrimitiveComponent* OtherComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "ActorTryingToTeleport");

	Params::ABP_Teleporter_C_ActorTryingToTeleport_Params Parms{};

	Parms.OtherComp = OtherComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.OnTeleportStageUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadingScreenStage     CurrentStage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Teleporter_C::OnTeleportStageUpdate(class AGGPlayerController* Controller, class AGGGoat* Goat, enum class ELoadingScreenStage CurrentStage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "OnTeleportStageUpdate");

	Params::ABP_Teleporter_C_OnTeleportStageUpdate_Params Parms{};

	Parms.Controller = Controller;
	Parms.Goat = Goat;
	Parms.CurrentStage = CurrentStage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.ReactivateTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Teleporter_C::ReactivateTeleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "ReactivateTeleport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Teleporter.BP_Teleporter_C.BndEvt__BP_Teleporter_BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Teleporter_C::BndEvt__BP_Teleporter_BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "BndEvt__BP_Teleporter_BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_Teleporter_C_BndEvt__BP_Teleporter_BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.ExecuteUbergraph_BP_Teleporter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLowEndPlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsGoat                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllowedToTeleport_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Loc                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Teleporter_C*            K2Node_DynamicCast_AsBP_Teleporter                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_Goat_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLaunchForce_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FImpulseDamageEvent         K2Node_MakeStruct_ImpulseDamageEvent                             (None)
// float                              CallFunc_ApplyImpulseDamage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompGoat_IsGoat_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFinishedLevelStart_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         K2Node_CustomEvent_Controller                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadingScreenStage     K2Node_CustomEvent_CurrentStage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Teleporter_C*            K2Node_DynamicCast_AsBP_Teleporter_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRagdollStateChangeSettings K2Node_MakeStruct_RagdollStateChangeSettings                     (None)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetRagdollBlueprint_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTransform                  K2Node_Select_Default_1                                          (IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsGoat_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPlayerController*> CallFunc_GetAllGGPlayerControllers_ReturnValue                   (ReferenceParm)
// class AGGPlayerController*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetGoatFromActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Teleporter_C::ExecuteUbergraph_BP_Teleporter(int32 EntryPoint, bool CallFunc_IsLowEndPlatform_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsAllowedToTeleport_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& K2Node_CustomEvent_Loc, class AGGGoat* K2Node_CustomEvent_Goat_2, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABP_Teleporter_C* K2Node_DynamicCast_AsBP_Teleporter, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat_1, bool CallFunc_HasAuthority_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_1, const struct FVector& CallFunc_GetLaunchForce_ReturnValue, bool K2Node_CustomEvent_Enabled, const struct FImpulseDamageEvent& K2Node_MakeStruct_ImpulseDamageEvent, float CallFunc_ApplyImpulseDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsCompGoat_IsGoat_1, bool CallFunc_IsCompGoat_IsCapsuleComponent_1, bool CallFunc_IsCompGoat_IsMeshComponent_1, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_1, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasFinishedLevelStart_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_CustomEvent_Controller, class AGGGoat* K2Node_CustomEvent_Goat, enum class ELoadingScreenStage K2Node_CustomEvent_CurrentStage, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, bool Temp_bool_Variable, class ABP_Teleporter_C* K2Node_DynamicCast_AsBP_Teleporter_1, bool K2Node_DynamicCast_bSuccess_3, const struct FTransform& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRagdollStateChangeSettings& K2Node_MakeStruct_RagdollStateChangeSettings, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_SetRagdollBlueprint_ReturnValue, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTransform& K2Node_Select_Default_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_HasAuthority_ReturnValue_3, const struct FRotator& CallFunc_SelectRotator_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_IsCompGoat_IsGoat_2, bool CallFunc_IsCompGoat_IsCapsuleComponent_2, bool CallFunc_IsCompGoat_IsMeshComponent_2, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_3, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AGGGoat* CallFunc_GetGoatFromActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "ExecuteUbergraph_BP_Teleporter");

	Params::ABP_Teleporter_C_ExecuteUbergraph_BP_Teleporter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLowEndPlatform_ReturnValue = CallFunc_IsLowEndPlatform_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsCompGoat_IsGoat = CallFunc_IsCompGoat_IsGoat;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent = CallFunc_IsCompGoat_IsCapsuleComponent;
	Parms.CallFunc_IsCompGoat_IsMeshComponent = CallFunc_IsCompGoat_IsMeshComponent;
	Parms.CallFunc_IsCompGoat_ReturnValue = CallFunc_IsCompGoat_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue = CallFunc_GetPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_IsAllowedToTeleport_ReturnValue = CallFunc_IsAllowedToTeleport_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Loc = K2Node_CustomEvent_Loc;
	Parms.K2Node_CustomEvent_Goat_2 = K2Node_CustomEvent_Goat_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Teleporter = K2Node_DynamicCast_AsBP_Teleporter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Goat_1 = K2Node_CustomEvent_Goat_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetPlayerControllerFromActor_ReturnValue_1;
	Parms.CallFunc_GetLaunchForce_ReturnValue = CallFunc_GetLaunchForce_ReturnValue;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.K2Node_MakeStruct_ImpulseDamageEvent = K2Node_MakeStruct_ImpulseDamageEvent;
	Parms.CallFunc_ApplyImpulseDamage_ReturnValue = CallFunc_ApplyImpulseDamage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_OtherComp = K2Node_CustomEvent_OtherComp;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsCompGoat_IsGoat_1 = CallFunc_IsCompGoat_IsGoat_1;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent_1 = CallFunc_IsCompGoat_IsCapsuleComponent_1;
	Parms.CallFunc_IsCompGoat_IsMeshComponent_1 = CallFunc_IsCompGoat_IsMeshComponent_1;
	Parms.CallFunc_IsCompGoat_ReturnValue_1 = CallFunc_IsCompGoat_ReturnValue_1;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasFinishedLevelStart_ReturnValue = CallFunc_HasFinishedLevelStart_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.K2Node_CustomEvent_CurrentStage = K2Node_CustomEvent_CurrentStage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsActor_1 = K2Node_DynamicCast_AsActor_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue_2 = CallFunc_GetPlayerControllerFromActor_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_2 = CallFunc_IsValidSoftObjectReference_ReturnValue_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBP_Teleporter_1 = K2Node_DynamicCast_AsBP_Teleporter_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_MakeStruct_RagdollStateChangeSettings = K2Node_MakeStruct_RagdollStateChangeSettings;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_SetRagdollBlueprint_ReturnValue = CallFunc_SetRagdollBlueprint_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_SelectRotator_ReturnValue_1 = CallFunc_SelectRotator_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_IsCompGoat_IsGoat_2 = CallFunc_IsCompGoat_IsGoat_2;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent_2 = CallFunc_IsCompGoat_IsCapsuleComponent_2;
	Parms.CallFunc_IsCompGoat_IsMeshComponent_2 = CallFunc_IsCompGoat_IsMeshComponent_2;
	Parms.CallFunc_IsCompGoat_ReturnValue_2 = CallFunc_IsCompGoat_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue_3 = CallFunc_GetPlayerControllerFromActor_ReturnValue_3;
	Parms.CallFunc_GetAllGGPlayerControllers_ReturnValue = CallFunc_GetAllGGPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGoatFromActor_ReturnValue = CallFunc_GetGoatFromActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Teleporter.BP_Teleporter_C.PlayerHasBeenTeleported__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Teleporter_C::PlayerHasBeenTeleported__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Teleporter_C", "PlayerHasBeenTeleported__DelegateSignature");

	Params::ABP_Teleporter_C_PlayerHasBeenTeleported__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}

}


