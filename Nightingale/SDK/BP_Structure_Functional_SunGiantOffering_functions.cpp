#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C
// (Actor)

class UClass* ABP_Structure_Functional_SunGiantOffering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_SunGiantOffering_C");

	return Clss;
}


// BP_Structure_Functional_SunGiantOffering_C BP_Structure_Functional_SunGiantOffering.Default__BP_Structure_Functional_SunGiantOffering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_SunGiantOffering_C* ABP_Structure_Functional_SunGiantOffering_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_SunGiantOffering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_SunGiantOffering_C*>(ABP_Structure_Functional_SunGiantOffering_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.GetActionStationComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UNWXActionStationComponentV2*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UNWXActionStationComponentV2* ABP_Structure_Functional_SunGiantOffering_C::GetActionStationComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "GetActionStationComponent");

	Params::ABP_Structure_Functional_SunGiantOffering_C_GetActionStationComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.InitializeCharacteristics
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacteristicDataReferenceCallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue        (HasGetValueTypeHash)
// struct FCharacteristicDataReferenceCallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_1      (HasGetValueTypeHash)
// struct FCharacteristicDataReferenceCallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_2      (HasGetValueTypeHash)
// struct FCharacteristicDataReferenceCallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_3      (HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::InitializeCharacteristics(const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue, const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_1, const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_2, const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "InitializeCharacteristics");

	Params::ABP_Structure_Functional_SunGiantOffering_C_InitializeCharacteristics_Params Parms{};

	Parms.CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue = CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue;
	Parms.CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_1 = CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_1;
	Parms.CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_2 = CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_2;
	Parms.CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_3 = CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.HandleOfferingAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::HandleOfferingAudio(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "HandleOfferingAudio");

	Params::ABP_Structure_Functional_SunGiantOffering_C_HandleOfferingAudio_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue_1 = CallFunc_PostAsyncAkEventScoped_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.CrossServerDestroySelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::CrossServerDestroySelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "CrossServerDestroySelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.OnCompletedState
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_OnCompletedState_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::OnCompletedState(bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_OnCompletedState_Success, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "OnCompletedState");

	Params::ABP_Structure_Functional_SunGiantOffering_C_OnCompletedState_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_OnCompletedState_Success = CallFunc_OnCompletedState_Success;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.OnOfferingAdded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAddResourcesContextAddResourcesContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                OfferingTag                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_CharacteristicInfoCallFunc_TryGetItemCharacteristicInfo_CharacteristicInfo         (None)
// enum class EGetResult              CallFunc_TryGetItemCharacteristicInfo_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits                                 (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits_1                               (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags_1                (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1         (None)
// bool                               CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceConsumerInterface>CallFunc_GetPostConstructionResourcesManager_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_RemoveResource_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUIData_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureUIData            CallFunc_GetUIData_OutUIData                                     (None)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceConsumerInterface>CallFunc_GetPostConstructionResourcesManager_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_RemoveResource_Success_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_MeshInfo          CallFunc_TryGetItemDataMeshInfo_OutData                          (None)
// enum class EGetResult              CallFunc_TryGetItemDataMeshInfo_Branches                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_5     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::OnOfferingAdded(struct FStructureAddResourcesContext& AddResourcesContext, const struct FGameplayTag& OfferingTag, const struct FGameplayTag& NewLocalVar, const struct FGameplayTag& Temp_struct_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FInstanceData_CharacteristicInfo& CallFunc_TryGetItemCharacteristicInfo_CharacteristicInfo, enum class EGetResult CallFunc_TryGetItemCharacteristicInfo_Branches, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits_1, enum class EGetResult CallFunc_TryGetItemTraits_Branches_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasTag_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_1, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_2, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue_2, TScriptInterface<class IStructureResourceConsumerInterface> CallFunc_GetPostConstructionResourcesManager_ReturnValue, bool CallFunc_RemoveResource_Success, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IStructureResourceConsumerInterface> CallFunc_GetPostConstructionResourcesManager_ReturnValue_1, bool CallFunc_RemoveResource_Success_1, const struct FGameplayTag& Temp_struct_Variable_3, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2, bool K2Node_DynamicCast_bSuccess_4, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FItemData_MeshInfo& CallFunc_TryGetItemDataMeshInfo_OutData, enum class EGetResult CallFunc_TryGetItemDataMeshInfo_Branches, bool K2Node_SwitchEnum_CmpSuccess_4, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3, bool K2Node_DynamicCast_bSuccess_5, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_5, bool K2Node_DynamicCast_bSuccess_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "OnOfferingAdded");

	Params::ABP_Structure_Functional_SunGiantOffering_C_OnOfferingAdded_Params Parms{};

	Parms.AddResourcesContext = AddResourcesContext;
	Parms.OfferingTag = OfferingTag;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemCharacteristicInfo_CharacteristicInfo = CallFunc_TryGetItemCharacteristicInfo_CharacteristicInfo;
	Parms.CallFunc_TryGetItemCharacteristicInfo_Branches = CallFunc_TryGetItemCharacteristicInfo_Branches;
	Parms.CallFunc_TryGetItemTraits_Traits = CallFunc_TryGetItemTraits_Traits;
	Parms.CallFunc_TryGetItemTraits_Branches = CallFunc_TryGetItemTraits_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_TryGetItemTraits_Traits_1 = CallFunc_TryGetItemTraits_Traits_1;
	Parms.CallFunc_TryGetItemTraits_Branches_1 = CallFunc_TryGetItemTraits_Branches_1;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags_1 = CallFunc_BreakGameplayTagContainer_GameplayTags_1;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue = CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_1 = CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_2 = CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_2;
	Parms.CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_3 = CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetPostConstructionResourcesManager_ReturnValue = CallFunc_GetPostConstructionResourcesManager_ReturnValue;
	Parms.CallFunc_RemoveResource_Success = CallFunc_RemoveResource_Success;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUIData_IsValid = CallFunc_GetUIData_IsValid;
	Parms.CallFunc_GetUIData_OutUIData = CallFunc_GetUIData_OutUIData;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1 = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPostConstructionResourcesManager_ReturnValue_1 = CallFunc_GetPostConstructionResourcesManager_ReturnValue_1;
	Parms.CallFunc_RemoveResource_Success_1 = CallFunc_RemoveResource_Success_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_TryGetItemDataMeshInfo_OutData = CallFunc_TryGetItemDataMeshInfo_OutData;
	Parms.CallFunc_TryGetItemDataMeshInfo_Branches = CallFunc_TryGetItemDataMeshInfo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_5 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_5;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.DecideReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::DecideReward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "DecideReward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.SpawnRejection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SplitItemEntry_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_SplitItemEntry_OriginalEntry                            (None)
// struct FInventoryEntry             CallFunc_SplitItemEntry_NewEntry                                 (None)

void ABP_Structure_Functional_SunGiantOffering_C::SpawnRejection(bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_SplitItemEntry_Success, const struct FInventoryEntry& CallFunc_SplitItemEntry_OriginalEntry, const struct FInventoryEntry& CallFunc_SplitItemEntry_NewEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "SpawnRejection");

	Params::ABP_Structure_Functional_SunGiantOffering_C_SpawnRejection_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SplitItemEntry_Success = CallFunc_SplitItemEntry_Success;
	Parms.CallFunc_SplitItemEntry_OriginalEntry = CallFunc_SplitItemEntry_OriginalEntry;
	Parms.CallFunc_SplitItemEntry_NewEntry = CallFunc_SplitItemEntry_NewEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.SpawnBestReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::SpawnBestReward(bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_4, double CallFunc_RandomFloatInRange_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "SpawnBestReward");

	Params::ABP_Structure_Functional_SunGiantOffering_C_SpawnBestReward_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_5 = CallFunc_RandomFloatInRange_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.SpawnReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::SpawnReward(bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "SpawnReward");

	Params::ABP_Structure_Functional_SunGiantOffering_C_SpawnReward_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.ResetOffering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::ResetOffering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "ResetOffering");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.GrowthTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::GrowthTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "GrowthTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.GrowthTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::GrowthTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "GrowthTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.Set Offering Mesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 NewMesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::Set_Offering_Mesh(class UStaticMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "Set Offering Mesh");

	Params::ABP_Structure_Functional_SunGiantOffering_C_Set_Offering_Mesh_Params Parms{};

	Parms.NewMesh = NewMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.FadeOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_SunGiantOffering_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C.ExecuteUbergraph_BP_Structure_Functional_SunGiantOffering
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_CustomEvent_NewMesh                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>CallFunc_GetStructureEventsObject_self_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_SunGiantOffering_C::ExecuteUbergraph_BP_Structure_Functional_SunGiantOffering(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, class UStaticMesh* K2Node_CustomEvent_NewMesh, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStructureEventInterface> CallFunc_GetStructureEventsObject_self_CastInput, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_SunGiantOffering_C", "ExecuteUbergraph_BP_Structure_Functional_SunGiantOffering");

	Params::ABP_Structure_Functional_SunGiantOffering_C_ExecuteUbergraph_BP_Structure_Functional_SunGiantOffering_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_NewMesh = K2Node_CustomEvent_NewMesh;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetStructureEventsObject_self_CastInput = CallFunc_GetStructureEventsObject_self_CastInput;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


