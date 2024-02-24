#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FirearmCosmeticController.BP_FirearmCosmeticController_C
// (None)

class UClass* UBP_FirearmCosmeticController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FirearmCosmeticController_C");

	return Clss;
}


// BP_FirearmCosmeticController_C BP_FirearmCosmeticController.Default__BP_FirearmCosmeticController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FirearmCosmeticController_C* UBP_FirearmCosmeticController_C::GetDefaultObj()
{
	static class UBP_FirearmCosmeticController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FirearmCosmeticController_C*>(UBP_FirearmCosmeticController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.PlayUseWhenBrokenSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_GetOwnerIcarusItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::PlayUseWhenBrokenSound(class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "PlayUseWhenBrokenSound");

	Params::UBP_FirearmCosmeticController_C_PlayUseWhenBrokenSound_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwnerIcarusItem_ReturnValue = CallFunc_GetOwnerIcarusItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdatePersistentAudioAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIsAiming                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWeaponAimingFMODParam  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAimingFMODParam  Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWeaponAimingFMODParam  K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFMODAudioComponent*> CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFirearmSoundData           CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::UpdatePersistentAudioAim(bool NewIsAiming, enum class EWeaponAimingFMODParam Temp_byte_Variable, enum class EWeaponAimingFMODParam Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, enum class EWeaponAimingFMODParam K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, TArray<class UFMODAudioComponent*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UFMODAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFirearmSoundData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "UpdatePersistentAudioAim");

	Params::UBP_FirearmCosmeticController_C_UpdatePersistentAudioAim_Params Parms{};

	Parms.NewIsAiming = NewIsAiming;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdatePersistentAudioAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewReloading                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NewAmmoCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_BoolToByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFMODAudioComponent*> CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFirearmSoundData           CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::UpdatePersistentAudioAmmo(bool NewReloading, int32 NewAmmoCount, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_BoolToByte_ReturnValue, TArray<class UFMODAudioComponent*>& CallFunc_Map_Keys_Keys, uint8 CallFunc_GetValidValue_ReturnValue, class UFMODAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FFirearmSoundData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "UpdatePersistentAudioAmmo");

	Params::UBP_FirearmCosmeticController_C_UpdatePersistentAudioAmmo_Params Parms{};

	Parms.NewReloading = NewReloading;
	Parms.NewAmmoCount = NewAmmoCount;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToByte_ReturnValue = CallFunc_Conv_BoolToByte_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdatePersistentAudioCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIsCharging                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewChargeStrength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_BoolToByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFMODAudioComponent*> CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UFMODAudioComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFirearmSoundData           CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::UpdatePersistentAudioCharge(bool NewIsCharging, float NewChargeStrength, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_BoolToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, TArray<class UFMODAudioComponent*>& CallFunc_Map_Keys_Keys, class UFMODAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFirearmSoundData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "UpdatePersistentAudioCharge");

	Params::UBP_FirearmCosmeticController_C_UpdatePersistentAudioCharge_Params Parms{};

	Parms.NewIsCharging = NewIsCharging;
	Parms.NewChargeStrength = NewChargeStrength;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToByte_ReturnValue = CallFunc_Conv_BoolToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.StopAllAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::StopAllAnimations(class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "StopAllAnimations");

	Params::UBP_FirearmCosmeticController_C_StopAllAnimations_Params Parms{};

	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.GetOwnerMeshComponent
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      AsSkeletal_Mesh_Component                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::GetOwnerMeshComponent(class USkeletalMeshComponent** AsSkeletal_Mesh_Component, bool* Valid, class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "GetOwnerMeshComponent");

	Params::UBP_FirearmCosmeticController_C_GetOwnerMeshComponent_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsSkeletal_Mesh_Component != nullptr)
		*AsSkeletal_Mesh_Component = Parms.AsSkeletal_Mesh_Component;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdateAudioPerspective
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFMODAudioComponent*> CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UFMODAudioComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::UpdateAudioPerspective(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UFMODAudioComponent*>& CallFunc_Map_Keys_Keys, class UFMODAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "UpdateAudioPerspective");

	Params::UBP_FirearmCosmeticController_C_UpdateAudioPerspective_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.StopPersistentAudio
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UFMODAudioComponent*> CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UFMODAudioComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::StopPersistentAudio(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UFMODAudioComponent*>& CallFunc_Map_Keys_Keys, class UFMODAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "StopPersistentAudio");

	Params::UBP_FirearmCosmeticController_C_StopPersistentAudio_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.StartPersistentAudio
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFirearmAudioData           CallFunc_GetFirearmAudioDataStruct_FirearmAudioData              (None)
// enum class EValid                  CallFunc_GetFirearmAudioDataStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFirearmSoundData           CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::StartPersistentAudio(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFirearmAudioData& CallFunc_GetFirearmAudioDataStruct_FirearmAudioData, enum class EValid CallFunc_GetFirearmAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFirearmSoundData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "StartPersistentAudio");

	Params::UBP_FirearmCosmeticController_C_StartPersistentAudio_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetFirearmAudioDataStruct_FirearmAudioData = CallFunc_GetFirearmAudioDataStruct_FirearmAudioData;
	Parms.CallFunc_GetFirearmAudioDataStruct_Paths = CallFunc_GetFirearmAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.PlaySound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFirearmSoundData           FirearmSoundData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UFMODAudioComponent*         AudioEventComp                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_BoolToByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::PlaySound(struct FFirearmSoundData& FirearmSoundData, class UFMODAudioComponent* AudioEventComp, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_Conv_BoolToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "PlaySound");

	Params::UBP_FirearmCosmeticController_C_PlaySound_Params Parms{};

	Parms.FirearmSoundData = FirearmSoundData;
	Parms.AudioEventComp = AudioEventComp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToByte_ReturnValue = CallFunc_Conv_BoolToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnLoaded_7360B0564CB85F370942C3B80E39A7D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnLoaded_7360B0564CB85F370942C3B80E39A7D0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnLoaded_7360B0564CB85F370942C3B80E39A7D0");

	Params::UBP_FirearmCosmeticController_C_OnLoaded_7360B0564CB85F370942C3B80E39A7D0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnLoaded_C53A0FD242A9B8B751A78CB687B7525F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnLoaded_C53A0FD242A9B8B751A78CB687B7525F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnLoaded_C53A0FD242A9B8B751A78CB687B7525F");

	Params::UBP_FirearmCosmeticController_C_OnLoaded_C53A0FD242A9B8B751A78CB687B7525F_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D");

	Params::UBP_FirearmCosmeticController_C_OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D");

	Params::UBP_FirearmCosmeticController_C_OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D");

	Params::UBP_FirearmCosmeticController_C_OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D");

	Params::UBP_FirearmCosmeticController_C_OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D");

	Params::UBP_FirearmCosmeticController_C_OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114");

	Params::UBP_FirearmCosmeticController_C_OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114");

	Params::UBP_FirearmCosmeticController_C_OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114");

	Params::UBP_FirearmCosmeticController_C_OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114");

	Params::UBP_FirearmCosmeticController_C_OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_C93749A8437E973B82F6A6B1DDAF9114
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnCompleted_C93749A8437E973B82F6A6B1DDAF9114(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnCompleted_C93749A8437E973B82F6A6B1DDAF9114");

	Params::UBP_FirearmCosmeticController_C_OnCompleted_C93749A8437E973B82F6A6B1DDAF9114_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577");

	Params::UBP_FirearmCosmeticController_C_OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577");

	Params::UBP_FirearmCosmeticController_C_OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577");

	Params::UBP_FirearmCosmeticController_C_OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577");

	Params::UBP_FirearmCosmeticController_C_OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577");

	Params::UBP_FirearmCosmeticController_C_OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B");

	Params::UBP_FirearmCosmeticController_C_OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B");

	Params::UBP_FirearmCosmeticController_C_OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B");

	Params::UBP_FirearmCosmeticController_C_OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B");

	Params::UBP_FirearmCosmeticController_C_OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B");

	Params::UBP_FirearmCosmeticController_C_OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_C8C3925C475373B80C198BA66441AF28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyEnd_C8C3925C475373B80C198BA66441AF28(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyEnd_C8C3925C475373B80C198BA66441AF28");

	Params::UBP_FirearmCosmeticController_C_OnNotifyEnd_C8C3925C475373B80C198BA66441AF28_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_C8C3925C475373B80C198BA66441AF28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyBegin_C8C3925C475373B80C198BA66441AF28(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyBegin_C8C3925C475373B80C198BA66441AF28");

	Params::UBP_FirearmCosmeticController_C_OnNotifyBegin_C8C3925C475373B80C198BA66441AF28_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_C8C3925C475373B80C198BA66441AF28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnInterrupted_C8C3925C475373B80C198BA66441AF28(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnInterrupted_C8C3925C475373B80C198BA66441AF28");

	Params::UBP_FirearmCosmeticController_C_OnInterrupted_C8C3925C475373B80C198BA66441AF28_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_C8C3925C475373B80C198BA66441AF28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnBlendOut_C8C3925C475373B80C198BA66441AF28(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnBlendOut_C8C3925C475373B80C198BA66441AF28");

	Params::UBP_FirearmCosmeticController_C_OnBlendOut_C8C3925C475373B80C198BA66441AF28_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_C8C3925C475373B80C198BA66441AF28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnCompleted_C8C3925C475373B80C198BA66441AF28(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnCompleted_C8C3925C475373B80C198BA66441AF28");

	Params::UBP_FirearmCosmeticController_C_OnCompleted_C8C3925C475373B80C198BA66441AF28_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4");

	Params::UBP_FirearmCosmeticController_C_OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456");

	Params::UBP_FirearmCosmeticController_C_OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456");

	Params::UBP_FirearmCosmeticController_C_OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456");

	Params::UBP_FirearmCosmeticController_C_OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456");

	Params::UBP_FirearmCosmeticController_C_OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456");

	Params::UBP_FirearmCosmeticController_C_OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.LoadAndPlayWeaponAnimation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      WeaponAnimationReference                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// float                              PlayRateScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FixedTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ScaleBasedOnSection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::LoadAndPlayWeaponAnimation(TSoftObjectPtr<class UObject>& WeaponAnimationReference, float PlayRateScale, float FixedTime, class FName CallbackId, class FName ScaleBasedOnSection, float StartPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "LoadAndPlayWeaponAnimation");

	Params::UBP_FirearmCosmeticController_C_LoadAndPlayWeaponAnimation_Params Parms{};

	Parms.WeaponAnimationReference = WeaponAnimationReference;
	Parms.PlayRateScale = PlayRateScale;
	Parms.FixedTime = FixedTime;
	Parms.CallbackId = CallbackId;
	Parms.ScaleBasedOnSection = ScaleBasedOnSection;
	Parms.StartPosition = StartPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.LoadAndPlayFirstPersonAnimation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      FirstPersonAnimationReference                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// float                              PlayRateScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FixedTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ScaleBasedOnSection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::LoadAndPlayFirstPersonAnimation(TSoftObjectPtr<class UObject>& FirstPersonAnimationReference, float PlayRateScale, float FixedTime, class FName CallbackId, class FName ScaleBasedOnSection, float StartPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "LoadAndPlayFirstPersonAnimation");

	Params::UBP_FirearmCosmeticController_C_LoadAndPlayFirstPersonAnimation_Params Parms{};

	Parms.FirstPersonAnimationReference = FirstPersonAnimationReference;
	Parms.PlayRateScale = PlayRateScale;
	Parms.FixedTime = FixedTime;
	Parms.CallbackId = CallbackId;
	Parms.ScaleBasedOnSection = ScaleBasedOnSection;
	Parms.StartPosition = StartPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.LoadAndPlayThirdPersonAnimation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      ThirdPersonAnimationReference                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// float                              PlayRateScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FixedTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ScaleBasedOnSection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::LoadAndPlayThirdPersonAnimation(TSoftObjectPtr<class UObject>& ThirdPersonAnimationReference, float PlayRateScale, float FixedTime, class FName CallbackId, class FName ScaleBasedOnSection, float StartPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "LoadAndPlayThirdPersonAnimation");

	Params::UBP_FirearmCosmeticController_C_LoadAndPlayThirdPersonAnimation_Params Parms{};

	Parms.ThirdPersonAnimationReference = ThirdPersonAnimationReference;
	Parms.PlayRateScale = PlayRateScale;
	Parms.FixedTime = FixedTime;
	Parms.CallbackId = CallbackId;
	Parms.ScaleBasedOnSection = ScaleBasedOnSection;
	Parms.StartPosition = StartPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.PlayAnimations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      MeshAnimationReference                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      FirstPersonAnimation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      ThirdPersonAnimation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// float                              PlayRateScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FixedDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ScaleBasedOnMontageSection                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::PlayAnimations(TSoftObjectPtr<class UObject> MeshAnimationReference, TSoftObjectPtr<class UObject> FirstPersonAnimation, TSoftObjectPtr<class UObject> ThirdPersonAnimation, float PlayRateScale, float FixedDuration, class FName CallbackId, class FName ScaleBasedOnMontageSection, float StartPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "PlayAnimations");

	Params::UBP_FirearmCosmeticController_C_PlayAnimations_Params Parms{};

	Parms.MeshAnimationReference = MeshAnimationReference;
	Parms.FirstPersonAnimation = FirstPersonAnimation;
	Parms.ThirdPersonAnimation = ThirdPersonAnimation;
	Parms.PlayRateScale = PlayRateScale;
	Parms.FixedDuration = FixedDuration;
	Parms.CallbackId = CallbackId;
	Parms.ScaleBasedOnMontageSection = ScaleBasedOnMontageSection;
	Parms.StartPosition = StartPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_FirearmCosmeticController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "ReceiveEndPlay");

	Params::UBP_FirearmCosmeticController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.ExecuteUbergraph_BP_FirearmCosmeticController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_22                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_21                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_20                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_19                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_18                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_17                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_16                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_15                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_14                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_13                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_12                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_11                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_10                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_9                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_8                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_7                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_6                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_5                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable_3                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_4                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_3                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_2                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable_5                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_23                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_WeaponAnimationReference                      (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlayRateScale_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FixedTime_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CallbackId_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ScaleBasedOnSection_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartPosition_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMontageSectionLength_Length                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSectionLength_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_24                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_FirstPersonAnimationReference                 (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlayRateScale_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FixedTime_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CallbackId_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ScaleBasedOnSection_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartPosition_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Temp_object_Variable_7                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_ThirdPersonAnimationReference                 (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlayRateScale_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FixedTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CallbackId_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ScaleBasedOnSection                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartPosition_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_25                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMontageSectionLength_Length_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSectionLength_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_26                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_MeshAnimationReference                        (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_FirstPersonAnimation                          (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_ThirdPersonAnimation                          (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlayRateScale                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FixedDuration                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CallbackId                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ScaleBasedOnMontageSection                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartPosition                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_27                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_28                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_29                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMontageSectionLength_Length_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSectionLength_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FirearmCosmeticController_C::ExecuteUbergraph_BP_FirearmCosmeticController(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_22, class UAnimNotify* K2Node_CustomEvent_Notify_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_21, class UAnimNotify* K2Node_CustomEvent_Notify_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_20, class UAnimNotify* K2Node_CustomEvent_Notify_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimNotify* Temp_object_Variable, class FName Temp_name_Variable, class FName K2Node_CustomEvent_NotifyName_19, class UAnimNotify* K2Node_CustomEvent_Notify_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_18, class UAnimNotify* K2Node_CustomEvent_Notify_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_17, class UAnimNotify* K2Node_CustomEvent_Notify_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_16, class UAnimNotify* K2Node_CustomEvent_Notify_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_15, class UAnimNotify* K2Node_CustomEvent_Notify_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAnimNotify* Temp_object_Variable_1, class FName Temp_name_Variable_1, class FName K2Node_CustomEvent_NotifyName_14, class UAnimNotify* K2Node_CustomEvent_Notify_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_13, class UAnimNotify* K2Node_CustomEvent_Notify_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_12, class UAnimNotify* K2Node_CustomEvent_Notify_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_11, class UAnimNotify* K2Node_CustomEvent_Notify_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_10, class UAnimNotify* K2Node_CustomEvent_Notify_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UAnimNotify* Temp_object_Variable_2, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NotifyName_9, class UAnimNotify* K2Node_CustomEvent_Notify_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_8, class UAnimNotify* K2Node_CustomEvent_Notify_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_7, class UAnimNotify* K2Node_CustomEvent_Notify_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_6, class UAnimNotify* K2Node_CustomEvent_Notify_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_5, class UAnimNotify* K2Node_CustomEvent_Notify_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UAnimNotify* Temp_object_Variable_3, class FName Temp_name_Variable_3, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_4, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class UAnimNotify* Temp_object_Variable_5, class FName Temp_name_Variable_4, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, class UObject* Temp_object_Variable_6, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_23, class UAnimNotify* K2Node_CustomEvent_Notify_23, class UObject* K2Node_CustomEvent_Loaded_2, TSoftObjectPtr<class UObject> K2Node_CustomEvent_WeaponAnimationReference, float K2Node_CustomEvent_PlayRateScale_3, float K2Node_CustomEvent_FixedTime_2, class FName K2Node_CustomEvent_CallbackId_3, class FName K2Node_CustomEvent_ScaleBasedOnSection_2, float K2Node_CustomEvent_StartPosition_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, float CallFunc_GetMontageSectionLength_Length, bool CallFunc_GetMontageSectionLength_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName_24, class UAnimNotify* K2Node_CustomEvent_Notify_24, TSoftObjectPtr<class UObject> K2Node_CustomEvent_FirstPersonAnimationReference, float K2Node_CustomEvent_PlayRateScale_2, float K2Node_CustomEvent_FixedTime_1, class FName K2Node_CustomEvent_CallbackId_2, class FName K2Node_CustomEvent_ScaleBasedOnSection_1, float K2Node_CustomEvent_StartPosition_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName Temp_name_Variable_5, class UAnimNotify* Temp_object_Variable_7, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue_1, TSoftObjectPtr<class UObject> K2Node_CustomEvent_ThirdPersonAnimationReference, float K2Node_CustomEvent_PlayRateScale_1, float K2Node_CustomEvent_FixedTime, class FName K2Node_CustomEvent_CallbackId_1, class FName K2Node_CustomEvent_ScaleBasedOnSection, float K2Node_CustomEvent_StartPosition_1, class FName K2Node_CustomEvent_NotifyName_25, class UAnimNotify* K2Node_CustomEvent_Notify_25, float CallFunc_GetMontageSectionLength_Length_1, bool CallFunc_GetMontageSectionLength_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName_26, class UAnimNotify* K2Node_CustomEvent_Notify_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, TSoftObjectPtr<class UObject> K2Node_CustomEvent_MeshAnimationReference, TSoftObjectPtr<class UObject> K2Node_CustomEvent_FirstPersonAnimation, TSoftObjectPtr<class UObject> K2Node_CustomEvent_ThirdPersonAnimation, float K2Node_CustomEvent_PlayRateScale, float K2Node_CustomEvent_FixedDuration, class FName K2Node_CustomEvent_CallbackId, class FName K2Node_CustomEvent_ScaleBasedOnMontageSection, float K2Node_CustomEvent_StartPosition, bool CallFunc_IsValid_ReturnValue_3, enum class EEndPlayReason K2Node_Event_EndPlayReason, class FName K2Node_CustomEvent_NotifyName_27, class UAnimNotify* K2Node_CustomEvent_Notify_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class FName K2Node_CustomEvent_NotifyName_28, class UAnimNotify* K2Node_CustomEvent_Notify_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class FName K2Node_CustomEvent_NotifyName_29, class UAnimNotify* K2Node_CustomEvent_Notify_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, class UObject* Temp_object_Variable_8, class UObject* K2Node_CustomEvent_Loaded_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_2, bool K2Node_DynamicCast_bSuccess_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, float CallFunc_GetMontageSectionLength_Length_2, bool CallFunc_GetMontageSectionLength_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "ExecuteUbergraph_BP_FirearmCosmeticController");

	Params::UBP_FirearmCosmeticController_C_ExecuteUbergraph_BP_FirearmCosmeticController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.K2Node_CustomEvent_Notify_22 = K2Node_CustomEvent_Notify_22;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CustomEvent_Notify_21 = K2Node_CustomEvent_Notify_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CustomEvent_Notify_20 = K2Node_CustomEvent_Notify_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CustomEvent_Notify_19 = K2Node_CustomEvent_Notify_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CustomEvent_Notify_18 = K2Node_CustomEvent_Notify_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CustomEvent_Notify_17 = K2Node_CustomEvent_Notify_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CustomEvent_Notify_16 = K2Node_CustomEvent_Notify_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CustomEvent_Notify_15 = K2Node_CustomEvent_Notify_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_Notify_14 = K2Node_CustomEvent_Notify_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CustomEvent_Notify_13 = K2Node_CustomEvent_Notify_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CustomEvent_Notify_12 = K2Node_CustomEvent_Notify_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CustomEvent_Notify_11 = K2Node_CustomEvent_Notify_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CustomEvent_Notify_10 = K2Node_CustomEvent_Notify_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_Notify_9 = K2Node_CustomEvent_Notify_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CustomEvent_Notify_8 = K2Node_CustomEvent_Notify_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CustomEvent_Notify_7 = K2Node_CustomEvent_Notify_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CustomEvent_Notify_6 = K2Node_CustomEvent_Notify_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CustomEvent_Notify_5 = K2Node_CustomEvent_Notify_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_Notify_4 = K2Node_CustomEvent_Notify_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CustomEvent_Notify_3 = K2Node_CustomEvent_Notify_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CustomEvent_Notify_2 = K2Node_CustomEvent_Notify_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CustomEvent_Notify_1 = K2Node_CustomEvent_Notify_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CustomEvent_Notify = K2Node_CustomEvent_Notify;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_DynamicCast_AsAnim_Montage_1 = K2Node_DynamicCast_AsAnim_Montage_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CustomEvent_Notify_23 = K2Node_CustomEvent_Notify_23;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.K2Node_CustomEvent_WeaponAnimationReference = K2Node_CustomEvent_WeaponAnimationReference;
	Parms.K2Node_CustomEvent_PlayRateScale_3 = K2Node_CustomEvent_PlayRateScale_3;
	Parms.K2Node_CustomEvent_FixedTime_2 = K2Node_CustomEvent_FixedTime_2;
	Parms.K2Node_CustomEvent_CallbackId_3 = K2Node_CustomEvent_CallbackId_3;
	Parms.K2Node_CustomEvent_ScaleBasedOnSection_2 = K2Node_CustomEvent_ScaleBasedOnSection_2;
	Parms.K2Node_CustomEvent_StartPosition_3 = K2Node_CustomEvent_StartPosition_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetMontageSectionLength_Length = CallFunc_GetMontageSectionLength_Length;
	Parms.CallFunc_GetMontageSectionLength_ReturnValue = CallFunc_GetMontageSectionLength_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CustomEvent_Notify_24 = K2Node_CustomEvent_Notify_24;
	Parms.K2Node_CustomEvent_FirstPersonAnimationReference = K2Node_CustomEvent_FirstPersonAnimationReference;
	Parms.K2Node_CustomEvent_PlayRateScale_2 = K2Node_CustomEvent_PlayRateScale_2;
	Parms.K2Node_CustomEvent_FixedTime_1 = K2Node_CustomEvent_FixedTime_1;
	Parms.K2Node_CustomEvent_CallbackId_2 = K2Node_CustomEvent_CallbackId_2;
	Parms.K2Node_CustomEvent_ScaleBasedOnSection_1 = K2Node_CustomEvent_ScaleBasedOnSection_1;
	Parms.K2Node_CustomEvent_StartPosition_2 = K2Node_CustomEvent_StartPosition_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue_1 = CallFunc_GetFirstPersonMesh_ReturnValue_1;
	Parms.K2Node_CustomEvent_ThirdPersonAnimationReference = K2Node_CustomEvent_ThirdPersonAnimationReference;
	Parms.K2Node_CustomEvent_PlayRateScale_1 = K2Node_CustomEvent_PlayRateScale_1;
	Parms.K2Node_CustomEvent_FixedTime = K2Node_CustomEvent_FixedTime;
	Parms.K2Node_CustomEvent_CallbackId_1 = K2Node_CustomEvent_CallbackId_1;
	Parms.K2Node_CustomEvent_ScaleBasedOnSection = K2Node_CustomEvent_ScaleBasedOnSection;
	Parms.K2Node_CustomEvent_StartPosition_1 = K2Node_CustomEvent_StartPosition_1;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.K2Node_CustomEvent_Notify_25 = K2Node_CustomEvent_Notify_25;
	Parms.CallFunc_GetMontageSectionLength_Length_1 = CallFunc_GetMontageSectionLength_Length_1;
	Parms.CallFunc_GetMontageSectionLength_ReturnValue_1 = CallFunc_GetMontageSectionLength_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_2 = CallFunc_IsValidSoftObjectReference_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.K2Node_CustomEvent_Notify_26 = K2Node_CustomEvent_Notify_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.K2Node_CustomEvent_MeshAnimationReference = K2Node_CustomEvent_MeshAnimationReference;
	Parms.K2Node_CustomEvent_FirstPersonAnimation = K2Node_CustomEvent_FirstPersonAnimation;
	Parms.K2Node_CustomEvent_ThirdPersonAnimation = K2Node_CustomEvent_ThirdPersonAnimation;
	Parms.K2Node_CustomEvent_PlayRateScale = K2Node_CustomEvent_PlayRateScale;
	Parms.K2Node_CustomEvent_FixedDuration = K2Node_CustomEvent_FixedDuration;
	Parms.K2Node_CustomEvent_CallbackId = K2Node_CustomEvent_CallbackId;
	Parms.K2Node_CustomEvent_ScaleBasedOnMontageSection = K2Node_CustomEvent_ScaleBasedOnMontageSection;
	Parms.K2Node_CustomEvent_StartPosition = K2Node_CustomEvent_StartPosition;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_CustomEvent_Notify_27 = K2Node_CustomEvent_Notify_27;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.K2Node_CustomEvent_Notify_28 = K2Node_CustomEvent_Notify_28;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.K2Node_CustomEvent_Notify_29 = K2Node_CustomEvent_Notify_29;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.K2Node_DynamicCast_AsAnim_Montage_2 = K2Node_DynamicCast_AsAnim_Montage_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_GetMontageSectionLength_Length_2 = CallFunc_GetMontageSectionLength_Length_2;
	Parms.CallFunc_GetMontageSectionLength_ReturnValue_2 = CallFunc_GetMontageSectionLength_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnThirdPersonAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnThirdPersonAnimationEnd__DelegateSignature(class FName AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnThirdPersonAnimationEnd__DelegateSignature");

	Params::UBP_FirearmCosmeticController_C_OnThirdPersonAnimationEnd__DelegateSignature_Params Parms{};

	Parms.AnimationId = AnimationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnThirdPersonAnimationStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnThirdPersonAnimationStart__DelegateSignature(class FName AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnThirdPersonAnimationStart__DelegateSignature");

	Params::UBP_FirearmCosmeticController_C_OnThirdPersonAnimationStart__DelegateSignature_Params Parms{};

	Parms.AnimationId = AnimationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnFirstPersonAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnFirstPersonAnimationEnd__DelegateSignature(class FName AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnFirstPersonAnimationEnd__DelegateSignature");

	Params::UBP_FirearmCosmeticController_C_OnFirstPersonAnimationEnd__DelegateSignature_Params Parms{};

	Parms.AnimationId = AnimationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnFirstPersonAnimationStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnFirstPersonAnimationStart__DelegateSignature(class FName AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnFirstPersonAnimationStart__DelegateSignature");

	Params::UBP_FirearmCosmeticController_C_OnFirstPersonAnimationStart__DelegateSignature_Params Parms{};

	Parms.AnimationId = AnimationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnWeaponAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnWeaponAnimationEnd__DelegateSignature(class FName AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnWeaponAnimationEnd__DelegateSignature");

	Params::UBP_FirearmCosmeticController_C_OnWeaponAnimationEnd__DelegateSignature_Params Parms{};

	Parms.AnimationId = AnimationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnWeaponAnimationStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirearmCosmeticController_C::OnWeaponAnimationStart__DelegateSignature(class FName AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirearmCosmeticController_C", "OnWeaponAnimationStart__DelegateSignature");

	Params::UBP_FirearmCosmeticController_C_OnWeaponAnimationStart__DelegateSignature_Params Parms{};

	Parms.AnimationId = AnimationId;

	UObject::ProcessEvent(Func, &Parms);

}

}


