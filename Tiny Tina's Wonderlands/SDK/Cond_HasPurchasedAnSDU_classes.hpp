#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x89 - 0x88)
// BlueprintGeneratedClass Cond_HasPurchasedAnSDU.Cond_HasPurchasedAnSDU_C
class UCond_HasPurchasedAnSDU_C : public UGbxCondition_Blueprint
{
public:
	enum class Enum_Colossus_Platforms           Platform;                                          // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCond_HasPurchasedAnSDU_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UGameStatsComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


