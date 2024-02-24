#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x320 - 0x318)
// BlueprintGeneratedClass BP_FireInstance.BP_FireInstance_C
class ABP_FireInstance_C : public AFireInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_FireInstance_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_FireInstance(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


