#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3A8 - 0x3A0)
// BlueprintGeneratedClass PlayerInventory.PlayerInventory_C
class APlayerInventory_C : public AGenericInventory_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class APlayerInventory_C* GetDefaultObj();

	void ShouldGiveItems(bool* Result, bool CallFunc_ShouldGiveItems_Result, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerInventory(int32 EntryPoint);
};

}


