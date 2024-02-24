#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass bpn_SetHiddenComponent.bpn_SetHiddenComponent_C
class Ubpn_SetHiddenComponent_C : public UAnimNotify
{
public:
	bool                                         bShouldHide_;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubpn_SetHiddenComponent_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}


