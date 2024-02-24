#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x1A0 - 0x130)
// BlueprintGeneratedClass WaitForStateArray.WaitForStateArray_C
class UWaitForStateArray_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  State;                                             // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AActor>>         SceneActors;                                       // 0x140(0x10)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class AActor>, bool>     SceneActorsProgress;                               // 0x150(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class UWaitForStateArray_C* GetDefaultObj();

	int32 GetProgressMax(int32 CallFunc_Array_Length_ReturnValue);
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnActorStateChanged_Event_0(class AActor* Sender);
	void ExecuteUbergraph_WaitForStateArray(int32 EntryPoint, bool Temp_bool_Variable, int32 CallFunc_Map_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, class AActor* K2Node_CustomEvent_Sender, TScriptInterface<class ISHActorState> K2Node_DynamicCast_AsSHActor_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_GetActorState_ReturnValue, class FName Temp_name_Variable, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetProgress_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


