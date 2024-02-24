#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnemyContext.EnemyContext_C
class UEnemyContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnemyContext_C* GetDefaultObj();

	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class AActor* EnemyActor, class AMortalShellEQSPawn_C* K2Node_DynamicCast_AsMortal_Shell_EQSPawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue, TArray<class AZero_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AZero_Base_C* CallFunc_Array_Get_Item);
};

}


