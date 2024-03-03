#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x31 - 0x30)
// BlueprintGeneratedClass MovementAction_NotifyState.MovementAction_NotifyState_C
class UMovementAction_NotifyState_C : public UAnimNotifyState
{
public:
	enum class EALS_MovementAction               MovementAction;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMovementAction_NotifyState_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI_1, bool K2Node_DynamicCast_bSuccess_1, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess);
};

}


