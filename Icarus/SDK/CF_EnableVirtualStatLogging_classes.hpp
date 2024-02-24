#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_EnableVirtualStatLogging.CF_EnableVirtualStatLogging_C
class UCF_EnableVirtualStatLogging_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_2278[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_EnableVirtualStatLogging_C* GetDefaultObj();

	bool GetCheckboxState(bool CallFunc_IsVirtualStatLogging_ReturnValue);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_EnableVirtualStatLogging(int32 EntryPoint, bool K2Node_Event_NewState);
};

}


