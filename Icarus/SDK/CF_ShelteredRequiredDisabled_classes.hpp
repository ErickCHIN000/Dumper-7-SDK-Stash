#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C
class UCF_ShelteredRequiredDisabled_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_2476[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_ShelteredRequiredDisabled_C* GetDefaultObj();

	bool GetCheckboxState(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsShelteredRequiredDisabled_ReturnValue);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_ShelteredRequiredDisabled(int32 EntryPoint, bool K2Node_Event_NewState, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


