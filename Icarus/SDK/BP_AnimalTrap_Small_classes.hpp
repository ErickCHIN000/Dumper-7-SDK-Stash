#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7A0 - 0x798)
// BlueprintGeneratedClass BP_AnimalTrap_Small.BP_AnimalTrap_Small_C
class ABP_AnimalTrap_Small_C : public ABP_AnimalTrap_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x798(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_AnimalTrap_Small_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AnimalTrap_Small(int32 EntryPoint);
};

}


