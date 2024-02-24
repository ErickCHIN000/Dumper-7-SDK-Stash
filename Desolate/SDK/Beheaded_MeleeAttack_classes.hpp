#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x12C - 0x111)
// BlueprintGeneratedClass Beheaded_MeleeAttack.Beheaded_MeleeAttack_C
class UBeheaded_MeleeAttack_C : public UBTTask_BaseGNPCAttack_C
{
public:
	uint8                                        Pad_11B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x118(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bExplosionStarted;                                 // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplosionDistance;                                 // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExpplosionRadius;                                  // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBeheaded_MeleeAttack_C* GetDefaultObj();

	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_Beheaded_MeleeAttack(int32 EntryPoint, class ABandit_Beheaded_Character_C* K2Node_DynamicCast_AsBandit_Beheaded_Character, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_CanMove_Result);
};

}


