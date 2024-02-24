#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C
// (Actor)

class UClass* ABP_PickableItem_AIHand_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickableItem_AIHand_00_C");

	return Clss;
}


// BP_PickableItem_AIHand_00_C BP_PickableItem_AIHand_00.Default__BP_PickableItem_AIHand_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickableItem_AIHand_00_C* ABP_PickableItem_AIHand_00_C::GetDefaultObj()
{
	static class ABP_PickableItem_AIHand_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickableItem_AIHand_00_C*>(ABP_PickableItem_AIHand_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.InitAIHandPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AIOwnerName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PickableItem_AIHand_00_C::InitAIHandPickup(const class FString& AIOwnerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "InitAIHandPickup");

	Params::ABP_PickableItem_AIHand_00_C_InitAIHandPickup_Params Parms{};

	Parms.AIOwnerName = AIOwnerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.InternalOnInteractionLockedStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PickableItem_AIHand_00_C::InternalOnInteractionLockedStateChanged(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "InternalOnInteractionLockedStateChanged");

	Params::ABP_PickableItem_AIHand_00_C_InternalOnInteractionLockedStateChanged_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.PutItemInHand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGAICharacter*              AICharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PickableItem_AIHand_00_C::PutItemInHand(class ACGAICharacter* AICharacter, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "PutItemInHand");

	Params::ABP_PickableItem_AIHand_00_C_PutItemInHand_Params Parms{};

	Parms.AICharacter = AICharacter;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PickableItem_AIHand_00_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.RestorePickablePositionToOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickableItem_AIHand_00_C::RestorePickablePositionToOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "RestorePickablePositionToOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.BindOwnerVisibilityChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickableItem_AIHand_00_C::BindOwnerVisibilityChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "BindOwnerVisibilityChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.UpdateVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PickableItem_AIHand_00_C::UpdateVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "UpdateVisibility");

	Params::ABP_PickableItem_AIHand_00_C_UpdateVisibility_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.UnbindOwnerVisibilityChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickableItem_AIHand_00_C::UnbindOwnerVisibilityChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "UnbindOwnerVisibilityChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PickableItem_AIHand_00_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C.ExecuteUbergraph_BP_PickableItem_AIHand_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindActorByName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NewVisibility                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_ch_npc_00_C*             K2Node_DynamicCast_AsBa_Ch_Npc_00                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_ch_npc_00_C*             K2Node_DynamicCast_AsBa_Ch_Npc_00_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PickableItem_AIHand_00_C::ExecuteUbergraph_BP_PickableItem_AIHand_00(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class AActor* CallFunc_FindActorByName_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_NewVisibility, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_AIHand_00_C", "ExecuteUbergraph_BP_PickableItem_AIHand_00");

	Params::ABP_PickableItem_AIHand_00_C_ExecuteUbergraph_BP_PickableItem_AIHand_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_FindActorByName_ReturnValue = CallFunc_FindActorByName_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewVisibility = K2Node_CustomEvent_NewVisibility;
	Parms.K2Node_DynamicCast_AsBa_Ch_Npc_00 = K2Node_DynamicCast_AsBa_Ch_Npc_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Ch_Npc_00_1 = K2Node_DynamicCast_AsBa_Ch_Npc_00_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


