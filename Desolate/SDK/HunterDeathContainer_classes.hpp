#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// BlueprintGeneratedClass HunterDeathContainer.HunterDeathContainer_C
class AHunterDeathContainer_C : public AAi_BaseDeathContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AHunterDeathContainer_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_HunterDeathContainer(int32 EntryPoint);
};

}


