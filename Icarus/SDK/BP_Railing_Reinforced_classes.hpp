#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x788 - 0x780)
// BlueprintGeneratedClass BP_Railing_Reinforced.BP_Railing_Reinforced_C
class ABP_Railing_Reinforced_C : public ABP_Railing_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Railing_Reinforced_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Railing_Reinforced(int32 EntryPoint);
};

}


