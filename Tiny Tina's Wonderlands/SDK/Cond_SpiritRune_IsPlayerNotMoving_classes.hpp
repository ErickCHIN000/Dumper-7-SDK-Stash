#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x89 - 0x88)
// BlueprintGeneratedClass Cond_SpiritRune_IsPlayerNotMoving.Cond_SpiritRune_IsPlayerNotMoving_C
class UCond_SpiritRune_IsPlayerNotMoving_C : public UGbxCondition_Blueprint
{
public:
	bool                                         bExpectGearContext;                                // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UCond_SpiritRune_IsPlayerNotMoving_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakCharacter_Player* NewPlayerOwner, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_NotEqual_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player1, bool K2Node_DynamicCast_bSuccess2);
};

}


