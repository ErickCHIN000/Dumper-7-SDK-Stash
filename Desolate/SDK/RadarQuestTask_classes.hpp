#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x160 - 0x130)
// BlueprintGeneratedClass RadarQuestTask.RadarQuestTask_C
class URadarQuestTask_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  State;                                             // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AQuestRadarVolume_C>> SceneActor;                                        // 0x140(0x10)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	TArray<class FString>                        CompletedVolumes;                                  // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URadarQuestTask_C* GetDefaultObj();

	int32 GetProgressMax(int32 CallFunc_Array_Length_ReturnValue);
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnActorStateChanged_Event_0(class AActor* Sender);
	void ExecuteUbergraph_RadarQuestTask(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, TArray<class AActor*>& CallFunc_GetAllActorsOfClassFromActor_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQuestRadarVolume_C* K2Node_DynamicCast_AsQuest_Radar_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, class AActor* K2Node_CustomEvent_Sender, TScriptInterface<class ISHActorState> K2Node_DynamicCast_AsSHActor_State, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetObjectName_ReturnValue_1, class FName CallFunc_GetActorState_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item_1, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_2, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_3, class AQuestRadarVolume_C* K2Node_DynamicCast_AsQuest_Radar_Volume_1, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_GetObjectName_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class FName Temp_name_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


