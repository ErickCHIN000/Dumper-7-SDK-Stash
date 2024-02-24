#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10F (0x510 - 0x401)
// BlueprintGeneratedClass BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C
class UBP_FlammableFISM_Tree_C : public UBP_FlammableFISM_C
{
public:
	uint8                                        Pad_6483[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<int32, class UNiagaraComponent*>        TreeFireNiagaraSystems;                            // 0x410(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<int32, class UStaticMeshComponent*>     TreeFireStaticMeshes;                              // 0x460(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FFLODDescriptionsEnum, TSoftObjectPtr<class UStaticMesh>> FlammableStaticMeshes;                             // 0x4B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   LoadedFlammableStaticMeshes;                       // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_FlammableFISM_Tree_C* GetDefaultObj();

	void UpdateInstanceVisualData_Combusted(class UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData);
	void UpdateInstanceVisualData_Combustion(class UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData);
	void UpdateInstanceVisualData_Pyrolysis(class UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData, float CallFunc_GetCombustionTemperature_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	bool UpdateQueuedInstanceEffects(int32 InstanceIndex, struct FFlammableFISMVisualData& VisualData, TMap<int32, class UFlammableInstanceFLOD*> CallFunc_GetFlammableInstances_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UFlammableInstanceFLOD* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UStaticMeshComponent* CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent, bool CallFunc_IsValid_ReturnValue);
	void CleanupEffectsStaticMesh(class UFlammableInstanceFLOD* Instance, bool CallFunc_Map_Remove_ReturnValue, class UStaticMeshComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetOrCreateEffectsStaticMesh(class UFlammableInstanceFLOD* Instance, class UStaticMeshComponent** StaticMeshComponent, class UStaticMeshComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetFlammableLocalBounds_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetFlammableWorldTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue, class UFLODRecord* CallFunc_GetRegisteredRecord_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, const struct FFLODDescriptionsEnum& CallFunc_IntToStruct_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue);
	void OnReplacedInstanceCombusted(const struct FFLODInstanceID& NewInstance, class UFlammableInstanceFLOD* Instance, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, class ABP_DisasterController_C* K2Node_DynamicCast_AsBP_Disaster_Controller, bool K2Node_DynamicCast_bSuccess);
	void CombustingExit(class UFlammableInstanceFLOD* Instance, bool CallFunc_Map_Remove_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FBoxSphereBounds GetInstanceLocalBounds(int32 InstanceIndex, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetInstanceLocalBounds_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds);
	void CombustingEnter(class UFlammableInstanceFLOD* Instance, class UStaticMeshComponent* CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent, const struct FTransform& CallFunc_GetFlammableWorldTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue, class UNiagaraComponent* CallFunc_AddComponentByClass_ReturnValue);
	void OnLoaded_3E3354A942260BE9BFE6BDAAECC7E52C(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnFlammableInstanceDetached(class UFlammableInstance* Instance);
	void OnFlammableInstanceAttached(class UFlammableInstance* Instance);
	void OnFlammableInstanceState_Detached_Exit(class UFlammableInstance* Instance, class UFlammableState* State);
	void ExecuteUbergraph_BP_FlammableFISM_Tree(int32 EntryPoint, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, class UObject* K2Node_CustomEvent_Loaded, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, TArray<TSoftObjectPtr<class UStaticMesh>>& CallFunc_Map_Values_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UStaticMesh> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFlammableInstance* K2Node_Event_Instance_1, int32 CallFunc_Array_Add_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1);
};

}


