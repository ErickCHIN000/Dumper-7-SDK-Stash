#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjData_VLA_PS_AUTOMAGICEXE.LightProjData_VLA_PS_AUTOMAGICEXE_C
class ULightProjData_VLA_PS_AUTOMAGICEXE_C : public ULightProjData_MagicMissile_Ricochet_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjData_VLA_PS_AUTOMAGICEXE_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_AUTOMAGICEXE_C* K2Node_DynamicCast_AsAbility_AUTOMAGICEXE, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetMagicMissileTarget_Res, bool CallFunc_IsValid_ReturnValue);
};

}


