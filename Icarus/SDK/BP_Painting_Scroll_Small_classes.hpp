#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B0 - 0x7A8)
// BlueprintGeneratedClass BP_Painting_Scroll_Small.BP_Painting_Scroll_Small_C
class ABP_Painting_Scroll_Small_C : public ABP_Painting_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Painting_Scroll_Small_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Painting_Scroll_Small(int32 EntryPoint);
};

}


