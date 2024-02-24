#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x350 - 0x280)
// BlueprintGeneratedClass BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C
class ABaseBuildSystemEntity_01_C : public ABaseBuildSystemEntity
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChildActorComponent*                  MinimapTag;                                        // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ba_AreaStatTrigger;                                // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  AffinityAffects;                                   // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  BasicEffects;                                      // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Bump_IsAfterPeak_58DDC2A448031F6147C0FC9B36D1C5E3; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Bump_Timeline_58DDC2A448031F6147C0FC9B36D1C5E3;    // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                Bump__Direction_58DDC2A448031F6147C0FC9B36D1C5E3;  // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_292C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Bump;                                              // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlaced;                                          // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2930[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    OGMaterial;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OGLocation;                                        // 0x2D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2935[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABaseBuildSystemEntity_01_C*>   ActorsOnTop;                                       // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        OriginalZ;                                         // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_293B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  FlourishMesh;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, bool>                    CollisionMap;                                      // 0x300(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABaseBuildSystemEntity_01_C* GetDefaultObj();

	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void AdjustMPC(bool Enabled, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1);
	void GetMinimapTag(class Abp_MinimapTag_C** Tag, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag, bool K2Node_DynamicCast_bSuccess);
	void NewFunction_0();
	void Restart_after_death();
	void Power_Off();
	void Power_On();
	void ToggleInteraction(bool InteractionEnabled, const TArray<class AActor*>& ListToToggle, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, class AActor* CallFunc_Array_Get_Item, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save, bool K2Node_DynamicCast_bSuccess, class Aba_InteractableCustom_00_C* K2Node_DynamicCast_AsBa_Interactable_Custom_00, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IInteractable> K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_2, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void LogScrap(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<enum class EResourceType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Map_Length_ReturnValue, enum class EResourceType CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<float>& K2Node_MakeArray_Array, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue);
	void ToggleAdditionalAffinityEffects(bool ShouldEffectBeActive);
	void ToggleAdditionalBasicEffects(bool ShouldEffectBeActive);
	void Bump__FinishedFunc();
	void Bump__UpdateFunc();
	void LoadingFinished();
	void PrepareDataForSave();
	void Placed();
	void Replace();
	void Deleted();
	void StartFlourish();
	void Lifted();
	void BumpMovement();
	void ReceiveBeginPlay();
	void SpawnPickableScrappedResource(class FName ResourceName, float Amount);
	void UpdatePowerBasedOnLevel();
	void LoadFinished();
	void DisableChildActorCollision();
	void RevertCollisionDisable();
	void UpdateMinimapTag();
	void ExecuteUbergraph_BaseBuildSystemEntity_01(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component, bool K2Node_DynamicCast_bSuccess, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_1, bool K2Node_DynamicCast_bSuccess_1, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_2, bool K2Node_DynamicCast_bSuccess_2, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_3, bool K2Node_DynamicCast_bSuccess_3, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_4, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_Event_ResourceName, float K2Node_Event_Amount, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue, TArray<class UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class Aba_Crafting_Base_Interactable_02_C* K2Node_DynamicCast_AsBa_Crafting_Base_Interactable_02, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class FName CallFunc_GetBuildID_ReturnValue, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, class UChildActorComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GetActorEnableCollision_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GetActorEnableCollision_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue_1, class FName CallFunc_GetBuildID_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FBuildEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_1, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_2, bool CallFunc_IsValid_ReturnValue, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_3, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_4, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_5);
};

}


