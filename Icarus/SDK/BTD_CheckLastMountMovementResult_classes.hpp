#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xC9 - 0xA0)
// BlueprintGeneratedClass BTD_CheckLastMountMovementResult.BTD_CheckLastMountMovementResult_C
class UBTD_CheckLastMountMovementResult_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                ResultKey;                                         // 0xA0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EMountLastMoveResult              DesiredState;                                      // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_CheckLastMountMovementResult_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


