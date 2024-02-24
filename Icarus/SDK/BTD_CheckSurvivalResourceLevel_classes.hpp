#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0xA5 - 0xA0)
// BlueprintGeneratedClass BTD_CheckSurvivalResourceLevel.BTD_CheckSurvivalResourceLevel_C
class UBTD_CheckSurvivalResourceLevel_C : public UBTDecorator_BlueprintBase
{
public:
	int32                                        AbovePercentThreshold;                             // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ESurvivalConsumableType           SurvivalResource;                                  // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_CheckSurvivalResourceLevel_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, enum class ESurvivalConsumableType Temp_byte_Variable, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, class UActorState* CallFunc_GetAIActorState_ReturnValue, class USurvivalCharacterState* K2Node_DynamicCast_AsSurvival_Character_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetMaxOxygen_ReturnValue, int32 CallFunc_GetOxygen_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_GetMaxWater_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetWater_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_GetMaxFood_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_GetFood_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_2, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


