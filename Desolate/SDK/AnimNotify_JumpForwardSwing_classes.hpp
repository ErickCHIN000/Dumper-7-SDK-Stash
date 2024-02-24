#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x3A - 0x38)
// BlueprintGeneratedClass AnimNotify_JumpForwardSwing.AnimNotify_JumpForwardSwing_C
class UAnimNotify_JumpForwardSwing_C : public UAnimNotify
{
public:
	enum class EMeleeSwingState                  SwingState;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMeleeSwingType                   SwingType;                                         // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotify_JumpForwardSwing_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, enum class EMeleeSwingState Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, class ASHWeapon_MeleeBase* K2Node_DynamicCast_AsSHWeapon_Melee_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Select_Default);
};

}


