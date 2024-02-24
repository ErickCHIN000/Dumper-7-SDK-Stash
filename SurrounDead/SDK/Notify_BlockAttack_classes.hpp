#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x3A - 0x38)
// BlueprintGeneratedClass Notify_BlockAttack.Notify_BlockAttack_C
class UNotify_BlockAttack_C : public UAnimNotify
{
public:
	bool                                         Directional_Block;                                 // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_BlockType                       Attack_Type;                                       // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotify_BlockAttack_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* Attack_Target, class USkeletalMeshComponent* Mesh_Comp_L, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MasterAICharacter_C* K2Node_DynamicCast_AsBP_Master_AICharacter, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class ABP_MasterAICharacter_C* K2Node_DynamicCast_AsBP_Master_AICharacter_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1);
};

}


