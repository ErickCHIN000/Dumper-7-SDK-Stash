#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x3A - 0x38)
// BlueprintGeneratedClass AnimNotify_UpdateWeaponVisibility.AnimNotify_UpdateWeaponVisibility_C
class UAnimNotify_UpdateWeaponVisibility_C : public UAnimNotify
{
public:
	enum class EWeaponVisibility                 NewVisibility;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkipAutoTimer;                                    // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAnimNotify_UpdateWeaponVisibility_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, class ASHWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


