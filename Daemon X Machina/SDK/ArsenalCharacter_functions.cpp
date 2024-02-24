#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalCharacter.ArsenalCharacter_C
// (Actor, Pawn)

class UClass* AArsenalCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalCharacter_C");

	return Clss;
}


// ArsenalCharacter_C ArsenalCharacter.Default__ArsenalCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArsenalCharacter_C* AArsenalCharacter_C::GetDefaultObj()
{
	static class AArsenalCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArsenalCharacter_C*>(AArsenalCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalCharacter.ArsenalCharacter_C.CaptureWeapon_CancelForCharacter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenal_AnimBP_C*           K2Node_DynamicCast_AsArsenal_Anim_BP                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CaptureWeapon_CancelForCharacter_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AArsenalCharacter_C::CaptureWeapon_CancelForCharacter(bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CaptureWeapon_CancelForCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "CaptureWeapon_CancelForCharacter");

	Params::AArsenalCharacter_C_CaptureWeapon_CancelForCharacter_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Anim_BP = K2Node_DynamicCast_AsArsenal_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CaptureWeapon_CancelForCharacter_ReturnValue = CallFunc_CaptureWeapon_CancelForCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetPartsListID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AArsenalCharacter_C::GetPartsListID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetPartsListID");

	Params::AArsenalCharacter_C_GetPartsListID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetArsenalPaintInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTTLArsenalPaintInfo        PaintInfo                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::GetArsenalPaintInfo(struct FTTLArsenalPaintInfo* PaintInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetArsenalPaintInfo");

	Params::AArsenalCharacter_C_GetArsenalPaintInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PaintInfo != nullptr)
		*PaintInfo = std::move(Parms.PaintInfo);

}


// Function ArsenalCharacter.ArsenalCharacter_C.PurgeCaptureWeaponMain
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLArsenalCloseRangeAttackTypeAttackType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBrokenWeapon_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentRightCaughtWeapon_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBrokenWeapon_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::PurgeCaptureWeaponMain(enum class ETTLArsenalCloseRangeAttackType AttackType, class ATTLWeaponBase* CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsBrokenWeapon_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class ATTLWeaponBase* CallFunc_GetCurrentRightCaughtWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsBrokenWeapon_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "PurgeCaptureWeaponMain");

	Params::AArsenalCharacter_C_PurgeCaptureWeaponMain_Params Parms{};

	Parms.AttackType = AttackType;
	Parms.CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue = CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsBrokenWeapon_ReturnValue = CallFunc_IsBrokenWeapon_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_GetCurrentRightCaughtWeapon_ReturnValue = CallFunc_GetCurrentRightCaughtWeapon_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsBrokenWeapon_ReturnValue1 = CallFunc_IsBrokenWeapon_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SettingInBaseCampEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArsenalParticleArmorComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInBaseCamp_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SettingInBaseCampEvent(class UArsenalParticleArmorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInBaseCamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SettingInBaseCampEvent");

	Params::AArsenalCharacter_C_SettingInBaseCampEvent_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInBaseCamp_ReturnValue = CallFunc_IsInBaseCamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetRightArmMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* AArsenalCharacter_C::GetRightArmMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetRightArmMesh");

	Params::AArsenalCharacter_C_GetRightArmMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetLeftArmMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* AArsenalCharacter_C::GetLeftArmMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetLeftArmMesh");

	Params::AArsenalCharacter_C_GetLeftArmMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetSkillListFromNPCMetaID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetSkillListFromNPCMetaID_List                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetSkillListFromNPCMetaID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SetSkillListFromNPCMetaID(bool CallFunc_IsPlayerControlled_ReturnValue, TArray<class FName>& CallFunc_GetSkillListFromNPCMetaID_List, int32 CallFunc_GetSkillListFromNPCMetaID_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetSkillListFromNPCMetaID");

	Params::AArsenalCharacter_C_SetSkillListFromNPCMetaID_Params Parms{};

	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_GetSkillListFromNPCMetaID_List = CallFunc_GetSkillListFromNPCMetaID_List;
	Parms.CallFunc_GetSkillListFromNPCMetaID_ReturnValue = CallFunc_GetSkillListFromNPCMetaID_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetupGetOnArsenalCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SetupGetOnArsenalCharacter(class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetupGetOnArsenalCharacter");

	Params::AArsenalCharacter_C_SetupGetOnArsenalCharacter_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetHUDComponentTickEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SetHUDComponentTickEnabled(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetHUDComponentTickEnabled");

	Params::AArsenalCharacter_C_SetHUDComponentTickEnabled_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.ResetArsenalParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLPlayerAssembleInfo      AssembleInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AArsenalCharacter_C::ResetArsenalParts(const struct FTTLPlayerAssembleInfo& AssembleInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "ResetArsenalParts");

	Params::AArsenalCharacter_C_ResetArsenalParts_Params Parms{};

	Parms.AssembleInfo = AssembleInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetupInnerOuterCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOuterInArsenalCharacter_C*  SpawnedOuterInArsenal                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSpawnInnerOuter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterInArsenalCharacter_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetOuterIDFromNPCID_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetOuterClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterInArsenalCharacter_C*  CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsOuter_Character                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SetupInnerOuterCharacter(class AOuterInArsenalCharacter_C* SpawnedOuterInArsenal, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_CanSpawnInnerOuter_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class AOuterInArsenalCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, class FName CallFunc_GetOuterIDFromNPCID_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class UClass* CallFunc_GetOuterClass_ReturnValue, class AOuterInArsenalCharacter_C* CallFunc_FinishSpawningActor_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsOuter_Character, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetupInnerOuterCharacter");

	Params::AArsenalCharacter_C_SetupInnerOuterCharacter_Params Parms{};

	Parms.SpawnedOuterInArsenal = SpawnedOuterInArsenal;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_CanSpawnInnerOuter_ReturnValue = CallFunc_CanSpawnInnerOuter_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetOuterIDFromNPCID_ReturnValue = CallFunc_GetOuterIDFromNPCID_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_GetOuterClass_ReturnValue = CallFunc_GetOuterClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.K2Node_ClassDynamicCast_AsOuter_Character = K2Node_ClassDynamicCast_AsOuter_Character;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetupCurrentWeaponForNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLWeaponBase*              CallFunc_GetCurrentSupportWeapon_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentShoulderWeapon_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CallFunc_GetCurrentRightWeapon_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentLeftWeapon_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SetupCurrentWeaponForNPC(class ATTLWeaponBase* CallFunc_GetCurrentSupportWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ATTLWeaponBase* CallFunc_GetCurrentShoulderWeapon_ReturnValue, class ATTLWeaponBase* CallFunc_GetCurrentRightWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class ATTLWeaponBase* CallFunc_GetCurrentLeftWeapon_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetupCurrentWeaponForNPC");

	Params::AArsenalCharacter_C_SetupCurrentWeaponForNPC_Params Parms{};

	Parms.CallFunc_GetCurrentSupportWeapon_ReturnValue = CallFunc_GetCurrentSupportWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentShoulderWeapon_ReturnValue = CallFunc_GetCurrentShoulderWeapon_ReturnValue;
	Parms.CallFunc_GetCurrentRightWeapon_ReturnValue = CallFunc_GetCurrentRightWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetCurrentLeftWeapon_ReturnValue = CallFunc_GetCurrentLeftWeapon_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetupWeaponRack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLWeaponBase*              CallFunc_PickFromWeaponRack_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_FindWeaponClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_FindWeaponClass_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_PickFromWeaponRack_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SetupWeaponRack(class ATTLWeaponBase* CallFunc_PickFromWeaponRack_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_FindWeaponClass_ReturnValue, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue, class UClass* CallFunc_FindWeaponClass_ReturnValue1, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class ATTLWeaponBase* CallFunc_PickFromWeaponRack_ReturnValue1, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetupWeaponRack");

	Params::AArsenalCharacter_C_SetupWeaponRack_Params Parms{};

	Parms.CallFunc_PickFromWeaponRack_ReturnValue = CallFunc_PickFromWeaponRack_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindWeaponClass_ReturnValue = CallFunc_FindWeaponClass_ReturnValue;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue = CallFunc_SpawnCharacterWeapon_ReturnValue;
	Parms.CallFunc_FindWeaponClass_ReturnValue1 = CallFunc_FindWeaponClass_ReturnValue1;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue1 = CallFunc_SpawnCharacterWeapon_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_PickFromWeaponRack_ReturnValue1 = CallFunc_PickFromWeaponRack_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.InitializePartsList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLArsenalPartsInfoList    CallFunc_InitializeNonPlayerPartsList_partsList                  (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::InitializePartsList(const struct FTTLArsenalPartsInfoList& CallFunc_InitializeNonPlayerPartsList_partsList, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "InitializePartsList");

	Params::AArsenalCharacter_C_InitializePartsList_Params Parms{};

	Parms.CallFunc_InitializeNonPlayerPartsList_partsList = CallFunc_InitializeNonPlayerPartsList_partsList;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetWeaponRackVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::SetWeaponRackVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetWeaponRackVisibility");

	Params::AArsenalCharacter_C_SetWeaponRackVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.CaptureWeapon_Start
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       WeaponPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenal_AnimBP_C*           K2Node_DynamicCast_AsArsenal_Anim_BP                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLanded_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::CaptureWeapon_Start(class APawn* WeaponPawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsLanded_ReturnValue, bool CallFunc_IsValid_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "CaptureWeapon_Start");

	Params::AArsenalCharacter_C_CaptureWeapon_Start_Params Parms{};

	Parms.WeaponPawn = WeaponPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Anim_BP = K2Node_DynamicCast_AsArsenal_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsLanded_ReturnValue = CallFunc_IsLanded_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.CaptureWeapon_IsGrabControl
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AArsenalCharacter_C::CaptureWeapon_IsGrabControl(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "CaptureWeapon_IsGrabControl");

	Params::AArsenalCharacter_C_CaptureWeapon_IsGrabControl_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCharacter.ArsenalCharacter_C.InitializeArsenalSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipVP                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::InitializeArsenalSkill(bool SkipVP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "InitializeArsenalSkill");

	Params::AArsenalCharacter_C_InitializeArsenalSkill_Params Parms{};

	Parms.SkipVP = SkipVP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetWeaponParameter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLWeaponParamBaseRow      Param                                                            (Parm, OutParm)
// class FName                        RackWeaponID                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_CloseRangeParamToBaseParam_result                       (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue       (None)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow1                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_LongRangeParamToBaseParam_result                        (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue1      (None)
// struct FTTLMissileWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow2                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow3                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_CloseRangeParamToBaseParam_result1                      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_MissileParamToBaseParam_result                          (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue2      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue3      (None)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow4                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_CloseRangeParamToBaseParam_result2                      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue4      (None)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow5                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_LongRangeParamToBaseParam_result1                       (None)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow6                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue5      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_LongRangeParamToBaseParam_result2                       (None)
// class FName                        CallFunc_GetRightWeaponRackIDandAttachment_weaponID              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRightWeaponRackIDandAttachment_Attachment1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRightWeaponRackIDandAttachment_Attachment2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRightWeaponRackIDandAttachment_Attachment3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue6      (None)
// class FName                        CallFunc_GetLeftWeaponRackIDandAttachment_weaponID               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLeftWeaponRackIDandAttachment_Attachment1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLeftWeaponRackIDandAttachment_Attachment2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLeftWeaponRackIDandAttachment_Attachment3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow7                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_CloseRangeParamToBaseParam_result3                      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue7      (None)
// struct FTTLSupportWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow8                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow9                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow10                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue10                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_LongRangeParamToBaseParam_result3                       (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CloseRangeParamToBaseParam_result4                      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue8      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue9      (None)
// struct FTTLWeaponParamBaseRow      CallFunc_SupportWeaponParamToBaseParam_result                    (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue10     (None)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow11                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue11                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_CloseRangeParamToBaseParam_result5                      (None)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow12                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue12                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue11     (None)
// struct FTTLWeaponParamBaseRow      CallFunc_LongRangeParamToBaseParam_result4                       (None)
// struct FTTLWeaponParamBaseRow      CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue12     (None)

void AArsenalCharacter_C::GetWeaponParameter(int32 Position, struct FTTLWeaponParamBaseRow* Param, class FName RackWeaponID, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue1, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result1, const struct FTTLWeaponParamBaseRow& CallFunc_MissileParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue2, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow4, bool CallFunc_GetDataTableRowFromName_ReturnValue4, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result2, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue4, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow5, bool CallFunc_GetDataTableRowFromName_ReturnValue5, bool CallFunc_IsValid_ReturnValue5, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result1, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow6, bool CallFunc_GetDataTableRowFromName_ReturnValue6, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue5, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result2, class FName CallFunc_GetRightWeaponRackIDandAttachment_weaponID, class FName CallFunc_GetRightWeaponRackIDandAttachment_Attachment1, class FName CallFunc_GetRightWeaponRackIDandAttachment_Attachment2, class FName CallFunc_GetRightWeaponRackIDandAttachment_Attachment3, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue6, class FName CallFunc_GetLeftWeaponRackIDandAttachment_weaponID, class FName CallFunc_GetLeftWeaponRackIDandAttachment_Attachment1, class FName CallFunc_GetLeftWeaponRackIDandAttachment_Attachment2, class FName CallFunc_GetLeftWeaponRackIDandAttachment_Attachment3, bool CallFunc_IsValid_ReturnValue6, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow7, bool CallFunc_GetDataTableRowFromName_ReturnValue7, bool CallFunc_IsValid_ReturnValue7, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result3, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue7, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow8, bool CallFunc_GetDataTableRowFromName_ReturnValue8, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow9, bool CallFunc_GetDataTableRowFromName_ReturnValue9, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow10, bool CallFunc_GetDataTableRowFromName_ReturnValue10, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result3, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result4, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue8, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue9, const struct FTTLWeaponParamBaseRow& CallFunc_SupportWeaponParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue10, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow11, bool CallFunc_GetDataTableRowFromName_ReturnValue11, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result5, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow12, bool CallFunc_GetDataTableRowFromName_ReturnValue12, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue11, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result4, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetWeaponParameter");

	Params::AArsenalCharacter_C_GetWeaponParameter_Params Parms{};

	Parms.Position = Position;
	Parms.RackWeaponID = RackWeaponID;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_CloseRangeParamToBaseParam_result = CallFunc_CloseRangeParamToBaseParam_result;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow1 = CallFunc_GetDataTableRowFromName_OutRow1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue1 = CallFunc_GetDataTableRowFromName_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_LongRangeParamToBaseParam_result = CallFunc_LongRangeParamToBaseParam_result;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue1 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow2 = CallFunc_GetDataTableRowFromName_OutRow2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue2 = CallFunc_GetDataTableRowFromName_ReturnValue2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow3 = CallFunc_GetDataTableRowFromName_OutRow3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue3 = CallFunc_GetDataTableRowFromName_ReturnValue3;
	Parms.CallFunc_CloseRangeParamToBaseParam_result1 = CallFunc_CloseRangeParamToBaseParam_result1;
	Parms.CallFunc_MissileParamToBaseParam_result = CallFunc_MissileParamToBaseParam_result;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue2 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue2;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue3 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow4 = CallFunc_GetDataTableRowFromName_OutRow4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue4 = CallFunc_GetDataTableRowFromName_ReturnValue4;
	Parms.CallFunc_CloseRangeParamToBaseParam_result2 = CallFunc_CloseRangeParamToBaseParam_result2;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue4 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow5 = CallFunc_GetDataTableRowFromName_OutRow5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue5 = CallFunc_GetDataTableRowFromName_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_LongRangeParamToBaseParam_result1 = CallFunc_LongRangeParamToBaseParam_result1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow6 = CallFunc_GetDataTableRowFromName_OutRow6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue6 = CallFunc_GetDataTableRowFromName_ReturnValue6;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue5 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue5;
	Parms.CallFunc_LongRangeParamToBaseParam_result2 = CallFunc_LongRangeParamToBaseParam_result2;
	Parms.CallFunc_GetRightWeaponRackIDandAttachment_weaponID = CallFunc_GetRightWeaponRackIDandAttachment_weaponID;
	Parms.CallFunc_GetRightWeaponRackIDandAttachment_Attachment1 = CallFunc_GetRightWeaponRackIDandAttachment_Attachment1;
	Parms.CallFunc_GetRightWeaponRackIDandAttachment_Attachment2 = CallFunc_GetRightWeaponRackIDandAttachment_Attachment2;
	Parms.CallFunc_GetRightWeaponRackIDandAttachment_Attachment3 = CallFunc_GetRightWeaponRackIDandAttachment_Attachment3;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue6 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue6;
	Parms.CallFunc_GetLeftWeaponRackIDandAttachment_weaponID = CallFunc_GetLeftWeaponRackIDandAttachment_weaponID;
	Parms.CallFunc_GetLeftWeaponRackIDandAttachment_Attachment1 = CallFunc_GetLeftWeaponRackIDandAttachment_Attachment1;
	Parms.CallFunc_GetLeftWeaponRackIDandAttachment_Attachment2 = CallFunc_GetLeftWeaponRackIDandAttachment_Attachment2;
	Parms.CallFunc_GetLeftWeaponRackIDandAttachment_Attachment3 = CallFunc_GetLeftWeaponRackIDandAttachment_Attachment3;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow7 = CallFunc_GetDataTableRowFromName_OutRow7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue7 = CallFunc_GetDataTableRowFromName_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_CloseRangeParamToBaseParam_result3 = CallFunc_CloseRangeParamToBaseParam_result3;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue7 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow8 = CallFunc_GetDataTableRowFromName_OutRow8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue8 = CallFunc_GetDataTableRowFromName_ReturnValue8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow9 = CallFunc_GetDataTableRowFromName_OutRow9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue9 = CallFunc_GetDataTableRowFromName_ReturnValue9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow10 = CallFunc_GetDataTableRowFromName_OutRow10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue10 = CallFunc_GetDataTableRowFromName_ReturnValue10;
	Parms.CallFunc_LongRangeParamToBaseParam_result3 = CallFunc_LongRangeParamToBaseParam_result3;
	Parms.CallFunc_CloseRangeParamToBaseParam_result4 = CallFunc_CloseRangeParamToBaseParam_result4;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue8 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue8;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue9 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue9;
	Parms.CallFunc_SupportWeaponParamToBaseParam_result = CallFunc_SupportWeaponParamToBaseParam_result;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue10 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue10;
	Parms.CallFunc_GetDataTableRowFromName_OutRow11 = CallFunc_GetDataTableRowFromName_OutRow11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue11 = CallFunc_GetDataTableRowFromName_ReturnValue11;
	Parms.CallFunc_CloseRangeParamToBaseParam_result5 = CallFunc_CloseRangeParamToBaseParam_result5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow12 = CallFunc_GetDataTableRowFromName_OutRow12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue12 = CallFunc_GetDataTableRowFromName_ReturnValue12;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue11 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue11;
	Parms.CallFunc_LongRangeParamToBaseParam_result4 = CallFunc_LongRangeParamToBaseParam_result4;
	Parms.CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue12 = CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function ArsenalCharacter.ArsenalCharacter_C.CalcArsenalParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChaseAutoRunComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLWeaponParamBaseRow      CallFunc_GetWeaponParameter_Param                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamBaseRow      CallFunc_GetWeaponParameter_Param1                               (None)
// struct FTTLWeaponParamBaseRow      CallFunc_GetWeaponParameter_Param2                               (None)
// struct FTTLWeaponParamBaseRow      CallFunc_GetWeaponParameter_Param3                               (None)
// struct FTTLWeaponParamBaseRow      CallFunc_GetWeaponParameter_Param4                               (None)
// struct FTTLWeaponParamBaseRow      CallFunc_GetWeaponParameter_Param5                               (None)
// struct FTTLPartsArmRightParamRow   CallFunc_CalcArmRightParameterWithAttachment_outParameter        (None)
// bool                               CallFunc_CalcArmRightParameterWithAttachment_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsArmLeftParamRow    CallFunc_CalcArmLeftParameterWithAttachment_outParameter         (None)
// bool                               CallFunc_CalcArmLeftParameterWithAttachment_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsLegsParamRow       CallFunc_CalcLegsParameterWithAttachment_outParameter            (None)
// bool                               CallFunc_CalcLegsParameterWithAttachment_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsInsideParamRow     CallFunc_CalcInsideParameterWithAttachment_outParameter          (None)
// bool                               CallFunc_CalcInsideParameterWithAttachment_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsBodyParamRow       CallFunc_CalcBodyParameterWithAttachment_outParameter            (None)
// bool                               CallFunc_CalcBodyParameterWithAttachment_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsHeadParamRow       CallFunc_CalcHeadParameterWithAttachment_outParameter            (None)
// bool                               CallFunc_CalcHeadParameterWithAttachment_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalParam         CallFunc_CalcArsenalTotalParam_TotalParam                        (None)
// class UTTLBasicStatusComponent*    CallFunc_CalcBasicStatus_BasicStatus                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::CalcArsenalParameter(class UChaseAutoRunComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param, bool CallFunc_IsValid_ReturnValue, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param1, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param2, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param3, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param4, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param5, const struct FTTLPartsArmRightParamRow& CallFunc_CalcArmRightParameterWithAttachment_outParameter, bool CallFunc_CalcArmRightParameterWithAttachment_ReturnValue, const struct FTTLPartsArmLeftParamRow& CallFunc_CalcArmLeftParameterWithAttachment_outParameter, bool CallFunc_CalcArmLeftParameterWithAttachment_ReturnValue, const struct FTTLPartsLegsParamRow& CallFunc_CalcLegsParameterWithAttachment_outParameter, bool CallFunc_CalcLegsParameterWithAttachment_ReturnValue, const struct FTTLPartsInsideParamRow& CallFunc_CalcInsideParameterWithAttachment_outParameter, bool CallFunc_CalcInsideParameterWithAttachment_ReturnValue, const struct FTTLPartsBodyParamRow& CallFunc_CalcBodyParameterWithAttachment_outParameter, bool CallFunc_CalcBodyParameterWithAttachment_ReturnValue, const struct FTTLPartsHeadParamRow& CallFunc_CalcHeadParameterWithAttachment_outParameter, bool CallFunc_CalcHeadParameterWithAttachment_ReturnValue, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, const struct FTTLPartsTotalParam& CallFunc_CalcArsenalTotalParam_TotalParam, class UTTLBasicStatusComponent* CallFunc_CalcBasicStatus_BasicStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "CalcArsenalParameter");

	Params::AArsenalCharacter_C_CalcArsenalParameter_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetWeaponParameter_Param = CallFunc_GetWeaponParameter_Param;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeaponParameter_Param1 = CallFunc_GetWeaponParameter_Param1;
	Parms.CallFunc_GetWeaponParameter_Param2 = CallFunc_GetWeaponParameter_Param2;
	Parms.CallFunc_GetWeaponParameter_Param3 = CallFunc_GetWeaponParameter_Param3;
	Parms.CallFunc_GetWeaponParameter_Param4 = CallFunc_GetWeaponParameter_Param4;
	Parms.CallFunc_GetWeaponParameter_Param5 = CallFunc_GetWeaponParameter_Param5;
	Parms.CallFunc_CalcArmRightParameterWithAttachment_outParameter = CallFunc_CalcArmRightParameterWithAttachment_outParameter;
	Parms.CallFunc_CalcArmRightParameterWithAttachment_ReturnValue = CallFunc_CalcArmRightParameterWithAttachment_ReturnValue;
	Parms.CallFunc_CalcArmLeftParameterWithAttachment_outParameter = CallFunc_CalcArmLeftParameterWithAttachment_outParameter;
	Parms.CallFunc_CalcArmLeftParameterWithAttachment_ReturnValue = CallFunc_CalcArmLeftParameterWithAttachment_ReturnValue;
	Parms.CallFunc_CalcLegsParameterWithAttachment_outParameter = CallFunc_CalcLegsParameterWithAttachment_outParameter;
	Parms.CallFunc_CalcLegsParameterWithAttachment_ReturnValue = CallFunc_CalcLegsParameterWithAttachment_ReturnValue;
	Parms.CallFunc_CalcInsideParameterWithAttachment_outParameter = CallFunc_CalcInsideParameterWithAttachment_outParameter;
	Parms.CallFunc_CalcInsideParameterWithAttachment_ReturnValue = CallFunc_CalcInsideParameterWithAttachment_ReturnValue;
	Parms.CallFunc_CalcBodyParameterWithAttachment_outParameter = CallFunc_CalcBodyParameterWithAttachment_outParameter;
	Parms.CallFunc_CalcBodyParameterWithAttachment_ReturnValue = CallFunc_CalcBodyParameterWithAttachment_ReturnValue;
	Parms.CallFunc_CalcHeadParameterWithAttachment_outParameter = CallFunc_CalcHeadParameterWithAttachment_outParameter;
	Parms.CallFunc_CalcHeadParameterWithAttachment_ReturnValue = CallFunc_CalcHeadParameterWithAttachment_ReturnValue;
	Parms.CallFunc_GetGameInstance_Result = CallFunc_GetGameInstance_Result;
	Parms.CallFunc_CalcArsenalTotalParam_TotalParam = CallFunc_CalcArsenalTotalParam_TotalParam;
	Parms.CallFunc_CalcBasicStatus_BasicStatus = CallFunc_CalcBasicStatus_BasicStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.CreateWeaponClassFromPartsInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow1                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLShoulder_Weapon_Base                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLMissileWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow2                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLSupportWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow3                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLShoulder_Missile_Pot                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow4                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow5                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLWeapon_Shield                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow6                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow7                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLWeapon_Shield1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow8                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess10                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::CreateWeaponClassFromPartsInfo(const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsTTLShoulder_Weapon_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base, bool K2Node_ClassDynamicCast_bSuccess1, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3, class UClass* K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base1, bool K2Node_ClassDynamicCast_bSuccess2, class UClass* K2Node_ClassDynamicCast_AsTTLShoulder_Missile_Pot, bool K2Node_ClassDynamicCast_bSuccess3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow4, bool CallFunc_GetDataTableRowFromName_ReturnValue4, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow5, bool CallFunc_GetDataTableRowFromName_ReturnValue5, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue4, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue5, class UClass* K2Node_ClassDynamicCast_AsTTLWeapon_Shield, bool K2Node_ClassDynamicCast_bSuccess4, class UClass* K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common, bool K2Node_ClassDynamicCast_bSuccess5, class UClass* K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common, bool K2Node_ClassDynamicCast_bSuccess6, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow6, bool CallFunc_GetDataTableRowFromName_ReturnValue6, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow7, bool CallFunc_GetDataTableRowFromName_ReturnValue7, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue6, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue7, class UClass* K2Node_ClassDynamicCast_AsTTLWeapon_Shield1, bool K2Node_ClassDynamicCast_bSuccess7, class UClass* K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common1, bool K2Node_ClassDynamicCast_bSuccess8, class UClass* K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common1, bool K2Node_ClassDynamicCast_bSuccess9, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow8, bool CallFunc_GetDataTableRowFromName_ReturnValue8, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue8, class UClass* K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common2, bool K2Node_ClassDynamicCast_bSuccess10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "CreateWeaponClassFromPartsInfo");

	Params::AArsenalCharacter_C_CreateWeaponClassFromPartsInfo_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow1 = CallFunc_GetDataTableRowFromName_OutRow1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue1 = CallFunc_GetDataTableRowFromName_ReturnValue1;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1;
	Parms.K2Node_ClassDynamicCast_AsTTLShoulder_Weapon_Base = K2Node_ClassDynamicCast_AsTTLShoulder_Weapon_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base = K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess1 = K2Node_ClassDynamicCast_bSuccess1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow2 = CallFunc_GetDataTableRowFromName_OutRow2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue2 = CallFunc_GetDataTableRowFromName_ReturnValue2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow3 = CallFunc_GetDataTableRowFromName_OutRow3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue3 = CallFunc_GetDataTableRowFromName_ReturnValue3;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3;
	Parms.K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base1 = K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base1;
	Parms.K2Node_ClassDynamicCast_bSuccess2 = K2Node_ClassDynamicCast_bSuccess2;
	Parms.K2Node_ClassDynamicCast_AsTTLShoulder_Missile_Pot = K2Node_ClassDynamicCast_AsTTLShoulder_Missile_Pot;
	Parms.K2Node_ClassDynamicCast_bSuccess3 = K2Node_ClassDynamicCast_bSuccess3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow4 = CallFunc_GetDataTableRowFromName_OutRow4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue4 = CallFunc_GetDataTableRowFromName_ReturnValue4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow5 = CallFunc_GetDataTableRowFromName_OutRow5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue5 = CallFunc_GetDataTableRowFromName_ReturnValue5;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue4 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue4;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue5 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue5;
	Parms.K2Node_ClassDynamicCast_AsTTLWeapon_Shield = K2Node_ClassDynamicCast_AsTTLWeapon_Shield;
	Parms.K2Node_ClassDynamicCast_bSuccess4 = K2Node_ClassDynamicCast_bSuccess4;
	Parms.K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common = K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common;
	Parms.K2Node_ClassDynamicCast_bSuccess5 = K2Node_ClassDynamicCast_bSuccess5;
	Parms.K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common = K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common;
	Parms.K2Node_ClassDynamicCast_bSuccess6 = K2Node_ClassDynamicCast_bSuccess6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow6 = CallFunc_GetDataTableRowFromName_OutRow6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue6 = CallFunc_GetDataTableRowFromName_ReturnValue6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow7 = CallFunc_GetDataTableRowFromName_OutRow7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue7 = CallFunc_GetDataTableRowFromName_ReturnValue7;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue6 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue6;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue7 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue7;
	Parms.K2Node_ClassDynamicCast_AsTTLWeapon_Shield1 = K2Node_ClassDynamicCast_AsTTLWeapon_Shield1;
	Parms.K2Node_ClassDynamicCast_bSuccess7 = K2Node_ClassDynamicCast_bSuccess7;
	Parms.K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common1 = K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common1;
	Parms.K2Node_ClassDynamicCast_bSuccess8 = K2Node_ClassDynamicCast_bSuccess8;
	Parms.K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common1 = K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common1;
	Parms.K2Node_ClassDynamicCast_bSuccess9 = K2Node_ClassDynamicCast_bSuccess9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow8 = CallFunc_GetDataTableRowFromName_OutRow8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue8 = CallFunc_GetDataTableRowFromName_ReturnValue8;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue8 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue8;
	Parms.K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common2 = K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common2;
	Parms.K2Node_ClassDynamicCast_bSuccess10 = K2Node_ClassDynamicCast_bSuccess10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.CreatePartsFromPartsInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CreatPartsResult                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsPaintInfo   K2Node_MakeStruct_TTLArsenalPartsPaintInfo                       (NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::CreatePartsFromPartsInfo(bool CreatPartsResult, bool CallFunc_IsValid_ReturnValue, const struct FTTLArsenalPartsPaintInfo& K2Node_MakeStruct_TTLArsenalPartsPaintInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "CreatePartsFromPartsInfo");

	Params::AArsenalCharacter_C_CreatePartsFromPartsInfo_Params Parms{};

	Parms.CreatPartsResult = CreatPartsResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_TTLArsenalPartsPaintInfo = K2Node_MakeStruct_TTLArsenalPartsPaintInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetMeshForShoulderWeaponLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::GetMeshForShoulderWeaponLeft(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetMeshForShoulderWeaponLeft");

	Params::AArsenalCharacter_C_GetMeshForShoulderWeaponLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetMeshForWeaponRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::GetMeshForWeaponRight(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetMeshForWeaponRight");

	Params::AArsenalCharacter_C_GetMeshForWeaponRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function ArsenalCharacter.ArsenalCharacter_C.GetMeshForWeaponLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::GetMeshForWeaponLeft(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "GetMeshForWeaponLeft");

	Params::AArsenalCharacter_C_GetMeshForWeaponLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function ArsenalCharacter.ArsenalCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "UserConstructionScript");

	Params::AArsenalCharacter_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.MulticastArsenalPreGetOn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalController_C*        SrcController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OuterCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         OldArsenal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::MulticastArsenalPreGetOn(class AArsenalController_C* SrcController, class ABaseCharacter_C* OuterCharacter, class ATTLCharacterCommon* OldArsenal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "MulticastArsenalPreGetOn");

	Params::AArsenalCharacter_C_MulticastArsenalPreGetOn_Params Parms{};

	Parms.SrcController = SrcController;
	Parms.OuterCharacter = OuterCharacter;
	Parms.OldArsenal = OldArsenal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnEndOuterGetOnMotion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OuterCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::OnEndOuterGetOnMotion(class AActor* OuterCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnEndOuterGetOnMotion");

	Params::AArsenalCharacter_C_OnEndOuterGetOnMotion_Params Parms{};

	Parms.OuterCharacter = OuterCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnGetOnComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEStatusType         OuterStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalController_C*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           Outer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                OuterSkill                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AArsenalCharacter_C::OnGetOnComplete(enum class ETTLEStatusType OuterStatus, class AArsenalController_C* Target, class AOuterCharacter_C* Outer, TArray<class FName>& OuterSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnGetOnComplete");

	Params::AArsenalCharacter_C_OnGetOnComplete_Params Parms{};

	Parms.OuterStatus = OuterStatus;
	Parms.Target = Target;
	Parms.Outer = Outer;
	Parms.OuterSkill = OuterSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnChangeArsenalCommon
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEStatusType         NewStatusType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AArsenalCharacter_C::OnChangeArsenalCommon(enum class ETTLEStatusType NewStatusType, TArray<class FName>& SkillList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnChangeArsenalCommon");

	Params::AArsenalCharacter_C_OnChangeArsenalCommon_Params Parms{};

	Parms.NewStatusType = NewStatusType;
	Parms.SkillList = SkillList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.UpdateSkillOnGetOn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::UpdateSkillOnGetOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "UpdateSkillOnGetOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.LatentActionAfterGetOnCameraWait
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class ATTLPlayerController*        PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class ETTLEStatusType         OuterStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::LatentActionAfterGetOnCameraWait(class ATTLPlayerController* PlayerController, TArray<class FName>& SkillList, enum class ETTLEStatusType OuterStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "LatentActionAfterGetOnCameraWait");

	Params::AArsenalCharacter_C_LatentActionAfterGetOnCameraWait_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.SkillList = SkillList;
	Parms.OuterStatus = OuterStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.AttachLongRangeWeaponLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::AttachLongRangeWeaponLeft(class USceneComponent* WeaponMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "AttachLongRangeWeaponLeft");

	Params::AArsenalCharacter_C_AttachLongRangeWeaponLeft_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.AttachCloseRangeWeaponLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::AttachCloseRangeWeaponLeft(class USceneComponent* WeaponMesh, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "AttachCloseRangeWeaponLeft");

	Params::AArsenalCharacter_C_AttachCloseRangeWeaponLeft_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.AttachLongRangeWeaponRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::AttachLongRangeWeaponRight(class USceneComponent* WeaponMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "AttachLongRangeWeaponRight");

	Params::AArsenalCharacter_C_AttachLongRangeWeaponRight_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.AttachCloseRangeWeaponRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::AttachCloseRangeWeaponRight(class USceneComponent* WeaponMesh, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "AttachCloseRangeWeaponRight");

	Params::AArsenalCharacter_C_AttachCloseRangeWeaponRight_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnArsenalGetOnCommon
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEStatusType         NewStatusType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangeArsenal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AArsenalCharacter_C::OnArsenalGetOnCommon(enum class ETTLEStatusType NewStatusType, bool IsChangeArsenal, TArray<class FName>& SkillList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnArsenalGetOnCommon");

	Params::AArsenalCharacter_C_OnArsenalGetOnCommon_Params Parms{};

	Parms.NewStatusType = NewStatusType;
	Parms.IsChangeArsenal = IsChangeArsenal;
	Parms.SkillList = SkillList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnArsenalGetOn
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChangeArsenal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class ETTLEStatusType         NewStatusType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::OnArsenalGetOn(bool IsChangeArsenal, TArray<class FName>& SkillList, enum class ETTLEStatusType NewStatusType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnArsenalGetOn");

	Params::AArsenalCharacter_C_OnArsenalGetOn_Params Parms{};

	Parms.IsChangeArsenal = IsChangeArsenal;
	Parms.SkillList = SkillList;
	Parms.NewStatusType = NewStatusType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnStatusDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::OnStatusDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnStatusDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.StartGetOnArsenal
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChangeArsenal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class ETTLEStatusType         NewStatusType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::StartGetOnArsenal(bool IsChangeArsenal, TArray<class FName>& SkillList, enum class ETTLEStatusType NewStatusType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "StartGetOnArsenal");

	Params::AArsenalCharacter_C_StartGetOnArsenal_Params Parms{};

	Parms.IsChangeArsenal = IsChangeArsenal;
	Parms.SkillList = SkillList;
	Parms.NewStatusType = NewStatusType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnBadStatusVFXStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEAbnormalStatusType Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBadStatusVFXComponent*   badStatusComp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHeal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::OnBadStatusVFXStart(enum class ETTLEAbnormalStatusType Type, class UTTLBadStatusVFXComponent* badStatusComp, bool IsHeal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnBadStatusVFXStart");

	Params::AArsenalCharacter_C_OnBadStatusVFXStart_Params Parms{};

	Parms.Type = Type;
	Parms.badStatusComp = badStatusComp;
	Parms.IsHeal = IsHeal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnBadStatusVFXEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEAbnormalStatusType Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBadStatusVFXComponent*   badStatusComp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHeal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::OnBadStatusVFXEnd(enum class ETTLEAbnormalStatusType Type, class UTTLBadStatusVFXComponent* badStatusComp, bool IsHeal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnBadStatusVFXEnd");

	Params::AArsenalCharacter_C_OnBadStatusVFXEnd_Params Parms{};

	Parms.Type = Type;
	Parms.badStatusComp = badStatusComp;
	Parms.IsHeal = IsHeal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetEventFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::SetEventFinish(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetEventFinish");

	Params::AArsenalCharacter_C_SetEventFinish_Params Parms{};

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetEventStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::SetEventStart(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetEventStart");

	Params::AArsenalCharacter_C_SetEventStart_Params Parms{};

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetCameraArray
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::SetCameraArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetCameraArray");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnMulticastStartGetOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::OnMulticastStartGetOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnMulticastStartGetOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.OnSuccessStartCaptureWeaponBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::OnSuccessStartCaptureWeaponBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "OnSuccessStartCaptureWeaponBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.RunOnServerStartGetOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::RunOnServerStartGetOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "RunOnServerStartGetOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.StartOuterGetOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::StartOuterGetOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "StartOuterGetOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetEventResumeGame
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::SetEventResumeGame(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetEventResumeGame");

	Params::AArsenalCharacter_C_SetEventResumeGame_Params Parms{};

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.DebugChangeEquipList
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::DebugChangeEquipList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "DebugChangeEquipList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.PurgeCaptureWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLArsenalCloseRangeAttackTypeAttackType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::PurgeCaptureWeapon(enum class ETTLArsenalCloseRangeAttackType AttackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "PurgeCaptureWeapon");

	Params::AArsenalCharacter_C_PurgeCaptureWeapon_Params Parms{};

	Parms.AttackType = AttackType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.AttachShoulderWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::AttachShoulderWeapon(class ATTLWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "AttachShoulderWeapon");

	Params::AArsenalCharacter_C_AttachShoulderWeapon_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.ResetArsenalPartsBp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLPlayerAssembleInfo      AssembleInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AArsenalCharacter_C::ResetArsenalPartsBp(struct FTTLPlayerAssembleInfo& AssembleInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "ResetArsenalPartsBp");

	Params::AArsenalCharacter_C_ResetArsenalPartsBp_Params Parms{};

	Parms.AssembleInfo = AssembleInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetPaintInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLArsenalPaintInfo        PaintInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::SetPaintInfo(struct FTTLArsenalPaintInfo& PaintInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetPaintInfo");

	Params::AArsenalCharacter_C_SetPaintInfo_Params Parms{};

	Parms.PaintInfo = PaintInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetPartsListIDBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        PartsListID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::SetPartsListIDBP(class FName PartsListID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetPartsListIDBP");

	Params::AArsenalCharacter_C_SetPartsListIDBP_Params Parms{};

	Parms.PartsListID = PartsListID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.InitializeLightingMovement
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::InitializeLightingMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "InitializeLightingMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.InitializeInventory
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::InitializeInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "InitializeInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.InitializeInnerOuter
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::InitializeInnerOuter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "InitializeInnerOuter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.UpdateMaterialMesh
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalCharacter_C::UpdateMaterialMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "UpdateMaterialMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCharacter.ArsenalCharacter_C.InitializeHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               TickEnabled                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalCharacter_C::InitializeHUD(bool TickEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "InitializeHUD");

	Params::AArsenalCharacter_C_InitializeHUD_Params Parms{};

	Parms.TickEnabled = TickEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.InitializeArsenalPaint
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTTLArsenalPaintComponent*   PaintComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::InitializeArsenalPaint(class UTTLArsenalPaintComponent* PaintComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "InitializeArsenalPaint");

	Params::AArsenalCharacter_C_InitializeArsenalPaint_Params Parms{};

	Parms.PaintComponent = PaintComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.CancelCloseRangeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLArsenalCloseRangeAttackTypeAttackType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalCharacter_C::CancelCloseRangeAttack(enum class ETTLArsenalCloseRangeAttackType AttackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "CancelCloseRangeAttack");

	Params::AArsenalCharacter_C_CancelCloseRangeAttack_Params Parms{};

	Parms.AttackType = AttackType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.SetAssembleInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTTLPlayerAssembleInfo      AssembleInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AArsenalCharacter_C::SetAssembleInfo(struct FTTLPlayerAssembleInfo& AssembleInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "SetAssembleInfo");

	Params::AArsenalCharacter_C_SetAssembleInfo_Params Parms{};

	Parms.AssembleInfo = AssembleInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCharacter.ArsenalCharacter_C.ExecuteUbergraph_ArsenalCharacter
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalController_C*        K2Node_CustomEvent_SrcController                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_OuterCharacter1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         K2Node_CustomEvent_OldArsenal                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UPlayerLightningMovement_C*  CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_outerCharacter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalController_C*        K2Node_DynamicCast_AsArsenal_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEStatusType         K2Node_CustomEvent_OuterStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalController_C*        K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_CustomEvent_Outer                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_OuterSkill                                    (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEStatusType         K2Node_CustomEvent_NewStatusType3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_SkillList3                                    (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_ProcessGetOnArsenalCompleted_IsChange                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenal_AnimBP_C*           K2Node_DynamicCast_AsArsenal_Anim_BP                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLPlayerController*        K2Node_Event_playerController                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_Event_skillList                                           (ConstParm, ZeroConstructor, ReferenceParm)
// enum class ETTLEStatusType         K2Node_Event_outerStatus                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckControllerForClientGetonfinish_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalController_C*        K2Node_DynamicCast_AsArsenal_Controller1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessGetOnArsenalCompleted_IsChange1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenal_AnimBP_C*           K2Node_DynamicCast_AsArsenal_Anim_BP1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Event_WeaponMesh3                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Event_WeaponMesh2                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_SocketName1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Event_WeaponMesh1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Event_WeaponMesh                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_SocketName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEStatusType         K2Node_CustomEvent_NewStatusType2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsChangeArsenal2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_CustomEvent_SkillList2                                    (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArsenalMovement_C*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULockonComponent_C*          CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsChangeArsenal1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_CustomEvent_SkillList1                                    (ConstParm, ZeroConstructor, ReferenceParm)
// enum class ETTLEStatusType         K2Node_CustomEvent_NewStatusType1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsChangeArsenal                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_CustomEvent_SkillList                                     (ConstParm, ZeroConstructor, ReferenceParm)
// enum class ETTLEStatusType         K2Node_CustomEvent_NewStatusType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLArsenalDestroyPartsComponent*CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEAbnormalStatusType K2Node_Event_Type1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBadStatusVFXComponent*   K2Node_Event_badStatusComp1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isHeal1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEAbnormalStatusType K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBadStatusVFXComponent*   K2Node_Event_badStatusComp                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isHeal                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_EventName2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_EventName1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartUseCaptureWeaponCPP_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDemoArsenal_AnimBP_C*       K2Node_DynamicCast_AsDemo_Arsenal_Anim_BP                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_EventName                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPlayerAssembleInfo      K2Node_MakeStruct_TTLPlayerAssembleInfo                          (None)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLArsenalCloseRangeAttackTypeK2Node_Event_attackType1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class USkeletalMeshComponent*>CallFunc_GetMovableUnits_MeshList_outArray                       (ZeroConstructor, ReferenceParm)
// struct FTTLPlayerAssembleInfo      K2Node_Event_assembleInfo1                                       (ConstParm)
// struct FTTLArsenalPaintInfo        K2Node_Event_paintInfo                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_partsListID                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetupAndGetRandomPartsID_partsID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetupAndGetRandomPartsID_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_tickEnabled                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLArsenalPaintComponent*   K2Node_Event_paintComponent                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLArsenalCloseRangeAttackTypeK2Node_Event_attackType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPlayerAssembleInfo      K2Node_Event_assembleInfo                                        (ConstParm)

void AArsenalCharacter_C::ExecuteUbergraph_ArsenalCharacter(int32 EntryPoint, class AArsenalController_C* K2Node_CustomEvent_SrcController, class ABaseCharacter_C* K2Node_CustomEvent_OuterCharacter1, class ATTLCharacterCommon* K2Node_CustomEvent_OldArsenal, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, const struct FTransform& Temp_struct_Variable, class UPlayerLightningMovement_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* K2Node_CustomEvent_outerCharacter, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue2, class AController* CallFunc_GetController_ReturnValue, class AArsenalController_C* K2Node_DynamicCast_AsArsenal_Controller, bool K2Node_DynamicCast_bSuccess3, enum class ETTLEStatusType K2Node_CustomEvent_OuterStatus, class AArsenalController_C* K2Node_CustomEvent_Target, class AOuterCharacter_C* K2Node_CustomEvent_Outer, TArray<class FName>& K2Node_CustomEvent_OuterSkill, bool CallFunc_IsValid_ReturnValue3, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType3, TArray<class FName>& K2Node_CustomEvent_SkillList3, bool CallFunc_ProcessGetOnArsenalCompleted_IsChange, bool CallFunc_IsValid_ReturnValue4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class ATTLPlayerController* K2Node_Event_playerController, TArray<class FName>& K2Node_Event_skillList, enum class ETTLEStatusType K2Node_Event_outerStatus, bool CallFunc_IsValid_ReturnValue5, class AController* CallFunc_GetController_ReturnValue1, bool CallFunc_CheckControllerForClientGetonfinish_ReturnValue, class AArsenalController_C* K2Node_DynamicCast_AsArsenal_Controller1, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_ProcessGetOnArsenalCompleted_IsChange1, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsValid_ReturnValue6, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue1, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP1, bool K2Node_DynamicCast_bSuccess6, class USceneComponent* K2Node_Event_WeaponMesh3, class USceneComponent* K2Node_Event_WeaponMesh2, class FName K2Node_Event_SocketName1, class USceneComponent* K2Node_Event_WeaponMesh1, class USceneComponent* K2Node_Event_WeaponMesh, class FName K2Node_Event_SocketName, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType2, bool K2Node_CustomEvent_IsChangeArsenal2, TArray<class FName>& K2Node_CustomEvent_SkillList2, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue2, bool CallFunc_K2_AttachToComponent_ReturnValue3, bool CallFunc_K2_AttachToComponent_ReturnValue4, bool CallFunc_K2_AttachToComponent_ReturnValue5, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue6, bool CallFunc_K2_AttachToComponent_ReturnValue7, bool K2Node_CustomEvent_IsChangeArsenal1, TArray<class FName>& K2Node_CustomEvent_SkillList1, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType1, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_CustomEvent_IsChangeArsenal, TArray<class FName>& K2Node_CustomEvent_SkillList, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType, const struct FVector& CallFunc_MakeVector_ReturnValue, class UTTLArsenalDestroyPartsComponent* CallFunc_GetComponentByClass_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsCompletelyDestroyed_ReturnValue, bool CallFunc_IsCompletelyDestroyed_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool Temp_bool_IsClosed_Variable, enum class ETTLEAbnormalStatusType K2Node_Event_Type1, class UTTLBadStatusVFXComponent* K2Node_Event_badStatusComp1, bool K2Node_Event_isHeal1, enum class ETTLEAbnormalStatusType K2Node_Event_Type, class UTTLBadStatusVFXComponent* K2Node_Event_badStatusComp, bool K2Node_Event_isHeal, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsVisible_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, class FName K2Node_Event_EventName2, class FName K2Node_Event_EventName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_AddUnique_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_StartUseCaptureWeaponCPP_ReturnValue, bool CallFunc_IsValid_ReturnValue7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue2, class UDemoArsenal_AnimBP_C* K2Node_DynamicCast_AsDemo_Arsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsValid_ReturnValue8, class FName K2Node_Event_EventName, const struct FTTLPlayerAssembleInfo& K2Node_MakeStruct_TTLPlayerAssembleInfo, bool CallFunc_IsCompletelyDestroyed_ReturnValue2, bool CallFunc_IsCompletelyDestroyed_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, enum class ETTLArsenalCloseRangeAttackType K2Node_Event_attackType1, class ATTLWeaponBase* K2Node_Event_Weapon, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, TArray<class USkeletalMeshComponent*>& CallFunc_GetMovableUnits_MeshList_outArray, const struct FTTLPlayerAssembleInfo& K2Node_Event_assembleInfo1, const struct FTTLArsenalPaintInfo& K2Node_Event_paintInfo, class FName K2Node_Event_partsListID, class FName CallFunc_SetupAndGetRandomPartsID_partsID, bool CallFunc_SetupAndGetRandomPartsID_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_tickEnabled, class UTTLArsenalPaintComponent* K2Node_Event_paintComponent, enum class ETTLArsenalCloseRangeAttackType K2Node_Event_attackType, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsValid_ReturnValue9, int32 CallFunc_Array_AddUnique_ReturnValue1, const struct FTTLPlayerAssembleInfo& K2Node_Event_assembleInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCharacter_C", "ExecuteUbergraph_ArsenalCharacter");

	Params::AArsenalCharacter_C_ExecuteUbergraph_ArsenalCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SrcController = K2Node_CustomEvent_SrcController;
	Parms.K2Node_CustomEvent_OuterCharacter1 = K2Node_CustomEvent_OuterCharacter1;
	Parms.K2Node_CustomEvent_OldArsenal = K2Node_CustomEvent_OldArsenal;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_CustomEvent_outerCharacter = K2Node_CustomEvent_outerCharacter;
	Parms.K2Node_DynamicCast_AsOuter_Character1 = K2Node_DynamicCast_AsOuter_Character1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Controller = K2Node_DynamicCast_AsArsenal_Controller;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CustomEvent_OuterStatus = K2Node_CustomEvent_OuterStatus;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_CustomEvent_Outer = K2Node_CustomEvent_Outer;
	Parms.K2Node_CustomEvent_OuterSkill = K2Node_CustomEvent_OuterSkill;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_CustomEvent_NewStatusType3 = K2Node_CustomEvent_NewStatusType3;
	Parms.K2Node_CustomEvent_SkillList3 = K2Node_CustomEvent_SkillList3;
	Parms.CallFunc_ProcessGetOnArsenalCompleted_IsChange = CallFunc_ProcessGetOnArsenalCompleted_IsChange;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Anim_BP = K2Node_DynamicCast_AsArsenal_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_playerController = K2Node_Event_playerController;
	Parms.K2Node_Event_skillList = K2Node_Event_skillList;
	Parms.K2Node_Event_outerStatus = K2Node_Event_outerStatus;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetController_ReturnValue1 = CallFunc_GetController_ReturnValue1;
	Parms.CallFunc_CheckControllerForClientGetonfinish_ReturnValue = CallFunc_CheckControllerForClientGetonfinish_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Controller1 = K2Node_DynamicCast_AsArsenal_Controller1;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_ProcessGetOnArsenalCompleted_IsChange1 = CallFunc_ProcessGetOnArsenalCompleted_IsChange1;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_GetAnimInstance_ReturnValue1 = CallFunc_GetAnimInstance_ReturnValue1;
	Parms.K2Node_DynamicCast_AsArsenal_Anim_BP1 = K2Node_DynamicCast_AsArsenal_Anim_BP1;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_Event_WeaponMesh3 = K2Node_Event_WeaponMesh3;
	Parms.K2Node_Event_WeaponMesh2 = K2Node_Event_WeaponMesh2;
	Parms.K2Node_Event_SocketName1 = K2Node_Event_SocketName1;
	Parms.K2Node_Event_WeaponMesh1 = K2Node_Event_WeaponMesh1;
	Parms.K2Node_Event_WeaponMesh = K2Node_Event_WeaponMesh;
	Parms.K2Node_Event_SocketName = K2Node_Event_SocketName;
	Parms.K2Node_CustomEvent_NewStatusType2 = K2Node_CustomEvent_NewStatusType2;
	Parms.K2Node_CustomEvent_IsChangeArsenal2 = K2Node_CustomEvent_IsChangeArsenal2;
	Parms.K2Node_CustomEvent_SkillList2 = K2Node_CustomEvent_SkillList2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue1 = CallFunc_K2_AttachToComponent_ReturnValue1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue3 = CallFunc_K2_AttachToComponent_ReturnValue3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue4 = CallFunc_K2_AttachToComponent_ReturnValue4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue5 = CallFunc_K2_AttachToComponent_ReturnValue5;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue6 = CallFunc_K2_AttachToComponent_ReturnValue6;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue7 = CallFunc_K2_AttachToComponent_ReturnValue7;
	Parms.K2Node_CustomEvent_IsChangeArsenal1 = K2Node_CustomEvent_IsChangeArsenal1;
	Parms.K2Node_CustomEvent_SkillList1 = K2Node_CustomEvent_SkillList1;
	Parms.K2Node_CustomEvent_NewStatusType1 = K2Node_CustomEvent_NewStatusType1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_IsChangeArsenal = K2Node_CustomEvent_IsChangeArsenal;
	Parms.K2Node_CustomEvent_SkillList = K2Node_CustomEvent_SkillList;
	Parms.K2Node_CustomEvent_NewStatusType = K2Node_CustomEvent_NewStatusType;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue = CallFunc_IsCompletelyDestroyed_ReturnValue;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue1 = CallFunc_IsCompletelyDestroyed_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Type1 = K2Node_Event_Type1;
	Parms.K2Node_Event_badStatusComp1 = K2Node_Event_badStatusComp1;
	Parms.K2Node_Event_isHeal1 = K2Node_Event_isHeal1;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_badStatusComp = K2Node_Event_badStatusComp;
	Parms.K2Node_Event_isHeal = K2Node_Event_isHeal;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue1 = CallFunc_IsVisible_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Event_EventName2 = K2Node_Event_EventName2;
	Parms.K2Node_Event_EventName1 = K2Node_Event_EventName1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_StartUseCaptureWeaponCPP_ReturnValue = CallFunc_StartUseCaptureWeaponCPP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_GetAnimInstance_ReturnValue2 = CallFunc_GetAnimInstance_ReturnValue2;
	Parms.K2Node_DynamicCast_AsDemo_Arsenal_Anim_BP = K2Node_DynamicCast_AsDemo_Arsenal_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.K2Node_Event_EventName = K2Node_Event_EventName;
	Parms.K2Node_MakeStruct_TTLPlayerAssembleInfo = K2Node_MakeStruct_TTLPlayerAssembleInfo;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue2 = CallFunc_IsCompletelyDestroyed_ReturnValue2;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue3 = CallFunc_IsCompletelyDestroyed_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_attackType1 = K2Node_Event_attackType1;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetMovableUnits_MeshList_outArray = CallFunc_GetMovableUnits_MeshList_outArray;
	Parms.K2Node_Event_assembleInfo1 = K2Node_Event_assembleInfo1;
	Parms.K2Node_Event_paintInfo = K2Node_Event_paintInfo;
	Parms.K2Node_Event_partsListID = K2Node_Event_partsListID;
	Parms.CallFunc_SetupAndGetRandomPartsID_partsID = CallFunc_SetupAndGetRandomPartsID_partsID;
	Parms.CallFunc_SetupAndGetRandomPartsID_ReturnValue = CallFunc_SetupAndGetRandomPartsID_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Event_tickEnabled = K2Node_Event_tickEnabled;
	Parms.K2Node_Event_paintComponent = K2Node_Event_paintComponent;
	Parms.K2Node_Event_attackType = K2Node_Event_attackType;
	Parms.CallFunc_GetComponentByClass_ReturnValue3 = CallFunc_GetComponentByClass_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_Array_AddUnique_ReturnValue1 = CallFunc_Array_AddUnique_ReturnValue1;
	Parms.K2Node_Event_assembleInfo = K2Node_Event_assembleInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


