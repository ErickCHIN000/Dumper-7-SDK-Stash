#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B8 - 0x7B0)
// BlueprintGeneratedClass BP_Window_Basic_Glass.BP_Window_Basic_Glass_C
class ABP_Window_Basic_Glass_C : public ABP_Window_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Window_Basic_Glass_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Window_Basic_Glass(int32 EntryPoint);
};

}


