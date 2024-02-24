#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xC9 - 0xA0)
// BlueprintGeneratedClass BTD_CheckMountMovementState.BTD_CheckMountMovementState_C
class UBTD_CheckMountMovementState_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                StateKey;                                          // 0xA0(0x28)(Edit, BlueprintVisible)
	enum class EMountMovementBehaviourState      DesiredState;                                      // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_CheckMountMovementState_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


