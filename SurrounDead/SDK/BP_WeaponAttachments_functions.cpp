#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponAttachments.BP_WeaponAttachments_C
// (None)

class UClass* IBP_WeaponAttachments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponAttachments_C");

	return Clss;
}


// BP_WeaponAttachments_C BP_WeaponAttachments.Default__BP_WeaponAttachments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_WeaponAttachments_C* IBP_WeaponAttachments_C::GetDefaultObj()
{
	static class IBP_WeaponAttachments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_WeaponAttachments_C*>(IBP_WeaponAttachments_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_OnMontageNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_OnMontageNotify(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_OnMontageNotify");

	Params::IBP_WeaponAttachments_C_Jig_OnMontageNotify_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetPendingMag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FindMagIfNoPending_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  MagRef                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_GetPendingMag(bool FindMagIfNoPending_, class ABP_AMainLocalAttachment_C** MagRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_GetPendingMag");

	Params::IBP_WeaponAttachments_C_Jig_GetPendingMag_Params Parms{};

	Parms.FindMagIfNoPending_ = FindMagIfNoPending_;

	UObject::ProcessEvent(Func, &Parms);

	if (MagRef != nullptr)
		*MagRef = Parms.MagRef;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_SetPendindMag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AMainLocalAttachment_C*  MagRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_SetPendindMag(class ABP_AMainLocalAttachment_C* MagRef, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_SetPendindMag");

	Params::IBP_WeaponAttachments_C_Jig_SetPendindMag_Params Parms{};

	Parms.MagRef = MagRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetAttachmentByType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAttachmentType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  Attachment                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_GetAttachmentByType(enum class EAttachmentType Type, class ABP_AMainLocalAttachment_C** Attachment, bool* Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_GetAttachmentByType");

	Params::IBP_WeaponAttachments_C_Jig_GetAttachmentByType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_SetAttachmentInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        AttachmentInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_SetAttachmentInfo(int32 UID, const struct FLocalAttachmentInfo& AttachmentInfo, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_SetAttachmentInfo");

	Params::IBP_WeaponAttachments_C_Jig_SetAttachmentInfo_Params Parms{};

	Parms.UID = UID;
	Parms.AttachmentInfo = AttachmentInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetAttachmentInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UID                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        AttachmentInfo                                                   (Parm, OutParm, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_GetAttachmentInfo(int32* UID, struct FLocalAttachmentInfo* AttachmentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_GetAttachmentInfo");

	Params::IBP_WeaponAttachments_C_Jig_GetAttachmentInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UID != nullptr)
		*UID = Parms.UID;

	if (AttachmentInfo != nullptr)
		*AttachmentInfo = std::move(Parms.AttachmentInfo);

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_CanChamberWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_CanChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_CanChamberWeapon");

	Params::IBP_WeaponAttachments_C_Jig_CanChamberWeapon_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.PlayerSlots = PlayerSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_ExecuteChamberWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ChamberMontage                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Speed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_ExecuteChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UAnimMontage** ChamberMontage, double* Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_ExecuteChamberWeapon");

	Params::IBP_WeaponAttachments_C_Jig_ExecuteChamberWeapon_Params Parms{};

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


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetEquipMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanChamber_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                EquipMontage                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_GetEquipMontage(bool CanChamber_, class UAnimMontage** EquipMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_GetEquipMontage");

	Params::IBP_WeaponAttachments_C_Jig_GetEquipMontage_Params Parms{};

	Parms.CanChamber_ = CanChamber_;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipMontage != nullptr)
		*EquipMontage = Parms.EquipMontage;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_StartReloading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPCom                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             MagContainer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_StartReloading(class UBP_JigMultiplayer_C* MPCom, class UJSIContainer_C* MagContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_StartReloading");

	Params::IBP_WeaponAttachments_C_Jig_StartReloading_Params Parms{};

	Parms.MPCom = MPCom;
	Parms.MagContainer = MagContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_CheckCanReload
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

void IBP_WeaponAttachments_C::Jig_CheckCanReload(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UJSIContainer_C** ContainerMag, class UAnimMontage** ReloadMontage, bool* HasInternalMag, bool* CanChamber_, class UJSI_Slot_C** ReloadWith, class UAnimMontage** LoopReloadAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_CheckCanReload");

	Params::IBP_WeaponAttachments_C_Jig_CheckCanReload_Params Parms{};

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


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetPrimitiveComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Comp                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_GetPrimitiveComponent(class UPrimitiveComponent** Comp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_GetPrimitiveComponent");

	Params::IBP_WeaponAttachments_C_Jig_GetPrimitiveComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Comp != nullptr)
		*Comp = Parms.Comp;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetADSSocketLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SocketLoc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SocketFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_GetADSSocketLocation(struct FVector* SocketLoc, bool* SocketFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_GetADSSocketLocation");

	Params::IBP_WeaponAttachments_C_Jig_GetADSSocketLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SocketLoc != nullptr)
		*SocketLoc = std::move(Parms.SocketLoc);

	if (SocketFound != nullptr)
		*SocketFound = Parms.SocketFound;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_AttachmentRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_RepAttachmentInfo>Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         AttachmentType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_AttachmentRemoved(TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_AttachmentRemoved");

	Params::IBP_WeaponAttachments_C_Jig_AttachmentRemoved_Params Parms{};

	Parms.Attachments = Attachments;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachmentType != nullptr)
		*AttachmentType = Parms.AttachmentType;

}


// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_AttachmentInstalled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MainUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_RepAttachmentInfo>Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         AttachmentType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeaponAttachments_C::Jig_AttachmentInstalled(int32 MainUID, TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponAttachments_C", "Jig_AttachmentInstalled");

	Params::IBP_WeaponAttachments_C_Jig_AttachmentInstalled_Params Parms{};

	Parms.MainUID = MainUID;
	Parms.Attachments = Attachments;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachmentType != nullptr)
		*AttachmentType = Parms.AttachmentType;

}

}


