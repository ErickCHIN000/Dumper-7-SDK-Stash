#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0xC60 - 0xC52)
// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C
class UBP_ActionableBehaviour_Deployable_Foliage_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:
	uint8                                        Pad_4748[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODRecord*                           PlacementRecord;                                   // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Deployable_Foliage_C* GetDefaultObj();

	void OnDeploy(class ADeployable* SpawnedDeployable, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_AddDynamicInstance_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void CheckValidPlacement(const struct FHitResult& InHit, bool* IsValidPlacement, class FText* InvalidReason, int32 FLODRowIndex, class ALandscapeProxy* LandscapeProxy, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_CheckValidPlacement_IsValidPlacement, class FText CallFunc_CheckValidPlacement_InvalidReason, class ALandscapeProxy* K2Node_DynamicCast_AsLandscape_Proxy, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFLOD* CallFunc_GetFLOD_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AFLODTile*>& CallFunc_GetWithinBoundsFLODTiles_ReturnValue, int32 CallFunc_GetRowIndex_ReturnValue, class AFLODTile* CallFunc_Array_Get_Item, bool CallFunc_IsBasedOnLandscapeProxy_ReturnValue, class UFLODRecord* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetPreviewStaticMeshAsset(int32 PreviewVariantIndex, TSoftObjectPtr<class UStaticMesh>* StaticMeshAsset, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFLODDescription& CallFunc_GetFLODDescriptionsStruct_FLODDescriptions, enum class EValid CallFunc_GetFLODDescriptionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* CallFunc_GetStaticMeshFromFoliageISM_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
};

}


