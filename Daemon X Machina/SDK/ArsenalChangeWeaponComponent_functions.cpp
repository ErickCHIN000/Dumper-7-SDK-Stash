#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C
// (None)

class UClass* UArsenalChangeWeaponComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalChangeWeaponComponent_C");

	return Clss;
}


// ArsenalChangeWeaponComponent_C ArsenalChangeWeaponComponent.Default__ArsenalChangeWeaponComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalChangeWeaponComponent_C* UArsenalChangeWeaponComponent_C::GetDefaultObj()
{
	static class UArsenalChangeWeaponComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalChangeWeaponComponent_C*>(UArsenalChangeWeaponComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.ChangeWeaponMulti
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLWeaponSlot          ChangeSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DestroyOldWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalChangeWeaponComponent_C::ChangeWeaponMulti(enum class ETTLWeaponSlot ChangeSlot, bool DestroyOldWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "ChangeWeaponMulti");

	Params::UArsenalChangeWeaponComponent_C_ChangeWeaponMulti_Params Parms{};

	Parms.ChangeSlot = ChangeSlot;
	Parms.DestroyOldWeapon = DestroyOldWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.CallChangeWeaponFromBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLWeaponSlot          ChangeSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDestroyOldWeapon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NeedsRegisterMultiList                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CallFunc_ChangeWeapon_OldWeapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ATTLWeaponBase* UArsenalChangeWeaponComponent_C::CallChangeWeaponFromBP(enum class ETTLWeaponSlot ChangeSlot, bool IsDestroyOldWeapon, bool NeedsRegisterMultiList, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "CallChangeWeaponFromBP");

	Params::UArsenalChangeWeaponComponent_C_CallChangeWeaponFromBP_Params Parms{};

	Parms.ChangeSlot = ChangeSlot;
	Parms.IsDestroyOldWeapon = IsDestroyOldWeapon;
	Parms.NeedsRegisterMultiList = NeedsRegisterMultiList;
	Parms.CallFunc_ChangeWeapon_OldWeapon = CallFunc_ChangeWeapon_OldWeapon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.ChangeNewWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLWeaponSlot          WeaponSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_ChangeWeapon_OldWeapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetWeaponClass_Actor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_DynamicCast_AsTTLWeapon_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalChangeWeaponComponent_C::ChangeNewWeapon(class FName RowName, enum class ETTLWeaponSlot WeaponSlot, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon, class UClass* CallFunc_GetWeaponClass_Actor, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ATTLWeaponBase* K2Node_DynamicCast_AsTTLWeapon_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "ChangeNewWeapon");

	Params::UArsenalChangeWeaponComponent_C_ChangeNewWeapon_Params Parms{};

	Parms.RowName = RowName;
	Parms.WeaponSlot = WeaponSlot;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_ChangeWeapon_OldWeapon = CallFunc_ChangeWeapon_OldWeapon;
	Parms.CallFunc_GetWeaponClass_Actor = CallFunc_GetWeaponClass_Actor;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLWeapon_Base = K2Node_DynamicCast_AsTTLWeapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.ChangeWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLWeaponSlot          ChangeSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DestroyOldWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NeedsRegisterMultiList                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              OldWeapon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              NewWeaponToChange                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetMeshForWeaponLeft_Mesh                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChangeHandWeapon_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetMeshForWeaponRight_Mesh                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChangeHandWeapon_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLSupportWeaponBase*       K2Node_DynamicCast_AsTTLSupport_Weapon_Base                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLShoulderWeaponBase*      K2Node_DynamicCast_AsTTLShoulder_Weapon_Base                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetMeshForShoulderWeaponLeft_Mesh                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenal_AnimBP_C*           K2Node_DynamicCast_AsArsenal_Anim_BP                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalChangeWeaponComponent_C::ChangeWeapon(enum class ETTLWeaponSlot ChangeSlot, bool DestroyOldWeapon, bool NeedsRegisterMultiList, class ATTLWeaponBase** OldWeapon, class ATTLWeaponBase* NewWeaponToChange, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetMeshForWeaponLeft_Mesh, bool CallFunc_ChangeHandWeapon_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMeshForWeaponRight_Mesh, bool CallFunc_ChangeHandWeapon_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class ATTLSupportWeaponBase* K2Node_DynamicCast_AsTTLSupport_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class ATTLShoulderWeaponBase* K2Node_DynamicCast_AsTTLShoulder_Weapon_Base, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess2, class USkeletalMeshComponent* CallFunc_GetMeshForShoulderWeaponLeft_Mesh, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "ChangeWeapon");

	Params::UArsenalChangeWeaponComponent_C_ChangeWeapon_Params Parms{};

	Parms.ChangeSlot = ChangeSlot;
	Parms.DestroyOldWeapon = DestroyOldWeapon;
	Parms.NeedsRegisterMultiList = NeedsRegisterMultiList;
	Parms.NewWeaponToChange = NewWeaponToChange;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetMeshForWeaponLeft_Mesh = CallFunc_GetMeshForWeaponLeft_Mesh;
	Parms.CallFunc_ChangeHandWeapon_ReturnValue = CallFunc_ChangeHandWeapon_ReturnValue;
	Parms.CallFunc_GetMeshForWeaponRight_Mesh = CallFunc_GetMeshForWeaponRight_Mesh;
	Parms.CallFunc_ChangeHandWeapon_ReturnValue1 = CallFunc_ChangeHandWeapon_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_DynamicCast_AsTTLSupport_Weapon_Base = K2Node_DynamicCast_AsTTLSupport_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTTLShoulder_Weapon_Base = K2Node_DynamicCast_AsTTLShoulder_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetMeshForShoulderWeaponLeft_Mesh = CallFunc_GetMeshForShoulderWeaponLeft_Mesh;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Anim_BP = K2Node_DynamicCast_AsArsenal_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;

	UObject::ProcessEvent(Func, &Parms);

	if (OldWeapon != nullptr)
		*OldWeapon = Parms.OldWeapon;

}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.ResetChargeTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalChangeWeaponComponent_C::ResetChargeTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "ResetChargeTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalChangeWeaponComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.OnMulticastChangeWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLWeaponSlot          ChangeSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DestroyOldWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalChangeWeaponComponent_C::OnMulticastChangeWeapon(enum class ETTLWeaponSlot ChangeSlot, bool DestroyOldWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "OnMulticastChangeWeapon");

	Params::UArsenalChangeWeaponComponent_C_OnMulticastChangeWeapon_Params Parms{};

	Parms.ChangeSlot = ChangeSlot;
	Parms.DestroyOldWeapon = DestroyOldWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C.ExecuteUbergraph_ArsenalChangeWeaponComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLWeaponSlot          K2Node_Event_changeSlot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_destroyOldWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_ChangeWeapon_OldWeapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalChangeWeaponComponent_C::ExecuteUbergraph_ArsenalChangeWeaponComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, enum class ETTLWeaponSlot K2Node_Event_changeSlot, bool K2Node_Event_destroyOldWeapon, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangeWeaponComponent_C", "ExecuteUbergraph_ArsenalChangeWeaponComponent");

	Params::UArsenalChangeWeaponComponent_C_ExecuteUbergraph_ArsenalChangeWeaponComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_changeSlot = K2Node_Event_changeSlot;
	Parms.K2Node_Event_destroyOldWeapon = K2Node_Event_destroyOldWeapon;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ChangeWeapon_OldWeapon = CallFunc_ChangeWeapon_OldWeapon;

	UObject::ProcessEvent(Func, &Parms);

}

}


