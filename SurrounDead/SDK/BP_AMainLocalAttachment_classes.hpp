#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2F0 - 0x298)
// BlueprintGeneratedClass BP_AMainLocalAttachment.BP_AMainLocalAttachment_C
class ABP_AMainLocalAttachment_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        AttachmentUID;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLocalAttachmentInfo                  Attachment_Info;                                   // 0x2B8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AMainLocalAttachment_C* GetDefaultObj();

	void Jig_GetPendingMag(bool FindMagIfNoPending_, class ABP_AMainLocalAttachment_C** MagRef);
	void Jig_SetPendindMag(class ABP_AMainLocalAttachment_C* MagRef, bool* Result);
	void Jig_GetAttachmentByType(enum class EAttachmentType Type, class ABP_AMainLocalAttachment_C** Attachment, bool* Found);
	void Jig_SetAttachmentInfo(int32 UID, const struct FLocalAttachmentInfo& AttachmentInfo, bool* Result);
	void Jig_GetAttachmentInfo(int32* UID, struct FLocalAttachmentInfo* AttachmentInfo);
	void Jig_CanChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result);
	void Jig_ExecuteChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UAnimMontage** ChamberMontage, double* Speed);
	void Jig_GetEquipMontage(bool CanChamber_, class UAnimMontage** EquipMontage);
	void Jig_StartReloading(class UBP_JigMultiplayer_C* MPCom, class UJSIContainer_C* MagContainer, bool* Result);
	void Jig_CheckCanReload(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UJSIContainer_C** ContainerMag, class UAnimMontage** ReloadMontage, bool* HasInternalMag, bool* CanChamber_, class UJSI_Slot_C** ReloadWith, class UAnimMontage** LoopReloadAnim);
	void Jig_GetPrimitiveComponent(class UPrimitiveComponent** Comp);
	void Jig_AttachmentInstalled(int32 MainUID, TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType);
	void Jig_AttachmentRemoved(TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType);
	void Jig_GetADSSocketLocation(struct FVector* SocketLoc, bool* SocketFound, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
	void Jig_OnMontageNotify(class FName NotifyName);
	void ExecuteUbergraph_BP_AMainLocalAttachment(int32 EntryPoint, class FName K2Node_Event_NotifyName);
};

}


