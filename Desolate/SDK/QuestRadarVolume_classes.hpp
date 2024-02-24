#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass QuestRadarVolume.QuestRadarVolume_C
class AQuestRadarVolume_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWorkComplete;                                    // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         WorkInProgress;                                    // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsVisible;                                         // 0x23A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_11B5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQuestRadar_C*                         RadarSpawner;                                      // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQuestRadarVolume_C* GetDefaultObj();

	bool ShouldNotBeSaved();
	class FName GetActorState(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName K2Node_Select_Default);
	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result);
	void QuestTaskVolumeCompleted();
	void OnRep_IsVisible(const class FString& CallFunc_Conv_BoolToString_ReturnValue);
	void IsTargetVolume(class AQuestRadar_C* RadarSpawner, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateRadarSpawner(bool CallFunc_IsValid_ReturnValue);
	void SetIsVisible(bool NewValue);
	void SetWorkInProgress(bool NewValue);
	void UpdateVisibility();
	void SetStateDisabled(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetStateEnabled(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CompleteWork();
	void StartWork(bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void OnItemDropped(class AQuestRadar_C* Radar);
	void SetActorState(class FName StateName);
	void ReceiveTick(float DeltaSeconds);
	void OnStateRestored();
	void CompleteQuestRadar();
	void ExecuteUbergraph_QuestRadarVolume(int32 EntryPoint, TArray<class AQuestRadar_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQuestRadar_C* CallFunc_Array_Get_Item, class APawn* CallFunc_GetInstigator_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTargetVolume_Result, class AQuestRadar_C* K2Node_CustomEvent_Radar, class FName K2Node_Event_StateName, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


