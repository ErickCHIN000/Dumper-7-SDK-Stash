#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass BP_StoneStomp_SpecialEffect_Fire.BP_StoneStomp_SpecialEffect_Fire_C
class ABP_StoneStomp_SpecialEffect_Fire_C : public ABP_StoneStomp_SpecialEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_StoneStomp_SpecialEffect_Fire_C* GetDefaultObj();

	void OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal);
	void ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Fire(int32 EntryPoint, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}

