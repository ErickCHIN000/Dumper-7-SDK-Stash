#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BTD_IsTagCooldownActive.BTD_IsTagCooldownActive_C
class UBTD_IsTagCooldownActive_C : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_IsTagCooldownActive_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UBehaviorTreeComponent* CallFunc_GetOwnerComponent_ReturnValue, float CallFunc_GetTagCooldownEndTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


