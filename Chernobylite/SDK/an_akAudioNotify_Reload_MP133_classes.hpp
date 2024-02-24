#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass an_akAudioNotify_Reload_MP133.an_akAudioNotify_Reload_MP133_C
class UAn_akAudioNotify_Reload_MP133_C : public UAn_akAudioNotify_Shot_C
{
public:

	static class UClass* StaticClass();
	static class UAn_akAudioNotify_Reload_MP133_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue);
};

}


