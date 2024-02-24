#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x168 - 0x130)
// BlueprintGeneratedClass WaitForState.WaitForState_C
class UWaitForState_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  State;                                             // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                 SceneActor;                                        // 0x140(0x28)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWaitForState_C* GetDefaultObj();

	int32 GetProgressMax();
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnActorStateChanged_Event_0(class AActor* Sender);
	void ExecuteUbergraph_WaitForState(int32 EntryPoint, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class AActor* K2Node_CustomEvent_Sender, TScriptInterface<class ISHActorState> K2Node_DynamicCast_AsSHActor_State, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class FName CallFunc_GetActorState_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue);
};

}


