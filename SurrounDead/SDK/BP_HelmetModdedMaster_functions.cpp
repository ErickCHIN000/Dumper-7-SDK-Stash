#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HelmetModdedMaster.BP_HelmetModdedMaster_C
// (Actor)

class UClass* ABP_HelmetModdedMaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HelmetModdedMaster_C");

	return Clss;
}


// BP_HelmetModdedMaster_C BP_HelmetModdedMaster.Default__BP_HelmetModdedMaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HelmetModdedMaster_C* ABP_HelmetModdedMaster_C::GetDefaultObj()
{
	static class ABP_HelmetModdedMaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HelmetModdedMaster_C*>(ABP_HelmetModdedMaster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_AttachmentInstalled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MainUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_RepAttachmentInfo>Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         AttachmentType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RepWeaponAttachment      K2Node_MakeStruct_S_RepWeaponAttachment                          (HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_AttachmentInstalled(int32 MainUID, TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType, const struct FS_RepWeaponAttachment& K2Node_MakeStruct_S_RepWeaponAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_AttachmentInstalled");

	Params::ABP_HelmetModdedMaster_C_Jig_AttachmentInstalled_Params Parms{};

	Parms.MainUID = MainUID;
	Parms.Attachments = Attachments;
	Parms.K2Node_MakeStruct_S_RepWeaponAttachment = K2Node_MakeStruct_S_RepWeaponAttachment;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachmentType != nullptr)
		*AttachmentType = Parms.AttachmentType;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_AttachmentRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_RepAttachmentInfo>Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         AttachmentType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_AttachmentRemoved(TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_AttachmentRemoved");

	Params::ABP_HelmetModdedMaster_C_Jig_AttachmentRemoved_Params Parms{};

	Parms.Attachments = Attachments;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachmentType != nullptr)
		*AttachmentType = Parms.AttachmentType;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_GetADSSocketLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SocketLoc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SocketFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_GetADSSocketLocation(struct FVector* SocketLoc, bool* SocketFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_GetADSSocketLocation");

	Params::ABP_HelmetModdedMaster_C_Jig_GetADSSocketLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SocketLoc != nullptr)
		*SocketLoc = std::move(Parms.SocketLoc);

	if (SocketFound != nullptr)
		*SocketFound = Parms.SocketFound;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_GetPrimitiveComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Comp                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_GetPrimitiveComponent(class UPrimitiveComponent** Comp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_GetPrimitiveComponent");

	Params::ABP_HelmetModdedMaster_C_Jig_GetPrimitiveComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Comp != nullptr)
		*Comp = Parms.Comp;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_CheckCanReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ContainerMag                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ReloadMontage                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasInternalMag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanChamber_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 ReloadWith                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                LoopReloadAnim                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_CheckCanReload(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UJSIContainer_C** ContainerMag, class UAnimMontage** ReloadMontage, bool* HasInternalMag, bool* CanChamber_, class UJSI_Slot_C** ReloadWith, class UAnimMontage** LoopReloadAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_CheckCanReload");

	Params::ABP_HelmetModdedMaster_C_Jig_CheckCanReload_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.PlayerSlots = PlayerSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ContainerMag != nullptr)
		*ContainerMag = Parms.ContainerMag;

	if (ReloadMontage != nullptr)
		*ReloadMontage = Parms.ReloadMontage;

	if (HasInternalMag != nullptr)
		*HasInternalMag = Parms.HasInternalMag;

	if (CanChamber_ != nullptr)
		*CanChamber_ = Parms.CanChamber_;

	if (ReloadWith != nullptr)
		*ReloadWith = Parms.ReloadWith;

	if (LoopReloadAnim != nullptr)
		*LoopReloadAnim = Parms.LoopReloadAnim;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_StartReloading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPCom                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             MagContainer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_StartReloading(class UBP_JigMultiplayer_C* MPCom, class UJSIContainer_C* MagContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_StartReloading");

	Params::ABP_HelmetModdedMaster_C_Jig_StartReloading_Params Parms{};

	Parms.MPCom = MPCom;
	Parms.MagContainer = MagContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_GetEquipMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanChamber_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                EquipMontage                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_GetEquipMontage(bool CanChamber_, class UAnimMontage** EquipMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_GetEquipMontage");

	Params::ABP_HelmetModdedMaster_C_Jig_GetEquipMontage_Params Parms{};

	Parms.CanChamber_ = CanChamber_;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipMontage != nullptr)
		*EquipMontage = Parms.EquipMontage;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_ExecuteChamberWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ChamberMontage                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Speed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_ExecuteChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UAnimMontage** ChamberMontage, double* Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_ExecuteChamberWeapon");

	Params::ABP_HelmetModdedMaster_C_Jig_ExecuteChamberWeapon_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.PlayerSlots = PlayerSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ChamberMontage != nullptr)
		*ChamberMontage = Parms.ChamberMontage;

	if (Speed != nullptr)
		*Speed = Parms.Speed;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_CanChamberWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_CanChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_CanChamberWeapon");

	Params::ABP_HelmetModdedMaster_C_Jig_CanChamberWeapon_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.PlayerSlots = PlayerSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_GetAttachmentInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UID                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        AttachmentInfo                                                   (Parm, OutParm, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_GetAttachmentInfo(int32* UID, struct FLocalAttachmentInfo* AttachmentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_GetAttachmentInfo");

	Params::ABP_HelmetModdedMaster_C_Jig_GetAttachmentInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UID != nullptr)
		*UID = Parms.UID;

	if (AttachmentInfo != nullptr)
		*AttachmentInfo = std::move(Parms.AttachmentInfo);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_SetAttachmentInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        AttachmentInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_SetAttachmentInfo(int32 UID, const struct FLocalAttachmentInfo& AttachmentInfo, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_SetAttachmentInfo");

	Params::ABP_HelmetModdedMaster_C_Jig_SetAttachmentInfo_Params Parms{};

	Parms.UID = UID;
	Parms.AttachmentInfo = AttachmentInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_GetAttachmentByType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAttachmentType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  Attachment                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_GetAttachmentByType(enum class EAttachmentType Type, class ABP_AMainLocalAttachment_C** Attachment, bool* Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_GetAttachmentByType");

	Params::ABP_HelmetModdedMaster_C_Jig_GetAttachmentByType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_SetPendindMag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AMainLocalAttachment_C*  MagRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_SetPendindMag(class ABP_AMainLocalAttachment_C* MagRef, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_SetPendindMag");

	Params::ABP_HelmetModdedMaster_C_Jig_SetPendindMag_Params Parms{};

	Parms.MagRef = MagRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_GetPendingMag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FindMagIfNoPending_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  MagRef                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_GetPendingMag(bool FindMagIfNoPending_, class ABP_AMainLocalAttachment_C** MagRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_GetPendingMag");

	Params::ABP_HelmetModdedMaster_C_Jig_GetPendingMag_Params Parms{};

	Parms.FindMagIfNoPending_ = FindMagIfNoPending_;

	UObject::ProcessEvent(Func, &Parms);

	if (MagRef != nullptr)
		*MagRef = Parms.MagRef;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.JigMP_OnItemMoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::JigMP_OnItemMoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "JigMP_OnItemMoved");

	Params::ABP_HelmetModdedMaster_C_JigMP_OnItemMoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.JigMP_OnItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        FromComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::JigMP_OnItemAdded(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* FromComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "JigMP_OnItemAdded");

	Params::ABP_HelmetModdedMaster_C_JigMP_OnItemAdded_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.FromComponent = FromComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.JigMP_OnItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        ToComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::JigMP_OnItemRemoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* ToComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "JigMP_OnItemRemoved");

	Params::ABP_HelmetModdedMaster_C_JigMP_OnItemRemoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.ToComponent = ToComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.UpdateAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidPickup_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_IsValidPickup_PickupInfo                                (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_RepAttachmentInfo>CallFunc_GetListOfAttachments_Attachments                        (ReferenceParm)
// bool                               CallFunc_Jig_AttachmentInstalled_Result                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         CallFunc_Jig_AttachmentInstalled_AttachmentType                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::UpdateAttachments(bool CallFunc_IsValidPickup_ReturnValue, const struct FContainerPickupsInfo& CallFunc_IsValidPickup_PickupInfo, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FS_RepAttachmentInfo>& CallFunc_GetListOfAttachments_Attachments, bool CallFunc_Jig_AttachmentInstalled_Result, enum class EAttachmentType CallFunc_Jig_AttachmentInstalled_AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "UpdateAttachments");

	Params::ABP_HelmetModdedMaster_C_UpdateAttachments_Params Parms{};

	Parms.CallFunc_IsValidPickup_ReturnValue = CallFunc_IsValidPickup_ReturnValue;
	Parms.CallFunc_IsValidPickup_PickupInfo = CallFunc_IsValidPickup_PickupInfo;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetListOfAttachments_Attachments = CallFunc_GetListOfAttachments_Attachments;
	Parms.CallFunc_Jig_AttachmentInstalled_Result = CallFunc_Jig_AttachmentInstalled_Result;
	Parms.CallFunc_Jig_AttachmentInstalled_AttachmentType = CallFunc_Jig_AttachmentInstalled_AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.OnRep_RepAttachments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::OnRep_RepAttachments(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "OnRep_RepAttachments");

	Params::ABP_HelmetModdedMaster_C_OnRep_RepAttachments_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.GetAttachSocketByInContainerIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLocalAttachmentInfo        Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              InContainerIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LocalAttContainerIndexSocketCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::GetAttachSocketByInContainerIndex(struct FLocalAttachmentInfo& Info, int32 InContainerIndex, class FName* Socket, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LocalAttContainerIndexSocket& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "GetAttachSocketByInContainerIndex");

	Params::ABP_HelmetModdedMaster_C_GetAttachSocketByInContainerIndex_Params Parms{};

	Parms.Info = Info;
	Parms.InContainerIndex = InContainerIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Socket != nullptr)
		*Socket = Parms.Socket;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.CheckInstalledAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::CheckInstalledAttachments(class FName ID, enum class EAttachmentType Enum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "CheckInstalledAttachments");

	Params::ABP_HelmetModdedMaster_C_CheckInstalledAttachments_Params Parms{};

	Parms.ID = ID;
	Parms.Enum = Enum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.CheckRemovedAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo                    (HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::CheckRemovedAttachments(class UObject* Target, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "CheckRemovedAttachments");

	Params::ABP_HelmetModdedMaster_C_CheckRemovedAttachments_Params Parms{};

	Parms.Target = Target;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments = K2Node_DynamicCast_AsBP_Weapon_Attachments;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID = CallFunc_Jig_GetAttachmentInfo_UID;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.FindLocalAttachmentByUID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  Attachment                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::FindLocalAttachmentByUID(int32 UID, class ABP_AMainLocalAttachment_C** Attachment, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "FindLocalAttachmentByUID");

	Params::ABP_HelmetModdedMaster_C_FindLocalAttachmentByUID_Params Parms{};

	Parms.UID = UID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments = K2Node_DynamicCast_AsBP_Weapon_Attachments;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID = CallFunc_Jig_GetAttachmentInfo_UID;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Process Attachments
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TempInstalledAttachments                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FS_RepAttachmentInfo        CurrentInfo                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  AttachmentRef                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo                    (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_FindLocalAttachmentByUID_Attachment                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachSocketByInContainerIndex_Socket                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Jig_GetPrimitiveComponent_Comp                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1                  (HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RepAttachmentInfo        CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_FindLocalAttachmentByUID_Attachment_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Jig_SetAttachmentInfo_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Process_Attachments(const TArray<class AActor*>& TempInstalledAttachments, const struct FS_RepAttachmentInfo& CurrentInfo, class ABP_AMainLocalAttachment_C* AttachmentRef, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FindLocalAttachmentByUID_Attachment, class FName CallFunc_GetAttachSocketByInContainerIndex_Socket, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* CallFunc_Jig_GetPrimitiveComponent_Comp, bool CallFunc_K2_AttachToComponent_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Jig_GetAttachmentInfo_UID_1, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_RepAttachmentInfo& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FLocalAttachmentInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FindLocalAttachmentByUID_Attachment_1, bool CallFunc_Jig_SetAttachmentInfo_Result, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Process Attachments");

	Params::ABP_HelmetModdedMaster_C_Process_Attachments_Params Parms{};

	Parms.TempInstalledAttachments = TempInstalledAttachments;
	Parms.CurrentInfo = CurrentInfo;
	Parms.AttachmentRef = AttachmentRef;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments = K2Node_DynamicCast_AsBP_Weapon_Attachments;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments_1 = K2Node_DynamicCast_AsBP_Weapon_Attachments_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID = CallFunc_Jig_GetAttachmentInfo_UID;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_FindLocalAttachmentByUID_Attachment = CallFunc_FindLocalAttachmentByUID_Attachment;
	Parms.CallFunc_GetAttachSocketByInContainerIndex_Socket = CallFunc_GetAttachSocketByInContainerIndex_Socket;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments_2 = K2Node_DynamicCast_AsBP_Weapon_Attachments_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Jig_GetPrimitiveComponent_Comp = CallFunc_Jig_GetPrimitiveComponent_Comp;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments_3 = K2Node_DynamicCast_AsBP_Weapon_Attachments_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID_1 = CallFunc_Jig_GetAttachmentInfo_UID_1;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1 = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_FindLocalAttachmentByUID_Attachment_1 = CallFunc_FindLocalAttachmentByUID_Attachment_1;
	Parms.CallFunc_Jig_SetAttachmentInfo_Result = CallFunc_Jig_SetAttachmentInfo_Result;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.Jig_OnMontageNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::Jig_OnMontageNotify(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "Jig_OnMontageNotify");

	Params::ABP_HelmetModdedMaster_C_Jig_OnMontageNotify_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_HelmetModdedMaster_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_HelmetModdedMaster_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HelmetModdedMaster.BP_HelmetModdedMaster_C.ExecuteUbergraph_BP_HelmetModdedMaster
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_NotifyName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HelmetModdedMaster_C::ExecuteUbergraph_BP_HelmetModdedMaster(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName K2Node_Event_NotifyName, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HelmetModdedMaster_C", "ExecuteUbergraph_BP_HelmetModdedMaster");

	Params::ABP_HelmetModdedMaster_C_ExecuteUbergraph_BP_HelmetModdedMaster_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_NotifyName = K2Node_Event_NotifyName;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


