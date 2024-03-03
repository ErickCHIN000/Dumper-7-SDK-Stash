#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x3A - 0x38)
// BlueprintGeneratedClass AN_UpdateThrownBlock.AN_UpdateThrownBlock_C
class UAN_UpdateThrownBlock_C : public UAnimNotify
{
public:
	bool                                         AttachToHand;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsVisible_;                                        // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAN_UpdateThrownBlock_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ABP_TombGuardian_C* L_TombGuardianAI, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_TombGuardian_C* K2Node_DynamicCast_AsBP_Tomb_Guardian, bool K2Node_DynamicCast_bSuccess);
};

}


