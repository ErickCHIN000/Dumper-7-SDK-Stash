#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9D8 - 0x9D0)
// BlueprintGeneratedClass BP_MaterialProcessor.BP_MaterialProcessor_C
class ABP_MaterialProcessor_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_MaterialProcessor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MaterialProcessor(int32 EntryPoint);
};

}


