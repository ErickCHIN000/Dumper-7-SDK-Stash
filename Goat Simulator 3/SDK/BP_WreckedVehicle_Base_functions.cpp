#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C
// (Actor)

class UClass* ABP_WreckedVehicle_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WreckedVehicle_Base_C");

	return Clss;
}


// BP_WreckedVehicle_Base_C BP_WreckedVehicle_Base.Default__BP_WreckedVehicle_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WreckedVehicle_Base_C* ABP_WreckedVehicle_Base_C::GetDefaultObj()
{
	static class ABP_WreckedVehicle_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WreckedVehicle_Base_C*>(ABP_WreckedVehicle_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WreckedVehicle_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_WreckedVehicle_Base_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_WreckedVehicle_Base_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WreckedVehicle_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.StaticMeshUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_WreckedVehicle_Base_C::StaticMeshUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "StaticMeshUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WreckedVehicle_Base_C::BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_WreckedVehicle_Base_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WreckedVehicle_Base_C::BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature");

	Params::ABP_WreckedVehicle_Base_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.DisableSmokeFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WreckedVehicle_Base_C::DisableSmokeFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "DisableSmokeFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C.ExecuteUbergraph_BP_WreckedVehicle_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PActor_DebrisShard_Base_C*K2Node_DynamicCast_AsBP_PActor_Debris_Shard_Base                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WreckedVehicle_Base_C::ExecuteUbergraph_BP_WreckedVehicle_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_VLerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class ABP_PActor_DebrisShard_Base_C* K2Node_DynamicCast_AsBP_PActor_Debris_Shard_Base, bool K2Node_DynamicCast_bSuccess, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WreckedVehicle_Base_C", "ExecuteUbergraph_BP_WreckedVehicle_Base");

	Params::ABP_WreckedVehicle_Base_C_ExecuteUbergraph_BP_WreckedVehicle_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PActor_Debris_Shard_Base = K2Node_DynamicCast_AsBP_PActor_Debris_Shard_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


