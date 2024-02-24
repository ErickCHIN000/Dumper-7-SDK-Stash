#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SophiaPlayerState.BP_SophiaPlayerState_C
// (Actor)

class UClass* ABP_SophiaPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SophiaPlayerState_C");

	return Clss;
}


// BP_SophiaPlayerState_C BP_SophiaPlayerState.Default__BP_SophiaPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SophiaPlayerState_C* ABP_SophiaPlayerState_C::GetDefaultObj()
{
	static class ABP_SophiaPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SophiaPlayerState_C*>(ABP_SophiaPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SophiaPlayerState.BP_SophiaPlayerState_C.SendServerInviteToPartyMemebers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SophiaPlayerState_C::SendServerInviteToPartyMemebers(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaPlayerState_C", "SendServerInviteToPartyMemebers");

	Params::ABP_SophiaPlayerState_C_SendServerInviteToPartyMemebers_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaPlayerState.BP_SophiaPlayerState_C.Server_SendServerInviteToPartyMemebers
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SophiaPlayerState_C::Server_SendServerInviteToPartyMemebers(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaPlayerState_C", "Server_SendServerInviteToPartyMemebers");

	Params::ABP_SophiaPlayerState_C_Server_SendServerInviteToPartyMemebers_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaPlayerState.BP_SophiaPlayerState_C.OnInviteSent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SophiaPlayerState_C::OnInviteSent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaPlayerState_C", "OnInviteSent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaPlayerState.BP_SophiaPlayerState_C.OnInviteRecieved
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SophiaPlayerState_C::OnInviteRecieved(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaPlayerState_C", "OnInviteRecieved");

	Params::ABP_SophiaPlayerState_C_OnInviteRecieved_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaPlayerState.BP_SophiaPlayerState_C.BP_AskTravelWithParty
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      IP                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SophiaPlayerState_C::BP_AskTravelWithParty(const class FString& IP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaPlayerState_C", "BP_AskTravelWithParty");

	Params::ABP_SophiaPlayerState_C_BP_AskTravelWithParty_Params Parms{};

	Parms.IP = IP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaPlayerState.BP_SophiaPlayerState_C.BPI_AskSolveTogether
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASophiaPlayerState*          OtherPlayer                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SophiaPlayerState_C::BPI_AskSolveTogether(class ASophiaPlayerState* OtherPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaPlayerState_C", "BPI_AskSolveTogether");

	Params::ABP_SophiaPlayerState_C_BPI_AskSolveTogether_Params Parms{};

	Parms.OtherPlayer = OtherPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaPlayerState.BP_SophiaPlayerState_C.ExecuteUbergraph_BP_SophiaPlayerState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaPlayerState*          K2Node_Event_OtherPlayer                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_AskSolveTogether_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ASophiaPlayerState*>  CallFunc_GetPartyMembers_ReturnValue                             (ReferenceParm)
// class ASophiaPlayerState*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaPlayerState_C*     K2Node_DynamicCast_AsBP_Sophia_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_ServerTravelInvite_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_IP                                                  (ZeroConstructor, HasGetValueTypeHash)

void ABP_SophiaPlayerState_C::ExecuteUbergraph_BP_SophiaPlayerState(int32 EntryPoint, class ASophiaPlayerState* K2Node_Event_OtherPlayer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& K2Node_CustomEvent_ID_2, const class FString& K2Node_CustomEvent_ID_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_ID, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UWBP_AskSolveTogether_C* CallFunc_Create_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class ASophiaPlayerState*>& CallFunc_GetPartyMembers_ReturnValue, class ASophiaPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UWBP_ServerTravelInvite_C* CallFunc_Create_ReturnValue_1, const class FString& K2Node_Event_IP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaPlayerState_C", "ExecuteUbergraph_BP_SophiaPlayerState");

	Params::ABP_SophiaPlayerState_C_ExecuteUbergraph_BP_SophiaPlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherPlayer = K2Node_Event_OtherPlayer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_ID_2 = K2Node_CustomEvent_ID_2;
	Parms.K2Node_CustomEvent_ID_1 = K2Node_CustomEvent_ID_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_1 = K2Node_DynamicCast_AsSophia_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Player_State = K2Node_DynamicCast_AsBP_Sophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Event_IP = K2Node_Event_IP;

	UObject::ProcessEvent(Func, &Parms);

}

}


