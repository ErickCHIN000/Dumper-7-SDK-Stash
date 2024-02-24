#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// BlueprintGeneratedClass AIAR_TargetIsEnemyOrSelf.AIAR_TargetIsEnemyOrSelf_C
class UAIAR_TargetIsEnemyOrSelf_C : public UAIActionRequirement
{
public:

	static class UClass* StaticClass();
	static class UAIAR_TargetIsEnemyOrSelf_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, class AAIController* CallFunc_GetOwnerAIController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemy_bIsEnemy);
};

}


