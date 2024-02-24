#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x398 - 0x398)
// BlueprintGeneratedClass LightProjData_IceSpike_Mod_05.LightProjData_IceSpike_Mod_05_C
class ULightProjData_IceSpike_Mod_05_C : public ULightProjData_IceSpike_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjData_IceSpike_Mod_05_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
};

}


