#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass BP_DodgeSpecialEffect_Ice.BP_DodgeSpecialEffect_Ice_C
class ABP_DodgeSpecialEffect_Ice_C : public ABP_DodgeSpecialEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DodgeSpecialEffect_Ice_C* GetDefaultObj();

	void OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal);
	void ExecuteUbergraph_BP_DodgeSpecialEffect_Ice(int32 EntryPoint, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, bool CallFunc_CheckIfShouldEnable_ReturnValue);
};

}


