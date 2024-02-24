#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass Condition_IsSpecificHitRegion.Condition_IsSpecificHitRegion_C
class UCondition_IsSpecificHitRegion_C : public UGbxCondition_Blueprint
{
public:
	class UObject*                               HitRegion;                                         // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_IsSpecificHitRegion_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class UOakHitRegionData* K2Node_DynamicCast_AsOak_Hit_Region_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


