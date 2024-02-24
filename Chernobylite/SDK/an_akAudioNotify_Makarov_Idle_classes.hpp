#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass an_akAudioNotify_Makarov_Idle.an_akAudioNotify_Makarov_Idle_C
class UAn_akAudioNotify_Makarov_Idle_C : public UAn_akAudioNotify_Base_C
{
public:
	class UAkAudioEvent*                         ShotWwiseEvent;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAn_akAudioNotify_Makarov_Idle_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class UAk_Component_Base_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue);
};

}


