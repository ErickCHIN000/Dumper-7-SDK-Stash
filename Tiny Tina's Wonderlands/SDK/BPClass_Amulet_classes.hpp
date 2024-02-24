#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4F0 - 0x4C8)
// BlueprintGeneratedClass BPClass_Amulet.BPClass_Amulet_C
class ABPClass_Amulet_C : public AOakInventoryEquippableItem
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_RarityScalar;                                  // 0x4D0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        IgnoreAmuletBaseName;                              // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IgnoreAmuletPrefix;                                // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Amulet_ClassStat;                                  // 0x4E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Amulet_ElementalDamage;                            // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Amulet_Unique_GunDmg;                              // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPClass_Amulet_C* GetDefaultObj();

	void UserConstructionScript();
};

}


