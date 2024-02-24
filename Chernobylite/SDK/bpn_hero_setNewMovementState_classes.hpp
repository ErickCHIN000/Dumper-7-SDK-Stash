#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass bpn_hero_setNewMovementState.bpn_hero_setNewMovementState_C
class Ubpn_hero_setNewMovementState_C : public UAnimNotify
{
public:
	class UClass*                                InNewMovementState;                                // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubpn_hero_setNewMovementState_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue);
};

}


