#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x269 - 0x260)
// BlueprintGeneratedClass BP_ItemHead_AnubiteWarrior_WithHead-White.BP_ItemHead_AnubiteWarrior_WithHead-White_C
class ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C : public ABP_BASE_ARMOR_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Test;                                              // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHeadMinusWhite(int32 EntryPoint);
};

}


