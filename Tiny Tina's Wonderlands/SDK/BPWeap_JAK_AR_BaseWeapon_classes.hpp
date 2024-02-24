#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA28 - 0xA18)
// BlueprintGeneratedClass BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C
class ABPWeap_JAK_AR_BaseWeapon_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA18(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0xA20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_JAK_AR_BaseWeapon_C* GetDefaultObj();

	void UserConstructionScript();
	void Notify_ReloadStarted(bool bAutoReload);
	void ReceiveBeginPlay();
	void AttachAudioComponentToClip();
	void ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bAutoReload, class UMeshComponent* CallFunc_GetAttachmentMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_GetLoadedAmmo_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}


