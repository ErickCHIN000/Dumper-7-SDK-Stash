#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x440 - 0x440)
// BlueprintGeneratedClass LightProj_Spell_ElementalHawk_RogueImp.LightProj_Spell_ElementalHawk_RogueImp_C
class ULightProj_Spell_ElementalHawk_RogueImp_C : public ULightProj_Spell_ElementalHawk_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Spell_ElementalHawk_RogueImp_C* GetDefaultObj();

	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical);
	void FindHawkHomingTarget(class ULightProjectile* Projectile, class AActor** HomingTarget, bool* Res, class AActor* CallFunc_FindHawkHomingTarget_HomingTarget, bool CallFunc_FindHawkHomingTarget_Res, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


