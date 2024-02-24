#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9D8 - 0x9D0)
// BlueprintGeneratedClass BP_CraftingBench.BP_CraftingBench_C
class ABP_CraftingBench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_CraftingBench_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CraftingBench(int32 EntryPoint);
};

}


