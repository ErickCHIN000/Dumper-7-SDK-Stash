#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass BP_Axatana_TransformDamage.BP_Axatana_TransformDamage_C
class ABP_Axatana_TransformDamage_C : public ABP_DodgeSpecialEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Axatana_TransformDamage_C* GetDefaultObj();

	void OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal);
	void ExecuteUbergraph_BP_Axatana_TransformDamage(int32 EntryPoint, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, float CallFunc_ApplyDamage_ReturnValue);
};

}


