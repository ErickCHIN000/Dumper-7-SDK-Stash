#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x450 - 0x340)
// BlueprintGeneratedClass BP_SimulationStateManager.BP_SimulationStateManager_C
class ABP_SimulationStateManager_C : public ANWXSimStateManagerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CreatureBudgetComponent_C*         BP_CreatureBudgetComponent;                        // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RuntimeRealmSystemComponent_C*     BP_RuntimeRealmSystemComponent;                    // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpatialWorldTimeComponent*            SpatialWorldTime;                                  // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       NotificationDisplayTime;                           // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ResourceNodeManager_C*>     ResourceManagers;                                  // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_ResourceNodeManager_C*>     WoodManagers;                                      // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_ResourceNodeManager_C*>     OreManagers;                                       // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UObject*                               StructureManager;                                  // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSimulationRoundComplete;                         // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTimeOfDayChanged;                                // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        SimRound;                                          // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentHour;                                       // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TimeOfDay                       CurrentTimeOfDay;                                  // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TimeOfDayManager_C*                TimeOfDayManager;                                  // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        AmortizedSimulationStep;                           // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               HoudiniGridManager;                                // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableTimeOfDayUpdates;                           // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeOfDayCheckFrequency;                           // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureManager_C*>         CreatureManagers;                                  // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_CreatureSpawnerBase_C*             CreatureSpawner;                                   // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureManager_C*                 CreatureManager;                                   // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                MaxCreatureMulitpierFlag;                          // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDisableTimeOfDayUpdates;                         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTimeOfDayManagerRegistered;                      // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_SimulationStateManager_C* GetDefaultObj();

	void ApplyConfigSettingsFromRRS(class ABP_GameState_C* GameState, const class FString& CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void GetTimeOfDayManager(class ABP_TimeOfDayManager_C** TimeOfDayManager);
	void RegisterTimeOfDayManager(class ABP_TimeOfDayManager_C* TimeOfDayManager, bool CallFunc_IsValid_ReturnValue);
	void DeregisterResourceManager(class ABP_ResourceNodeManager_C* ResourceManager, class UClass* CallFunc_GetBaseResourceClass_BaseClass, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetBaseResourceClass_BaseClass_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2);
	void RegisterResourceManager(class ABP_ResourceNodeManager_C* ResourceManager, class UClass* CallFunc_GetBaseResourceClass_BaseClass, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetBaseResourceClass_BaseClass_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void TriggerSimulationRound();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveAuthorityGained();
	void Auth_OverwriteTimeOfDay(enum class E_TimeOfDay TimeOfDay);
	void Auth_PauseTimeOfDayUpdates();
	void Auth_ResumeTimeOfDayUpdates();
	void InitializeManager();
	void OnRRSConfigReady();
	void RegisterCreatureMan(class ABP_CreatureManager_C* CreatureManager);
	void POIsFinished();
	void ExecuteUbergraph_BP_SimulationStateManager(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TArray<class FName>& CallFunc_GetRealmClusterThemeNames_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, enum class E_TimeOfDay K2Node_CustomEvent_TimeOfDay, class ABP_CreatureManager_C* K2Node_CustomEvent_CreatureManager, bool CallFunc_IsServer_ReturnValue_1, const struct FMaxPerType& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FMaxPerType& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ANWXGameModeBase* CallFunc_GetNWXGameModeBase_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetWorkerFlag_OutFlagValue, bool CallFunc_GetWorkerFlag_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_1, const struct FMaxPerType& K2Node_MakeStruct_MaxPerType);
	void OnTimeOfDayManagerRegistered__DelegateSignature(class ABP_TimeOfDayManager_C* TimeOfDayManager);
	void OnDisableTimeOfDayUpdates__DelegateSignature(bool TimeOfDayUpdatesDisabled);
	void OnTimeOfDayChanged__DelegateSignature();
	void OnSimulationRoundComplete__DelegateSignature();
};

}


