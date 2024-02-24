#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LightweightAttachedItem.BP_LightweightAttachedItem_C
// (Actor)

class UClass* ABP_LightweightAttachedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LightweightAttachedItem_C");

	return Clss;
}


// BP_LightweightAttachedItem_C BP_LightweightAttachedItem.Default__BP_LightweightAttachedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LightweightAttachedItem_C* ABP_LightweightAttachedItem_C::GetDefaultObj()
{
	static class ABP_LightweightAttachedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LightweightAttachedItem_C*>(ABP_LightweightAttachedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.SpawnLightsForLightComponent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedAsset*               CallFunc_GetSkinnedAsset_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::SpawnLightsForLightComponent(class USkinnedAsset* CallFunc_GetSkinnedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "SpawnLightsForLightComponent");

	Params::ABP_LightweightAttachedItem_C_SpawnLightsForLightComponent_Params Parms{};

	Parms.CallFunc_GetSkinnedAsset_ReturnValue = CallFunc_GetSkinnedAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.HandleLightVisibility
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowLight                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowLight_bShowLight                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::HandleLightVisibility(bool bShowLight, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldShowLight_bShowLight, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "HandleLightVisibility");

	Params::ABP_LightweightAttachedItem_C_HandleLightVisibility_Params Parms{};

	Parms.bShowLight = bShowLight;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ShouldShowLight_bShowLight = CallFunc_ShouldShowLight_bShowLight;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.ShouldShowLight
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bShowLight                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDurability_HasDurability                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInstanceDurabilityData CallFunc_GetDurability_DurabilityData                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::ShouldShowLight(bool* bShowLight, bool CallFunc_GetDurability_HasDurability, const struct FItemInstanceDurabilityData& CallFunc_GetDurability_DurabilityData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "ShouldShowLight");

	Params::ABP_LightweightAttachedItem_C_ShouldShowLight_Params Parms{};

	Parms.CallFunc_GetDurability_HasDurability = CallFunc_GetDurability_HasDurability;
	Parms.CallFunc_GetDurability_DurabilityData = CallFunc_GetDurability_DurabilityData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bShowLight != nullptr)
		*bShowLight = Parms.bShowLight;

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.CacheLightComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemLightComponent*         NewLightComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FItemData_LightEmitterLightsLightData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bShouldNeverCastShadows                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::CacheLightComponent(class UItemLightComponent* NewLightComponent, const struct FItemData_LightEmitterLights& LightData, bool bShouldNeverCastShadows, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "CacheLightComponent");

	Params::ABP_LightweightAttachedItem_C_CacheLightComponent_Params Parms{};

	Parms.NewLightComponent = NewLightComponent;
	Parms.LightData = LightData;
	Parms.bShouldNeverCastShadows = bShouldNeverCastShadows;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.HandleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEquipped                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UsingAThirdPersonCamera_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSwimming_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::HandleVisibility(bool bIsEquipped, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "HandleVisibility");

	Params::ABP_LightweightAttachedItem_C_HandleVisibility_Params Parms{};

	Parms.bIsEquipped = bIsEquipped;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_UsingAThirdPersonCamera_ReturnValue = CallFunc_UsingAThirdPersonCamera_ReturnValue;
	Parms.CallFunc_IsSwimming_ReturnValue = CallFunc_IsSwimming_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.InitializeAnimData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemData_Animation         CallFunc_TryGetItemDataAnimation_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataAnimation_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::InitializeAnimData(const struct FItemData& ItemData, const struct FItemData_Animation& CallFunc_TryGetItemDataAnimation_OutData, enum class EGetResult CallFunc_TryGetItemDataAnimation_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "InitializeAnimData");

	Params::ABP_LightweightAttachedItem_C_InitializeAnimData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_TryGetItemDataAnimation_OutData = CallFunc_TryGetItemDataAnimation_OutData;
	Parms.CallFunc_TryGetItemDataAnimation_Branches = CallFunc_TryGetItemDataAnimation_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.InitializeMeshData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemData_MeshInfo          CallFunc_TryGetItemDataMeshInfo_OutData                          (None)
// enum class EGetResult              CallFunc_TryGetItemDataMeshInfo_Branches                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::InitializeMeshData(const struct FItemData& ItemData, const struct FItemData_MeshInfo& CallFunc_TryGetItemDataMeshInfo_OutData, enum class EGetResult CallFunc_TryGetItemDataMeshInfo_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "InitializeMeshData");

	Params::ABP_LightweightAttachedItem_C_InitializeMeshData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_TryGetItemDataMeshInfo_OutData = CallFunc_TryGetItemDataMeshInfo_OutData;
	Parms.CallFunc_TryGetItemDataMeshInfo_Branches = CallFunc_TryGetItemDataMeshInfo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.StopMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               LAnimInstance                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultBlendOutTime_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::StopMontage(class UAnimMontage* Montage, class UAnimInstance* LAnimInstance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetDefaultBlendOutTime_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "StopMontage");

	Params::ABP_LightweightAttachedItem_C_StopMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.LAnimInstance = LAnimInstance;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetDefaultBlendOutTime_ReturnValue = CallFunc_GetDefaultBlendOutTime_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.JumpToMontageSection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SectionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               LAnimInstance                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::JumpToMontageSection(class FName SectionName, class UAnimMontage* Montage, class UAnimInstance* LAnimInstance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "JumpToMontageSection");

	Params::ABP_LightweightAttachedItem_C_JumpToMontageSection_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.Montage = Montage;
	Parms.LAnimInstance = LAnimInstance;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnEquippedInternal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LightweightAttachedItem_C::OnEquippedInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnEquippedInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.GetItemID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          RowHandle                                                        (Parm, OutParm, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::GetItemID(struct FItemDataReference* RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "GetItemID");

	Params::ABP_LightweightAttachedItem_C_GetItemID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RowHandle != nullptr)
		*RowHandle = std::move(Parms.RowHandle);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.AttachAkToMuzzle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::AttachAkToMuzzle(bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "AttachAkToMuzzle");

	Params::ABP_LightweightAttachedItem_C_AttachAkToMuzzle_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.GetIsAsyncDataInitialized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsAsyncDataInitialized                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::GetIsAsyncDataInitialized(bool* IsAsyncDataInitialized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "GetIsAsyncDataInitialized");

	Params::ABP_LightweightAttachedItem_C_GetIsAsyncDataInitialized_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsAsyncDataInitialized != nullptr)
		*IsAsyncDataInitialized = Parms.IsAsyncDataInitialized;

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.GetAsyncAssets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UObject>>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_GetItemMeshes_Mesh3P                                    (HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_GetItemMeshes_Mesh1P                                    (HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UObject>>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<TSoftObjectPtr<class UObject>> ABP_LightweightAttachedItem_C::GetAsyncAssets(TSoftObjectPtr<class USkeletalMesh> CallFunc_GetItemMeshes_Mesh3P, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetItemMeshes_Mesh1P, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "GetAsyncAssets");

	Params::ABP_LightweightAttachedItem_C_GetAsyncAssets_Params Parms{};

	Parms.CallFunc_GetItemMeshes_Mesh3P = CallFunc_GetItemMeshes_Mesh3P;
	Parms.CallFunc_GetItemMeshes_Mesh1P = CallFunc_GetItemMeshes_Mesh1P;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.InitializeFromEquippable
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquippableItemBase_C*    Equippable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::InitializeFromEquippable(class ABP_EquippableItemBase_C* Equippable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "InitializeFromEquippable");

	Params::ABP_LightweightAttachedItem_C_InitializeFromEquippable_Params Parms{};

	Parms.Equippable = Equippable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.ExitItemMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               LAnimInstance                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::ExitItemMontage(class UAnimInstance* LAnimInstance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "ExitItemMontage");

	Params::ABP_LightweightAttachedItem_C_ExitItemMontage_Params Parms{};

	Parms.LAnimInstance = LAnimInstance;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue = CallFunc_Montage_GetCurrentSection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.InitializeFromItemTable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::InitializeFromItemTable(bool* Succeeded, const struct FItemData& ItemData, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "InitializeFromItemTable");

	Params::ABP_LightweightAttachedItem_C_InitializeFromItemTable_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnNotifyEnd_20555F9243FF292A6F5E319684E7EF76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::OnNotifyEnd_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnNotifyEnd_20555F9243FF292A6F5E319684E7EF76");

	Params::ABP_LightweightAttachedItem_C_OnNotifyEnd_20555F9243FF292A6F5E319684E7EF76_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnNotifyBegin_20555F9243FF292A6F5E319684E7EF76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::OnNotifyBegin_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnNotifyBegin_20555F9243FF292A6F5E319684E7EF76");

	Params::ABP_LightweightAttachedItem_C_OnNotifyBegin_20555F9243FF292A6F5E319684E7EF76_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnInterrupted_20555F9243FF292A6F5E319684E7EF76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::OnInterrupted_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnInterrupted_20555F9243FF292A6F5E319684E7EF76");

	Params::ABP_LightweightAttachedItem_C_OnInterrupted_20555F9243FF292A6F5E319684E7EF76_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnBlendOut_20555F9243FF292A6F5E319684E7EF76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::OnBlendOut_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnBlendOut_20555F9243FF292A6F5E319684E7EF76");

	Params::ABP_LightweightAttachedItem_C_OnBlendOut_20555F9243FF292A6F5E319684E7EF76_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnCompleted_20555F9243FF292A6F5E319684E7EF76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::OnCompleted_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnCompleted_20555F9243FF292A6F5E319684E7EF76");

	Params::ABP_LightweightAttachedItem_C_OnCompleted_20555F9243FF292A6F5E319684E7EF76_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.PlayItemMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::PlayItemMontage(class UAnimMontage* Montage, double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "PlayItemMontage");

	Params::ABP_LightweightAttachedItem_C_PlayItemMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LightweightAttachedItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.AsyncLoadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LightweightAttachedItem_C::AsyncLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "AsyncLoadComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.ExecuteUbergraph_BP_LightweightAttachedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeFromItemTable_Succeeded                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_PlayRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UObject>>CallFunc_GetAsyncAssets_ReturnValue                              (ReferenceParm)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightweightAttachedItem_C::ExecuteUbergraph_BP_LightweightAttachedItem(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_InitializeFromItemTable_Succeeded, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Montage, double K2Node_CustomEvent_PlayRate, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<TSoftObjectPtr<class UObject>>& CallFunc_GetAsyncAssets_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "ExecuteUbergraph_BP_LightweightAttachedItem");

	Params::ABP_LightweightAttachedItem_C_ExecuteUbergraph_BP_LightweightAttachedItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_InitializeFromItemTable_Succeeded = CallFunc_InitializeFromItemTable_Succeeded;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_PlayRate = K2Node_CustomEvent_PlayRate;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetAsyncAssets_ReturnValue = CallFunc_GetAsyncAssets_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast = CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnLightweightLightsSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LightweightAttachedItem_C::OnLightweightLightsSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnLightweightLightsSpawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LightweightAttachedItem.BP_LightweightAttachedItem_C.OnAsyncLoadComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LightweightAttachedItem_C::OnAsyncLoadComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightweightAttachedItem_C", "OnAsyncLoadComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


