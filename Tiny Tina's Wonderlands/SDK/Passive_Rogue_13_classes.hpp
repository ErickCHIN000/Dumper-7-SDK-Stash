#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C8 - 0x2BA)
// BlueprintGeneratedClass Passive_Rogue_13.Passive_Rogue_13_C
class UPassive_Rogue_13_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_1B30[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPassive_Rogue_13_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Passive_Rogue_13(int32 EntryPoint);
};

}


