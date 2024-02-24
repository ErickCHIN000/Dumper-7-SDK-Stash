#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D (0x68 - 0x3B)
// BlueprintGeneratedClass BuffObjectTimeBased.BuffObjectTimeBased_C
class UBuffObjectTimeBased_C : public UBuffObject_C
{
public:
	uint8                                        Pad_2CB1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BuffDuration;                                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2CBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          BuffTimerHandle;                                   // 0x50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RemainingTime;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Buff_Active;                                       // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Buff_Paused;                                       // 0x5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CC7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          OnDeathStatueHandle;                               // 0x60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffObjectTimeBased_C* GetDefaultObj();

	void StartBuff();
	void EndBuff();
	void InterruptBuff();
	void ResetDuration(float NewDuration);
	void OnAttachToDeathStatue(class ABP_DeathShell_C* DeathShell);
	void OnDetachFromDeathStatue();
	void OnExpiredOnStatue();
	void OnBuffExpiredOnDeathStatue();
	void ExecuteUbergraph_BuffObjectTimeBased(int32 EntryPoint, class UBuffObject_C* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_CustomEvent_NewDuration, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class ABP_DeathShell_C* K2Node_Event_DeathShell, float CallFunc_GetTimerRemainingTimebyHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, float CallFunc_GetTimerRemainingTimebyHandle_ReturnValue_1);
};

}


