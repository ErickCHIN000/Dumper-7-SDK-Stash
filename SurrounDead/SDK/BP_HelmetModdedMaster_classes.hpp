#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5F8 - 0x5C8)
// BlueprintGeneratedClass BP_HelmetModdedMaster.BP_HelmetModdedMaster_C
class ABP_HelmetModdedMaster_C : public ABP_StaticMeshClass_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_RepWeaponAttachment                RepAttachments;                                    // 0x5D0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	TArray<class ABP_AMainLocalAttachment_C*>    InstalledAttachments;                              // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_HelmetModdedMaster_C* GetDefaultObj();

	void Jig_AttachmentInstalled(int32 MainUID, TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType, const struct FS_RepWeaponAttachment& K2Node_MakeStruct_S_RepWeaponAttachment);
	void Jig_AttachmentRemoved(TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType);
	void Jig_GetADSSocketLocation(struct FVector* SocketLoc, bool* SocketFound);
	void Jig_GetPrimitiveComponent(class UPrimitiveComponent** Comp);
	void Jig_CheckCanReload(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UJSIContainer_C** ContainerMag, class UAnimMontage** ReloadMontage, bool* HasInternalMag, bool* CanChamber_, class UJSI_Slot_C** ReloadWith, class UAnimMontage** LoopReloadAnim);
	void Jig_StartReloading(class UBP_JigMultiplayer_C* MPCom, class UJSIContainer_C* MagContainer, bool* Result);
	void Jig_GetEquipMontage(bool CanChamber_, class UAnimMontage** EquipMontage);
	void Jig_ExecuteChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UAnimMontage** ChamberMontage, double* Speed);
	void Jig_CanChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result);
	void Jig_GetAttachmentInfo(int32* UID, struct FLocalAttachmentInfo* AttachmentInfo);
	void Jig_SetAttachmentInfo(int32 UID, const struct FLocalAttachmentInfo& AttachmentInfo, bool* Result);
	void Jig_GetAttachmentByType(enum class EAttachmentType Type, class ABP_AMainLocalAttachment_C** Attachment, bool* Found);
	void Jig_SetPendindMag(class ABP_AMainLocalAttachment_C* MagRef, bool* Result);
	void Jig_GetPendingMag(bool FindMagIfNoPending_, class ABP_AMainLocalAttachment_C** MagRef);
	void JigMP_OnItemMoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, bool* Result);
	void JigMP_OnItemAdded(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* FromComponent, bool* Result);
	void JigMP_OnItemRemoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* ToComponent, bool* Result);
	void UpdateAttachments(bool CallFunc_IsValidPickup_ReturnValue, const struct FContainerPickupsInfo& CallFunc_IsValidPickup_PickupInfo, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FS_RepAttachmentInfo>& CallFunc_GetListOfAttachments_Attachments, bool CallFunc_Jig_AttachmentInstalled_Result, enum class EAttachmentType CallFunc_Jig_AttachmentInstalled_AttachmentType);
	void OnRep_RepAttachments(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetAttachSocketByInContainerIndex(struct FLocalAttachmentInfo& Info, int32 InContainerIndex, class FName* Socket, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LocalAttContainerIndexSocket& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CheckInstalledAttachments(class FName ID, enum class EAttachmentType Enum);
	void CheckRemovedAttachments(class UObject* Target, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo);
	void FindLocalAttachmentByUID(int32 UID, class ABP_AMainLocalAttachment_C** Attachment, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Process_Attachments(const TArray<class AActor*>& TempInstalledAttachments, const struct FS_RepAttachmentInfo& CurrentInfo, class ABP_AMainLocalAttachment_C* AttachmentRef, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FindLocalAttachmentByUID_Attachment, class FName CallFunc_GetAttachSocketByInContainerIndex_Socket, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* CallFunc_Jig_GetPrimitiveComponent_Comp, bool CallFunc_K2_AttachToComponent_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Jig_GetAttachmentInfo_UID_1, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_RepAttachmentInfo& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FLocalAttachmentInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FindLocalAttachmentByUID_Attachment_1, bool CallFunc_Jig_SetAttachmentInfo_Result, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Jig_OnMontageNotify(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_HelmetModdedMaster(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName K2Node_Event_NotifyName, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


