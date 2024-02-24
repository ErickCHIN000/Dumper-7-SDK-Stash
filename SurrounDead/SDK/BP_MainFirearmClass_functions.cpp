#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainFirearmClass.BP_MainFirearmClass_C
// (Actor)

class UClass* ABP_MainFirearmClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainFirearmClass_C");

	return Clss;
}


// BP_MainFirearmClass_C BP_MainFirearmClass.Default__BP_MainFirearmClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainFirearmClass_C* ABP_MainFirearmClass_C::GetDefaultObj()
{
	static class ABP_MainFirearmClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainFirearmClass_C*>(ABP_MainFirearmClass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_AttachmentInstalled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MainUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_RepAttachmentInfo>Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         AttachmentType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RepWeaponAttachment      K2Node_MakeStruct_S_RepWeaponAttachment                          (HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_AttachmentInstalled(int32 MainUID, TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType, const struct FS_RepWeaponAttachment& K2Node_MakeStruct_S_RepWeaponAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_AttachmentInstalled");

	Params::ABP_MainFirearmClass_C_Jig_AttachmentInstalled_Params Parms{};

	Parms.MainUID = MainUID;
	Parms.Attachments = Attachments;
	Parms.K2Node_MakeStruct_S_RepWeaponAttachment = K2Node_MakeStruct_S_RepWeaponAttachment;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachmentType != nullptr)
		*AttachmentType = Parms.AttachmentType;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_AttachmentRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_RepAttachmentInfo>Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         AttachmentType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_AttachmentRemoved(TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, enum class EAttachmentType* AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_AttachmentRemoved");

	Params::ABP_MainFirearmClass_C_Jig_AttachmentRemoved_Params Parms{};

	Parms.Attachments = Attachments;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachmentType != nullptr)
		*AttachmentType = Parms.AttachmentType;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_GetADSSocketLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SocketLoc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SocketFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_GetADSSocketLocation(struct FVector* SocketLoc, bool* SocketFound, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_GetADSSocketLocation");

	Params::ABP_MainFirearmClass_C_Jig_GetADSSocketLocation_Params Parms{};

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SocketLoc != nullptr)
		*SocketLoc = std::move(Parms.SocketLoc);

	if (SocketFound != nullptr)
		*SocketFound = Parms.SocketFound;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_GetPrimitiveComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Comp                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_GetPrimitiveComponent(class UPrimitiveComponent** Comp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_GetPrimitiveComponent");

	Params::ABP_MainFirearmClass_C_Jig_GetPrimitiveComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Comp != nullptr)
		*Comp = Parms.Comp;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_CheckCanReload
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
// bool                               CallFunc_Local_CheckCanReload_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Local_CheckCanReload_ContainerMag                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Local_CheckCanReload_CanItChamber                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_Local_CheckCanReload_Reload                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_CheckCanReload(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UJSIContainer_C** ContainerMag, class UAnimMontage** ReloadMontage, bool* HasInternalMag, bool* CanChamber_, class UJSI_Slot_C** ReloadWith, class UAnimMontage** LoopReloadAnim, bool CallFunc_Local_CheckCanReload_Result, class UJSIContainer_C* CallFunc_Local_CheckCanReload_ContainerMag, bool CallFunc_Local_CheckCanReload_CanItChamber, class UJSI_Slot_C* CallFunc_Local_CheckCanReload_Reload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_CheckCanReload");

	Params::ABP_MainFirearmClass_C_Jig_CheckCanReload_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.PlayerSlots = PlayerSlots;
	Parms.CallFunc_Local_CheckCanReload_Result = CallFunc_Local_CheckCanReload_Result;
	Parms.CallFunc_Local_CheckCanReload_ContainerMag = CallFunc_Local_CheckCanReload_ContainerMag;
	Parms.CallFunc_Local_CheckCanReload_CanItChamber = CallFunc_Local_CheckCanReload_CanItChamber;
	Parms.CallFunc_Local_CheckCanReload_Reload = CallFunc_Local_CheckCanReload_Reload;

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


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_StartReloading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPCom                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             MagContainer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalStartReload_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInt_PassiveSkills_C>K2Node_DynamicCast_AsInt_Passive_Skills                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_StartReloading(class UBP_JigMultiplayer_C* MPCom, class UJSIContainer_C* MagContainer, bool* Result, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LocalStartReload_Result, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_StartReloading");

	Params::ABP_MainFirearmClass_C_Jig_StartReloading_Params Parms{};

	Parms.MPCom = MPCom;
	Parms.MagContainer = MagContainer;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_LocalStartReload_Result = CallFunc_LocalStartReload_Result;
	Parms.K2Node_DynamicCast_AsInt_Passive_Skills = K2Node_DynamicCast_AsInt_Passive_Skills;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_GetEquipMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanChamber_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                EquipMontage                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_GetEquipMontage(bool CanChamber_, class UAnimMontage** EquipMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_GetEquipMontage");

	Params::ABP_MainFirearmClass_C_Jig_GetEquipMontage_Params Parms{};

	Parms.CanChamber_ = CanChamber_;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipMontage != nullptr)
		*EquipMontage = Parms.EquipMontage;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_ExecuteChamberWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ChamberMontage                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Speed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChamberWeapon_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ChamberWeapon_BulletID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_ExecuteChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, class UAnimMontage** ChamberMontage, double* Speed, bool CallFunc_ChamberWeapon_Result, class FName CallFunc_ChamberWeapon_BulletID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_ExecuteChamberWeapon");

	Params::ABP_MainFirearmClass_C_Jig_ExecuteChamberWeapon_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.PlayerSlots = PlayerSlots;
	Parms.CallFunc_ChamberWeapon_Result = CallFunc_ChamberWeapon_Result;
	Parms.CallFunc_ChamberWeapon_BulletID = CallFunc_ChamberWeapon_BulletID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ChamberMontage != nullptr)
		*ChamberMontage = Parms.ChamberMontage;

	if (Speed != nullptr)
		*Speed = Parms.Speed;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_CanChamberWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_CanChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots PlayerSlots, bool* Result, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending_, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, int32 CallFunc_GetContainerCapacity_Cap, int32 CallFunc_GetContainerCapacity_MaxCapacity, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer_1, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex_1, bool CallFunc_GetEquippedItemRef_Found__1, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_CanChamberWeapon");

	Params::ABP_MainFirearmClass_C_Jig_CanChamberWeapon_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.PlayerSlots = PlayerSlots;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container = CallFunc_GetJSIContainerByPlayerSlots_Container;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending_ = CallFunc_GetJSIContainerByPlayerSlots_IsPending_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer = CallFunc_GetContainerByAttachmentType_JigContainer;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex = CallFunc_GetContainerByAttachmentType_ContainerIndex;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_GetContainerCapacity_Cap = CallFunc_GetContainerCapacity_Cap;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity = CallFunc_GetContainerCapacity_MaxCapacity;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer_1 = CallFunc_GetContainerByAttachmentType_JigContainer_1;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex_1 = CallFunc_GetContainerByAttachmentType_ContainerIndex_1;
	Parms.CallFunc_GetEquippedItemRef_Found__1 = CallFunc_GetEquippedItemRef_Found__1;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_1 = CallFunc_GetEquippedItemRef_ItemRef_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_GetAttachmentInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UID                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        AttachmentInfo                                                   (Parm, OutParm, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_GetAttachmentInfo(int32* UID, struct FLocalAttachmentInfo* AttachmentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_GetAttachmentInfo");

	Params::ABP_MainFirearmClass_C_Jig_GetAttachmentInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UID != nullptr)
		*UID = Parms.UID;

	if (AttachmentInfo != nullptr)
		*AttachmentInfo = std::move(Parms.AttachmentInfo);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_SetAttachmentInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        AttachmentInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_SetAttachmentInfo(int32 UID, const struct FLocalAttachmentInfo& AttachmentInfo, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_SetAttachmentInfo");

	Params::ABP_MainFirearmClass_C_Jig_SetAttachmentInfo_Params Parms{};

	Parms.UID = UID;
	Parms.AttachmentInfo = AttachmentInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_GetAttachmentByType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAttachmentType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  Attachment                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>CallFunc_Jig_GetAttachmentInfo_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_GetAttachmentByType(enum class EAttachmentType Type, class ABP_AMainLocalAttachment_C** Attachment, bool* Found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> CallFunc_Jig_GetAttachmentInfo_self_CastInput, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_GetAttachmentByType");

	Params::ABP_MainFirearmClass_C_Jig_GetAttachmentByType_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Jig_GetAttachmentInfo_self_CastInput = CallFunc_Jig_GetAttachmentInfo_self_CastInput;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID = CallFunc_Jig_GetAttachmentInfo_UID;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_SetPendindMag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AMainLocalAttachment_C*  MagRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_SetPendindMag(class ABP_AMainLocalAttachment_C* MagRef, bool* Result, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_SetPendindMag");

	Params::ABP_MainFirearmClass_C_Jig_SetPendindMag_Params Parms{};

	Parms.MagRef = MagRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_GetPendingMag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FindMagIfNoPending_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  MagRef                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_Jig_GetAttachmentByType_Attachment                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Jig_GetAttachmentByType_Found                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_GetPendingMag(bool FindMagIfNoPending_, class ABP_AMainLocalAttachment_C** MagRef, class ABP_AMainLocalAttachment_C* CallFunc_Jig_GetAttachmentByType_Attachment, bool CallFunc_Jig_GetAttachmentByType_Found, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_GetPendingMag");

	Params::ABP_MainFirearmClass_C_Jig_GetPendingMag_Params Parms{};

	Parms.FindMagIfNoPending_ = FindMagIfNoPending_;
	Parms.CallFunc_Jig_GetAttachmentByType_Attachment = CallFunc_Jig_GetAttachmentByType_Attachment;
	Parms.CallFunc_Jig_GetAttachmentByType_Found = CallFunc_Jig_GetAttachmentByType_Found;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MagRef != nullptr)
		*MagRef = Parms.MagRef;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.BlendspaceInt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::BlendspaceInt(int32* Int)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "BlendspaceInt");

	Params::ABP_MainFirearmClass_C_BlendspaceInt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.GetWeaponType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_WeaponType         WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::GetWeaponType(enum class Enum_WeaponType* WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "GetWeaponType");

	Params::ABP_MainFirearmClass_C_GetWeaponType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Trace_Hipfire
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit_1                              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit_2                              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit_3                              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_3                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_AIInterface_C>K2Node_DynamicCast_AsBP_AIInterface                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AI_Is_Dead__Dead                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_AIInterface_C>K2Node_DynamicCast_AsBP_AIInterface_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectDamageable__Damageable_                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AI_Is_Dead__Dead_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Trace_Hipfire(class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, class USoundBase* Temp_object_Variable_5, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, double CallFunc_EffectiveDamage_NewDamage, class USoundBase* K2Node_Select_Default, double CallFunc_CriticalHit_NewDamage, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class USoundBase* Temp_object_Variable_8, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class USoundBase* Temp_object_Variable_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class USoundBase* Temp_object_Variable_10, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_RandomFloatInRange_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 Temp_int_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Variable_2, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class USoundBase* K2Node_Select_Default_1, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array_2, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_3, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_2, bool CallFunc_SphereTraceSingle_ReturnValue_2, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_3, bool CallFunc_SphereTraceSingle_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, class FName CallFunc_BreakHitResult_BoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_ElementIndex_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_AI_Is_Dead__Dead, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsObjectDamageable__Damageable_, bool CallFunc_AI_Is_Dead__Dead_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_4, class APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_5, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Trace_Hipfire");

	Params::ABP_MainFirearmClass_C_Trace_Hipfire_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_EffectiveDamage_NewDamage = CallFunc_EffectiveDamage_NewDamage;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CriticalHit_NewDamage = CallFunc_CriticalHit_NewDamage;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_SphereTraceSingle_OutHit_1 = CallFunc_SphereTraceSingle_OutHit_1;
	Parms.CallFunc_SphereTraceSingle_ReturnValue_1 = CallFunc_SphereTraceSingle_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit_2 = CallFunc_SphereTraceSingle_OutHit_2;
	Parms.CallFunc_SphereTraceSingle_ReturnValue_2 = CallFunc_SphereTraceSingle_ReturnValue_2;
	Parms.CallFunc_SphereTraceSingle_OutHit_3 = CallFunc_SphereTraceSingle_OutHit_3;
	Parms.CallFunc_SphereTraceSingle_ReturnValue_3 = CallFunc_SphereTraceSingle_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_BoneName_2 = CallFunc_BreakHitResult_BoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_ElementIndex_2 = CallFunc_BreakHitResult_ElementIndex_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_3 = CallFunc_BreakHitResult_bBlockingHit_3;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_3 = CallFunc_BreakHitResult_bInitialOverlap_3;
	Parms.CallFunc_BreakHitResult_Time_3 = CallFunc_BreakHitResult_Time_3;
	Parms.CallFunc_BreakHitResult_Distance_3 = CallFunc_BreakHitResult_Distance_3;
	Parms.CallFunc_BreakHitResult_Location_3 = CallFunc_BreakHitResult_Location_3;
	Parms.CallFunc_BreakHitResult_ImpactPoint_3 = CallFunc_BreakHitResult_ImpactPoint_3;
	Parms.CallFunc_BreakHitResult_Normal_3 = CallFunc_BreakHitResult_Normal_3;
	Parms.CallFunc_BreakHitResult_ImpactNormal_3 = CallFunc_BreakHitResult_ImpactNormal_3;
	Parms.CallFunc_BreakHitResult_PhysMat_3 = CallFunc_BreakHitResult_PhysMat_3;
	Parms.CallFunc_BreakHitResult_HitActor_3 = CallFunc_BreakHitResult_HitActor_3;
	Parms.CallFunc_BreakHitResult_HitComponent_3 = CallFunc_BreakHitResult_HitComponent_3;
	Parms.CallFunc_BreakHitResult_HitBoneName_3 = CallFunc_BreakHitResult_HitBoneName_3;
	Parms.CallFunc_BreakHitResult_BoneName_3 = CallFunc_BreakHitResult_BoneName_3;
	Parms.CallFunc_BreakHitResult_HitItem_3 = CallFunc_BreakHitResult_HitItem_3;
	Parms.CallFunc_BreakHitResult_ElementIndex_3 = CallFunc_BreakHitResult_ElementIndex_3;
	Parms.CallFunc_BreakHitResult_FaceIndex_3 = CallFunc_BreakHitResult_FaceIndex_3;
	Parms.CallFunc_BreakHitResult_TraceStart_3 = CallFunc_BreakHitResult_TraceStart_3;
	Parms.CallFunc_BreakHitResult_TraceEnd_3 = CallFunc_BreakHitResult_TraceEnd_3;
	Parms.K2Node_DynamicCast_AsBP_AIInterface = K2Node_DynamicCast_AsBP_AIInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Damage = K2Node_DynamicCast_AsBPI_Damage;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AI_Is_Dead__Dead = CallFunc_AI_Is_Dead__Dead;
	Parms.K2Node_DynamicCast_AsBPI_Damage_1 = K2Node_DynamicCast_AsBPI_Damage_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_AIInterface_1 = K2Node_DynamicCast_AsBP_AIInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsObjectDamageable__Damageable_ = CallFunc_IsObjectDamageable__Damageable_;
	Parms.CallFunc_AI_Is_Dead__Dead_1 = CallFunc_AI_Is_Dead__Dead_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsPawn_1 = K2Node_DynamicCast_AsPawn_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_MakeRotFromX_ReturnValue_1 = CallFunc_MakeRotFromX_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Trace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit_1                              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit_2                              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit_3                              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_3                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_AIInterface_C>K2Node_DynamicCast_AsBP_AIInterface                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AI_Is_Dead__Dead                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_AIInterface_C>K2Node_DynamicCast_AsBP_AIInterface_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectDamageable__Damageable_                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AI_Is_Dead__Dead_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomUnitVectorInConeInDegrees_ConeHalfAngleInDegrees_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Trace(double Spread, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, class USoundBase* Temp_object_Variable_5, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, double CallFunc_EffectiveDamage_NewDamage, class USoundBase* K2Node_Select_Default, double CallFunc_CriticalHit_NewDamage, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class USoundBase* Temp_object_Variable_8, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class USoundBase* Temp_object_Variable_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class USoundBase* Temp_object_Variable_10, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_RandomFloatInRange_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 Temp_int_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Variable_2, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class USoundBase* K2Node_Select_Default_1, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array_2, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_3, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_2, bool CallFunc_SphereTraceSingle_ReturnValue_2, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_3, bool CallFunc_SphereTraceSingle_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, class FName CallFunc_BreakHitResult_BoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_ElementIndex_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_AI_Is_Dead__Dead, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsObjectDamageable__Damageable_, bool CallFunc_AI_Is_Dead__Dead_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_4, class APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_5, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, float CallFunc_RandomUnitVectorInConeInDegrees_ConeHalfAngleInDegrees_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Trace");

	Params::ABP_MainFirearmClass_C_Trace_Params Parms{};

	Parms.Spread = Spread;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_EffectiveDamage_NewDamage = CallFunc_EffectiveDamage_NewDamage;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CriticalHit_NewDamage = CallFunc_CriticalHit_NewDamage;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue = CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_SphereTraceSingle_OutHit_1 = CallFunc_SphereTraceSingle_OutHit_1;
	Parms.CallFunc_SphereTraceSingle_ReturnValue_1 = CallFunc_SphereTraceSingle_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit_2 = CallFunc_SphereTraceSingle_OutHit_2;
	Parms.CallFunc_SphereTraceSingle_ReturnValue_2 = CallFunc_SphereTraceSingle_ReturnValue_2;
	Parms.CallFunc_SphereTraceSingle_OutHit_3 = CallFunc_SphereTraceSingle_OutHit_3;
	Parms.CallFunc_SphereTraceSingle_ReturnValue_3 = CallFunc_SphereTraceSingle_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_BoneName_2 = CallFunc_BreakHitResult_BoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_ElementIndex_2 = CallFunc_BreakHitResult_ElementIndex_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_3 = CallFunc_BreakHitResult_bBlockingHit_3;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_3 = CallFunc_BreakHitResult_bInitialOverlap_3;
	Parms.CallFunc_BreakHitResult_Time_3 = CallFunc_BreakHitResult_Time_3;
	Parms.CallFunc_BreakHitResult_Distance_3 = CallFunc_BreakHitResult_Distance_3;
	Parms.CallFunc_BreakHitResult_Location_3 = CallFunc_BreakHitResult_Location_3;
	Parms.CallFunc_BreakHitResult_ImpactPoint_3 = CallFunc_BreakHitResult_ImpactPoint_3;
	Parms.CallFunc_BreakHitResult_Normal_3 = CallFunc_BreakHitResult_Normal_3;
	Parms.CallFunc_BreakHitResult_ImpactNormal_3 = CallFunc_BreakHitResult_ImpactNormal_3;
	Parms.CallFunc_BreakHitResult_PhysMat_3 = CallFunc_BreakHitResult_PhysMat_3;
	Parms.CallFunc_BreakHitResult_HitActor_3 = CallFunc_BreakHitResult_HitActor_3;
	Parms.CallFunc_BreakHitResult_HitComponent_3 = CallFunc_BreakHitResult_HitComponent_3;
	Parms.CallFunc_BreakHitResult_HitBoneName_3 = CallFunc_BreakHitResult_HitBoneName_3;
	Parms.CallFunc_BreakHitResult_BoneName_3 = CallFunc_BreakHitResult_BoneName_3;
	Parms.CallFunc_BreakHitResult_HitItem_3 = CallFunc_BreakHitResult_HitItem_3;
	Parms.CallFunc_BreakHitResult_ElementIndex_3 = CallFunc_BreakHitResult_ElementIndex_3;
	Parms.CallFunc_BreakHitResult_FaceIndex_3 = CallFunc_BreakHitResult_FaceIndex_3;
	Parms.CallFunc_BreakHitResult_TraceStart_3 = CallFunc_BreakHitResult_TraceStart_3;
	Parms.CallFunc_BreakHitResult_TraceEnd_3 = CallFunc_BreakHitResult_TraceEnd_3;
	Parms.K2Node_DynamicCast_AsBP_AIInterface = K2Node_DynamicCast_AsBP_AIInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Damage = K2Node_DynamicCast_AsBPI_Damage;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AI_Is_Dead__Dead = CallFunc_AI_Is_Dead__Dead;
	Parms.K2Node_DynamicCast_AsBPI_Damage_1 = K2Node_DynamicCast_AsBPI_Damage_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_AIInterface_1 = K2Node_DynamicCast_AsBP_AIInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsObjectDamageable__Damageable_ = CallFunc_IsObjectDamageable__Damageable_;
	Parms.CallFunc_AI_Is_Dead__Dead_1 = CallFunc_AI_Is_Dead__Dead_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsPawn_1 = K2Node_DynamicCast_AsPawn_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_MakeRotFromX_ReturnValue_1 = CallFunc_MakeRotFromX_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	Parms.CallFunc_RandomUnitVectorInConeInDegrees_ConeHalfAngleInDegrees_ImplicitCast = CallFunc_RandomUnitVectorInConeInDegrees_ConeHalfAngleInDegrees_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.JigMP_OnItemMoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::JigMP_OnItemMoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "JigMP_OnItemMoved");

	Params::ABP_MainFirearmClass_C_JigMP_OnItemMoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.CriticalHit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTechnologyUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::CriticalHit(double Damage, double* NewDamage, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, bool CallFunc_IsTechnologyUnlocked_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "CriticalHit");

	Params::ABP_MainFirearmClass_C_CriticalHit_Params Parms{};

	Parms.Damage = Damage;
	Parms.CallFunc_GetSkillTreeManager_TechTree = CallFunc_GetSkillTreeManager_TechTree;
	Parms.CallFunc_IsTechnologyUnlocked_ReturnValue = CallFunc_IsTechnologyUnlocked_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewDamage != nullptr)
		*NewDamage = Parms.NewDamage;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.EffectiveDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DistanceMeters                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FallOffDamage                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::EffectiveDamage(double Damage, double* NewDamage, double DistanceMeters, double FallOffDamage, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "EffectiveDamage");

	Params::ABP_MainFirearmClass_C_EffectiveDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DistanceMeters = DistanceMeters;
	Parms.FallOffDamage = FallOffDamage;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewDamage != nullptr)
		*NewDamage = Parms.NewDamage;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.TraceFromCamera
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocalLoc                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::TraceFromCamera(struct FTransform* Transform, const struct FVector& LocalLoc, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "TraceFromCamera");

	Params::ABP_MainFirearmClass_C_TraceFromCamera_Params Parms{};

	Parms.LocalLoc = LocalLoc;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.JigMP_OnItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        FromComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::JigMP_OnItemAdded(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* FromComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "JigMP_OnItemAdded");

	Params::ABP_MainFirearmClass_C_JigMP_OnItemAdded_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.FromComponent = FromComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.JigMP_OnItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        ToComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::JigMP_OnItemRemoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* ToComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "JigMP_OnItemRemoved");

	Params::ABP_MainFirearmClass_C_JigMP_OnItemRemoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.ToComponent = ToComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.GetItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                  Info                                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_RandomStatsConfig        RandomStatsConfig                                                (Parm, OutParm, HasGetValueTypeHash)
// struct FFItemInfo                  CallFunc_GetItemInfo_Info                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_RandomStatsConfig        CallFunc_GetItemInfo_RandomStatsConfig                           (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSizeModified_NewSize                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig, const struct FFItemInfo& CallFunc_GetItemInfo_Info, const struct FS_RandomStatsConfig& CallFunc_GetItemInfo_RandomStatsConfig, const struct FVector2D& CallFunc_GetSizeModified_NewSize, const struct FFItemInfo& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "GetItemInfo");

	Params::ABP_MainFirearmClass_C_GetItemInfo_Params Parms{};

	Parms.CallFunc_GetItemInfo_Info = CallFunc_GetItemInfo_Info;
	Parms.CallFunc_GetItemInfo_RandomStatsConfig = CallFunc_GetItemInfo_RandomStatsConfig;
	Parms.CallFunc_GetSizeModified_NewSize = CallFunc_GetSizeModified_NewSize;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

	if (RandomStatsConfig != nullptr)
		*RandomStatsConfig = std::move(Parms.RandomStatsConfig);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.ChamberWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        MPComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            ActiveWeapons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromFireFunction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BulletID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChamberIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ChamberC                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryUseBullet_Return                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryUseBullet_UID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_TryUseBullet_ItemUsed                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipItem_Unequipped                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_UnequipItem_SlotRef                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipItem_Equipped                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_EquipItem_SlotItemRef                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::ChamberWeapon(class UBP_JigMultiplayer_C* MPComp, enum class EPlayerSlots ActiveWeapons, bool FromFireFunction, bool* Result, class FName* BulletID, int32 ChamberIndex, class UJSIContainer_C* ChamberC, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending_, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_TryUseBullet_Return, int32 CallFunc_TryUseBullet_UID, class UJSI_Slot_C* CallFunc_TryUseBullet_ItemUsed, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer_1, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex_1, int32 CallFunc_GetUniqueID_UniqueServerID, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetContainerCapacity_Cap, int32 CallFunc_GetContainerCapacity_MaxCapacity, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_UnequipItem_Unequipped, class UJSI_Slot_C* CallFunc_UnequipItem_SlotRef, bool CallFunc_EquipItem_Equipped, class UJSI_Slot_C* CallFunc_EquipItem_SlotItemRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "ChamberWeapon");

	Params::ABP_MainFirearmClass_C_ChamberWeapon_Params Parms{};

	Parms.MPComp = MPComp;
	Parms.ActiveWeapons = ActiveWeapons;
	Parms.FromFireFunction = FromFireFunction;
	Parms.ChamberIndex = ChamberIndex;
	Parms.ChamberC = ChamberC;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container = CallFunc_GetJSIContainerByPlayerSlots_Container;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending_ = CallFunc_GetJSIContainerByPlayerSlots_IsPending_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer = CallFunc_GetContainerByAttachmentType_JigContainer;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex = CallFunc_GetContainerByAttachmentType_ContainerIndex;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_TryUseBullet_Return = CallFunc_TryUseBullet_Return;
	Parms.CallFunc_TryUseBullet_UID = CallFunc_TryUseBullet_UID;
	Parms.CallFunc_TryUseBullet_ItemUsed = CallFunc_TryUseBullet_ItemUsed;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer_1 = CallFunc_GetContainerByAttachmentType_JigContainer_1;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex_1 = CallFunc_GetContainerByAttachmentType_ContainerIndex_1;
	Parms.CallFunc_GetUniqueID_UniqueServerID = CallFunc_GetUniqueID_UniqueServerID;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetContainerCapacity_Cap = CallFunc_GetContainerCapacity_Cap;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity = CallFunc_GetContainerCapacity_MaxCapacity;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_UnequipItem_Unequipped = CallFunc_UnequipItem_Unequipped;
	Parms.CallFunc_UnequipItem_SlotRef = CallFunc_UnequipItem_SlotRef;
	Parms.CallFunc_EquipItem_Equipped = CallFunc_EquipItem_Equipped;
	Parms.CallFunc_EquipItem_SlotItemRef = CallFunc_EquipItem_SlotItemRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (BulletID != nullptr)
		*BulletID = Parms.BulletID;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.GetSizeModified
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   DefaultSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NewSize                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::GetSizeModified(const struct FVector2D& DefaultSize, struct FVector2D* NewSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "GetSizeModified");

	Params::ABP_MainFirearmClass_C_GetSizeModified_Params Parms{};

	Parms.DefaultSize = DefaultSize;

	UObject::ProcessEvent(Func, &Parms);

	if (NewSize != nullptr)
		*NewSize = std::move(Parms.NewSize);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.OnRep_RepAttachments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::OnRep_RepAttachments(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "OnRep_RepAttachments");

	Params::ABP_MainFirearmClass_C_OnRep_RepAttachments_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.CheckInstalledAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::CheckInstalledAttachments(class FName ID, enum class EAttachmentType Enum, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesSocketExist_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "CheckInstalledAttachments");

	Params::ABP_MainFirearmClass_C_CheckInstalledAttachments_Params Parms{};

	Parms.ID = ID;
	Parms.Enum = Enum;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.CheckRemovedAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo                    (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::CheckRemovedAttachments(class UObject* Target, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesSocketExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "CheckRemovedAttachments");

	Params::ABP_MainFirearmClass_C_CheckRemovedAttachments_Params Parms{};

	Parms.Target = Target;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments = K2Node_DynamicCast_AsBP_Weapon_Attachments;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID = CallFunc_Jig_GetAttachmentInfo_UID;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Process Attachments
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TempInstalledAttachments                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FS_RepAttachmentInfo        CurrentInfo                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  AttachmentRef                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1                  (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_FindLocalAttachmentByUID_Attachment                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachSocketByInContainerIndex_Socket                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Jig_GetPrimitiveComponent_Comp                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeaponAttachments_C>K2Node_DynamicCast_AsBP_Weapon_Attachments_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Jig_GetAttachmentInfo_UID_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_2                  (HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RepAttachmentInfo        CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocalAttachmentInfo        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_FindLocalAttachmentByUID_Attachment_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Jig_SetAttachmentInfo_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AMainLocalAttachment_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Process_Attachments(const TArray<class AActor*>& TempInstalledAttachments, const struct FS_RepAttachmentInfo& CurrentInfo, class ABP_AMainLocalAttachment_C* AttachmentRef, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_AMainLocalAttachment_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Jig_GetAttachmentInfo_UID_1, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FindLocalAttachmentByUID_Attachment, class FName CallFunc_GetAttachSocketByInContainerIndex_Socket, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, class UPrimitiveComponent* CallFunc_Jig_GetPrimitiveComponent_Comp, bool CallFunc_K2_AttachToComponent_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments_4, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Jig_GetAttachmentInfo_UID_2, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_RepAttachmentInfo& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FLocalAttachmentInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FindLocalAttachmentByUID_Attachment_1, bool CallFunc_Jig_SetAttachmentInfo_Result, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Process Attachments");

	Params::ABP_MainFirearmClass_C_Process_Attachments_Params Parms{};

	Parms.TempInstalledAttachments = TempInstalledAttachments;
	Parms.CurrentInfo = CurrentInfo;
	Parms.AttachmentRef = AttachmentRef;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments = K2Node_DynamicCast_AsBP_Weapon_Attachments;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments_1 = K2Node_DynamicCast_AsBP_Weapon_Attachments_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID = CallFunc_Jig_GetAttachmentInfo_UID;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments_2 = K2Node_DynamicCast_AsBP_Weapon_Attachments_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID_1 = CallFunc_Jig_GetAttachmentInfo_UID_1;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1 = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_FindLocalAttachmentByUID_Attachment = CallFunc_FindLocalAttachmentByUID_Attachment;
	Parms.CallFunc_GetAttachSocketByInContainerIndex_Socket = CallFunc_GetAttachSocketByInContainerIndex_Socket;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments_3 = K2Node_DynamicCast_AsBP_Weapon_Attachments_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Jig_GetPrimitiveComponent_Comp = CallFunc_Jig_GetPrimitiveComponent_Comp;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Attachments_4 = K2Node_DynamicCast_AsBP_Weapon_Attachments_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Jig_GetAttachmentInfo_UID_2 = CallFunc_Jig_GetAttachmentInfo_UID_2;
	Parms.CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_2 = CallFunc_Jig_GetAttachmentInfo_AttachmentInfo_2;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_FindLocalAttachmentByUID_Attachment_1 = CallFunc_FindLocalAttachmentByUID_Attachment_1;
	Parms.CallFunc_Jig_SetAttachmentInfo_Result = CallFunc_Jig_SetAttachmentInfo_Result;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.GetAttachSocketByInContainerIndex
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

void ABP_MainFirearmClass_C::GetAttachSocketByInContainerIndex(struct FLocalAttachmentInfo& Info, int32 InContainerIndex, class FName* Socket, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LocalAttContainerIndexSocket& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "GetAttachSocketByInContainerIndex");

	Params::ABP_MainFirearmClass_C_GetAttachSocketByInContainerIndex_Params Parms{};

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


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.FindLocalAttachmentByUID
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

void ABP_MainFirearmClass_C::FindLocalAttachmentByUID(int32 UID, class ABP_AMainLocalAttachment_C** Attachment, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_AMainLocalAttachment_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Jig_GetAttachmentInfo_UID, const struct FLocalAttachmentInfo& CallFunc_Jig_GetAttachmentInfo_AttachmentInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "FindLocalAttachmentByUID");

	Params::ABP_MainFirearmClass_C_FindLocalAttachmentByUID_Params Parms{};

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


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.UpdateAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidPickup_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_IsValidPickup_PickupInfo                                (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_RepAttachmentInfo>CallFunc_GetListOfAttachments_Attachments                        (ReferenceParm)
// bool                               CallFunc_Jig_AttachmentInstalled_Result                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         CallFunc_Jig_AttachmentInstalled_AttachmentType                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::UpdateAttachments(bool CallFunc_IsValidPickup_ReturnValue, const struct FContainerPickupsInfo& CallFunc_IsValidPickup_PickupInfo, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FS_RepAttachmentInfo>& CallFunc_GetListOfAttachments_Attachments, bool CallFunc_Jig_AttachmentInstalled_Result, enum class EAttachmentType CallFunc_Jig_AttachmentInstalled_AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "UpdateAttachments");

	Params::ABP_MainFirearmClass_C_UpdateAttachments_Params Parms{};

	Parms.CallFunc_IsValidPickup_ReturnValue = CallFunc_IsValidPickup_ReturnValue;
	Parms.CallFunc_IsValidPickup_PickupInfo = CallFunc_IsValidPickup_PickupInfo;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetListOfAttachments_Attachments = CallFunc_GetListOfAttachments_Attachments;
	Parms.CallFunc_Jig_AttachmentInstalled_Result = CallFunc_Jig_AttachmentInstalled_Result;
	Parms.CallFunc_Jig_AttachmentInstalled_AttachmentType = CallFunc_Jig_AttachmentInstalled_AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.SpawnTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPointLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::SpawnTrail(const struct FVector& MuzzleLocation, const struct FVector& EndPointLocation, const struct FRotator& Rotation, class AActor* CallFunc_GetOwner_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "SpawnTrail");

	Params::ABP_MainFirearmClass_C_SpawnTrail_Params Parms{};

	Parms.MuzzleLocation = MuzzleLocation;
	Parms.EndPointLocation = EndPointLocation;
	Parms.Rotation = Rotation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Local_CheckCanReloadInternal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        PlayerComp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            ActiveSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ContainerMag                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CanChamber                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 ReloadWith                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CanChamber_                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     SearchContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// class UJSI_Slot_C*                 BulletToUse                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               WillBeFull                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         FoundAmmo                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UJSIContainer_C*>     TargetContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// class UJSIContainer_C*             MagContainer                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_1                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_2                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_3                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_C*             K2Node_DynamicCast_AsBP_Inventory                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_4                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryItemsByIDList_Found_                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_GetInventoryItemsByIDList_ItemsFound                    (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipTo__ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_5                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipped__ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Local_CheckCanReloadInternal(class UBP_JigMultiplayer_C* PlayerComp, enum class EPlayerSlots ActiveSlot, bool* Result, class UJSIContainer_C** ContainerMag, bool* CanChamber, class UJSI_Slot_C** ReloadWith, bool CanChamber_, const TArray<class UJSIContainer_C*>& SearchContainers, class UJSI_Slot_C* BulletToUse, bool WillBeFull, const TArray<class UJSI_Slot_C*>& FoundAmmo, const TArray<class UJSIContainer_C*>& TargetContainers, class UJSIContainer_C* MagContainer, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class UJSIContainer_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending_, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_1, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3, bool K2Node_DynamicCast_bSuccess_3, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_2, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__2, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_3, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__3, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4, bool K2Node_DynamicCast_bSuccess_4, class UBP_Inventory_C* K2Node_DynamicCast_AsBP_Inventory, bool K2Node_DynamicCast_bSuccess_5, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_4, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__4, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_GetInventoryItemsByIDList_Found_, TArray<class UJSI_Slot_C*>& CallFunc_GetInventoryItemsByIDList_ItemsFound, class UJSIContainer_C* CallFunc_Array_Get_Item_1, class UJSI_Slot_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsEquipTo__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetEquippedItemRef_Found__1, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_1, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5, bool K2Node_DynamicCast_bSuccess_6, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetEquippedItemRef_Found__2, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_2, int32 CallFunc_GetContainerCapacity_Cap, int32 CallFunc_GetContainerCapacity_MaxCapacity, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6, bool K2Node_DynamicCast_bSuccess_7, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_5, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__5, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef_1, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef_2, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8, bool K2Node_DynamicCast_bSuccess_9, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer_1, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEquipped__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Local_CheckCanReloadInternal");

	Params::ABP_MainFirearmClass_C_Local_CheckCanReloadInternal_Params Parms{};

	Parms.PlayerComp = PlayerComp;
	Parms.ActiveSlot = ActiveSlot;
	Parms.CanChamber_ = CanChamber_;
	Parms.SearchContainers = SearchContainers;
	Parms.BulletToUse = BulletToUse;
	Parms.WillBeFull = WillBeFull;
	Parms.FoundAmmo = FoundAmmo;
	Parms.TargetContainers = TargetContainers;
	Parms.MagContainer = MagContainer;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container = CallFunc_GetJSIContainerByPlayerSlots_Container;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending_ = CallFunc_GetJSIContainerByPlayerSlots_IsPending_;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_1 = CallFunc_GetJSIContainerByPlayerSlots_Container_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__1 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_2 = CallFunc_GetJSIContainerByPlayerSlots_Container_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__2 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_3 = CallFunc_GetJSIContainerByPlayerSlots_Container_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__3 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__3;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Inventory = K2Node_DynamicCast_AsBP_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_4 = CallFunc_GetJSIContainerByPlayerSlots_Container_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__4 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_GetInventoryItemsByIDList_Found_ = CallFunc_GetInventoryItemsByIDList_Found_;
	Parms.CallFunc_GetInventoryItemsByIDList_ItemsFound = CallFunc_GetInventoryItemsByIDList_ItemsFound;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsEquipTo__ReturnValue = CallFunc_IsEquipTo__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetEquippedItemRef_Found__1 = CallFunc_GetEquippedItemRef_Found__1;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_1 = CallFunc_GetEquippedItemRef_ItemRef_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetListOfContainers_Containers = CallFunc_GetListOfContainers_Containers;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found__2 = CallFunc_GetEquippedItemRef_Found__2;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_2 = CallFunc_GetEquippedItemRef_ItemRef_2;
	Parms.CallFunc_GetContainerCapacity_Cap = CallFunc_GetContainerCapacity_Cap;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity = CallFunc_GetContainerCapacity_MaxCapacity;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_5 = CallFunc_GetJSIContainerByPlayerSlots_Container_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__5 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__5;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef_1 = CallFunc_GetContainerOneRef_ContainerRef_1;
	Parms.CallFunc_GetContainerOneRef_ContainerRef_2 = CallFunc_GetContainerOneRef_ContainerRef_2;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer = CallFunc_GetContainerByAttachmentType_JigContainer;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex = CallFunc_GetContainerByAttachmentType_ContainerIndex;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer_1 = CallFunc_GetContainerByAttachmentType_JigContainer_1;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex_1 = CallFunc_GetContainerByAttachmentType_ContainerIndex_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsEquipped__ReturnValue = CallFunc_IsEquipped__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ContainerMag != nullptr)
		*ContainerMag = Parms.ContainerMag;

	if (CanChamber != nullptr)
		*CanChamber = Parms.CanChamber;

	if (ReloadWith != nullptr)
		*ReloadWith = Parms.ReloadWith;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Local_CheckCanReload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        PlayerComp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            ActiveSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ContainerMag                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CanItChamber                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 Reload                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         FoundMags                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UJSIContainer_C*>     SearchContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CanChamber                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             MagContainer                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 MagToLoad                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 MagToUnload                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     TargetContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_Local_CheckCanReloadInternal_Result                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Local_CheckCanReloadInternal_ContainerMag               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Local_CheckCanReloadInternal_CanChamber                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_Local_CheckCanReloadInternal_ReloadWith                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetHighestCapacityContainer_Output_Get                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLenOfItemsInContainer_Output_Get                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_1                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_2                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_3                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_C*             K2Node_DynamicCast_AsBP_Inventory                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_4                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_5                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryItemsByIDList_Found_                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_GetInventoryItemsByIDList_ItemsFound                    (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipped__ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipTo__ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers                          (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Local_CheckCanReload(class UBP_JigMultiplayer_C* PlayerComp, enum class EPlayerSlots ActiveSlot, bool* Result, class UJSIContainer_C** ContainerMag, bool* CanItChamber, class UJSI_Slot_C** Reload, const TArray<class UJSI_Slot_C*>& FoundMags, const TArray<class UJSIContainer_C*>& SearchContainers, bool CanChamber, class UJSIContainer_C* MagContainer, class UJSI_Slot_C* MagToLoad, class UJSI_Slot_C* MagToUnload, const TArray<class UJSIContainer_C*>& TargetContainers, bool CallFunc_Local_CheckCanReloadInternal_Result, class UJSIContainer_C* CallFunc_Local_CheckCanReloadInternal_ContainerMag, bool CallFunc_Local_CheckCanReloadInternal_CanChamber, class UJSI_Slot_C* CallFunc_Local_CheckCanReloadInternal_ReloadWith, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UJSI_Slot_C* CallFunc_GetHighestCapacityContainer_Output_Get, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_GetLenOfItemsInContainer_Output_Get, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UJSIContainer_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending_, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_1, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3, bool K2Node_DynamicCast_bSuccess_3, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_2, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__2, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_3, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__3, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4, bool K2Node_DynamicCast_bSuccess_4, class UBP_Inventory_C* K2Node_DynamicCast_AsBP_Inventory, bool K2Node_DynamicCast_bSuccess_5, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_4, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__4, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5, bool K2Node_DynamicCast_bSuccess_6, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_5, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__5, bool CallFunc_GetInventoryItemsByIDList_Found_, TArray<class UJSI_Slot_C*>& CallFunc_GetInventoryItemsByIDList_ItemsFound, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7, bool K2Node_DynamicCast_bSuccess_8, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer_1, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEquipped__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UJSIContainer_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsEquipTo__ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_4, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, bool CallFunc_Not_PreBool_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Local_CheckCanReload");

	Params::ABP_MainFirearmClass_C_Local_CheckCanReload_Params Parms{};

	Parms.PlayerComp = PlayerComp;
	Parms.ActiveSlot = ActiveSlot;
	Parms.FoundMags = FoundMags;
	Parms.SearchContainers = SearchContainers;
	Parms.CanChamber = CanChamber;
	Parms.MagContainer = MagContainer;
	Parms.MagToLoad = MagToLoad;
	Parms.MagToUnload = MagToUnload;
	Parms.TargetContainers = TargetContainers;
	Parms.CallFunc_Local_CheckCanReloadInternal_Result = CallFunc_Local_CheckCanReloadInternal_Result;
	Parms.CallFunc_Local_CheckCanReloadInternal_ContainerMag = CallFunc_Local_CheckCanReloadInternal_ContainerMag;
	Parms.CallFunc_Local_CheckCanReloadInternal_CanChamber = CallFunc_Local_CheckCanReloadInternal_CanChamber;
	Parms.CallFunc_Local_CheckCanReloadInternal_ReloadWith = CallFunc_Local_CheckCanReloadInternal_ReloadWith;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetHighestCapacityContainer_Output_Get = CallFunc_GetHighestCapacityContainer_Output_Get;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetLenOfItemsInContainer_Output_Get = CallFunc_GetLenOfItemsInContainer_Output_Get;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container = CallFunc_GetJSIContainerByPlayerSlots_Container;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending_ = CallFunc_GetJSIContainerByPlayerSlots_IsPending_;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_1 = CallFunc_GetJSIContainerByPlayerSlots_Container_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__1 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_2 = CallFunc_GetJSIContainerByPlayerSlots_Container_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__2 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_3 = CallFunc_GetJSIContainerByPlayerSlots_Container_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__3 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__3;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Inventory = K2Node_DynamicCast_AsBP_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_4 = CallFunc_GetJSIContainerByPlayerSlots_Container_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__4 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__4;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_5 = CallFunc_GetJSIContainerByPlayerSlots_Container_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__5 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__5;
	Parms.CallFunc_GetInventoryItemsByIDList_Found_ = CallFunc_GetInventoryItemsByIDList_Found_;
	Parms.CallFunc_GetInventoryItemsByIDList_ItemsFound = CallFunc_GetInventoryItemsByIDList_ItemsFound;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer = CallFunc_GetContainerByAttachmentType_JigContainer;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex = CallFunc_GetContainerByAttachmentType_ContainerIndex;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer_1 = CallFunc_GetContainerByAttachmentType_JigContainer_1;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex_1 = CallFunc_GetContainerByAttachmentType_ContainerIndex_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsEquipped__ReturnValue = CallFunc_IsEquipped__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsEquipTo__ReturnValue = CallFunc_IsEquipTo__ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef_1 = CallFunc_GetContainerOneRef_ContainerRef_1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetListOfContainers_Containers = CallFunc_GetListOfContainers_Containers;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ContainerMag != nullptr)
		*ContainerMag = Parms.ContainerMag;

	if (CanItChamber != nullptr)
		*CanItChamber = Parms.CanItChamber;

	if (Reload != nullptr)
		*Reload = Parms.Reload;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.LocalStartReloadInternal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        PlayerComp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ContainerMag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     SearchContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               WillBeFull                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         FoundAmmo                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UJSIContainer_C*>     TargetContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers                          (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryItemsByIDList_Found_                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_GetInventoryItemsByIDList_ItemsFound                    (ReferenceParm, ContainsInstancedReference)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_1                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_2                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_3                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_4                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_C*             K2Node_DynamicCast_AsBP_Inventory                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipTo__ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers_1                        (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::LocalStartReloadInternal(class UBP_JigMultiplayer_C* PlayerComp, class UJSIContainer_C* ContainerMag, bool* Result, const TArray<class UJSIContainer_C*>& SearchContainers, bool WillBeFull, const TArray<class UJSI_Slot_C*>& FoundAmmo, const TArray<class UJSIContainer_C*>& TargetContainers, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UJSIContainer_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, bool CallFunc_GetEquippedItemRef_Found__1, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_1, int32 CallFunc_GetContainerCapacity_Cap, int32 CallFunc_GetContainerCapacity_MaxCapacity, int32 CallFunc_GetContainerCapacity_Cap_1, int32 CallFunc_GetContainerCapacity_MaxCapacity_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, class UJSIContainer_C* CallFunc_Array_Get_Item_1, bool CallFunc_GetInventoryItemsByIDList_Found_, TArray<class UJSI_Slot_C*>& CallFunc_GetInventoryItemsByIDList_ItemsFound, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UJSI_Slot_C* CallFunc_Array_Get_Item_2, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending_, int32 CallFunc_GetUniqueID_UniqueServerID, int32 CallFunc_Array_Add_ReturnValue, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3, bool K2Node_DynamicCast_bSuccess_3, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_1, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__1, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_2, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5, bool K2Node_DynamicCast_bSuccess_5, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_3, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__3, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_4, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__4, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class UBP_Inventory_C* K2Node_DynamicCast_AsBP_Inventory, bool K2Node_DynamicCast_bSuccess_6, class UJSIContainer_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_IsEquipTo__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetEquippedItemRef_Found__2, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_2, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6, bool K2Node_DynamicCast_bSuccess_7, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "LocalStartReloadInternal");

	Params::ABP_MainFirearmClass_C_LocalStartReloadInternal_Params Parms{};

	Parms.PlayerComp = PlayerComp;
	Parms.ContainerMag = ContainerMag;
	Parms.SearchContainers = SearchContainers;
	Parms.WillBeFull = WillBeFull;
	Parms.FoundAmmo = FoundAmmo;
	Parms.TargetContainers = TargetContainers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_GetEquippedItemRef_Found__1 = CallFunc_GetEquippedItemRef_Found__1;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_1 = CallFunc_GetEquippedItemRef_ItemRef_1;
	Parms.CallFunc_GetContainerCapacity_Cap = CallFunc_GetContainerCapacity_Cap;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity = CallFunc_GetContainerCapacity_MaxCapacity;
	Parms.CallFunc_GetContainerCapacity_Cap_1 = CallFunc_GetContainerCapacity_Cap_1;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity_1 = CallFunc_GetContainerCapacity_MaxCapacity_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetListOfContainers_Containers = CallFunc_GetListOfContainers_Containers;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetInventoryItemsByIDList_Found_ = CallFunc_GetInventoryItemsByIDList_Found_;
	Parms.CallFunc_GetInventoryItemsByIDList_ItemsFound = CallFunc_GetInventoryItemsByIDList_ItemsFound;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container = CallFunc_GetJSIContainerByPlayerSlots_Container;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending_ = CallFunc_GetJSIContainerByPlayerSlots_IsPending_;
	Parms.CallFunc_GetUniqueID_UniqueServerID = CallFunc_GetUniqueID_UniqueServerID;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_1 = CallFunc_GetJSIContainerByPlayerSlots_Container_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__1 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_2 = CallFunc_GetJSIContainerByPlayerSlots_Container_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__2 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_3 = CallFunc_GetJSIContainerByPlayerSlots_Container_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__3 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_4 = CallFunc_GetJSIContainerByPlayerSlots_Container_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__4 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__4;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Inventory = K2Node_DynamicCast_AsBP_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_IsEquipTo__ReturnValue = CallFunc_IsEquipTo__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found__2 = CallFunc_GetEquippedItemRef_Found__2;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_2 = CallFunc_GetEquippedItemRef_ItemRef_2;
	Parms.CallFunc_GetContainerOneRef_ContainerRef_1 = CallFunc_GetContainerOneRef_ContainerRef_1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetListOfContainers_Containers_1 = CallFunc_GetListOfContainers_Containers_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.LocalStartReload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        PlayerComp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ContainerMag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     SearchContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// class UJSI_Slot_C*                 MagToLoad                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 MagToUnload                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         FoundMags                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UJSIContainer_C*>     TargetContainers                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_LocalStartReloadInternal_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_1                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_2                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_3                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_C*             K2Node_DynamicCast_AsBP_Inventory                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container_4                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending__4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSlotDim_SlotDimension                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEmptySlotTryRotated_NonPure_Found_                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEmptySlotTryRotated_NonPure_ToSlotIndex              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEmptySlotTryRotated_NonPure_Rotated_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipTo__ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryItemsByIDList_Found_                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_GetInventoryItemsByIDList_ItemsFound                    (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsEquipTo__ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetHighestCapacityContainer_Output_Get                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers_1                        (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::LocalStartReload(class UBP_JigMultiplayer_C* PlayerComp, class UJSIContainer_C* ContainerMag, bool* Result, const TArray<class UJSIContainer_C*>& SearchContainers, class UJSI_Slot_C* MagToLoad, class UJSI_Slot_C* MagToUnload, const TArray<class UJSI_Slot_C*>& FoundMags, const TArray<class UJSIContainer_C*>& TargetContainers, bool CallFunc_LocalStartReloadInternal_Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, class UJSIContainer_C* CallFunc_Array_Get_Item, class UJSIContainer_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_GetUniqueID_UniqueServerID, int32 CallFunc_GetUniqueID_UniqueServerID_1, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, int32 CallFunc_GetUniqueID_UniqueServerID_2, int32 CallFunc_GetUniqueID_UniqueServerID_3, int32 CallFunc_GetUniqueID_UniqueServerID_4, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending_, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_1, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3, bool K2Node_DynamicCast_bSuccess_3, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_2, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__2, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_3, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__3, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4, bool K2Node_DynamicCast_bSuccess_4, class UBP_Inventory_C* K2Node_DynamicCast_AsBP_Inventory, bool K2Node_DynamicCast_bSuccess_5, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container_4, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending__4, const struct FVector2D& CallFunc_GetSlotDim_SlotDimension, bool CallFunc_GetEmptySlotTryRotated_NonPure_Found_, int32 CallFunc_GetEmptySlotTryRotated_NonPure_ToSlotIndex, bool CallFunc_GetEmptySlotTryRotated_NonPure_Rotated_, class UJSIContainer_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsEquipTo__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetEquippedItemRef_Found__1, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_1, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5, bool K2Node_DynamicCast_bSuccess_6, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetInventoryItemsByIDList_Found_, TArray<class UJSI_Slot_C*>& CallFunc_GetInventoryItemsByIDList_ItemsFound, class UJSIContainer_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array_1, bool CallFunc_IsEquipTo__ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UJSI_Slot_C* CallFunc_GetHighestCapacityContainer_Output_Get, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_GetEquippedItemRef_Found__2, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_2, bool CallFunc_BooleanAND_ReturnValue_1, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6, bool K2Node_DynamicCast_bSuccess_7, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "LocalStartReload");

	Params::ABP_MainFirearmClass_C_LocalStartReload_Params Parms{};

	Parms.PlayerComp = PlayerComp;
	Parms.ContainerMag = ContainerMag;
	Parms.SearchContainers = SearchContainers;
	Parms.MagToLoad = MagToLoad;
	Parms.MagToUnload = MagToUnload;
	Parms.FoundMags = FoundMags;
	Parms.TargetContainers = TargetContainers;
	Parms.CallFunc_LocalStartReloadInternal_Result = CallFunc_LocalStartReloadInternal_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_GetUniqueID_UniqueServerID = CallFunc_GetUniqueID_UniqueServerID;
	Parms.CallFunc_GetUniqueID_UniqueServerID_1 = CallFunc_GetUniqueID_UniqueServerID_1;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_GetUniqueID_UniqueServerID_2 = CallFunc_GetUniqueID_UniqueServerID_2;
	Parms.CallFunc_GetUniqueID_UniqueServerID_3 = CallFunc_GetUniqueID_UniqueServerID_3;
	Parms.CallFunc_GetUniqueID_UniqueServerID_4 = CallFunc_GetUniqueID_UniqueServerID_4;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container = CallFunc_GetJSIContainerByPlayerSlots_Container;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending_ = CallFunc_GetJSIContainerByPlayerSlots_IsPending_;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_1 = CallFunc_GetJSIContainerByPlayerSlots_Container_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_1;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__1 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_2 = CallFunc_GetJSIContainerByPlayerSlots_Container_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__2 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__2;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_3 = CallFunc_GetJSIContainerByPlayerSlots_Container_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_3;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__3 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__3;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Inventory = K2Node_DynamicCast_AsBP_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container_4 = CallFunc_GetJSIContainerByPlayerSlots_Container_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4 = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem_4;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending__4 = CallFunc_GetJSIContainerByPlayerSlots_IsPending__4;
	Parms.CallFunc_GetSlotDim_SlotDimension = CallFunc_GetSlotDim_SlotDimension;
	Parms.CallFunc_GetEmptySlotTryRotated_NonPure_Found_ = CallFunc_GetEmptySlotTryRotated_NonPure_Found_;
	Parms.CallFunc_GetEmptySlotTryRotated_NonPure_ToSlotIndex = CallFunc_GetEmptySlotTryRotated_NonPure_ToSlotIndex;
	Parms.CallFunc_GetEmptySlotTryRotated_NonPure_Rotated_ = CallFunc_GetEmptySlotTryRotated_NonPure_Rotated_;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsEquipTo__ReturnValue = CallFunc_IsEquipTo__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found__1 = CallFunc_GetEquippedItemRef_Found__1;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_1 = CallFunc_GetEquippedItemRef_ItemRef_1;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetListOfContainers_Containers = CallFunc_GetListOfContainers_Containers;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItemsByIDList_Found_ = CallFunc_GetInventoryItemsByIDList_Found_;
	Parms.CallFunc_GetInventoryItemsByIDList_ItemsFound = CallFunc_GetInventoryItemsByIDList_ItemsFound;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsEquipTo__ReturnValue_1 = CallFunc_IsEquipTo__ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetHighestCapacityContainer_Output_Get = CallFunc_GetHighestCapacityContainer_Output_Get;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetEquippedItemRef_Found__2 = CallFunc_GetEquippedItemRef_Found__2;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_2 = CallFunc_GetEquippedItemRef_ItemRef_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetContainerOneRef_ContainerRef_1 = CallFunc_GetContainerOneRef_ContainerRef_1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetListOfContainers_Containers_1 = CallFunc_GetListOfContainers_Containers_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Local_StopShooting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DontSendRPC_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Local_StopShooting(bool DontSendRPC_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Local_StopShooting");

	Params::ABP_MainFirearmClass_C_Local_StopShooting_Params Parms{};

	Parms.DontSendRPC_ = DontSendRPC_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Local_StartShooting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        PlayerMPComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            ActiveWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HipFire_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetJSIContainerByPlayerSlots_Container                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetJSIContainerByPlayerSlots_EquippedItem               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJSIContainerByPlayerSlots_IsPending_                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetContainerByAttachmentType_JigContainer_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerByAttachmentType_ContainerIndex_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Local_StartShooting(class UBP_JigMultiplayer_C* PlayerMPComp, enum class EPlayerSlots ActiveWeapon, bool HipFire_, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UJSIContainer_C* CallFunc_GetJSIContainerByPlayerSlots_Container, class UJSI_Slot_C* CallFunc_GetJSIContainerByPlayerSlots_EquippedItem, bool CallFunc_GetJSIContainerByPlayerSlots_IsPending_, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer_1, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex_1, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, int32 CallFunc_GetContainerCapacity_Cap, int32 CallFunc_GetContainerCapacity_MaxCapacity, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetEquippedItemRef_Found__1, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_1, int32 CallFunc_GetContainerCapacity_Cap_1, int32 CallFunc_GetContainerCapacity_MaxCapacity_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class UJSIContainer_C* CallFunc_GetContainerByAttachmentType_JigContainer_2, int32 CallFunc_GetContainerByAttachmentType_ContainerIndex_2, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GetEquippedItemRef_Found__2, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Local_StartShooting");

	Params::ABP_MainFirearmClass_C_Local_StartShooting_Params Parms{};

	Parms.PlayerMPComp = PlayerMPComp;
	Parms.ActiveWeapon = ActiveWeapon;
	Parms.HipFire_ = HipFire_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_Container = CallFunc_GetJSIContainerByPlayerSlots_Container;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_EquippedItem = CallFunc_GetJSIContainerByPlayerSlots_EquippedItem;
	Parms.CallFunc_GetJSIContainerByPlayerSlots_IsPending_ = CallFunc_GetJSIContainerByPlayerSlots_IsPending_;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.CallFunc_GetContainerOneRef_ContainerRef_1 = CallFunc_GetContainerOneRef_ContainerRef_1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer = CallFunc_GetContainerByAttachmentType_JigContainer;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex = CallFunc_GetContainerByAttachmentType_ContainerIndex;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer_1 = CallFunc_GetContainerByAttachmentType_JigContainer_1;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex_1 = CallFunc_GetContainerByAttachmentType_ContainerIndex_1;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_GetContainerCapacity_Cap = CallFunc_GetContainerCapacity_Cap;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity = CallFunc_GetContainerCapacity_MaxCapacity;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found__1 = CallFunc_GetEquippedItemRef_Found__1;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_1 = CallFunc_GetEquippedItemRef_ItemRef_1;
	Parms.CallFunc_GetContainerCapacity_Cap_1 = CallFunc_GetContainerCapacity_Cap_1;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity_1 = CallFunc_GetContainerCapacity_MaxCapacity_1;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3 = K2Node_DynamicCast_AsJSISpecial_Widget_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetContainerByAttachmentType_JigContainer_2 = CallFunc_GetContainerByAttachmentType_JigContainer_2;
	Parms.CallFunc_GetContainerByAttachmentType_ContainerIndex_2 = CallFunc_GetContainerByAttachmentType_ContainerIndex_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetEquippedItemRef_Found__2 = CallFunc_GetEquippedItemRef_Found__2;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_2 = CallFunc_GetEquippedItemRef_ItemRef_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.FireBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetForegrip_ForegripVertical                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetForegrip_ForegripHorizontal                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompensator_CompensatorAttached_                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSuppressor_SuppressorAttached_                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompensator_CompensatorAttached__1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TraceFromCamera_Transform                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_GetPlayerRef_Player                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileMaster_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChamberWeapon_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ChamberWeapon_BulletID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryUseBullet_Return                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryUseBullet_UID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_TryUseBullet_ItemUsed                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetItemID_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Max_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Max_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddControllerYawInput_Val_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddControllerPitchInput_Val_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::FireBullet(double CallFunc_GetForegrip_ForegripVertical, double CallFunc_GetForegrip_ForegripHorizontal, bool CallFunc_GetCompensator_CompensatorAttached_, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_GetSuppressor_SuppressorAttached_, bool CallFunc_GetCompensator_CompensatorAttached__1, bool CallFunc_IsValidClass_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, const struct FTransform& CallFunc_TraceFromCamera_Transform, class AActor* CallFunc_GetOwner_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player, class ABP_ProjectileMaster_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ChamberWeapon_Result, class FName CallFunc_ChamberWeapon_BulletID, bool CallFunc_TryUseBullet_Return, int32 CallFunc_TryUseBullet_UID, class UJSI_Slot_C* CallFunc_TryUseBullet_ItemUsed, class FName CallFunc_GetItemID_ItemID, float CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_RandomFloatInRange_Max_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast_1, double CallFunc_RandomFloatInRange_Max_ImplicitCast_1, float CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_1, float CallFunc_AddControllerYawInput_Val_ImplicitCast, float CallFunc_AddControllerPitchInput_Val_ImplicitCast, float CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "FireBullet");

	Params::ABP_MainFirearmClass_C_FireBullet_Params Parms{};

	Parms.CallFunc_GetForegrip_ForegripVertical = CallFunc_GetForegrip_ForegripVertical;
	Parms.CallFunc_GetForegrip_ForegripHorizontal = CallFunc_GetForegrip_ForegripHorizontal;
	Parms.CallFunc_GetCompensator_CompensatorAttached_ = CallFunc_GetCompensator_CompensatorAttached_;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetSuppressor_SuppressorAttached_ = CallFunc_GetSuppressor_SuppressorAttached_;
	Parms.CallFunc_GetCompensator_CompensatorAttached__1 = CallFunc_GetCompensator_CompensatorAttached__1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TraceFromCamera_Transform = CallFunc_TraceFromCamera_Transform;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player = K2Node_DynamicCast_AsBPI_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerRef_Player = CallFunc_GetPlayerRef_Player;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ChamberWeapon_Result = CallFunc_ChamberWeapon_Result;
	Parms.CallFunc_ChamberWeapon_BulletID = CallFunc_ChamberWeapon_BulletID;
	Parms.CallFunc_TryUseBullet_Return = CallFunc_TryUseBullet_Return;
	Parms.CallFunc_TryUseBullet_UID = CallFunc_TryUseBullet_UID;
	Parms.CallFunc_TryUseBullet_ItemUsed = CallFunc_TryUseBullet_ItemUsed;
	Parms.CallFunc_GetItemID_ItemID = CallFunc_GetItemID_ItemID;
	Parms.CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast = CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast = CallFunc_RandomFloatInRange_Min_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Max_ImplicitCast = CallFunc_RandomFloatInRange_Max_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast_1 = CallFunc_RandomFloatInRange_Min_ImplicitCast_1;
	Parms.CallFunc_RandomFloatInRange_Max_ImplicitCast_1 = CallFunc_RandomFloatInRange_Max_ImplicitCast_1;
	Parms.CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_1 = CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_1;
	Parms.CallFunc_AddControllerYawInput_Val_ImplicitCast = CallFunc_AddControllerYawInput_Val_ImplicitCast;
	Parms.CallFunc_AddControllerPitchInput_Val_ImplicitCast = CallFunc_AddControllerPitchInput_Val_ImplicitCast;
	Parms.CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_2 = CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.OnNotifyEnd_336AF8914848A4799421D89C590F8176
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::OnNotifyEnd_336AF8914848A4799421D89C590F8176(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "OnNotifyEnd_336AF8914848A4799421D89C590F8176");

	Params::ABP_MainFirearmClass_C_OnNotifyEnd_336AF8914848A4799421D89C590F8176_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.OnNotifyBegin_336AF8914848A4799421D89C590F8176
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::OnNotifyBegin_336AF8914848A4799421D89C590F8176(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "OnNotifyBegin_336AF8914848A4799421D89C590F8176");

	Params::ABP_MainFirearmClass_C_OnNotifyBegin_336AF8914848A4799421D89C590F8176_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.OnInterrupted_336AF8914848A4799421D89C590F8176
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::OnInterrupted_336AF8914848A4799421D89C590F8176(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "OnInterrupted_336AF8914848A4799421D89C590F8176");

	Params::ABP_MainFirearmClass_C_OnInterrupted_336AF8914848A4799421D89C590F8176_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.OnBlendOut_336AF8914848A4799421D89C590F8176
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::OnBlendOut_336AF8914848A4799421D89C590F8176(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "OnBlendOut_336AF8914848A4799421D89C590F8176");

	Params::ABP_MainFirearmClass_C_OnBlendOut_336AF8914848A4799421D89C590F8176_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.OnCompleted_336AF8914848A4799421D89C590F8176
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::OnCompleted_336AF8914848A4799421D89C590F8176(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "OnCompleted_336AF8914848A4799421D89C590F8176");

	Params::ABP_MainFirearmClass_C_OnCompleted_336AF8914848A4799421D89C590F8176_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Jig_OnMontageNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Jig_OnMontageNotify(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Jig_OnMontageNotify");

	Params::ABP_MainFirearmClass_C_Jig_OnMontageNotify_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.FireWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainFirearmClass_C::FireWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "FireWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.StartFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainFirearmClass_C::StartFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "StartFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.StopFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainFirearmClass_C::StopFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "StopFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MainFirearmClass_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_MainFirearmClass_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.BulletTrailEnabled?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::BulletTrailEnabled_(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "BulletTrailEnabled?");

	Params::ABP_MainFirearmClass_C_BulletTrailEnabled__Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.DamageNumbersEnabled?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::DamageNumbersEnabled_(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "DamageNumbersEnabled?");

	Params::ABP_MainFirearmClass_C_DamageNumbersEnabled__Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Svr_SpawnTrail
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPointLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainFirearmClass_C::Svr_SpawnTrail(const struct FVector& MuzzleLocation, const struct FVector& EndPointLocation, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Svr_SpawnTrail");

	Params::ABP_MainFirearmClass_C_Svr_SpawnTrail_Params Parms{};

	Parms.MuzzleLocation = MuzzleLocation;
	Parms.EndPointLocation = EndPointLocation;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Svr_WeaponEffects
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachPointName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Svr_WeaponEffects(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Svr_WeaponEffects");

	Params::ABP_MainFirearmClass_C_Svr_WeaponEffects_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.MC_SpawnTrail
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPointLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainFirearmClass_C::MC_SpawnTrail(const struct FVector& MuzzleLocation, const struct FVector& EndPointLocation, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "MC_SpawnTrail");

	Params::ABP_MainFirearmClass_C_MC_SpawnTrail_Params Parms{};

	Parms.MuzzleLocation = MuzzleLocation;
	Parms.EndPointLocation = EndPointLocation;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.MC_WeaponEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachPointName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::MC_WeaponEffects(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "MC_WeaponEffects");

	Params::ABP_MainFirearmClass_C_MC_WeaponEffects_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Event_FireRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainFirearmClass_C::Event_FireRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Event_FireRate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.MC_WeaponShot
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Started_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::MC_WeaponShot(bool Started_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "MC_WeaponShot");

	Params::ABP_MainFirearmClass_C_MC_WeaponShot_Params Parms{};

	Parms.Started_ = Started_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Svr_WeaponShot
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Started_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Svr_WeaponShot(bool Started_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Svr_WeaponShot");

	Params::ABP_MainFirearmClass_C_Svr_WeaponShot_Params Parms{};

	Parms.Started_ = Started_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Trace_ImpactBulletHole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Trace_ImpactBulletHole(const struct FVector& Location, const struct FRotator& Rotation, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Trace_ImpactBulletHole");

	Params::ABP_MainFirearmClass_C_Trace_ImpactBulletHole_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Trace_Impact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Trace_Impact(const struct FVector& Location, const struct FRotator& Rotation, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Trace_Impact");

	Params::ABP_MainFirearmClass_C_Trace_Impact_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Trace_BodyImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Trace_BodyImpact(const struct FVector& Location, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Trace_BodyImpact");

	Params::ABP_MainFirearmClass_C_Trace_BodyImpact_Params Parms{};

	Parms.Location = Location;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Trace_Headshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Trace_Headshot(const struct FVector& Location, const struct FRotator& Rotation, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Trace_Headshot");

	Params::ABP_MainFirearmClass_C_Trace_Headshot_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.Client_HitUI
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::Client_HitUI(double Damage, const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "Client_HitUI");

	Params::ABP_MainFirearmClass_C_Client_HitUI_Params Parms{};

	Parms.Damage = Damage;
	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.SERVER_OnTargetHitHead
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::SERVER_OnTargetHitHead(class AActor* DamagedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "SERVER_OnTargetHitHead");

	Params::ABP_MainFirearmClass_C_SERVER_OnTargetHitHead_Params Parms{};

	Parms.DamagedActor = DamagedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.SERVER_OnTargetHitBody
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::SERVER_OnTargetHitBody(class AActor* DamagedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "SERVER_OnTargetHitBody");

	Params::ABP_MainFirearmClass_C_SERVER_OnTargetHitBody_Params Parms{};

	Parms.DamagedActor = DamagedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainFirearmClass.BP_MainFirearmClass_C.ExecuteUbergraph_BP_MainFirearmClass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_NotifyName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetPassiveSkillsComponent_SkillsComponent               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_MuzzleLocation_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_EndPointLocation_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSuppressor_SuppressorAttached_                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_CustomEvent_EmitterTemplate_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_CustomEvent_AttachToComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AttachPointName_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_MuzzleLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_EndPointLocation                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_PlayerControllerInterface_C>K2Node_DynamicCast_AsBP_Player_Controller_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_CustomEvent_EmitterTemplate                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_CustomEvent_AttachToComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AttachPointName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Started__1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Started_                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompensator_CompensatorAttached_                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompensator_CompensatorAttached__1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSuppressor_SuppressorAttached__1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSuppressor_SuppressorAttached__2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Actor_3                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectDamageable__Damageable_                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Actor_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectDamageable__Damageable__1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Damage_C>K2Node_DynamicCast_AsBPI_Damage_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_2                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_3                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Colour                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInt_PassiveSkills_C>K2Node_DynamicCast_AsInt_Passive_Skills                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInt_PassiveSkills_C>K2Node_DynamicCast_AsInt_Passive_Skills_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_7                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EffectiveDamage_NewDamage_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CriticalHit_NewDamage_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Client_HitUI_Damage_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Client_HitUI_Damage_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Client_HitUI_Damage_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Client_HitUI_Damage_ImplicitCast_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Client_HitUI_Damage_ImplicitCast_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Client_HitUI_Damage_ImplicitCast_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainFirearmClass_C::ExecuteUbergraph_BP_MainFirearmClass(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, int32 Temp_int_Variable_1, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Event_NotifyName, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, class FName K2Node_CustomEvent_NotifyName_1, bool K2Node_CustomEvent_NewValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, bool K2Node_CustomEvent_NewValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector& K2Node_CustomEvent_MuzzleLocation_1, const struct FVector& K2Node_CustomEvent_EndPointLocation_1, const struct FRotator& K2Node_CustomEvent_Rotation_4, bool CallFunc_GetSuppressor_SuppressorAttached_, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate_1, class USceneComponent* K2Node_CustomEvent_AttachToComponent_1, class FName K2Node_CustomEvent_AttachPointName_1, const struct FVector& K2Node_CustomEvent_MuzzleLocation, const struct FVector& K2Node_CustomEvent_EndPointLocation, const struct FRotator& K2Node_CustomEvent_Rotation_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBP_PlayerControllerInterface_C> K2Node_DynamicCast_AsBP_Player_Controller_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, class USceneComponent* K2Node_CustomEvent_AttachToComponent, class FName K2Node_CustomEvent_AttachPointName, class FName K2Node_CustomEvent_NotifyName_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class FName Temp_name_Variable, class AActor* CallFunc_GetOwner_ReturnValue_2, bool K2Node_CustomEvent_Started__1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue, bool K2Node_CustomEvent_Started_, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_GetBoolCVar_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName, bool CallFunc_GetBoolCVar_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetBoolCVar_ReturnValue_2, class AActor* CallFunc_Array_Get_Item, double CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_GetCompensator_CompensatorAttached_, bool CallFunc_GetCompensator_CompensatorAttached__1, bool CallFunc_GetSuppressor_SuppressorAttached__1, bool CallFunc_GetSuppressor_SuppressorAttached__2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, double CallFunc_EffectiveDamage_NewDamage, double CallFunc_CriticalHit_NewDamage, double CallFunc_EffectiveDamage_NewDamage_1, const struct FVector& K2Node_CustomEvent_Location_3, const struct FRotator& K2Node_CustomEvent_Rotation_2, class AActor* K2Node_CustomEvent_Actor_3, double CallFunc_CriticalHit_NewDamage_1, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsObjectDamageable__Damageable_, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage_1, bool K2Node_DynamicCast_bSuccess_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FVector& K2Node_CustomEvent_Location_2, const struct FRotator& K2Node_CustomEvent_Rotation_1, class AActor* K2Node_CustomEvent_Actor_2, const struct FVector& K2Node_CustomEvent_Location_1, class AActor* K2Node_CustomEvent_Actor_1, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage_2, bool K2Node_DynamicCast_bSuccess_6, class APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsObjectDamageable__Damageable__1, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage_3, bool K2Node_DynamicCast_bSuccess_8, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Rotation, class AActor* K2Node_CustomEvent_Actor, double CallFunc_RandomFloatInRange_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn_2, bool K2Node_DynamicCast_bSuccess_9, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, double K2Node_CustomEvent_Damage, const struct FLinearColor& K2Node_CustomEvent_Colour, class AActor* CallFunc_GetOwner_ReturnValue_3, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_2, bool K2Node_DynamicCast_bSuccess_10, class AActor* CallFunc_GetOwner_ReturnValue_4, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_3, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, double CallFunc_EffectiveDamage_NewDamage_2, double CallFunc_CriticalHit_NewDamage_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_EffectiveDamage_NewDamage_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, double CallFunc_CriticalHit_NewDamage_3, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills, bool K2Node_DynamicCast_bSuccess_12, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills_1, bool K2Node_DynamicCast_bSuccess_13, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_5, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_6, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_EffectiveDamage_NewDamage_4, double CallFunc_EffectiveDamage_NewDamage_5, double CallFunc_CriticalHit_NewDamage_4, double CallFunc_CriticalHit_NewDamage_5, class AActor* K2Node_CustomEvent_DamagedActor_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, float CallFunc_ApplyDamage_ReturnValue, double CallFunc_EffectiveDamage_NewDamage_6, double CallFunc_CriticalHit_NewDamage_6, float CallFunc_ApplyDamage_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue_2, class AActor* K2Node_CustomEvent_DamagedActor, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, float CallFunc_ApplyDamage_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_EffectiveDamage_NewDamage_7, float CallFunc_ApplyDamage_ReturnValue_4, double CallFunc_CriticalHit_NewDamage_7, float CallFunc_ApplyDamage_ReturnValue_5, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast_1, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast_2, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast_3, double CallFunc_Client_HitUI_Damage_ImplicitCast, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast_4, double CallFunc_Client_HitUI_Damage_ImplicitCast_1, double CallFunc_Client_HitUI_Damage_ImplicitCast_2, double CallFunc_Client_HitUI_Damage_ImplicitCast_3, double CallFunc_Client_HitUI_Damage_ImplicitCast_4, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast_5, double CallFunc_Client_HitUI_Damage_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainFirearmClass_C", "ExecuteUbergraph_BP_MainFirearmClass");

	Params::ABP_MainFirearmClass_C_ExecuteUbergraph_BP_MainFirearmClass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_NotifyName = K2Node_Event_NotifyName;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPassiveSkillsComponent_SkillsComponent = CallFunc_GetPassiveSkillsComponent_SkillsComponent;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_MuzzleLocation_1 = K2Node_CustomEvent_MuzzleLocation_1;
	Parms.K2Node_CustomEvent_EndPointLocation_1 = K2Node_CustomEvent_EndPointLocation_1;
	Parms.K2Node_CustomEvent_Rotation_4 = K2Node_CustomEvent_Rotation_4;
	Parms.CallFunc_GetSuppressor_SuppressorAttached_ = CallFunc_GetSuppressor_SuppressorAttached_;
	Parms.K2Node_CustomEvent_EmitterTemplate_1 = K2Node_CustomEvent_EmitterTemplate_1;
	Parms.K2Node_CustomEvent_AttachToComponent_1 = K2Node_CustomEvent_AttachToComponent_1;
	Parms.K2Node_CustomEvent_AttachPointName_1 = K2Node_CustomEvent_AttachPointName_1;
	Parms.K2Node_CustomEvent_MuzzleLocation = K2Node_CustomEvent_MuzzleLocation;
	Parms.K2Node_CustomEvent_EndPointLocation = K2Node_CustomEvent_EndPointLocation;
	Parms.K2Node_CustomEvent_Rotation_3 = K2Node_CustomEvent_Rotation_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Interface = K2Node_DynamicCast_AsBP_Player_Controller_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_CustomEvent_EmitterTemplate = K2Node_CustomEvent_EmitterTemplate;
	Parms.K2Node_CustomEvent_AttachToComponent = K2Node_CustomEvent_AttachToComponent;
	Parms.K2Node_CustomEvent_AttachPointName = K2Node_CustomEvent_AttachPointName;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Character_1 = K2Node_DynamicCast_AsBP_Player_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_CustomEvent_Started__1 = K2Node_CustomEvent_Started__1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CustomEvent_Started_ = K2Node_CustomEvent_Started_;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.CallFunc_GetBoolCVar_ReturnValue_1 = CallFunc_GetBoolCVar_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetBoolCVar_ReturnValue_2 = CallFunc_GetBoolCVar_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_GetCompensator_CompensatorAttached_ = CallFunc_GetCompensator_CompensatorAttached_;
	Parms.CallFunc_GetCompensator_CompensatorAttached__1 = CallFunc_GetCompensator_CompensatorAttached__1;
	Parms.CallFunc_GetSuppressor_SuppressorAttached__1 = CallFunc_GetSuppressor_SuppressorAttached__1;
	Parms.CallFunc_GetSuppressor_SuppressorAttached__2 = CallFunc_GetSuppressor_SuppressorAttached__2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_EffectiveDamage_NewDamage = CallFunc_EffectiveDamage_NewDamage;
	Parms.CallFunc_CriticalHit_NewDamage = CallFunc_CriticalHit_NewDamage;
	Parms.CallFunc_EffectiveDamage_NewDamage_1 = CallFunc_EffectiveDamage_NewDamage_1;
	Parms.K2Node_CustomEvent_Location_3 = K2Node_CustomEvent_Location_3;
	Parms.K2Node_CustomEvent_Rotation_2 = K2Node_CustomEvent_Rotation_2;
	Parms.K2Node_CustomEvent_Actor_3 = K2Node_CustomEvent_Actor_3;
	Parms.CallFunc_CriticalHit_NewDamage_1 = CallFunc_CriticalHit_NewDamage_1;
	Parms.K2Node_DynamicCast_AsBPI_Damage = K2Node_DynamicCast_AsBPI_Damage;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsObjectDamageable__Damageable_ = CallFunc_IsObjectDamageable__Damageable_;
	Parms.K2Node_DynamicCast_AsBPI_Damage_1 = K2Node_DynamicCast_AsBPI_Damage_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Location_2 = K2Node_CustomEvent_Location_2;
	Parms.K2Node_CustomEvent_Rotation_1 = K2Node_CustomEvent_Rotation_1;
	Parms.K2Node_CustomEvent_Actor_2 = K2Node_CustomEvent_Actor_2;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CustomEvent_Actor_1 = K2Node_CustomEvent_Actor_1;
	Parms.K2Node_DynamicCast_AsBPI_Damage_2 = K2Node_DynamicCast_AsBPI_Damage_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsPawn_1 = K2Node_DynamicCast_AsPawn_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsObjectDamageable__Damageable__1 = CallFunc_IsObjectDamageable__Damageable__1;
	Parms.K2Node_DynamicCast_AsBPI_Damage_3 = K2Node_DynamicCast_AsBPI_Damage_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_2 = CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Rotation = K2Node_CustomEvent_Rotation;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn_2 = K2Node_DynamicCast_AsPawn_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_3 = CallFunc_SpawnEmitterAtLocation_ReturnValue_3;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_Colour = K2Node_CustomEvent_Colour;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Player_Character_2 = K2Node_DynamicCast_AsBP_Player_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Player_Character_3 = K2Node_DynamicCast_AsBP_Player_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.CallFunc_EffectiveDamage_NewDamage_2 = CallFunc_EffectiveDamage_NewDamage_2;
	Parms.CallFunc_CriticalHit_NewDamage_2 = CallFunc_CriticalHit_NewDamage_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_EffectiveDamage_NewDamage_3 = CallFunc_EffectiveDamage_NewDamage_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_CriticalHit_NewDamage_3 = CallFunc_CriticalHit_NewDamage_3;
	Parms.K2Node_DynamicCast_AsInt_Passive_Skills = K2Node_DynamicCast_AsInt_Passive_Skills;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsInt_Passive_Skills_1 = K2Node_DynamicCast_AsInt_Passive_Skills_1;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_4 = CallFunc_GetPlayerCharacter_ReturnValue_4;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_5 = CallFunc_GetPlayerCharacter_ReturnValue_5;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_6 = CallFunc_GetPlayerCharacter_ReturnValue_6;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_7 = CallFunc_GetPlayerCharacter_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_EffectiveDamage_NewDamage_4 = CallFunc_EffectiveDamage_NewDamage_4;
	Parms.CallFunc_EffectiveDamage_NewDamage_5 = CallFunc_EffectiveDamage_NewDamage_5;
	Parms.CallFunc_CriticalHit_NewDamage_4 = CallFunc_CriticalHit_NewDamage_4;
	Parms.CallFunc_CriticalHit_NewDamage_5 = CallFunc_CriticalHit_NewDamage_5;
	Parms.K2Node_CustomEvent_DamagedActor_1 = K2Node_CustomEvent_DamagedActor_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_EffectiveDamage_NewDamage_6 = CallFunc_EffectiveDamage_NewDamage_6;
	Parms.CallFunc_CriticalHit_NewDamage_6 = CallFunc_CriticalHit_NewDamage_6;
	Parms.CallFunc_ApplyDamage_ReturnValue_1 = CallFunc_ApplyDamage_ReturnValue_1;
	Parms.CallFunc_ApplyDamage_ReturnValue_2 = CallFunc_ApplyDamage_ReturnValue_2;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_ApplyDamage_ReturnValue_3 = CallFunc_ApplyDamage_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_EffectiveDamage_NewDamage_7 = CallFunc_EffectiveDamage_NewDamage_7;
	Parms.CallFunc_ApplyDamage_ReturnValue_4 = CallFunc_ApplyDamage_ReturnValue_4;
	Parms.CallFunc_CriticalHit_NewDamage_7 = CallFunc_CriticalHit_NewDamage_7;
	Parms.CallFunc_ApplyDamage_ReturnValue_5 = CallFunc_ApplyDamage_ReturnValue_5;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast = CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast = CallFunc_ApplyDamage_BaseDamage_ImplicitCast;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast_1 = CallFunc_ApplyDamage_BaseDamage_ImplicitCast_1;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast_2 = CallFunc_ApplyDamage_BaseDamage_ImplicitCast_2;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast_3 = CallFunc_ApplyDamage_BaseDamage_ImplicitCast_3;
	Parms.CallFunc_Client_HitUI_Damage_ImplicitCast = CallFunc_Client_HitUI_Damage_ImplicitCast;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast_4 = CallFunc_ApplyDamage_BaseDamage_ImplicitCast_4;
	Parms.CallFunc_Client_HitUI_Damage_ImplicitCast_1 = CallFunc_Client_HitUI_Damage_ImplicitCast_1;
	Parms.CallFunc_Client_HitUI_Damage_ImplicitCast_2 = CallFunc_Client_HitUI_Damage_ImplicitCast_2;
	Parms.CallFunc_Client_HitUI_Damage_ImplicitCast_3 = CallFunc_Client_HitUI_Damage_ImplicitCast_3;
	Parms.CallFunc_Client_HitUI_Damage_ImplicitCast_4 = CallFunc_Client_HitUI_Damage_ImplicitCast_4;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast_5 = CallFunc_ApplyDamage_BaseDamage_ImplicitCast_5;
	Parms.CallFunc_Client_HitUI_Damage_ImplicitCast_5 = CallFunc_Client_HitUI_Damage_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


