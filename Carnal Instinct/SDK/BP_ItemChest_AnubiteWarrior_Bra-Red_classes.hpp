#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x269 - 0x260)
// BlueprintGeneratedClass BP_ItemChest_AnubiteWarrior_Bra-Red.BP_ItemChest_AnubiteWarrior_Bra-Red_C
class ABP_ItemChest_AnubiteWarrior_BraMinusRed_C : public ABP_BASE_ARMOR_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Test;                                              // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ItemChest_AnubiteWarrior_BraMinusRed_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ItemChest_AnubiteWarrior_BraMinusRed(int32 EntryPoint);
};

}

