#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x170 - 0x130)
// BlueprintGeneratedClass BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C
class UBP_TemporalRealmTimerComponent_C : public URealmTimerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                PersistenceKey;                                    // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int64                                        PreviousRealmTimestamp;                            // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        PreviousUTCTimestamp;                              // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LastPersistenceWrite;                              // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PersistenceWriteRate;                              // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Initial_Canonical_Time_Normalized;                 // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_TemporalRealmTimerComponent_C* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	void GetPersistenceObjectByKey(const class FString& PersistenceKey, bool* bSuccess, class UObject** PersistedObject, TMap<class FString, class UObject*> GenericDataMap, class UObject* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TMap<class FString, class UObject*> CallFunc_GetGenericObjectMap_GenericDataMap, bool CallFunc_GetGenericObjectMap_Success, bool CallFunc_IsValid_ReturnValue);
	void SetPersistenceObjectByKey(const class FString& PersistenceKey, class UObject* ObjectToPersist, class UObject* OldPersistedObject, TMap<class FString, class UObject*> GenericDataMap, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TMap<class FString, class UObject*> CallFunc_GetGenericObjectMap_GenericDataMap, bool CallFunc_GetGenericObjectMap_Success, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_StoreGenericObjectMap_Success);
	void OnLinkedReferencesRestored();
	void OnPersistentDataRestored();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_TemporalRealmTimerComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, double CallFunc_Conv_Int64ToDouble_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue_1, const struct FDateTime& CallFunc_UtcNow_ReturnValue_1, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue_1, bool CallFunc_GetPersistenceObjectByKey_bSuccess, class UObject* CallFunc_GetPersistenceObjectByKey_PersistedObject, class UBP_TemporalRealmTimerComponent_C* K2Node_DynamicCast_AsBP_Temporal_Realm_Timer_Component, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_DoubleToInt64_ReturnValue);
};

}


