#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2F8 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_ResetAccolades.CF_ResetAccolades_C
class UCF_ResetAccolades_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_ResetAccolades_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_ResetAccolades(int32 EntryPoint, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UPlayerTrackerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1);
};

}


