#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C
// (Actor)

class UClass* ABP_LazyWorkers_Worker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LazyWorkers_Worker_C");

	return Clss;
}


// BP_LazyWorkers_Worker_C BP_LazyWorkers_Worker.Default__BP_LazyWorkers_Worker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LazyWorkers_Worker_C* ABP_LazyWorkers_Worker_C::GetDefaultObj()
{
	static class ABP_LazyWorkers_Worker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LazyWorkers_Worker_C*>(ABP_LazyWorkers_Worker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.UnhideLazyWorker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LazyWorkers_Worker_C::UnhideLazyWorker(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item_2, class UMaterialInterface* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "UnhideLazyWorker");

	Params::ABP_LazyWorkers_Worker_C_UnhideLazyWorker_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.OnRep_HasWorker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_Worker_C::OnRep_HasWorker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "OnRep_HasWorker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_Worker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_Worker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_LazyWorkers_Worker_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_LazyWorkers_Worker_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.SpawnNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_Worker_C::SpawnNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "SpawnNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LazyWorkers_Worker_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "ReceiveEndPlay");

	Params::ABP_LazyWorkers_Worker_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.GetFetchedNPCAppearance
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GGNPC_Humanoid_C*        FetchedNPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LazyWorkers_Worker_C::GetFetchedNPCAppearance(class ABP_GGNPC_Humanoid_C* FetchedNPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "GetFetchedNPCAppearance");

	Params::ABP_LazyWorkers_Worker_C_GetFetchedNPCAppearance_Params Parms{};

	Parms.FetchedNPC = FetchedNPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.ExecuteUbergraph_BP_LazyWorkers_Worker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsCompNPC_IsNPC                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompNPC_IsOverlapComp                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGNPC*                      CallFunc_IsCompNPC_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GGNPC_Humanoid_C*        K2Node_DynamicCast_AsBP_GGNPC_Humanoid                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetLatestInstigator_OutInteractionType                  (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetLatestInstigator_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasAppearanceGeneratedWithTag_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasAppearanceGeneratedWithTag_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GGNPC_Humanoid_C*        K2Node_CustomEvent_FetchedNPC                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccessoryElement           CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetNPCAppearance_TrimmedAccessories                     (ReferenceParm)
// TArray<class FString>              CallFunc_GetNPCAppearance_ReturnValue                            (ReferenceParm)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGGNamedActorInterface>CallFunc_GetGoatSimName_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetGoatSimName_ReturnValue                              (None)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_1                              (ReferenceParm)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_2                              (ReferenceParm)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_3                              (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGNPC*                      CallFunc_SpawnCivilianNPC_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGGNamedActorInterface>CallFunc_SetGoatSimName_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGoatSimName_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LazyWorkers_Worker_C::ExecuteUbergraph_BP_LazyWorkers_Worker(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsCompNPC_IsNPC, bool CallFunc_IsCompNPC_IsOverlapComp, class AGGNPC* CallFunc_IsCompNPC_ReturnValue, class ABP_GGNPC_Humanoid_C* K2Node_DynamicCast_AsBP_GGNPC_Humanoid, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_GetLatestInstigator_OutInteractionType, class APawn* CallFunc_GetLatestInstigator_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_WasAppearanceGeneratedWithTag_ReturnValue, bool CallFunc_WasAppearanceGeneratedWithTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_GGNPC_Humanoid_C* K2Node_CustomEvent_FetchedNPC, const struct FAccessoryElement& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_2, TArray<class FString>& CallFunc_GetNPCAppearance_TrimmedAccessories, TArray<class FString>& CallFunc_GetNPCAppearance_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TScriptInterface<class IGGNamedActorInterface> CallFunc_GetGoatSimName_self_CastInput, class FText CallFunc_GetGoatSimName_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AGGNPC* CallFunc_SpawnCivilianNPC_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IGGNamedActorInterface> CallFunc_SetGoatSimName_self_CastInput, bool CallFunc_SetGoatSimName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "ExecuteUbergraph_BP_LazyWorkers_Worker");

	Params::ABP_LazyWorkers_Worker_C_ExecuteUbergraph_BP_LazyWorkers_Worker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_IsCompNPC_IsNPC = CallFunc_IsCompNPC_IsNPC;
	Parms.CallFunc_IsCompNPC_IsOverlapComp = CallFunc_IsCompNPC_IsOverlapComp;
	Parms.CallFunc_IsCompNPC_ReturnValue = CallFunc_IsCompNPC_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GGNPC_Humanoid = K2Node_DynamicCast_AsBP_GGNPC_Humanoid;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLatestInstigator_OutInteractionType = CallFunc_GetLatestInstigator_OutInteractionType;
	Parms.CallFunc_GetLatestInstigator_ReturnValue = CallFunc_GetLatestInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_WasAppearanceGeneratedWithTag_ReturnValue = CallFunc_WasAppearanceGeneratedWithTag_ReturnValue;
	Parms.CallFunc_WasAppearanceGeneratedWithTag_ReturnValue_1 = CallFunc_WasAppearanceGeneratedWithTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CustomEvent_FetchedNPC = K2Node_CustomEvent_FetchedNPC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetNPCAppearance_TrimmedAccessories = CallFunc_GetNPCAppearance_TrimmedAccessories;
	Parms.CallFunc_GetNPCAppearance_ReturnValue = CallFunc_GetNPCAppearance_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_GetGoatSimName_self_CastInput = CallFunc_GetGoatSimName_self_CastInput;
	Parms.CallFunc_GetGoatSimName_ReturnValue = CallFunc_GetGoatSimName_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue_1 = CallFunc_GetMaterials_ReturnValue_1;
	Parms.CallFunc_GetMaterials_ReturnValue_2 = CallFunc_GetMaterials_ReturnValue_2;
	Parms.CallFunc_GetMaterials_ReturnValue_3 = CallFunc_GetMaterials_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnCivilianNPC_ReturnValue = CallFunc_SpawnCivilianNPC_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetGoatSimName_self_CastInput = CallFunc_SetGoatSimName_self_CastInput;
	Parms.CallFunc_SetGoatSimName_ReturnValue = CallFunc_SetGoatSimName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_Worker.BP_LazyWorkers_Worker_C.LazyWorkerWorkingDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_Worker_C::LazyWorkerWorkingDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_Worker_C", "LazyWorkerWorkingDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


