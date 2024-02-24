#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0xF1 - 0xA8)
// BlueprintGeneratedClass BT_WaitDynamic.BT_WaitDynamic_C
class UBT_WaitDynamic_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         _bSubscribed;                                      // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1704[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                WaitTime;                                          // 0xB8(0x28)(Edit, BlueprintVisible)
	struct FTimerHandle                          Timer;                                             // 0xE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     OwnerEnemy;                                        // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccessOnWaitTimeOver;                            // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBT_WaitDynamic_C* GetDefaultObj();

	void OnCurrentWaitTimeModified(float NewRemainingTime);
	void OnWaitTimeOver();
	void ReceiveAbort(class AActor* OwnerActor);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnCurrentAttackFinished();
	void ExecuteUbergraph_BT_WaitDynamic(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_NewRemainingTime, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_FMax_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
};

}


