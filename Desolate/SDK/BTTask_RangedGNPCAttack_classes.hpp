#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x12C - 0x111)
// BlueprintGeneratedClass BTTask_RangedGNPCAttack.BTTask_RangedGNPCAttack_C
class UBTTask_RangedGNPCAttack_C : public UBTTask_BaseGNPCAttack_C
{
public:
	uint8                                        Pad_EB5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x118(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MaximumShootDistanceToEnemy;                       // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AcceptanceShootDistanceToEnemy;                    // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaximumShootDistance;                              // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_RangedGNPCAttack_C* GetDefaultObj();

	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_BTTask_RangedGNPCAttack(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_CanShootEnemyCharacter_NewParam, bool CallFunc_StartRangedAttack_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


