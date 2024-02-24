#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x11C - 0xA8)
// BlueprintGeneratedClass SelectNextAttack.SelectNextAttack_C
class USelectNextAttack_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                PlayerActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                CurrentAttackDistance;                             // 0xD8(0x28)(Edit, BlueprintVisible)
	float                                        LongAttackMin;                                     // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LongAttackMax;                                     // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MidAttackMin;                                      // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MidAttackMax;                                      // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShortAttackMin;                                    // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShortAttackMax;                                    // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LongAtkSwitchMax;                                  // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USelectNextAttack_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_SelectNextAttack(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const class FString& CallFunc_GetDisplayName_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetDistanceTo_ReturnValue, class ABasicMeleeEnemy_C* K2Node_DynamicCast_AsBasic_Melee_Enemy, bool K2Node_DynamicCast_bSuccess_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class FText CallFunc_Format_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}


