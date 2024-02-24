#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass bpn_PreFinishSwap.bpn_PreFinishSwap_C
class Ubpn_PreFinishSwap_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class Ubpn_PreFinishSwap_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAbp_ch_igorfpp_01_C* AnimBP, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAbp_ch_igorfpp_01_C* K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SafelySetIdleState_ReturnValue);
};

}


