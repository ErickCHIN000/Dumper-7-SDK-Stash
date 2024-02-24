#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_DeathChest.BP_Structure_DeathChest_C
// (Actor)

class UClass* ABP_Structure_DeathChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_DeathChest_C");

	return Clss;
}


// BP_Structure_DeathChest_C BP_Structure_DeathChest.Default__BP_Structure_DeathChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_DeathChest_C* ABP_Structure_DeathChest_C::GetDefaultObj()
{
	static class ABP_Structure_DeathChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_DeathChest_C*>(ABP_Structure_DeathChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_DeathChest.BP_Structure_DeathChest_C.SetOwningPlayerController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 OwningController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       OwningPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetOwningPlayerInfo_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerNameFromPawn_PlayerName                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerID_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerStateFromId_PlayerState                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCachedActorData            CallFunc_GetLatestDamageSource_ReturnValue                       (ConstParm)
// class FString                      CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_DeathChest_C::SetOwningPlayerController(class AController* OwningController, class APawn* OwningPawn, bool CallFunc_SetOwningPlayerInfo_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, const class FString& CallFunc_GetOwningPlayerID_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, const struct FCachedActorData& CallFunc_GetLatestDamageSource_ReturnValue, const class FString& CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_DeathChest_C", "SetOwningPlayerController");

	Params::ABP_Structure_DeathChest_C_SetOwningPlayerController_Params Parms{};

	Parms.OwningController = OwningController;
	Parms.OwningPawn = OwningPawn;
	Parms.CallFunc_SetOwningPlayerInfo_ReturnValue = CallFunc_SetOwningPlayerInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerNameFromPawn_PlayerName = CallFunc_GetPlayerNameFromPawn_PlayerName;
	Parms.CallFunc_GetOwningPlayerID_ReturnValue = CallFunc_GetOwningPlayerID_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromId_PlayerState = CallFunc_GetPlayerStateFromId_PlayerState;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLatestDamageSource_ReturnValue = CallFunc_GetLatestDamageSource_ReturnValue;
	Parms.CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath = CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_DeathChest.BP_Structure_DeathChest_C.Handle Ownership Updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      OldOwningPlayerID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       OwningPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 OwningController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FText                        L_CauseOfDeath                                                   (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerNameFromPawn_PlayerName                        (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetOwningPlayerController_ReturnValue                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerID_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerStateFromId_PlayerState                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCachedActorData            CallFunc_GetLatestDamageSource_ReturnValue                       (ConstParm)
// class FString                      CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath                 (ZeroConstructor, HasGetValueTypeHash)

void ABP_Structure_DeathChest_C::Handle_Ownership_Updated(class AActor* Actor, const class FString& OldOwningPlayerID, class APawn* OwningPawn, class AController* OwningController, class FText L_CauseOfDeath, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetOwningPlayerID_ReturnValue, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, const struct FCachedActorData& CallFunc_GetLatestDamageSource_ReturnValue, const class FString& CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_DeathChest_C", "Handle Ownership Updated");

	Params::ABP_Structure_DeathChest_C_Handle_Ownership_Updated_Params Parms{};

	Parms.Actor = Actor;
	Parms.OldOwningPlayerID = OldOwningPlayerID;
	Parms.OwningPawn = OwningPawn;
	Parms.OwningController = OwningController;
	Parms.L_CauseOfDeath = L_CauseOfDeath;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerNameFromPawn_PlayerName = CallFunc_GetPlayerNameFromPawn_PlayerName;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerID_ReturnValue = CallFunc_GetOwningPlayerID_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromId_PlayerState = CallFunc_GetPlayerStateFromId_PlayerState;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLatestDamageSource_ReturnValue = CallFunc_GetLatestDamageSource_ReturnValue;
	Parms.CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath = CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_DeathChest.BP_Structure_DeathChest_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_DeathChest_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_DeathChest_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_DeathChest.BP_Structure_DeathChest_C.ExecuteUbergraph_BP_Structure_DeathChest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetAllItems_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetNumberItemEntries_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberItemEntries_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathChestSpawner_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_SetInterfacePropertyByName_Value_CastInput              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Structure_DeathChest_C::ExecuteUbergraph_BP_Structure_DeathChest(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetNumberItemEntries_self_CastInput, int32 CallFunc_GetNumberItemEntries_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DeathChestSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_SetInterfacePropertyByName_Value_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_DeathChest_C", "ExecuteUbergraph_BP_Structure_DeathChest");

	Params::ABP_Structure_DeathChest_C_ExecuteUbergraph_BP_Structure_DeathChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAllItems_self_CastInput = CallFunc_GetAllItems_self_CastInput;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNumberItemEntries_self_CastInput = CallFunc_GetNumberItemEntries_self_CastInput;
	Parms.CallFunc_GetNumberItemEntries_ReturnValue = CallFunc_GetNumberItemEntries_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SetInterfacePropertyByName_Value_CastInput = CallFunc_SetInterfacePropertyByName_Value_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


