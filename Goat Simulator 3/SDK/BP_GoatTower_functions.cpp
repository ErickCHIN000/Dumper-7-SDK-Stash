#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GoatTower.BP_GoatTower_C
// (Actor)

class UClass* ABP_GoatTower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GoatTower_C");

	return Clss;
}


// BP_GoatTower_C BP_GoatTower.Default__BP_GoatTower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GoatTower_C* ABP_GoatTower_C::GetDefaultObj()
{
	static class ABP_GoatTower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GoatTower_C*>(ABP_GoatTower_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GoatTower.BP_GoatTower_C.TeleportAllPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPlayerController*> CallFunc_GetAllGGPlayerControllers_ReturnValue                   (ReferenceParm)
// class AGGPlayerController*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetGoatFromActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::TeleportAllPlayers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AGGGoat* CallFunc_GetGoatFromActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "TeleportAllPlayers");

	Params::ABP_GoatTower_C_TeleportAllPlayers_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllGGPlayerControllers_ReturnValue = CallFunc_GetAllGGPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGoatFromActor_ReturnValue = CallFunc_GetGoatFromActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.Client_HandleBegingOverlap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         Comp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllowedToTeleport_IsAllowed                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::Client_HandleBegingOverlap(class AActor* Actor, class UPrimitiveComponent* Comp, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue, bool CallFunc_IsAllowedToTeleport_IsAllowed, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "Client_HandleBegingOverlap");

	Params::ABP_GoatTower_C_Client_HandleBegingOverlap_Params Parms{};

	Parms.Actor = Actor;
	Parms.Comp = Comp;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue = CallFunc_GetPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_IsAllowedToTeleport_IsAllowed = CallFunc_IsAllowedToTeleport_IsAllowed;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.IsAllowedToTeleport
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Comp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAllowed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsGoat                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllowedToTeleport_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::IsAllowedToTeleport(class UPrimitiveComponent* Comp, bool* IsAllowed, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAllowedToTeleport_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "IsAllowedToTeleport");

	Params::ABP_GoatTower_C_IsAllowedToTeleport_Params Parms{};

	Parms.Comp = Comp;
	Parms.CallFunc_IsCompGoat_IsGoat = CallFunc_IsCompGoat_IsGoat;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent = CallFunc_IsCompGoat_IsCapsuleComponent;
	Parms.CallFunc_IsCompGoat_IsMeshComponent = CallFunc_IsCompGoat_IsMeshComponent;
	Parms.CallFunc_IsCompGoat_ReturnValue = CallFunc_IsCompGoat_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue = CallFunc_GetPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsAllowedToTeleport_ReturnValue = CallFunc_IsAllowedToTeleport_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAllowed != nullptr)
		*IsAllowed = Parms.IsAllowed;

}


// Function BP_GoatTower.BP_GoatTower_C.GetGoatTowerEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class ABP_Event_GoatTower_C>GoatTowerEvent                                                   (Parm, OutParm, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UGGQuestManager*             CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGQuestBase*                CallFunc_GetQuestFromID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Event_GoatTower_C*       K2Node_DynamicCast_AsBP_Event_Goat_Tower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_Event_GoatTower_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::GetGoatTowerEvent(TSoftObjectPtr<class ABP_Event_GoatTower_C>* GoatTowerEvent, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGGQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGGQuestBase* CallFunc_GetQuestFromID_ReturnValue, class ABP_Event_GoatTower_C* K2Node_DynamicCast_AsBP_Event_Goat_Tower, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class ABP_Event_GoatTower_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GetGoatTowerEvent");

	Params::ABP_GoatTower_C_GetGoatTowerEvent_Params Parms{};

	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestFromID_ReturnValue = CallFunc_GetQuestFromID_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Event_Goat_Tower = K2Node_DynamicCast_AsBP_Event_Goat_Tower;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GoatTowerEvent != nullptr)
		*GoatTowerEvent = Parms.GoatTowerEvent;

}


// Function BP_GoatTower.BP_GoatTower_C.GoatTowerEventIncomplete
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Incomplete                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_Event_GoatTower_C>CallFunc_GetGoatTowerEvent_GoatTowerEvent                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Event_GoatTower_C*       K2Node_DynamicCast_AsBP_Event_Goat_Tower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInitializedFully_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ConsideredCompletedInWorld_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::GoatTowerEventIncomplete(bool* Incomplete, TSoftObjectPtr<class ABP_Event_GoatTower_C> CallFunc_GetGoatTowerEvent_GoatTowerEvent, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_Event_GoatTower_C* K2Node_DynamicCast_AsBP_Event_Goat_Tower, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInitializedFully_ReturnValue, bool CallFunc_ConsideredCompletedInWorld_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GoatTowerEventIncomplete");

	Params::ABP_GoatTower_C_GoatTowerEventIncomplete_Params Parms{};

	Parms.CallFunc_GetGoatTowerEvent_GoatTowerEvent = CallFunc_GetGoatTowerEvent_GoatTowerEvent;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Event_Goat_Tower = K2Node_DynamicCast_AsBP_Event_Goat_Tower;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInitializedFully_ReturnValue = CallFunc_IsInitializedFully_ReturnValue;
	Parms.CallFunc_ConsideredCompletedInWorld_ReturnValue = CallFunc_ConsideredCompletedInWorld_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Incomplete != nullptr)
		*Incomplete = Parms.Incomplete;

}


// Function BP_GoatTower.BP_GoatTower_C.IsPrimaryTower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGGoatTowerSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPrimaryTower_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_C::IsPrimaryTower(class UGGGoatTowerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsPrimaryTower_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "IsPrimaryTower");

	Params::ABP_GoatTower_C_IsPrimaryTower_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsPrimaryTower_ReturnValue = CallFunc_IsPrimaryTower_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower.BP_GoatTower_C.GetMatchingGoatTower
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoatTower*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AGGGoatTower* ABP_GoatTower_C::GetMatchingGoatTower()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GetMatchingGoatTower");

	Params::ABP_GoatTower_C_GetMatchingGoatTower_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower.BP_GoatTower_C.CanBeShownOnRadar
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_C::CanBeShownOnRadar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "CanBeShownOnRadar");

	Params::ABP_GoatTower_C_CanBeShownOnRadar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower.BP_GoatTower_C.GetActorLocationOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_GoatTower_C::GetActorLocationOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GetActorLocationOffset");

	Params::ABP_GoatTower_C_GetActorLocationOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower.BP_GoatTower_C.GetRadarData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRadarCoordinateData        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_GoatTowerEventIncomplete_Incomplete                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPrimaryTower_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FRadarCoordinateData ABP_GoatTower_C::GetRadarData(bool CallFunc_GoatTowerEventIncomplete_Incomplete, bool CallFunc_IsPrimaryTower_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GetRadarData");

	Params::ABP_GoatTower_C_GetRadarData_Params Parms{};

	Parms.CallFunc_GoatTowerEventIncomplete_Incomplete = CallFunc_GoatTowerEventIncomplete_Incomplete;
	Parms.CallFunc_IsPrimaryTower_ReturnValue = CallFunc_IsPrimaryTower_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower.BP_GoatTower_C.GetRadarDisplayName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_GoatTower_C::GetRadarDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GetRadarDisplayName");

	Params::ABP_GoatTower_C_GetRadarDisplayName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower.BP_GoatTower_C.GetRadarIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* ABP_GoatTower_C::GetRadarIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GetRadarIcon");

	Params::ABP_GoatTower_C_GetRadarIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower.BP_GoatTower_C.Toggle Teleport Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewActive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::Toggle_Teleport_Active(bool NewActive, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "Toggle Teleport Active");

	Params::ABP_GoatTower_C_Toggle_Teleport_Active_Params Parms{};

	Parms.NewActive = NewActive;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_GoatTower_C::UserConstructionScript(const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "UserConstructionScript");

	Params::ABP_GoatTower_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.BndEvt__BP_GoatTower_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_GoatTower_C::BndEvt__BP_GoatTower_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "BndEvt__BP_GoatTower_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_GoatTower_C_BndEvt__BP_GoatTower_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.TeleportPlayer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::TeleportPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "TeleportPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.LaunchTeleportedGoat
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::LaunchTeleportedGoat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "LaunchTeleportedGoat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.GoatSynchronisedWithTower
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGGoat*                     SyncingGoat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::GoatSynchronisedWithTower(class AGGGoat* SyncingGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "GoatSynchronisedWithTower");

	Params::ABP_GoatTower_C_GoatSynchronisedWithTower_Params Parms{};

	Parms.SyncingGoat = SyncingGoat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.OnCameraSequenceFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGGoat*                     FinishedForGoat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::OnCameraSequenceFinished(class AGGGoat* FinishedForGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "OnCameraSequenceFinished");

	Params::ABP_GoatTower_C_OnCameraSequenceFinished_Params Parms{};

	Parms.FinishedForGoat = FinishedForGoat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.OnTowerFinishedRising
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::OnTowerFinishedRising()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "OnTowerFinishedRising");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_GoatTower_C_BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature");

	Params::ABP_GoatTower_C_BndEvt__BP_GoatTower_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.ActivateEntranceFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::ActivateEntranceFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "ActivateEntranceFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.ToggleRaiseFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::ToggleRaiseFX(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "ToggleRaiseFX");

	Params::ABP_GoatTower_C_ToggleRaiseFX_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.TeleportPlayerCallbacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadingScreenStage     CurrentStage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::TeleportPlayerCallbacks(class AGGPlayerController* Controller, class AGGGoat* Goat, enum class ELoadingScreenStage CurrentStage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "TeleportPlayerCallbacks");

	Params::ABP_GoatTower_C_TeleportPlayerCallbacks_Params Parms{};

	Parms.Controller = Controller;
	Parms.Goat = Goat;
	Parms.CurrentStage = CurrentStage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_GoatTower_C::BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_GoatTower_C_BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.OnQuestUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGQuestBase*                Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::OnQuestUpdated(class AGGQuestBase* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "OnQuestUpdated");

	Params::ABP_GoatTower_C_OnQuestUpdated_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.OnQuestCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGQuestBase*                Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              OptionalPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::OnQuestCompleted(class AGGQuestBase* Quest, class AGGPlayerState* OptionalPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "OnQuestCompleted");

	Params::ABP_GoatTower_C_OnQuestCompleted_Params Parms{};

	Parms.Quest = Quest;
	Parms.OptionalPlayerState = OptionalPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.PlaySyncUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_C::PlaySyncUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "PlaySyncUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower.BP_GoatTower_C.BndEvt__BP_GoatTower_TeleportTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::BndEvt__BP_GoatTower_TeleportTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "BndEvt__BP_GoatTower_TeleportTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_GoatTower_C_BndEvt__BP_GoatTower_TeleportTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_GoatTower_C_BndEvt__BP_GoatTower_TeleportTriggerAGs_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.ExecuteUbergraph_BP_GoatTower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsCompGoat_IsGoat                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllowedToTeleport_IsAllowed                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TeleportLoc_C*           K2Node_DynamicCast_AsBP_Teleport_Loc                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_SyncingGoat                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FImpulseDamageEvent         K2Node_MakeStruct_ImpulseDamageEvent                             (None)
// class AGGGoat*                     K2Node_Event_FinishedForGoat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyImpulseDamage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         K2Node_CustomEvent_Controller                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadingScreenStage     K2Node_CustomEvent_CurrentStage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABP_TeleportLoc_C*           K2Node_DynamicCast_AsBP_Teleport_Loc_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsGoat_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatGearManager*          CallFunc_GetGearManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllowedToTeleport_IsAllowed_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatGearInfoDataAsset*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGearEquippedInSlot_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatTowerSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenSynchronised_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGQuestBase*                K2Node_CustomEvent_Quest_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGQuestBase*                K2Node_CustomEvent_Quest                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              K2Node_CustomEvent_OptionalPlayerState                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompGoat_IsGoat_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompGoat_IsGoat_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLowEndPlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLowEndPlatform_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_TeleportLoc_C>K2Node_Select_Default                                            (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TeleportLoc_C*           K2Node_DynamicCast_AsBP_Teleport_Loc_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_C::ExecuteUbergraph_BP_GoatTower(int32 EntryPoint, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, bool CallFunc_IsAllowedToTeleport_IsAllowed, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_TeleportLoc_C* K2Node_DynamicCast_AsBP_Teleport_Loc, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class AGGGoat* K2Node_Event_SyncingGoat, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FImpulseDamageEvent& K2Node_MakeStruct_ImpulseDamageEvent, class AGGGoat* K2Node_Event_FinishedForGoat, float CallFunc_ApplyImpulseDamage_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5, bool K2Node_CustomEvent_Active, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_2, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGPlayerController* K2Node_CustomEvent_Controller, class AGGGoat* K2Node_CustomEvent_Goat, enum class ELoadingScreenStage K2Node_CustomEvent_CurrentStage, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABP_TeleportLoc_C* K2Node_DynamicCast_AsBP_Teleport_Loc_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsCompGoat_IsGoat_1, bool CallFunc_IsCompGoat_IsCapsuleComponent_1, bool CallFunc_IsCompGoat_IsMeshComponent_1, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UGGGoatGearManager* CallFunc_GetGearManager_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsAllowedToTeleport_IsAllowed_1, bool CallFunc_HasAuthority_ReturnValue_6, class UGGGoatGearInfoDataAsset* CallFunc_Array_Get_Item, bool CallFunc_HasMatchingGearEquippedInSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class UGGGoatTowerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_7, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_4, bool CallFunc_HasBeenSynchronised_ReturnValue, class AGGQuestBase* K2Node_CustomEvent_Quest_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AGGQuestBase* K2Node_CustomEvent_Quest, class AGGPlayerState* K2Node_CustomEvent_OptionalPlayerState, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool CallFunc_IsCompGoat_IsGoat_2, bool CallFunc_IsCompGoat_IsCapsuleComponent_2, bool CallFunc_IsCompGoat_IsMeshComponent_2, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsCompGoat_IsGoat_3, bool CallFunc_IsCompGoat_IsCapsuleComponent_3, bool CallFunc_IsCompGoat_IsMeshComponent_3, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_3, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_3, bool CallFunc_IsMobilePlatform_ReturnValue_1, bool CallFunc_IsMobilePlatform_ReturnValue_2, bool CallFunc_IsLowEndPlatform_ReturnValue, bool CallFunc_IsLowEndPlatform_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TSoftObjectPtr<class ABP_TeleportLoc_C> K2Node_Select_Default, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class ABP_TeleportLoc_C* K2Node_DynamicCast_AsBP_Teleport_Loc_2, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "ExecuteUbergraph_BP_GoatTower");

	Params::ABP_GoatTower_C_ExecuteUbergraph_BP_GoatTower_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_3 = K2Node_ComponentBoundEvent_OverlappedComponent_3;
	Parms.K2Node_ComponentBoundEvent_OtherActor_3 = K2Node_ComponentBoundEvent_OtherActor_3;
	Parms.K2Node_ComponentBoundEvent_OtherComp_3 = K2Node_ComponentBoundEvent_OtherComp_3;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_3 = K2Node_ComponentBoundEvent_OtherBodyIndex_3;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.CallFunc_IsCompGoat_IsGoat = CallFunc_IsCompGoat_IsGoat;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent = CallFunc_IsCompGoat_IsCapsuleComponent;
	Parms.CallFunc_IsCompGoat_IsMeshComponent = CallFunc_IsCompGoat_IsMeshComponent;
	Parms.CallFunc_IsCompGoat_ReturnValue = CallFunc_IsCompGoat_ReturnValue;
	Parms.CallFunc_IsAllowedToTeleport_IsAllowed = CallFunc_IsAllowedToTeleport_IsAllowed;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue = CallFunc_GetPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetPlayerControllerFromActor_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Teleport_Loc = K2Node_DynamicCast_AsBP_Teleport_Loc;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.K2Node_Event_SyncingGoat = K2Node_Event_SyncingGoat;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_MakeStruct_ImpulseDamageEvent = K2Node_MakeStruct_ImpulseDamageEvent;
	Parms.K2Node_Event_FinishedForGoat = K2Node_Event_FinishedForGoat;
	Parms.CallFunc_ApplyImpulseDamage_ReturnValue = CallFunc_ApplyImpulseDamage_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue_1 = CallFunc_GetPrimaryGGPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_2 = CallFunc_GetLoadedAsset_ReturnValue_2;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_3 = CallFunc_GetLoadedAsset_ReturnValue_3;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.K2Node_CustomEvent_CurrentStage = K2Node_CustomEvent_CurrentStage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsBP_Teleport_Loc_1 = K2Node_DynamicCast_AsBP_Teleport_Loc_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsCompGoat_IsGoat_1 = CallFunc_IsCompGoat_IsGoat_1;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent_1 = CallFunc_IsCompGoat_IsCapsuleComponent_1;
	Parms.CallFunc_IsCompGoat_IsMeshComponent_1 = CallFunc_IsCompGoat_IsMeshComponent_1;
	Parms.CallFunc_IsCompGoat_ReturnValue_1 = CallFunc_IsCompGoat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetGearManager_ReturnValue = CallFunc_GetGearManager_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_IsAllowedToTeleport_IsAllowed_1 = CallFunc_IsAllowedToTeleport_IsAllowed_1;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasMatchingGearEquippedInSlot_ReturnValue = CallFunc_HasMatchingGearEquippedInSlot_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_7 = CallFunc_HasAuthority_ReturnValue_7;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_4 = CallFunc_GetLoadedAsset_ReturnValue_4;
	Parms.CallFunc_HasBeenSynchronised_ReturnValue = CallFunc_HasBeenSynchronised_ReturnValue;
	Parms.K2Node_CustomEvent_Quest_1 = K2Node_CustomEvent_Quest_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.K2Node_CustomEvent_OptionalPlayerState = K2Node_CustomEvent_OptionalPlayerState;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.CallFunc_IsCompGoat_IsGoat_2 = CallFunc_IsCompGoat_IsGoat_2;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent_2 = CallFunc_IsCompGoat_IsCapsuleComponent_2;
	Parms.CallFunc_IsCompGoat_IsMeshComponent_2 = CallFunc_IsCompGoat_IsMeshComponent_2;
	Parms.CallFunc_IsCompGoat_ReturnValue_2 = CallFunc_IsCompGoat_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue_2 = CallFunc_GetPlayerControllerFromActor_ReturnValue_2;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_IsCompGoat_IsGoat_3 = CallFunc_IsCompGoat_IsGoat_3;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent_3 = CallFunc_IsCompGoat_IsCapsuleComponent_3;
	Parms.CallFunc_IsCompGoat_IsMeshComponent_3 = CallFunc_IsCompGoat_IsMeshComponent_3;
	Parms.CallFunc_IsCompGoat_ReturnValue_3 = CallFunc_IsCompGoat_ReturnValue_3;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue_3 = CallFunc_GetPlayerControllerFromActor_ReturnValue_3;
	Parms.CallFunc_IsMobilePlatform_ReturnValue_1 = CallFunc_IsMobilePlatform_ReturnValue_1;
	Parms.CallFunc_IsMobilePlatform_ReturnValue_2 = CallFunc_IsMobilePlatform_ReturnValue_2;
	Parms.CallFunc_IsLowEndPlatform_ReturnValue = CallFunc_IsLowEndPlatform_ReturnValue;
	Parms.CallFunc_IsLowEndPlatform_ReturnValue_1 = CallFunc_IsLowEndPlatform_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Teleport_Loc_2 = K2Node_DynamicCast_AsBP_Teleport_Loc_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.StartedSyncing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::StartedSyncing__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "StartedSyncing__DelegateSignature");

	Params::ABP_GoatTower_C_StartedSyncing__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower.BP_GoatTower_C.HasSynched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_C::HasSynched__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_C", "HasSynched__DelegateSignature");

	Params::ABP_GoatTower_C_HasSynched__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}

}


