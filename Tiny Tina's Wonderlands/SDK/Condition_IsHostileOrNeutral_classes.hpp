#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass Condition_IsHostileOrNeutral.Condition_IsHostileOrNeutral_C
class UCondition_IsHostileOrNeutral_C : public UGbxCondition_Blueprint
{
public:
	class UTeam*                                 CompareAgainstTeam;                                // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_IsHostileOrNeutral_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, TScriptInterface<class IBPI_IO_ExplodingPipe_C> K2Node_DynamicCast_AsBPI_IO_Exploding_Pipe, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess1, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeTowardsTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
};

}


