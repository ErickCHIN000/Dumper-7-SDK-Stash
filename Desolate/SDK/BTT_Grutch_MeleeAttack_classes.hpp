#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x140 - 0x124)
// BlueprintGeneratedClass BTT_Grutch_MeleeAttack.BTT_Grutch_MeleeAttack_C
class UBTT_Grutch_MeleeAttack_C : public UBTT_BaseAi_Attack_C
{
public:
	uint8                                        Pad_CF4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AGrutch_Character_C*                   TempGrutchCharacter;                               // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GrowlFearMontage;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_Grutch_MeleeAttack_C* GetDefaultObj();

	void MoveAndAttack();
	void StopAndAttack(bool CallFunc_CanStartTaran_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldGrowlFear_Result, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CanStartSpecial_Result, bool CallFunc_Not_PreBool_ReturnValue_2, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_StartCircularAttack_Result, bool CallFunc_StartFrontalAttack_Result, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetPathLength_PathLength, enum class ENavigationQueryResult CallFunc_GetPathLength_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Montage_IsPlaying_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_StartTaran_Result);
	void ProcessAttack();
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void CustomEvent();
	void ExecuteUbergraph_BTT_Grutch_MeleeAttack(int32 EntryPoint, class AGrutch_Character_C* K2Node_DynamicCast_AsGrutch_Character, bool K2Node_DynamicCast_bSuccess, class AGrutch_Character_C* K2Node_DynamicCast_AsGrutch_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanStartRage_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue);
};

}


