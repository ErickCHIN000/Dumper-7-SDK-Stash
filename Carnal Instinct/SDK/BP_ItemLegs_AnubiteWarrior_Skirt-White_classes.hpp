#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x269 - 0x260)
// BlueprintGeneratedClass BP_ItemLegs_AnubiteWarrior_Skirt-White.BP_ItemLegs_AnubiteWarrior_Skirt-White_C
class ABP_ItemLegs_AnubiteWarrior_SkirtMinusWhite_C : public ABP_BASE_ARMOR_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Test;                                              // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ItemLegs_AnubiteWarrior_SkirtMinusWhite_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ItemLegs_AnubiteWarrior_SkirtMinusWhite(int32 EntryPoint);
};

}


