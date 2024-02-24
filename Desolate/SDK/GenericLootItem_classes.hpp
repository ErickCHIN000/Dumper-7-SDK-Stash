#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x420 - 0x418)
// BlueprintGeneratedClass GenericLootItem.GenericLootItem_C
class AGenericLootItem_C : public AGenericItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGenericLootItem_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GenericLootItem(int32 EntryPoint);
};

}


