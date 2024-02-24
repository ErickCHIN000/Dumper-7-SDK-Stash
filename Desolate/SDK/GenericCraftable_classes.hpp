#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass GenericCraftable.GenericCraftable_C
class AGenericCraftable_C : public AGenericLootItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGenericCraftable_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GenericCraftable(int32 EntryPoint);
};

}


