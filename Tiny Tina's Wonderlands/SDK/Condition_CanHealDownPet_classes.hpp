#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Condition_CanHealDownPet.Condition_CanHealDownPet_C
class UCondition_CanHealDownPet_C : public UCondition_CanHealDownedActor_C
{
public:

	static class UClass* StaticClass();
	static class UCondition_CanHealDownPet_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class UGbxAbility* RangerClassFeat, class UObject* OwnerObjRef, class UObject* PetObjRef, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EvaluateCondition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


