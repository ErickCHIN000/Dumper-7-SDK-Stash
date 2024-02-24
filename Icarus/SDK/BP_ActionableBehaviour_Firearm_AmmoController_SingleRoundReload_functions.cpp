#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C
// (None)

class UClass* UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C");

	return Clss;
}


// BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.Default__BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C* UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C*>(UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.GetAmmoCapacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::GetAmmoCapacity(int32 CallFunc_GetStat_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "GetAmmoCapacity");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_GetAmmoCapacity_Params Parms{};

	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.CanAbortReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanAbort                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::CanAbortReload(bool* CanAbort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "CanAbortReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_CanAbortReload_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanAbort != nullptr)
		*CanAbort = Parms.CanAbort;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.ServerFinishReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::ServerFinishReload(int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "ServerFinishReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_ServerFinishReload_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.OnAbortReloadRequested
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::OnAbortReloadRequested(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "OnAbortReloadRequested");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_OnAbortReloadRequested_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.ReloadSingleRound
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// int32                              CallFunc_GetAmmoCapacity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::ReloadSingleRound(bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetAmmoCapacity_ReturnValue, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "ReloadSingleRound");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_ReloadSingleRound_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetAmmoCapacity_ReturnValue = CallFunc_GetAmmoCapacity_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.SetReloadMontageNextSections
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SectionNameToChange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextSection                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::SetReloadMontageNextSections(class FName SectionNameToChange, class FName NextSection, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_2, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "SetReloadMontageNextSections");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_SetReloadMontageNextSections_Params Parms{};

	Parms.SectionNameToChange = SectionNameToChange;
	Parms.NextSection = NextSection;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAnim_Montage_1 = K2Node_DynamicCast_AsAnim_Montage_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnim_Montage_2 = K2Node_DynamicCast_AsAnim_Montage_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.GetReloadAnimPlayRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::GetReloadAnimPlayRate(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "GetReloadAnimPlayRate");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_GetReloadAnimPlayRate_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.CalculateNumberOfRoundsToLoad
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumRounds                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryAmmoCount_Count                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoCapacity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::CalculateNumberOfRoundsToLoad(int32* NumRounds, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_GetInventoryAmmoCount_Count, int32 CallFunc_GetAmmoCapacity_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "CalculateNumberOfRoundsToLoad");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_CalculateNumberOfRoundsToLoad_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_GetInventoryAmmoCount_Count = CallFunc_GetInventoryAmmoCount_Count;
	Parms.CallFunc_GetAmmoCapacity_ReturnValue = CallFunc_GetAmmoCapacity_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NumRounds != nullptr)
		*NumRounds = Parms.NumRounds;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.HandleReloadAnimNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::HandleReloadAnimNotify(const class FString& NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "HandleReloadAnimNotify");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_HandleReloadAnimNotify_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.AbortReloadAnimations
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::AbortReloadAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "AbortReloadAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAmmo_HasAmmo                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_NotifyName                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculateNumberOfRoundsToLoad_NumRounds                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculateNumberOfRoundsToLoad_NumRounds_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C::ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload(int32 EntryPoint, bool CallFunc_HasAmmo_HasAmmo, const class FString& K2Node_Event_NotifyName, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_CalculateNumberOfRoundsToLoad_NumRounds, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_CalculateNumberOfRoundsToLoad_NumRounds_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_2, bool K2Node_DynamicCast_bSuccess_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C", "ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C_ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAmmo_HasAmmo = CallFunc_HasAmmo_HasAmmo;
	Parms.K2Node_Event_NotifyName = K2Node_Event_NotifyName;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_CalculateNumberOfRoundsToLoad_NumRounds = CallFunc_CalculateNumberOfRoundsToLoad_NumRounds;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_CalculateNumberOfRoundsToLoad_NumRounds_1 = CallFunc_CalculateNumberOfRoundsToLoad_NumRounds_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnim_Montage_1 = K2Node_DynamicCast_AsAnim_Montage_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.K2Node_DynamicCast_AsAnim_Montage_2 = K2Node_DynamicCast_AsAnim_Montage_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


