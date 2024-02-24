#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x370 - 0x361)
// BlueprintGeneratedClass StaticField.StaticField_C
class AStaticField_C : public ABaseAnomaly_C
{
public:
	uint8                                        Pad_4BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AStaticField_C* GetDefaultObj();

	void OnDamageApplied(class ASHPlayerController* PlayerController, bool* Result, bool CallFunc_OnDamageApplied_Result);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StaticField(int32 EntryPoint);
};

}


