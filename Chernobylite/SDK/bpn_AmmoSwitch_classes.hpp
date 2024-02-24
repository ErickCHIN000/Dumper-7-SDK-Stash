#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass bpn_AmmoSwitch.bpn_AmmoSwitch_C
class Ubpn_AmmoSwitch_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class Ubpn_AmmoSwitch_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AMainPawnCpp* K2Node_DynamicCast_AsMain_Pawn_Cpp, bool K2Node_DynamicCast_bSuccess, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess_1);
};

}


