#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass BP_Kick_SpecialEffect_Fire.BP_Kick_SpecialEffect_Fire_C
class ABP_Kick_SpecialEffect_Fire_C : public ABP_Kick_SpecialEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Kick_SpecialEffect_Fire_C* GetDefaultObj();

	void OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal);
	void ExecuteUbergraph_BP_Kick_SpecialEffect_Fire(int32 EntryPoint, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


