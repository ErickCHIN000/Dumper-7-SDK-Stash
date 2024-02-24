#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass AN_MeleeSwing.AN_MeleeSwing_C
class UAN_MeleeSwing_C : public UAnimNotify
{
public:
	enum class EMeleeSwingState                  SwingState;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_MeleeSwing_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ASHWeapon* Weapon, class ASHCharacter* Character, enum class EMeleeSwingState Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, class ASHWeapon* CallFunc_GetWeapon_ReturnValue, class ASHWeapon* CallFunc_GetKickWeapon_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue, class ASHWeapon* CallFunc_GetWeapon_ReturnValue_1, bool CallFunc_Contains_ReturnValue, class ASHWeapon_MeleeBase* K2Node_DynamicCast_AsSHWeapon_Melee_Base, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_2, class ASHWeapon_MeleeBase* K2Node_DynamicCast_AsSHWeapon_Melee_Base_1, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Variable_3, class ASHWeapon* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_4, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_5, class ASHWeapon* CallFunc_GetKickWeapon_ReturnValue_1, class ASHWeapon* CallFunc_GetWeapon_ReturnValue_2, class ASHWeapon_MeleeBase* K2Node_DynamicCast_AsSHWeapon_Melee_Base_2, bool K2Node_DynamicCast_bSuccess_4, enum class EMeleeSwingState Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_6, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_Select_Default_1, bool K2Node_Select_Default_2);
};

}


