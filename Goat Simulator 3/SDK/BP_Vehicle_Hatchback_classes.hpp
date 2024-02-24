#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE78 - 0xE70)
// BlueprintGeneratedClass BP_Vehicle_Hatchback.BP_Vehicle_Hatchback_C
class ABP_Vehicle_Hatchback_C : public ABP_Vehicle_Car_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Vehicle_Hatchback_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Vehicle_Hatchback(int32 EntryPoint);
};

}


