#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x13C - 0x130)
// BlueprintGeneratedClass WaitForNeutralFractionLevel.WaitForNeutralFractionLevel_C
class UWaitForNeutralFractionLevel_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        RequiredLevel;                                     // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWaitForNeutralFractionLevel_C* GetDefaultObj();

	int32 GetProgressMax();
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnNeutralsReputationChangedEvent(class AActor* Sender);
	void ExecuteUbergraph_WaitForNeutralFractionLevel(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, class AActor* K2Node_CustomEvent_Sender, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetActualLevel_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_GetActualLevel_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1);
};

}


