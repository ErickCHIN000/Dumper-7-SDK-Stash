#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjData_DragonCompanion_FireBolt.LightProjData_DragonCompanion_FireBolt_C
class ULightProjData_DragonCompanion_FireBolt_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_19FA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjData_DragonCompanion_FireBolt_C* GetDefaultObj();

	void CreateSplat(class ULightProjectile* LightProjectile, const struct FTransform& TransformData, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetDragonPet_Ref, bool Temp_bool_IsClosed_Variable, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_ExternalDragonCompanionCreateFireBoltSplat_Res);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& CallFunc_GetHitLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void OnExplode(class ULightProjectile* Projectile, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
};

}


