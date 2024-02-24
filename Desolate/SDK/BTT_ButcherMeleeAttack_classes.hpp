#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x179 - 0x168)
// BlueprintGeneratedClass BTT_ButcherMeleeAttack.BTT_ButcherMeleeAttack_C
class UBTT_ButcherMeleeAttack_C : public UBTT_BaseAi_MeleeAttack_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AButcher_Character_C*                  ButcherCharacter;                                  // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMovementStop;                                     // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTT_ButcherMeleeAttack_C* GetDefaultObj();

	void StopAndAttack();
	void ExecuteUbergraph_BTT_ButcherMeleeAttack(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanPlaceTraps_Result, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_StartCircularAttack_Result, class AButcher_Character_C* K2Node_DynamicCast_AsButcher_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetPathLength_PathLength, enum class ENavigationQueryResult CallFunc_GetPathLength_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_CanStartChaos_Result, bool CallFunc_Not_PreBool_ReturnValue_4);
};

}


