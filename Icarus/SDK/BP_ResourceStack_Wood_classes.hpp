#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x798 - 0x790)
// BlueprintGeneratedClass BP_ResourceStack_Wood.BP_ResourceStack_Wood_C
class ABP_ResourceStack_Wood_C : public ABP_ResourceStack_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ResourceStack_Wood_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ResourceStack_Wood(int32 EntryPoint);
};

}


