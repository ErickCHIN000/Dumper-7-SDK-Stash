#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NMainMenu2.NMainMenu2_C
// (Actor)

class UClass* ANMainMenu2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NMainMenu2_C");

	return Clss;
}


// NMainMenu2_C NMainMenu2.Default__NMainMenu2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANMainMenu2_C* ANMainMenu2_C::GetDefaultObj()
{
	static class ANMainMenu2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANMainMenu2_C*>(ANMainMenu2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NMainMenu2.NMainMenu2_C.ParseConnectionId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Connect_lobby                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ConnectLobbyId                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCommandLine_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Split_LeftS_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS_1                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANMainMenu2_C::ParseConnectionId(bool* Result, class FString* Connect_lobby, const class FString& ConnectLobbyId, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_GetCommandLine_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "ParseConnectionId");

	Params::ANMainMenu2_C_ParseConnectionId_Params Parms{};

	Parms.ConnectLobbyId = ConnectLobbyId;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetCommandLine_ReturnValue = CallFunc_GetCommandLine_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Split_LeftS_1 = CallFunc_Split_LeftS_1;
	Parms.CallFunc_Split_RightS_1 = CallFunc_Split_RightS_1;
	Parms.CallFunc_Split_ReturnValue_1 = CallFunc_Split_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Connect_lobby != nullptr)
		*Connect_lobby = std::move(Parms.Connect_lobby);

}


// Function NMainMenu2.NMainMenu2_C.OnFailure_B301643A46E9D679E0B09FBFAFA230E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANMainMenu2_C::OnFailure_B301643A46E9D679E0B09FBFAFA230E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnFailure_B301643A46E9D679E0B09FBFAFA230E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NMainMenu2.NMainMenu2_C.OnSuccess_B301643A46E9D679E0B09FBFAFA230E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANMainMenu2_C::OnSuccess_B301643A46E9D679E0B09FBFAFA230E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnSuccess_B301643A46E9D679E0B09FBFAFA230E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NMainMenu2.NMainMenu2_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ANMainMenu2_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "InpActEvt_NumPadNine_K2Node_InputKeyEvent_0");

	Params::ANMainMenu2_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NMainMenu2.NMainMenu2_C.OnFailure_CFC0E21541933D6CB40E358748D381C3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineSubsystemFriendInfo>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ANMainMenu2_C::OnFailure_CFC0E21541933D6CB40E358748D381C3(TArray<struct FOnlineSubsystemFriendInfo>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnFailure_CFC0E21541933D6CB40E358748D381C3");

	Params::ANMainMenu2_C_OnFailure_CFC0E21541933D6CB40E358748D381C3_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NMainMenu2.NMainMenu2_C.OnSuccess_CFC0E21541933D6CB40E358748D381C3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineSubsystemFriendInfo>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ANMainMenu2_C::OnSuccess_CFC0E21541933D6CB40E358748D381C3(TArray<struct FOnlineSubsystemFriendInfo>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnSuccess_CFC0E21541933D6CB40E358748D381C3");

	Params::ANMainMenu2_C_OnSuccess_CFC0E21541933D6CB40E358748D381C3_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NMainMenu2.NMainMenu2_C.OnFailure_A2D7BA77487E87B53C2E14AC39682D7A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ANMainMenu2_C::OnFailure_A2D7BA77487E87B53C2E14AC39682D7A(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnFailure_A2D7BA77487E87B53C2E14AC39682D7A");

	Params::ANMainMenu2_C_OnFailure_A2D7BA77487E87B53C2E14AC39682D7A_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NMainMenu2.NMainMenu2_C.OnSuccess_A2D7BA77487E87B53C2E14AC39682D7A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ANMainMenu2_C::OnSuccess_A2D7BA77487E87B53C2E14AC39682D7A(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnSuccess_A2D7BA77487E87B53C2E14AC39682D7A");

	Params::ANMainMenu2_C_OnSuccess_A2D7BA77487E87B53C2E14AC39682D7A_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NMainMenu2.NMainMenu2_C.OnFailure_08BE7A77434503A052FFA68E6049E546
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANMainMenu2_C::OnFailure_08BE7A77434503A052FFA68E6049E546()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnFailure_08BE7A77434503A052FFA68E6049E546");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NMainMenu2.NMainMenu2_C.OnSuccess_08BE7A77434503A052FFA68E6049E546
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANMainMenu2_C::OnSuccess_08BE7A77434503A052FFA68E6049E546()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "OnSuccess_08BE7A77434503A052FFA68E6049E546");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NMainMenu2.NMainMenu2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANMainMenu2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NMainMenu2.NMainMenu2_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANMainMenu2_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "ReceiveEndPlay");

	Params::ANMainMenu2_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NMainMenu2.NMainMenu2_C.ExecuteUbergraph_NMainMenu2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// TArray<struct FOnlineSubsystemFriendInfo>K2Node_CustomEvent_Results_3                                     (ConstParm, ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FOnlineSubsystemFriendInfo>K2Node_CustomEvent_Results_2                                     (ConstParm, ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// TArray<struct FOnlineSubsystemFriendInfo>Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_1                                     (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results                                       (ConstParm, ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TArray<struct FBlueprintSessionResult>Temp_struct_Variable_1                                           (ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     CallFunc_Array_Get_Item                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetSessionIdStr_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSubsystemFriendInfo  CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGetFriendsCallbackProxy*  CallFunc_GetFriendsList_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHFindFrndsSessionsCallbackProxy*CallFunc_FindFriendsSessions_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenuRoot_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ParseConnectionId_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ParseConnectionId_connect_lobby                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANMainMenu2_C::ExecuteUbergraph_NMainMenu2(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, TArray<struct FOnlineSubsystemFriendInfo>& K2Node_CustomEvent_Results_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FOnlineSubsystemFriendInfo>& K2Node_CustomEvent_Results_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOnlineSubsystemFriendInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Array_Index_Variable, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& CallFunc_GetSessionIdStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, const struct FOnlineSubsystemFriendInfo& CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class USHGetFriendsCallbackProxy* CallFunc_GetFriendsList_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class USHFindFrndsSessionsCallbackProxy* CallFunc_FindFriendsSessions_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UMainMenuRoot_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_ParseConnectionId_Result, const class FString& CallFunc_ParseConnectionId_connect_lobby, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NMainMenu2_C", "ExecuteUbergraph_NMainMenu2");

	Params::ANMainMenu2_C_ExecuteUbergraph_NMainMenu2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_CustomEvent_Results_3 = K2Node_CustomEvent_Results_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Results_2 = K2Node_CustomEvent_Results_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Results_1 = K2Node_CustomEvent_Results_1;
	Parms.K2Node_CustomEvent_Results = K2Node_CustomEvent_Results;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetSessionIdStr_ReturnValue = CallFunc_GetSessionIdStr_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetFriendsList_ReturnValue = CallFunc_GetFriendsList_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_FindFriendsSessions_ReturnValue = CallFunc_FindFriendsSessions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_ParseConnectionId_Result = CallFunc_ParseConnectionId_Result;
	Parms.CallFunc_ParseConnectionId_connect_lobby = CallFunc_ParseConnectionId_connect_lobby;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


