#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C
// (None)

class UClass* UBP_RealmHistory_Persistence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RealmHistory_Persistence_C");

	return Clss;
}


// BP_RealmHistory_Persistence_C BP_RealmHistory_Persistence.Default__BP_RealmHistory_Persistence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RealmHistory_Persistence_C* UBP_RealmHistory_Persistence_C::GetDefaultObj()
{
	static class UBP_RealmHistory_Persistence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RealmHistory_Persistence_C*>(UBP_RealmHistory_Persistence_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.OnRep_RecentlyPlayedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RealmHistory_Persistence_C::OnRep_RecentlyPlayedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "OnRep_RecentlyPlayedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.OnRep_RespiteLevelLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RealmHistory_Persistence_C::OnRep_RespiteLevelLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "OnRep_RespiteLevelLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.StoreRealmRespiteInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RealmHistory_Persistence_C::StoreRealmRespiteInfo(class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "StoreRealmRespiteInfo");

	Params::UBP_RealmHistory_Persistence_C_StoreRealmRespiteInfo_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.RegisterVisitedRealm
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Persisted_RealmVisitedInfoRealmInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RealmHistory_Persistence_C::RegisterVisitedRealm(struct FS_Persisted_RealmVisitedInfo& RealmInfo, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "RegisterVisitedRealm");

	Params::UBP_RealmHistory_Persistence_C_RegisterVisitedRealm_Params Parms{};

	Parms.RealmInfo = RealmInfo;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.Server_RegisterVisitedRealm
// (Net, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Persisted_RealmVisitedInfoRealmInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBP_RealmHistory_Persistence_C::Server_RegisterVisitedRealm(struct FS_Persisted_RealmVisitedInfo& RealmInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "Server_RegisterVisitedRealm");

	Params::UBP_RealmHistory_Persistence_C_Server_RegisterVisitedRealm_Params Parms{};

	Parms.RealmInfo = RealmInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.Server_StoreRecentlyPlayedWithPlayer
// (Net, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ProfileId                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UBP_RealmHistory_Persistence_C::Server_StoreRecentlyPlayedWithPlayer(class FString& ProfileId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "Server_StoreRecentlyPlayedWithPlayer");

	Params::UBP_RealmHistory_Persistence_C_Server_StoreRecentlyPlayedWithPlayer_Params Parms{};

	Parms.ProfileId = ProfileId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.ExecuteUbergraph_BP_RealmHistory_Persistence
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoK2Node_CustomEvent_RealmInfo                                     (ConstParm, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ProfileID                                     (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RealmHistory_Persistence_C::ExecuteUbergraph_BP_RealmHistory_Persistence(int32 EntryPoint, const struct FS_Persisted_RealmVisitedInfo& K2Node_CustomEvent_RealmInfo, const class FString& K2Node_CustomEvent_ProfileID, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "ExecuteUbergraph_BP_RealmHistory_Persistence");

	Params::UBP_RealmHistory_Persistence_C_ExecuteUbergraph_BP_RealmHistory_Persistence_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RealmInfo = K2Node_CustomEvent_RealmInfo;
	Parms.K2Node_CustomEvent_ProfileID = K2Node_CustomEvent_ProfileID;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.RecentlyPlayedWithUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RealmHistory_Persistence_C::RecentlyPlayedWithUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "RecentlyPlayedWithUpdate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C.StoredRespitePointUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RealmHistory_Persistence_C::StoredRespitePointUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RealmHistory_Persistence_C", "StoredRespitePointUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


