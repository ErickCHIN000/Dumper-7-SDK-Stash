#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5F0 - 0x5E8)
// BlueprintGeneratedClass BP_GGAIController_Humanoid.BP_GGAIController_Humanoid_C
class ABP_GGAIController_Humanoid_C : public AGGAIController_Humanoid
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_GGAIController_Humanoid_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GGAIController_Humanoid(int32 EntryPoint);
};

}


