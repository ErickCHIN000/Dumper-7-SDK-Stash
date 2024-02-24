#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x13C - 0x130)
// BlueprintGeneratedClass WaitAMinute.WaitAMinute_C
class UWaitAMinute_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Duration;                                          // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWaitAMinute_C* GetDefaultObj();

	int32 GetProgressMax(int32 CallFunc_GetProgressMax_ReturnValue);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnTimer();
	void ExecuteUbergraph_WaitAMinute(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, class ASHPlayerCharacter* K2Node_Event_Player);
};

}


