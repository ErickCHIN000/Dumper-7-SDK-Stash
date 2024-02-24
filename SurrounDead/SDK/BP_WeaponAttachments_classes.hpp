#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_WeaponAttachments.BP_WeaponAttachments_C
class IBP_WeaponAttachments_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_WeaponAttachments_C* GetDefaultObj();

	void Jig_OnMontageNotify(class FName NotifyName);
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
	void Jig_GetADSSocketLocation(struct FVector* SocketLoc, bool* SocketFound);
	void Jig_AttachmentRemoved(TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType);
	void Jig_AttachmentInstalled(int32 MainUID, TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType);
};

}


