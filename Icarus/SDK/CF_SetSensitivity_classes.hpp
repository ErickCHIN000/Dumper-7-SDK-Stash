#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_SetSensitivity.CF_SetSensitivity_C
class UCF_SetSensitivity_C : public UCF_BaseFloat_C
{
public:
	uint8                                        Pad_2480[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetSensitivity_C* GetDefaultObj();

	void Execute();
	void Construct();
	void ExecuteUbergraph_CF_SetSensitivity(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


