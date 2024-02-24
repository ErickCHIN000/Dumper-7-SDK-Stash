#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FL_HoldAndThrow.FL_HoldAndThrow_C
class UFL_HoldAndThrow_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFL_HoldAndThrow_C* GetDefaultObj();

	void HNT_Throw(class AActor* Projectile, class UObject* __WorldContext, TScriptInterface<class IBPI_ProjectileHoldAndThrow_C> K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw, bool K2Node_DynamicCast_bSuccess);
	void HNT_Drop(class AActor* Projectile, class UObject* __WorldContext, TScriptInterface<class IBPI_ProjectileHoldAndThrow_C> K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw, bool K2Node_DynamicCast_bSuccess);
	void HNT_Prime(class AActor* Projectile, class UObject* __WorldContext, TScriptInterface<class IBPI_ProjectileHoldAndThrow_C> K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw, bool K2Node_DynamicCast_bSuccess);
};

}


