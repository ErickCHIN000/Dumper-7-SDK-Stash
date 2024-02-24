#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x988 (0x13C0 - 0xA38)
// BlueprintGeneratedClass BP_Structure_Functional_SunGiantOffering.BP_Structure_Functional_SunGiantOffering_C
class ABP_Structure_Functional_SunGiantOffering_C : public ABP_Structure_Functional_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Vines;                                             // 0xA48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xA50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_GrowthCurve_D8036DCC4D568A6EAFB717A4E6AA0248; // 0xA58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_D8036DCC4D568A6EAFB717A4E6AA0248; // 0xA5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0xA60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        GrowthTimeline_GrowthCurve_B9BF1FCB4E92E76849C9E79ADAC5E35C; // 0xA68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                GrowthTimeline__Direction_B9BF1FCB4E92E76849C9E79ADAC5E35C; // 0xA6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    GrowthTimeline;                                    // 0xA70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       PlacedItem;                                        // 0xA80(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInventoryEntry                       SpawnSpec;                                         // 0xD70(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UScopedAkComponent*                    ScopedAk_Offering;                                 // 0x1060(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         OfferingAudioEnabled;                              // 0x1068(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacteristicDataReference          PawnChr;                                           // 0x1070(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCharacteristicDataReference          RookChr;                                           // 0x1100(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCharacteristicDataReference          BishopChr;                                         // 0x1190(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCharacteristicDataReference          KnightChr;                                         // 0x1220(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCharacteristicDataAsset> PawnChrDA;                                         // 0x12B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UCharacteristicDataAsset> RookChrDA;                                         // 0x12D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UCharacteristicDataAsset> KnightChrDA;                                       // 0x1300(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UCharacteristicDataAsset> BishopChrDA;                                       // 0x1328(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               OfferingAudioOffset;                               // 0x1350(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          OfferingLoopStart;                                 // 0x1368(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          OfferingLoopEnd;                                   // 0x1390(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                         OfferingDissolve;                                  // 0x13B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_SunGiantOffering_C* GetDefaultObj();

	class UNWXActionStationComponentV2* GetActionStationComponent();
	void InitializeCharacteristics(const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue, const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_1, const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_2, const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue_3);
	void HandleOfferingAudio(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue);
	void CrossServerDestroySelf();
	void OnCompletedState(bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_OnCompletedState_Success, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnOfferingAdded(struct FStructureAddResourcesContext& AddResourcesContext, const struct FGameplayTag& OfferingTag, const struct FGameplayTag& NewLocalVar, const struct FGameplayTag& Temp_struct_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FInstanceData_CharacteristicInfo& CallFunc_TryGetItemCharacteristicInfo_CharacteristicInfo, enum class EGetResult CallFunc_TryGetItemCharacteristicInfo_Branches, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits_1, enum class EGetResult CallFunc_TryGetItemTraits_Branches_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasTag_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_1, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_2, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue_2, TScriptInterface<class IStructureResourceConsumerInterface> CallFunc_GetPostConstructionResourcesManager_ReturnValue, bool CallFunc_RemoveResource_Success, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IStructureResourceConsumerInterface> CallFunc_GetPostConstructionResourcesManager_ReturnValue_1, bool CallFunc_RemoveResource_Success_1, const struct FGameplayTag& Temp_struct_Variable_3, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2, bool K2Node_DynamicCast_bSuccess_4, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FItemData_MeshInfo& CallFunc_TryGetItemDataMeshInfo_OutData, enum class EGetResult CallFunc_TryGetItemDataMeshInfo_Branches, bool K2Node_SwitchEnum_CmpSuccess_4, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3, bool K2Node_DynamicCast_bSuccess_5, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_5, bool K2Node_DynamicCast_bSuccess_8);
	void DecideReward();
	void SpawnRejection(bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_SplitItemEntry_Success, const struct FInventoryEntry& CallFunc_SplitItemEntry_OriginalEntry, const struct FInventoryEntry& CallFunc_SplitItemEntry_NewEntry);
	void SpawnBestReward(bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_4, double CallFunc_RandomFloatInRange_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1);
	void SpawnReward(bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void ResetOffering();
	void GrowthTimeline__FinishedFunc();
	void GrowthTimeline__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Set_Offering_Mesh(class UStaticMesh* NewMesh);
	void ReceiveBeginPlay();
	void FadeOut();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Structure_Functional_SunGiantOffering(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, class UStaticMesh* K2Node_CustomEvent_NewMesh, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStructureEventInterface> CallFunc_GetStructureEventsObject_self_CastInput, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue);
};

}


