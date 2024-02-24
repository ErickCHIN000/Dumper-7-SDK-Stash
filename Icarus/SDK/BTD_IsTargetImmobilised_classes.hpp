#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC8 - 0xA0)
// BlueprintGeneratedClass BTD_IsTargetImmobilised.BTD_IsTargetImmobilised_C
class UBTD_IsTargetImmobilised_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0xA0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTD_IsTargetImmobilised_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_HasModifierState_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


