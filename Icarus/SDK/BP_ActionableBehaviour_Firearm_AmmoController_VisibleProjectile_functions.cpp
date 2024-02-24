#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
// (None)

class UClass* UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C");

	return Clss;
}


// BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.Default__BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C* UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C*>(UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.RefundAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::RefundAmmo(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "RefundAmmo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_RefundAmmo_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.SetupPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::SetupPlayer(bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "SetupPlayer");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_SetupPlayer_Params Parms{};

	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.ConsumeAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::ConsumeAmmo(int32 Amount, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "ConsumeAmmo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_ConsumeAmmo_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.AttachPreviewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ParentSocket                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             ParentComponent                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsThirdPerson                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetVisibleCharacterMesh_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFirearmAttachType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetRootMeshComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::AttachPreviewItem(class FName ParentSocket, class USceneComponent* ParentComponent, bool IsThirdPerson, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* Temp_wildcard_Variable, enum class EFirearmAttachType Temp_byte_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class USceneComponent* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "AttachPreviewItem");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_AttachPreviewItem_Params Parms{};

	Parms.ParentSocket = ParentSocket;
	Parms.ParentComponent = ParentComponent;
	Parms.IsThirdPerson = IsThirdPerson;
	Parms.CallFunc_GetVisibleCharacterMesh_ReturnValue = CallFunc_GetVisibleCharacterMesh_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetRootMeshComponent_ReturnValue = CallFunc_GetRootMeshComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.SetPreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusItem*                 NewPreviewItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::SetPreviewItem(class AIcarusItem* NewPreviewItem, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "SetPreviewItem");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_SetPreviewItem_Params Parms{};

	Parms.NewPreviewItem = NewPreviewItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.UpdatePreviewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// struct FItemData                   CallFunc_CreateItem_ReturnValue                                  (ContainsInstancedReference)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusItemSpawnParametersAdvancedK2Node_MakeStruct_IcarusItemSpawnParametersAdvanced              (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::UpdatePreviewItem(bool Show, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FItemData& CallFunc_CreateItem_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "UpdatePreviewItem");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_UpdatePreviewItem_Params Parms{};

	Parms.Show = Show;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_CreateItem_ReturnValue = CallFunc_CreateItem_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced = K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.CleanupPreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::CleanupPreviewItem(bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "CleanupPreviewItem");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_CleanupPreviewItem_Params Parms{};

	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.GetAmmoCapacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::GetAmmoCapacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "GetAmmoCapacity");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_GetAmmoCapacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.SetPreviewItemVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::SetPreviewItemVisible(bool Visible, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "SetPreviewItemVisible");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_SetPreviewItemVisible_Params Parms{};

	Parms.Visible = Visible;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnReloadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "OnReloadStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnAmmoTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::OnAmmoTypeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "OnAmmoTypeChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnWeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::OnWeaponFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "OnWeaponFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnAmmoUnloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::OnAmmoUnloaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "OnAmmoUnloaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnWeaponInventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::OnWeaponInventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "OnWeaponInventoryUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAmmo_HasAmmo                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAmmo_HasAmmo_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)

void UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C::ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_HasAmmo_HasAmmo_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C", "ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C_ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_HasAmmo_HasAmmo = CallFunc_HasAmmo_HasAmmo;
	Parms.CallFunc_HasAmmo_HasAmmo_1 = CallFunc_HasAmmo_HasAmmo_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


