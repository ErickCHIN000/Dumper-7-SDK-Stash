#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTA_Placeable.BPTA_Placeable_C
// (Actor)

class UClass* ABPTA_Placeable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTA_Placeable_C");

	return Clss;
}


// BPTA_Placeable_C BPTA_Placeable.Default__BPTA_Placeable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTA_Placeable_C* ABPTA_Placeable_C::GetDefaultObj()
{
	static class ABPTA_Placeable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTA_Placeable_C*>(ABPTA_Placeable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPTA_Placeable.BPTA_Placeable_C.IsPlacementCooldownActive
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCooldownActive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     BuildingInterface                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSpawnStructure_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetPlacingController_Controller                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::IsPlacementCooldownActive(bool* IsCooldownActive, class UObject* BuildingInterface, bool Temp_bool_Variable, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanSpawnStructure_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "IsPlacementCooldownActive");

	Params::ABPTA_Placeable_C_IsPlacementCooldownActive_Params Parms{};

	Parms.BuildingInterface = BuildingInterface;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Interface = K2Node_DynamicCast_AsBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanSpawnStructure_ReturnValue = CallFunc_CanSpawnStructure_ReturnValue;
	Parms.CallFunc_GetPlacingController_Controller = CallFunc_GetPlacingController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCooldownActive != nullptr)
		*IsCooldownActive = Parms.IsCooldownActive;

}


// Function BPTA_Placeable.BPTA_Placeable_C.IsForceUpdateRequired
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsRequired                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::IsForceUpdateRequired(bool* bIsRequired, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "IsForceUpdateRequired");

	Params::ABPTA_Placeable_C_IsForceUpdateRequired_Params Parms{};

	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsRequired != nullptr)
		*bIsRequired = Parms.bIsRequired;

}


// Function BPTA_Placeable.BPTA_Placeable_C.UpdateForceUpdateTimer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::UpdateForceUpdateTimer(double DeltaTime, double CallFunc_Subtract_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "UpdateForceUpdateTimer");

	Params::ABPTA_Placeable_C_UpdateForceUpdateTimer_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ResetForceUpdateTimer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_Placeable_C::ResetForceUpdateTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ResetForceUpdateTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Placeable.BPTA_Placeable_C.OnPlacementRotationUpdated
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::OnPlacementRotationUpdated(double Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "OnPlacementRotationUpdated");

	Params::ABPTA_Placeable_C_OnPlacementRotationUpdated_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.RefreshIndicator
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback StructurePlacementFeedback                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FStructurePlacementFeedback LFeedbackData                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::RefreshIndicator(struct FStructurePlacementFeedback& StructurePlacementFeedback, const struct FStructurePlacementFeedback& LFeedbackData, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "RefreshIndicator");

	Params::ABPTA_Placeable_C_RefreshIndicator_Params Parms{};

	Parms.StructurePlacementFeedback = StructurePlacementFeedback;
	Parms.LFeedbackData = LFeedbackData;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.HandleCollisionEmitterIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMeshComponent*>      CallFunc_GetStructureMeshes_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// TArray<class UMeshComponent*>      CallFunc_GetStructureMeshes_ReturnValue_1                        (ReferenceParm, ContainsInstancedReference)
// class UMeshComponent*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureMeshInfoInterface>K2Node_DynamicCast_AsStructure_Mesh_Info_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshExtents_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Highlighting_InvalidOverlapSphere_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::HandleCollisionEmitterIndicator(bool Condition, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue_1, class UMeshComponent* CallFunc_Array_Get_Item, class UMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetMeshExtents_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Highlighting_InvalidOverlapSphere_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "HandleCollisionEmitterIndicator");

	Params::ABPTA_Placeable_C_HandleCollisionEmitterIndicator_Params Parms{};

	Parms.Condition = Condition;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStructureMeshes_ReturnValue = CallFunc_GetStructureMeshes_ReturnValue;
	Parms.CallFunc_GetStructureMeshes_ReturnValue_1 = CallFunc_GetStructureMeshes_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Mesh_Info_Interface = K2Node_DynamicCast_AsStructure_Mesh_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMeshExtents_ReturnValue = CallFunc_GetMeshExtents_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.OnPlacementEnded
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsPlacementSuccessful                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetPlacingController_Controller                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::OnPlacementEnded(bool bIsPlacementSuccessful, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "OnPlacementEnded");

	Params::ABPTA_Placeable_C_OnPlacementEnded_Params Parms{};

	Parms.bIsPlacementSuccessful = bIsPlacementSuccessful;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetPlacingController_Controller = CallFunc_GetPlacingController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.OnPlacementStarted
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetPlacingController_Controller                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::OnPlacementStarted(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "OnPlacementStarted");

	Params::ABPTA_Placeable_C_OnPlacementStarted_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlacingController_Controller = CallFunc_GetPlacingController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.IsTextFeedbackVisible
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStructurePlacementFeedback PlacementFeedbackData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::IsTextFeedbackVisible(struct FStructurePlacementFeedback& PlacementFeedbackData, bool* IsVisible, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "IsTextFeedbackVisible");

	Params::ABPTA_Placeable_C_IsTextFeedbackVisible_Params Parms{};

	Parms.PlacementFeedbackData = PlacementFeedbackData;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function BPTA_Placeable.BPTA_Placeable_C.IsPlaceableVisible
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStructurePlacementFeedback PlacementFeedbackData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::IsPlaceableVisible(struct FStructurePlacementFeedback& PlacementFeedbackData, bool* IsVisible, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "IsPlaceableVisible");

	Params::ABPTA_Placeable_C_IsPlaceableVisible_Params Parms{};

	Parms.PlacementFeedbackData = PlacementFeedbackData;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function BPTA_Placeable.BPTA_Placeable_C.ChangePlaceableVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ChangePlaceableVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ChangePlaceableVisibility");

	Params::ABPTA_Placeable_C_ChangePlaceableVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.UpdateTargetData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Placeable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// class UObject*                     LPlaceable                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetPlacementTransform_TargetData                        (None)
// float                              CallFunc_GetPlacementTransform_OptionalDeltaHeightZ_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlacementTransform_OptionalDeltaRotationZ_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::UpdateTargetData(class UObject* Placeable, struct FGameplayAbilityTargetDataHandle* TargetData, class UObject* LPlaceable, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_TargetData, float CallFunc_GetPlacementTransform_OptionalDeltaHeightZ_ImplicitCast, float CallFunc_GetPlacementTransform_OptionalDeltaRotationZ_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "UpdateTargetData");

	Params::ABPTA_Placeable_C_UpdateTargetData_Params Parms{};

	Parms.Placeable = Placeable;
	Parms.LPlaceable = LPlaceable;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlacementTransform_TargetData = CallFunc_GetPlacementTransform_TargetData;
	Parms.CallFunc_GetPlacementTransform_OptionalDeltaHeightZ_ImplicitCast = CallFunc_GetPlacementTransform_OptionalDeltaHeightZ_ImplicitCast;
	Parms.CallFunc_GetPlacementTransform_OptionalDeltaRotationZ_ImplicitCast = CallFunc_GetPlacementTransform_OptionalDeltaRotationZ_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_Placeable.BPTA_Placeable_C.CanPlaceableBeRaised
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABPTA_Placeable_C::CanPlaceableBeRaised()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "CanPlaceableBeRaised");

	Params::ABPTA_Placeable_C_CanPlaceableBeRaised_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPTA_Placeable.BPTA_Placeable_C.IsPreviewUnchanged
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsPreviewUnchanged                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::IsPreviewUnchanged(const struct FGameplayAbilityTargetDataHandle& TargetData, bool* IsPreviewUnchanged, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "IsPreviewUnchanged");

	Params::ABPTA_Placeable_C_IsPreviewUnchanged_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPreviewUnchanged != nullptr)
		*IsPreviewUnchanged = Parms.IsPreviewUnchanged;

}


// Function BPTA_Placeable.BPTA_Placeable_C.ProcessFeedbackData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback FeedbackData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     L_ClostestObjectOverlapping                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             L_ClosestHit                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LPawnLocation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback LFeedbackData                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_BuildModeFeedback_C>K2Node_DynamicCast_AsBPI_Build_Mode_Feedback                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaceableVisible_IsVisible                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlaceableBeRaised_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ProcessFeedbackData(const struct FStructurePlacementFeedback& FeedbackData, class UObject* L_ClostestObjectOverlapping, double L_ClosestHit, const struct FVector& LPawnLocation, const struct FStructurePlacementFeedback& LFeedbackData, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlaceableVisible_IsVisible, bool CallFunc_CanPlaceableBeRaised_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ProcessFeedbackData");

	Params::ABPTA_Placeable_C_ProcessFeedbackData_Params Parms{};

	Parms.FeedbackData = FeedbackData;
	Parms.L_ClostestObjectOverlapping = L_ClostestObjectOverlapping;
	Parms.L_ClosestHit = L_ClosestHit;
	Parms.LPawnLocation = LPawnLocation;
	Parms.LFeedbackData = LFeedbackData;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Build_Mode_Feedback = K2Node_DynamicCast_AsBPI_Build_Mode_Feedback;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPlaceableVisible_IsVisible = CallFunc_IsPlaceableVisible_IsVisible;
	Parms.CallFunc_CanPlaceableBeRaised_ReturnValue = CallFunc_CanPlaceableBeRaised_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.DestroyPlaceable
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Placeable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::DestroyPlaceable(class UObject* Placeable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "DestroyPlaceable");

	Params::ABPTA_Placeable_C_DestroyPlaceable_Params Parms{};

	Parms.Placeable = Placeable;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.GetPlacementTargetData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Placeable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// bool                               CallFunc_IsForceUpdateRequired_bIsRequired                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPreviewUnchanged_IsPreviewUnchanged                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_UpdateTargetData_TargetData                             (None)

void ABPTA_Placeable_C::GetPlacementTargetData(class UObject* Placeable, struct FGameplayAbilityTargetDataHandle* TargetData, bool CallFunc_IsForceUpdateRequired_bIsRequired, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPreviewUnchanged_IsPreviewUnchanged, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_UpdateTargetData_TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "GetPlacementTargetData");

	Params::ABPTA_Placeable_C_GetPlacementTargetData_Params Parms{};

	Parms.Placeable = Placeable;
	Parms.CallFunc_IsForceUpdateRequired_bIsRequired = CallFunc_IsForceUpdateRequired_bIsRequired;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsPreviewUnchanged_IsPreviewUnchanged = CallFunc_IsPreviewUnchanged_IsPreviewUnchanged;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_UpdateTargetData_TargetData = CallFunc_UpdateTargetData_TargetData;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ValidateClientTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsTargetDataValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleLPlacementTargetData                                             (Edit, BlueprintVisible)
// class UObject*                     SpawnedPlaceable                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 L_Controller                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  L_Character                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_IsValidPlacement_PlacementFeedbackData                  (ContainsInstancedReference)
// class UObject*                     CallFunc_SpawnPlaceableObject_SpawnedPlaceable                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ValidateClientTargetData(struct FGameplayAbilityTargetDataHandle& Data, bool* bIsTargetDataValid, const struct FGameplayAbilityTargetDataHandle& LPlacementTargetData, class UObject* SpawnedPlaceable, class AController* L_Controller, class ACharacter* L_Character, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_PlacementFeedbackData, class UObject* CallFunc_SpawnPlaceableObject_SpawnedPlaceable, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ValidateClientTargetData");

	Params::ABPTA_Placeable_C_ValidateClientTargetData_Params Parms{};

	Parms.Data = Data;
	Parms.LPlacementTargetData = LPlacementTargetData;
	Parms.SpawnedPlaceable = SpawnedPlaceable;
	Parms.L_Controller = L_Controller;
	Parms.L_Character = L_Character;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValidPlacement_PlacementFeedbackData = CallFunc_IsValidPlacement_PlacementFeedbackData;
	Parms.CallFunc_SpawnPlaceableObject_SpawnedPlaceable = CallFunc_SpawnPlaceableObject_SpawnedPlaceable;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTargetDataValid != nullptr)
		*bIsTargetDataValid = Parms.bIsTargetDataValid;

}


// Function BPTA_Placeable.BPTA_Placeable_C.SetDeltaHeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PreviewDeltaZHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::SetDeltaHeight(double PreviewDeltaZHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "SetDeltaHeight");

	Params::ABPTA_Placeable_C_SetDeltaHeight_Params Parms{};

	Parms.PreviewDeltaZHeight = PreviewDeltaZHeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.UpdateDeltaHeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewDelta                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SignOfFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlaceableBeRaised_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::UpdateDeltaHeight(double Delta, double NewDelta, double CallFunc_SignOfFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_CanPlaceableBeRaised_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "UpdateDeltaHeight");

	Params::ABPTA_Placeable_C_UpdateDeltaHeight_Params Parms{};

	Parms.Delta = Delta;
	Parms.NewDelta = NewDelta;
	Parms.CallFunc_SignOfFloat_ReturnValue = CallFunc_SignOfFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_CanPlaceableBeRaised_ReturnValue = CallFunc_CanPlaceableBeRaised_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.UpdateDeltaRotation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::UpdateDeltaRotation(double AxisValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "UpdateDeltaRotation");

	Params::ABPTA_Placeable_C_UpdateDeltaRotation_Params Parms{};

	Parms.AxisValue = AxisValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ConfirmAndSendTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// class UAkComponent*                Ak_Component                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SpawnedActor                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetPlacementTargetData_TargetData                       (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetInitialPlacementTargetData_TargetData                (None)
// class UObject*                     CallFunc_SpawnPlaceableObject_SpawnedPlaceable                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, class UAkComponent* Ak_Component, class AActor* SpawnedActor, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, bool CallFunc_IsValid_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTargetData_TargetData, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetInitialPlacementTargetData_TargetData, class UObject* CallFunc_SpawnPlaceableObject_SpawnedPlaceable, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ConfirmAndSendTargetData");

	Params::ABPTA_Placeable_C_ConfirmAndSendTargetData_Params Parms{};

	Parms.Ak_Component = Ak_Component;
	Parms.SpawnedActor = SpawnedActor;
	Parms.TargetDataHandle = TargetDataHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_GetPlacementTargetData_TargetData = CallFunc_GetPlacementTargetData_TargetData;
	Parms.CallFunc_GetInitialPlacementTargetData_TargetData = CallFunc_GetInitialPlacementTargetData_TargetData;
	Parms.CallFunc_SpawnPlaceableObject_SpawnedPlaceable = CallFunc_SpawnPlaceableObject_SpawnedPlaceable;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_Placeable.BPTA_Placeable_C.InitializePreviewActor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetObjectTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializePlacementState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetPreviewRotation_Angle_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::InitializePreviewActor(bool CallFunc_HasAuthority_ReturnValue, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, bool CallFunc_IsServer_ReturnValue, const struct FTransform& CallFunc_GetObjectTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_InitializePlacementState_ReturnValue, double CallFunc_SetPreviewRotation_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "InitializePreviewActor");

	Params::ABPTA_Placeable_C_InitializePreviewActor_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetObjectTransform_ReturnValue = CallFunc_GetObjectTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_InitializePlacementState_ReturnValue = CallFunc_InitializePlacementState_ReturnValue;
	Parms.CallFunc_SetPreviewRotation_Angle_ImplicitCast = CallFunc_SetPreviewRotation_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.SetPreviewRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAxis_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAxis_Angle_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PreviewDeltaRotationZ_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::SetPreviewRotation(double Angle, float CallFunc_ClampAxis_ReturnValue, float CallFunc_ClampAxis_Angle_ImplicitCast, double K2Node_VariableSet_PreviewDeltaRotationZ_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "SetPreviewRotation");

	Params::ABPTA_Placeable_C_SetPreviewRotation_Params Parms{};

	Parms.Angle = Angle;
	Parms.CallFunc_ClampAxis_ReturnValue = CallFunc_ClampAxis_ReturnValue;
	Parms.CallFunc_ClampAxis_Angle_ImplicitCast = CallFunc_ClampAxis_Angle_ImplicitCast;
	Parms.K2Node_VariableSet_PreviewDeltaRotationZ_ImplicitCast = K2Node_VariableSet_PreviewDeltaRotationZ_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.GetInitialPlacementTargetData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// struct FRotator                    LSpawnRotation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlacementRaytraceHits_OutFoundHits                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_GetPlacementRaytraceHits_OutHitResults                  (ReferenceParm, ContainsInstancedReference)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromTransform_ReturnValue              (None)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromTransform_ReturnValue_1            (None)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::GetInitialPlacementTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FRotator& LSpawnRotation, int32 Temp_int_Array_Index_Variable, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, bool CallFunc_GetPlacementRaytraceHits_OutFoundHits, TArray<struct FHitResult>& CallFunc_GetPlacementRaytraceHits_OutHitResults, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn_1, const struct FHitResult& CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromTransform_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "GetInitialPlacementTargetData");

	Params::ABPTA_Placeable_C_GetInitialPlacementTargetData_Params Parms{};

	Parms.LSpawnRotation = LSpawnRotation;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.CallFunc_GetPlacementRaytraceHits_OutFoundHits = CallFunc_GetPlacementRaytraceHits_OutFoundHits;
	Parms.CallFunc_GetPlacementRaytraceHits_OutHitResults = CallFunc_GetPlacementRaytraceHits_OutHitResults;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn_1 = CallFunc_GetPlacingCharacter_PlayerPawn_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
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
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromTransform_ReturnValue = CallFunc_AbilityTargetDataFromTransform_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromTransform_ReturnValue_1 = CallFunc_AbilityTargetDataFromTransform_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_Placeable.BPTA_Placeable_C.SpawnPlaceableObject
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     SpawnedPlaceable                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::SpawnPlaceableObject(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject** SpawnedPlaceable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "SpawnPlaceableObject");

	Params::ABPTA_Placeable_C_SpawnPlaceableObject_Params Parms{};

	Parms.TargetData = TargetData;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedPlaceable != nullptr)
		*SpawnedPlaceable = Parms.SpawnedPlaceable;

}


// Function BPTA_Placeable.BPTA_Placeable_C.CleanupPlacementPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsPlacementSuccessful                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback K2Node_MakeStruct_StructurePlacementFeedback                     (ContainsInstancedReference)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::CleanupPlacementPreview(bool bIsPlacementSuccessful, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FStructurePlacementFeedback& K2Node_MakeStruct_StructurePlacementFeedback, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "CleanupPlacementPreview");

	Params::ABPTA_Placeable_C_CleanupPlacementPreview_Params Parms{};

	Parms.bIsPlacementSuccessful = bIsPlacementSuccessful;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_StructurePlacementFeedback = K2Node_MakeStruct_StructurePlacementFeedback;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.GetPlacingController
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_PlayerController_C*      Controller                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::GetPlacingController(class ABP_PlayerController_C** Controller, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "GetPlacingController");

	Params::ABPTA_Placeable_C_GetPlacingController_Params Parms{};

	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function BPTA_Placeable.BPTA_Placeable_C.GetPlacingCharacter
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*                  PlayerPawn                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::GetPlacingCharacter(class ACharacter** PlayerPawn, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "GetPlacingCharacter");

	Params::ABPTA_Placeable_C_GetPlacingCharacter_Params Parms{};

	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerPawn != nullptr)
		*PlayerPawn = Parms.PlayerPawn;

}


// Function BPTA_Placeable.BPTA_Placeable_C.UpdatePlacementPreview
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  LPreviewTransform                                                (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        FoundPlacementMessage                                            (Edit, BlueprintVisible)
// bool                               IsValidPlacement                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundPlacementTransform                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTargetDataOrigin_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetPlacementTargetData_TargetData                       (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetPlacingController_Controller                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureWorldInterface>K2Node_DynamicCast_AsStructure_World_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_SetPlacementFeedback_FeedbackData                       (ContainsInstancedReference)
// bool                               CallFunc_SetPlacementFeedback_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::UpdatePlacementPreview(const struct FTransform& LPreviewTransform, class FText FoundPlacementMessage, bool IsValidPlacement, bool FoundPlacementTransform, const struct FTransform& CallFunc_GetTargetDataOrigin_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTargetData_TargetData, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IStructureWorldInterface> K2Node_DynamicCast_AsStructure_World_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FStructurePlacementFeedback& CallFunc_SetPlacementFeedback_FeedbackData, bool CallFunc_SetPlacementFeedback_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "UpdatePlacementPreview");

	Params::ABPTA_Placeable_C_UpdatePlacementPreview_Params Parms{};

	Parms.LPreviewTransform = LPreviewTransform;
	Parms.FoundPlacementMessage = FoundPlacementMessage;
	Parms.IsValidPlacement = IsValidPlacement;
	Parms.FoundPlacementTransform = FoundPlacementTransform;
	Parms.CallFunc_GetTargetDataOrigin_ReturnValue = CallFunc_GetTargetDataOrigin_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlacementTargetData_TargetData = CallFunc_GetPlacementTargetData_TargetData;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlacingController_Controller = CallFunc_GetPlacingController_Controller;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_World_Interface = K2Node_DynamicCast_AsStructure_World_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetPlacementFeedback_FeedbackData = CallFunc_SetPlacementFeedback_FeedbackData;
	Parms.CallFunc_SetPlacementFeedback_ReturnValue = CallFunc_SetPlacementFeedback_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.InpActEvt_InputAction_AdjustStructureHeight_K2Node_EnhancedInputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::InpActEvt_InputAction_AdjustStructureHeight_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "InpActEvt_InputAction_AdjustStructureHeight_K2Node_EnhancedInputActionEvent_3");

	Params::ABPTA_Placeable_C_InpActEvt_InputAction_AdjustStructureHeight_K2Node_EnhancedInputActionEvent_3_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.InpActEvt_InputAction_CancelPlacementMode_K2Node_EnhancedInputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::InpActEvt_InputAction_CancelPlacementMode_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "InpActEvt_InputAction_CancelPlacementMode_K2Node_EnhancedInputActionEvent_2");

	Params::ABPTA_Placeable_C_InpActEvt_InputAction_CancelPlacementMode_K2Node_EnhancedInputActionEvent_2_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.InpActEvt_InputAction_RotateStructure_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::InpActEvt_InputAction_RotateStructure_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "InpActEvt_InputAction_RotateStructure_K2Node_EnhancedInputActionEvent_1");

	Params::ABPTA_Placeable_C_InpActEvt_InputAction_RotateStructure_K2Node_EnhancedInputActionEvent_1_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.InpActEvt_InputAction_Place_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::InpActEvt_InputAction_Place_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "InpActEvt_InputAction_Place_K2Node_EnhancedInputActionEvent_0");

	Params::ABPTA_Placeable_C_InpActEvt_InputAction_Place_K2Node_EnhancedInputActionEvent_0_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ReceiveTick");

	Params::ABPTA_Placeable_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ReceiveStartTargeting
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ReceiveStartTargeting(class UGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ReceiveStartTargeting");

	Params::ABPTA_Placeable_C_ReceiveStartTargeting_Params Parms{};

	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ReceiveCancelTargeting
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPTA_Placeable_C::ReceiveCancelTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ReceiveCancelTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABPTA_Placeable_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ReceiveCleanup
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPTA_Placeable_C::ReceiveCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ReceiveCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Placeable.BPTA_Placeable_C.Async_LoadFromEventData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_Placeable_C::Async_LoadFromEventData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "Async_LoadFromEventData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Placeable.BPTA_Placeable_C.StartPlacing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_Placeable_C::StartPlacing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "StartPlacing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ReceiveEndPlay");

	Params::ABPTA_Placeable_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.ExecuteUbergraph_BPTA_Placeable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlacementCooldownActive_IsCooldownActive              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_2                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_2                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_1                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_1                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_InputActionValueToAxis1D_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue                      (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction                     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlacingCharacter_PlayerPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetPlacingController_Controller                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetInitialPlacementTargetData_TargetData                (None)
// class UObject*                     CallFunc_SpawnPlaceableObject_SpawnedPlaceable                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetPlacingController_Controller_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetPlacingController_Controller_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_IsValidPlacement_PlacementFeedbackData                  (ContainsInstancedReference)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_3                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_3                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateForceUpdateTimer_DeltaTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Placeable_C::ExecuteUbergraph_BPTA_Placeable(int32 EntryPoint, bool CallFunc_IsPlacementCooldownActive_IsCooldownActive, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class UInputAction* Temp_object_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable_1, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UInputAction* Temp_object_Variable_2, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_5, double Temp_real_Variable_6, bool Temp_bool_Variable_1, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, class UGameplayAbility* K2Node_Event_Ability, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetInitialPlacementTargetData_TargetData, class UObject* CallFunc_SpawnPlaceableObject_SpawnedPlaceable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller_1, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller_2, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_PlacementFeedbackData, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double Temp_real_Variable_7, double Temp_real_Variable_8, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double Temp_real_Variable_9, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UInputAction* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue_2, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, double Temp_real_Variable_9, double Temp_real_Variable_8, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1, double CallFunc_UpdateForceUpdateTimer_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "ExecuteUbergraph_BPTA_Placeable");

	Params::ABPTA_Placeable_C_ExecuteUbergraph_BPTA_Placeable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPlacementCooldownActive_IsCooldownActive = CallFunc_IsPlacementCooldownActive_IsCooldownActive;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_2 = K2Node_EnhancedInputActionEvent_ActionValue_2;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_2 = K2Node_EnhancedInputActionEvent_ElapsedTime_2;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_2 = K2Node_EnhancedInputActionEvent_TriggeredTime_2;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_2 = K2Node_EnhancedInputActionEvent_SourceAction_2;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_1 = K2Node_EnhancedInputActionEvent_ActionValue_1;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_1 = K2Node_EnhancedInputActionEvent_ElapsedTime_1;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_1 = K2Node_EnhancedInputActionEvent_TriggeredTime_1;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_1 = K2Node_EnhancedInputActionEvent_SourceAction_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Conv_InputActionValueToAxis1D_ReturnValue = CallFunc_Conv_InputActionValueToAxis1D_ReturnValue;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = K2Node_EnhancedInputActionEvent_ActionValue;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_1 = CallFunc_Conv_InputActionValueToBool_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;
	Parms.CallFunc_GetPlacingCharacter_PlayerPawn = CallFunc_GetPlacingCharacter_PlayerPawn;
	Parms.CallFunc_GetPlacingController_Controller = CallFunc_GetPlacingController_Controller;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInitialPlacementTargetData_TargetData = CallFunc_GetInitialPlacementTargetData_TargetData;
	Parms.CallFunc_SpawnPlaceableObject_SpawnedPlaceable = CallFunc_SpawnPlaceableObject_SpawnedPlaceable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlacingController_Controller_1 = CallFunc_GetPlacingController_Controller_1;
	Parms.CallFunc_GetPlacingController_Controller_2 = CallFunc_GetPlacingController_Controller_2;
	Parms.CallFunc_IsValidPlacement_PlacementFeedbackData = CallFunc_IsValidPlacement_PlacementFeedbackData;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_3 = K2Node_EnhancedInputActionEvent_ActionValue_3;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_3 = K2Node_EnhancedInputActionEvent_ElapsedTime_3;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_3 = K2Node_EnhancedInputActionEvent_TriggeredTime_3;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_3 = K2Node_EnhancedInputActionEvent_SourceAction_3;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1 = CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1;
	Parms.CallFunc_UpdateForceUpdateTimer_DeltaTime_ImplicitCast = CallFunc_UpdateForceUpdateTimer_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_Placeable.BPTA_Placeable_C.OnPlaceableClassLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_Placeable_C::OnPlaceableClassLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Placeable_C", "OnPlaceableClassLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


