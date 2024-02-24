#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LP_Vengeance_Feud.LP_Vengeance_Feud_C
class ULP_Vengeance_Feud_C : public ULightProjectile_TOR_TNT_Master_C
{
public:

	static class UClass* StaticClass();
	static class ULP_Vengeance_Feud_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class ABPWeap_AR_TOR_Vengeance_C* K2Node_DynamicCast_AsBPWeap_AR_TOR_Vengeance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


