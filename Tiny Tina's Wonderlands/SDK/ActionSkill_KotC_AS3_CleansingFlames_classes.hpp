#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x618 - 0x4F8)
// BlueprintGeneratedClass ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C
class UActionSkill_KotC_AS3_CleansingFlames_C : public U_ActionSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	int32                                        HealingProjectiles;                                // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ProjectileSpawnLoc;                                // 0x504(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Healing;                                           // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    SpawnTransforms;                                   // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AOakCharacter*                         HealingProjectileSource;                           // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 HealPercent;                                       // 0x530(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       HealingTargetSearch;                               // 0x548(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AActor*                                HealingTarget;                                     // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowBreathWeapon;                                 // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              FireBreathFX3rd;                                   // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActionSkill_KotC_AS3_CleansingFlames_C* GetDefaultObj();

	void FieryRedemptionSetBreathWeaponEnable(bool Enable, bool* Res);
	void FieryRedemptionStartEffect(bool* Res);
	void OnStartActionAbility();
	void FieryRedemptionPlayDragonBreath3rd(bool Enable);
	void OnActivated();
	void OnResumed();
	void ExecuteUbergraph_ActionSkill_KotC_AS3_CleansingFlames(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, bool K2Node_Event_Enable, class UGbxAction* CallFunc_K2Play_ReturnValue);
};

}


