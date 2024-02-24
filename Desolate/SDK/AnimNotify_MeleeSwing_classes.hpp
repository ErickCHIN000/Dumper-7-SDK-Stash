#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x3A - 0x38)
// BlueprintGeneratedClass AnimNotify_MeleeSwing.AnimNotify_MeleeSwing_C
class UAnimNotify_MeleeSwing_C : public UAnimNotify
{
public:
	enum class EMeleeSwingState                  SwingState;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMeleeSwingType                   SwingType;                                         // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotify_MeleeSwing_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, class ASHWeapon* CallFunc_GetWeapon_ReturnValue, class ASHWeapon_MeleeBase* K2Node_DynamicCast_AsSHWeapon_Melee_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, enum class EMeleeSwingState Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Select_Default);
};

}


