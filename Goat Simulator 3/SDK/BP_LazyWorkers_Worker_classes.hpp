#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x338 - 0x230)
// BlueprintGeneratedClass BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C
class ABP_LazyWorkers_Worker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WorkerHatComp;                                     // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WorkerHairComp;                                    // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WorkerLowerComp;                                   // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WorkerUpperComp;                                   // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WorkerHeadComp;                                    // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         LazyWorkerHead;                                    // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         LazyWorkerUpper;                                   // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         LazyWorkerLower;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           LazyWorkerHair;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           LazyWorkerHat;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            LazyWorkerHeadMat;                                 // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            LazyWorkerUpperMat;                                // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            LazyWorkerLowerMat;                                // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            LazyWorkerHairMat;                                 // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasLazyWorker;                                     // 0x2D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_E79[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LazyWorkerWorkingDispatcher;                       // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EGender                           LazyWorkerGender;                                  // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E7C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        GhostNPCAppearance;                                // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NPCName;                                           // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        MaxCullDistance;                                   // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NPCSpawnOffset;                                    // 0x324(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Event_LazyWorkers_C*               Event;                                             // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LazyWorkers_Worker_C* GetDefaultObj();

	void UnhideLazyWorker(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item_2, class UMaterialInterface* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void OnRep_HasWorker();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void SpawnNPC();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void GetFetchedNPCAppearance(class ABP_GGNPC_Humanoid_C* FetchedNPC);
	void ExecuteUbergraph_BP_LazyWorkers_Worker(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsCompNPC_IsNPC, bool CallFunc_IsCompNPC_IsOverlapComp, class AGGNPC* CallFunc_IsCompNPC_ReturnValue, class ABP_GGNPC_Humanoid_C* K2Node_DynamicCast_AsBP_GGNPC_Humanoid, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_GetLatestInstigator_OutInteractionType, class APawn* CallFunc_GetLatestInstigator_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_WasAppearanceGeneratedWithTag_ReturnValue, bool CallFunc_WasAppearanceGeneratedWithTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_GGNPC_Humanoid_C* K2Node_CustomEvent_FetchedNPC, const struct FAccessoryElement& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_2, TArray<class FString>& CallFunc_GetNPCAppearance_TrimmedAccessories, TArray<class FString>& CallFunc_GetNPCAppearance_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TScriptInterface<class IGGNamedActorInterface> CallFunc_GetGoatSimName_self_CastInput, class FText CallFunc_GetGoatSimName_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AGGNPC* CallFunc_SpawnCivilianNPC_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IGGNamedActorInterface> CallFunc_SetGoatSimName_self_CastInput, bool CallFunc_SetGoatSimName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActive_ReturnValue);
	void LazyWorkerWorkingDispatcher__DelegateSignature();
};

}


