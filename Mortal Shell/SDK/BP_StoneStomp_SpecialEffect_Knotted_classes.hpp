#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x284 - 0x278)
// BlueprintGeneratedClass BP_StoneStomp_SpecialEffect_Knotted.BP_StoneStomp_SpecialEffect_Knotted_C
class ABP_StoneStomp_SpecialEffect_Knotted_C : public ABP_StoneStomp_SpecialEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        PlayRate;                                          // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StoneStomp_SpecialEffect_Knotted_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal);
	void ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Knotted(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable);
};

}


