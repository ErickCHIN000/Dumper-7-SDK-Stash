#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_Wait.CF_Wait_C
class UCF_Wait_C : public UCF_BaseInteger_C
{
public:
	uint8                                        Pad_1733[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_Wait_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_Wait(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, float CallFunc_GetIntegerValue_ReturnValue);
};

}


