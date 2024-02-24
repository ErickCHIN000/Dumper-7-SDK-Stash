#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE1 (0x9D9 - 0x8F8)
// BlueprintGeneratedClass BP_Event_LazyWorkers.BP_Event_LazyWorkers_C
class ABP_Event_LazyWorkers_C : public ABP_Event_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_LazyWorkers_Worker_C*>      LazyWorkersRef;                                    // 0x900(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        AmountOfWorkerWorking;                             // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DAD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStaticMeshActor*                      ContainerRef;                                      // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LazyWorkers_ContainerSpawner_C*    ContainerSpawnerRef;                               // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_NPCSpawner_Environment_C> ForemanNPC;                                        // 0x928(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ABP_GenericNPC_LazyWorker_C*           WorkerTrappedUnderCont;                            // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LazyWorkers_Worker_C*              LazyWorkerOriginal;                                // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AAmbientSound>          ContainerSound;                                    // 0x960(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class AAmbientSound>          LaunchSound;                                       // 0x988(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class AAmbientSound>          TwinkleSound;                                      // 0x9B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bContainerSpawnerActive;                           // 0x9D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Event_LazyWorkers_C* GetDefaultObj();

	void OnRep_bContainerSpawnerActive(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void DestroyOldActors(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_2, class ABP_LazyWorkers_Worker_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_LazyWorkers_Worker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void LazyWorkerWorking();
	void OnQuestCompletedBlueprint();
	void OnCompletedSequenceFinished();
	void OnInitialProgressReplicated();
	void DestroySounds();
	void OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted);
	void OnPersistentEffectToggled_Event_0(bool bActive);
	void BindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler);
	void UnbindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler);
	void ExecuteUbergraph_BP_Event_LazyWorkers(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class ABP_LazyWorkers_Worker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue, class ABP_NPCSpawner_Environment_C* K2Node_DynamicCast_AsBP_NPCSpawner_Environment, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABP_NPCSpawner_Environment_C* K2Node_DynamicCast_AsBP_NPCSpawner_Environment_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, class AGGNPC* CallFunc_GetClaimedBy_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_3, TArray<TSoftObjectPtr<class AAmbientSound>>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_6, TSoftObjectPtr<class AAmbientSound> CallFunc_Array_Get_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, class AAmbientSound* K2Node_DynamicCast_AsAmbient_Sound, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_HasAuthority_ReturnValue_4, bool K2Node_Event_bSaveExisted, bool K2Node_Event_bWasCompleted, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_bActive, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_Event_Toggler_1, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_Event_Toggler);
};

}


