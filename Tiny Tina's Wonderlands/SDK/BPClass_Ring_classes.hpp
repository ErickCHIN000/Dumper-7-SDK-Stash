#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x374 (0x83C - 0x4C8)
// BlueprintGeneratedClass BPClass_Ring.BPClass_Ring_C
class ABPClass_Ring_C : public AOakInventoryEquippableItem
{
public:
	class UOakStatusEffectManagerComponent*      OakStatusEffectManager;                            // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    RingBonusScalar;                                   // 0x4D8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Melee_CritChance;                            // 0x4E4(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Melee_CritDamage;                            // 0x4F0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Comp_Health;                                 // 0x4FC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Comp_DmgReduction;                           // 0x508(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Comp_CritChance;                             // 0x514(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Comp_CritDamage;                             // 0x520(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_DarkMagic_MaxLeech;                          // 0x52C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SkillCooldown_Scalar;                        // 0x538(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Skill_CritChance;                            // 0x544(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Skill_CritDamage;                            // 0x550(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SkillDuration_Scalar;                        // 0x55C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SpellCrit_Chance;                            // 0x568(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SpellCrit_Damage;                            // 0x574(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_Spell_Radius;                                // 0x580(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_CompanionDamage;                             // 0x58C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_GunDamage;                                   // 0x598(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_MeleeDamage;                                 // 0x5A4(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_SkillDamage;                                 // 0x5B0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_SpellDamage;                                 // 0x5BC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_AR_CritDamage_Scalar;                      // 0x5C8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_AR_MagSize_Scalar;                         // 0x5D4(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_AR_ReloadTime_Scalar;                      // 0x5E0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_PS_CritDamage_Scalar;                      // 0x5EC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_PS_MagSize_Scalar;                         // 0x5F8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_PS_ReloadTime_Scalar;                      // 0x604(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SG_CritDamage_Scalar;                      // 0x610(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SG_MagSize_Scalar;                         // 0x61C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SG_ReloadTime_Scalar;                      // 0x628(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SMG_CritDamage_Scalar;                     // 0x634(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SMG_MagSize_Scalar;                        // 0x640(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SMG_ReloadTime_Scalar;                     // 0x64C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SR_CritDamage_Scalar;                      // 0x658(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SR_MagSize_Scalar;                         // 0x664(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    GunType_SR_ReloadTime_Scalar;                      // 0x670(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                        IgnoreManufacturerName;                            // 0x67C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_COV_MagSize;                                 // 0x680(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_COV_ReloadSpeed;                             // 0x68C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_DAL_GunDamage;                               // 0x698(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_DAL_CritDamage;                              // 0x6A4(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_DAL_MagSize;                                 // 0x6B0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_DAL_ReloadSpeed;                             // 0x6BC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_HYP_GunDamage;                               // 0x6C8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_HYP_CritDamage;                              // 0x6D4(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_HYP_MagSize;                                 // 0x6E0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_HYP_ReloadSpeed;                             // 0x6EC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_JAK_GunDamage;                               // 0x6F8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_JAK_CritDamage;                              // 0x704(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_JAK_MagSize;                                 // 0x710(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_JAK_ReloadSpeed;                             // 0x71C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_TED_GunDamage;                               // 0x728(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_TED_CritDamage;                              // 0x734(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_TED_MagSize;                                 // 0x740(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_TED_ReloadSpeed;                             // 0x74C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_TOR_GunDamage;                               // 0x758(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_TOR_CritDamage;                              // 0x764(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_TOR_MagSize;                                 // 0x770(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_TOR_ReloadSpeed;                             // 0x77C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_VLA_GunDamage;                               // 0x788(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_VLA_CritDamage;                              // 0x794(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_VLA_MagSize;                                 // 0x7A0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_VLA_ReloadSpeed;                             // 0x7AC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Major_StatusEffectDamage;                          // 0x7B8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Shock_Duration_Scalar;                    // 0x7C4(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Shock_Chance_Scalar;                      // 0x7D0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Poison_Duration_Scalar;                   // 0x7DC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Poison_Chance_Scalar;                     // 0x7E8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Fire_Duration_Scalar;                     // 0x7F4(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Fire_Chance_Scalar;                       // 0x800(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Dark_Duration_Scalar;                     // 0x80C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Dark_Chance_Scalar;                       // 0x818(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Cryo_Duration_Scalar;                     // 0x824(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Minor_SE_Cryo_Chance_Scalar;                       // 0x830(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPClass_Ring_C* GetDefaultObj();

	void UserConstructionScript();
};

}


