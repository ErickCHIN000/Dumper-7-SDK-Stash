#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SimulationStateManager.BP_SimulationStateManager_C
// (Actor)

class UClass* ABP_SimulationStateManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SimulationStateManager_C");

	return Clss;
}


// BP_SimulationStateManager_C BP_SimulationStateManager.Default__BP_SimulationStateManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SimulationStateManager_C* ABP_SimulationStateManager_C::GetDefaultObj()
{
	static class ABP_SimulationStateManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SimulationStateManager_C*>(ABP_SimulationStateManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.ApplyConfigSettingsFromRRS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GameState_C*             GameState                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::ApplyConfigSettingsFromRRS(class ABP_GameState_C* GameState, const class FString& CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "ApplyConfigSettingsFromRRS");

	Params::ABP_SimulationStateManager_C_ApplyConfigSettingsFromRRS_Params Parms{};

	Parms.GameState = GameState;
	Parms.CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue = CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.GetTimeOfDayManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_TimeOfDayManager_C*      TimeOfDayManager                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::GetTimeOfDayManager(class ABP_TimeOfDayManager_C** TimeOfDayManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "GetTimeOfDayManager");

	Params::ABP_SimulationStateManager_C_GetTimeOfDayManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TimeOfDayManager != nullptr)
		*TimeOfDayManager = Parms.TimeOfDayManager;

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.RegisterTimeOfDayManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TimeOfDayManager_C*      TimeOfDayManager                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::RegisterTimeOfDayManager(class ABP_TimeOfDayManager_C* TimeOfDayManager, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "RegisterTimeOfDayManager");

	Params::ABP_SimulationStateManager_C_RegisterTimeOfDayManager_Params Parms{};

	Parms.TimeOfDayManager = TimeOfDayManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.DeregisterResourceManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceNodeManager_C*   ResourceManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetBaseResourceClass_BaseClass                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetBaseResourceClass_BaseClass_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::DeregisterResourceManager(class ABP_ResourceNodeManager_C* ResourceManager, class UClass* CallFunc_GetBaseResourceClass_BaseClass, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetBaseResourceClass_BaseClass_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "DeregisterResourceManager");

	Params::ABP_SimulationStateManager_C_DeregisterResourceManager_Params Parms{};

	Parms.ResourceManager = ResourceManager;
	Parms.CallFunc_GetBaseResourceClass_BaseClass = CallFunc_GetBaseResourceClass_BaseClass;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetBaseResourceClass_BaseClass_1 = CallFunc_GetBaseResourceClass_BaseClass_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.RegisterResourceManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceNodeManager_C*   ResourceManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetBaseResourceClass_BaseClass                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetBaseResourceClass_BaseClass_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::RegisterResourceManager(class ABP_ResourceNodeManager_C* ResourceManager, class UClass* CallFunc_GetBaseResourceClass_BaseClass, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetBaseResourceClass_BaseClass_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "RegisterResourceManager");

	Params::ABP_SimulationStateManager_C_RegisterResourceManager_Params Parms{};

	Parms.ResourceManager = ResourceManager;
	Parms.CallFunc_GetBaseResourceClass_BaseClass = CallFunc_GetBaseResourceClass_BaseClass;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetBaseResourceClass_BaseClass_1 = CallFunc_GetBaseResourceClass_BaseClass_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.TriggerSimulationRound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::TriggerSimulationRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "TriggerSimulationRound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "ReceiveTick");

	Params::ABP_SimulationStateManager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.ReceiveAuthorityGained
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::ReceiveAuthorityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "ReceiveAuthorityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.Auth_OverwriteTimeOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TimeOfDay             TimeOfDay                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::Auth_OverwriteTimeOfDay(enum class E_TimeOfDay TimeOfDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "Auth_OverwriteTimeOfDay");

	Params::ABP_SimulationStateManager_C_Auth_OverwriteTimeOfDay_Params Parms{};

	Parms.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.Auth_PauseTimeOfDayUpdates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::Auth_PauseTimeOfDayUpdates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "Auth_PauseTimeOfDayUpdates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.Auth_ResumeTimeOfDayUpdates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::Auth_ResumeTimeOfDayUpdates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "Auth_ResumeTimeOfDayUpdates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.InitializeManager
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::InitializeManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "InitializeManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.OnRRSConfigReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::OnRRSConfigReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "OnRRSConfigReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.RegisterCreatureMan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureManager_C*       CreatureManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::RegisterCreatureMan(class ABP_CreatureManager_C* CreatureManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "RegisterCreatureMan");

	Params::ABP_SimulationStateManager_C_RegisterCreatureMan_Params Parms{};

	Parms.CreatureManager = CreatureManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.POIsFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::POIsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "POIsFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.ExecuteUbergraph_BP_SimulationStateManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetRealmClusterThemeNames_ReturnValue                   (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TimeOfDay             K2Node_CustomEvent_TimeOfDay                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_CustomEvent_CreatureManager                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaxPerType                 CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaxPerType                 CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            CallFunc_GetNWXGameModeBase_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetWorkerFlag_OutFlagValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorkerFlag_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaxPerType                 K2Node_MakeStruct_MaxPerType                                     (None)

void ABP_SimulationStateManager_C::ExecuteUbergraph_BP_SimulationStateManager(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TArray<class FName>& CallFunc_GetRealmClusterThemeNames_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, enum class E_TimeOfDay K2Node_CustomEvent_TimeOfDay, class ABP_CreatureManager_C* K2Node_CustomEvent_CreatureManager, bool CallFunc_IsServer_ReturnValue_1, const struct FMaxPerType& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FMaxPerType& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ANWXGameModeBase* CallFunc_GetNWXGameModeBase_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetWorkerFlag_OutFlagValue, bool CallFunc_GetWorkerFlag_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_1, const struct FMaxPerType& K2Node_MakeStruct_MaxPerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "ExecuteUbergraph_BP_SimulationStateManager");

	Params::ABP_SimulationStateManager_C_ExecuteUbergraph_BP_SimulationStateManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetRealmClusterThemeNames_ReturnValue = CallFunc_GetRealmClusterThemeNames_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_TimeOfDay = K2Node_CustomEvent_TimeOfDay;
	Parms.K2Node_CustomEvent_CreatureManager = K2Node_CustomEvent_CreatureManager;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetNWXGameModeBase_ReturnValue = CallFunc_GetNWXGameModeBase_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorkerFlag_OutFlagValue = CallFunc_GetWorkerFlag_OutFlagValue;
	Parms.CallFunc_GetWorkerFlag_ReturnValue = CallFunc_GetWorkerFlag_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_MaxPerType = K2Node_MakeStruct_MaxPerType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.OnTimeOfDayManagerRegistered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TimeOfDayManager_C*      TimeOfDayManager                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::OnTimeOfDayManagerRegistered__DelegateSignature(class ABP_TimeOfDayManager_C* TimeOfDayManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "OnTimeOfDayManagerRegistered__DelegateSignature");

	Params::ABP_SimulationStateManager_C_OnTimeOfDayManagerRegistered__DelegateSignature_Params Parms{};

	Parms.TimeOfDayManager = TimeOfDayManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.OnDisableTimeOfDayUpdates__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TimeOfDayUpdatesDisabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimulationStateManager_C::OnDisableTimeOfDayUpdates__DelegateSignature(bool TimeOfDayUpdatesDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "OnDisableTimeOfDayUpdates__DelegateSignature");

	Params::ABP_SimulationStateManager_C_OnDisableTimeOfDayUpdates__DelegateSignature_Params Parms{};

	Parms.TimeOfDayUpdatesDisabled = TimeOfDayUpdatesDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.OnTimeOfDayChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::OnTimeOfDayChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "OnTimeOfDayChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationStateManager.BP_SimulationStateManager_C.OnSimulationRoundComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SimulationStateManager_C::OnSimulationRoundComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationStateManager_C", "OnSimulationRoundComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


