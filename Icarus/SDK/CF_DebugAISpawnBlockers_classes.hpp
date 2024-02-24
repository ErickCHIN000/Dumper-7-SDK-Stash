#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C
class UCF_DebugAISpawnBlockers_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_28A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_DebugAISpawnBlockers_C* GetDefaultObj();

	bool GetCheckboxState(class AAISpawner* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_GetDebugSpawnBlockers_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_DebugAISpawnBlockers(int32 EntryPoint, bool K2Node_Event_NewState, class AAISpawner* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


