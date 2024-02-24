#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x62 (0x302 - 0x2A0)
// BlueprintGeneratedClass BP_ResourceNodeManager.BP_ResourceNodeManager_C
class ABP_ResourceNodeManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        ResourceLevelClasses;                              // 0x2B0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class ABP_ResourceNodeIIMBase_C*>     SpawnedResources;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        ResourceLevel;                                     // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SimulationStateManager_C*          SimulationManager;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ResourceRegrowTimeOverride;                        // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LinetraceHeight;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SetupComplete;                                     // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAutoSetupResources;                               // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDoneSetup;                                        // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ResourceNodeManager_C* GetDefaultObj();

	void DeregisterWithSimulation(bool CallFunc_IsValid_ReturnValue);
	void SetupResources();
	void SpawnResource(const struct FVector& SpawnLocation, class UClass* SpawnClass, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ResourceNodeIIMBase_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void ReadyForPromotion(bool* Promote, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RequestReset();
	void ExecuteReset();
	void SetupResourceManager(TArray<class ABP_ResourceNodeIIMBase_C*>& K2Node_MakeArray_Array);
	void GetBaseResourceClass(class UClass** BaseClass, bool CallFunc_Array_IsValidIndex_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_IsValidClass_ReturnValue);
	void RequestResourcePromotion(bool* Success, bool CallFunc_AttemptResourcePromotion_Success);
	void PromoteSpawnedResources(bool* Success, class ABP_ResourceNodeIIMBase_C* NewResource, int32 RegrowthTimer, bool ResourceDepleted, int32 CurrentIndex, class ABP_ResourceNodeIIMBase_C* CurrentResource, int32 OldResourceCount, bool PromotionSuccess, const struct FTransform& ResourceLocation, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABP_ResourceNodeIIMBase_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ResourceNodeIIMBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PromoteResourceLevel(bool* Success, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AttemptResourcePromotion(bool* Success, bool CallFunc_IsServer_ReturnValue, bool CallFunc_ReadyForPromotion_Promote, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PromoteSpawnedResources_Success, bool CallFunc_PromoteResourceLevel_Success);
	void DestroySpawnedResources(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_ResourceNodeIIMBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RegisterWithSimulation(bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnSimManagerReady(class AManagerBase* Manager, bool bIsReady);
	void ExecuteUbergraph_BP_ResourceNodeManager(int32 EntryPoint, TSubclassOf<class AManagerBase> Temp_class_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, class ABP_SimulationStateManager_C* K2Node_DynamicCast_AsBP_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess);
	void SetupComplete__DelegateSignature();
};

}


