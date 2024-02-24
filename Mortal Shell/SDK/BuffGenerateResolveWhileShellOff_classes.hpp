#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x50 - 0x3B)
// BlueprintGeneratedClass BuffGenerateResolveWhileShellOff.BuffGenerateResolveWhileShellOff_C
class UBuffGenerateResolveWhileShellOff_C : public UBuffObject_C
{
public:
	uint8                                        Pad_2B2E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        StartTime;                                         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResolvePerSec;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffGenerateResolveWhileShellOff_C* GetDefaultObj();

	void OnBuffStart();
	void OnBuffEnd(bool bInterrupted);
	void OnShellRestored();
	void ExecuteUbergraph_BuffGenerateResolveWhileShellOff(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bInterrupted, float CallFunc_GetTimeSeconds_ReturnValue, class ABarbarous_C* CallFunc_GetActorToBuffAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetActorToBuffAsBarbarous_AsBarbarous_1, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


