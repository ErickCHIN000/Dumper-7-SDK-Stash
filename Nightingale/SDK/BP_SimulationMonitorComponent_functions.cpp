#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C
// (None)

class UClass* UBP_SimulationMonitorComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SimulationMonitorComponent_C");

	return Clss;
}


// BP_SimulationMonitorComponent_C BP_SimulationMonitorComponent.Default__BP_SimulationMonitorComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SimulationMonitorComponent_C* UBP_SimulationMonitorComponent_C::GetDefaultObj()
{
	static class UBP_SimulationMonitorComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SimulationMonitorComponent_C*>(UBP_SimulationMonitorComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.GetIsNight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDayNightState_IsNight                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SimulationMonitorComponent_C::GetIsNight(bool CallFunc_GetDayNightState_IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "GetIsNight");

	Params::UBP_SimulationMonitorComponent_C_GetIsNight_Params Parms{};

	Parms.CallFunc_GetDayNightState_IsNight = CallFunc_GetDayNightState_IsNight;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.BindToDayNightChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TimeOfDayManager_C*      TimeOfDayManager                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::BindToDayNightChanged(class ABP_TimeOfDayManager_C* TimeOfDayManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "BindToDayNightChanged");

	Params::UBP_SimulationMonitorComponent_C_BindToDayNightChanged_Params Parms{};

	Parms.TimeOfDayManager = TimeOfDayManager;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRep_RealmVisualSeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SimulationMonitorComponent_C::OnRep_RealmVisualSeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnRep_RealmVisualSeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRep_Profile_Component_Randomize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SimulationMonitorComponent_C::OnRep_Profile_Component_Randomize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnRep_Profile_Component_Randomize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnTimeOfDayNightChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnTimeOfDayNightChanged(bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnTimeOfDayNightChanged");

	Params::UBP_SimulationMonitorComponent_C_OnTimeOfDayNightChanged_Params Parms{};

	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.RegisterSimStateManagerEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AManagerBase*                Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*K2Node_DynamicCast_AsBP_Simulation_State_Manager                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::RegisterSimStateManagerEvents(class AManagerBase* Manager, bool bIsReady, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_SimulationStateManager_C* K2Node_DynamicCast_AsBP_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "RegisterSimStateManagerEvents");

	Params::UBP_SimulationMonitorComponent_C_RegisterSimStateManagerEvents_Params Parms{};

	Parms.Manager = Manager;
	Parms.bIsReady = bIsReady;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Simulation_State_Manager = K2Node_DynamicCast_AsBP_Simulation_State_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager = CallFunc_GetTimeOfDayManager_TimeOfDayManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.GetDayNightState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsNight                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::GetDayNightState(bool* IsNight, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "GetDayNightState");

	Params::UBP_SimulationMonitorComponent_C_GetDayNightState_Params Parms{};

	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager = CallFunc_GetTimeOfDayManager_TimeOfDayManager;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNight != nullptr)
		*IsNight = Parms.IsNight;

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRep_Season_Random
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SimulationMonitorComponent_C::OnRep_Season_Random()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnRep_Season_Random");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRep_Color_Row_Random
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SimulationMonitorComponent_C::OnRep_Color_Row_Random()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnRep_Color_Row_Random");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnPlayerLogout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnPlayerLogout(class AController* ExitingController, int32 CallFunc_GetPlayerCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnPlayerLogout");

	Params::UBP_SimulationMonitorComponent_C_OnPlayerLogout_Params Parms{};

	Parms.ExitingController = ExitingController;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnPlayerJoined
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnPlayerJoined(class APlayerController* NewPlayer, int32 CallFunc_GetPlayerCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnPlayerJoined");

	Params::UBP_SimulationMonitorComponent_C_OnPlayerJoined_Params Parms{};

	Parms.NewPlayer = NewPlayer;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRep_RealmProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SimulationMonitorComponent_C::OnRep_RealmProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnRep_RealmProfile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.ReceiveActorReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SimulationMonitorComponent_C::ReceiveActorReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "ReceiveActorReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.BindEventToOnDayNightChanged
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::BindEventToOnDayNightChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "BindEventToOnDayNightChanged");

	Params::UBP_SimulationMonitorComponent_C_BindEventToOnDayNightChanged_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.UnbindEventFromOnDayNightChanged
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::UnbindEventFromOnDayNightChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "UnbindEventFromOnDayNightChanged");

	Params::UBP_SimulationMonitorComponent_C_UnbindEventFromOnDayNightChanged_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.ExecuteUbergraph_BP_SimulationMonitorComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Event_Event                                               (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AManagerBase>    Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            CallFunc_GetGameMode_GameMode                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GameMode_C*              K2Node_DynamicCast_AsBP_Game_Mode                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Event_Event_1                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            CallFunc_GetNWXGameModeBase_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsManagerExpected_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::ExecuteUbergraph_BP_SimulationMonitorComponent(int32 EntryPoint, FDelegateProperty_ K2Node_Event_Event, TSubclassOf<class AManagerBase> Temp_class_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ANWXGameModeBase* CallFunc_GetGameMode_GameMode, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_Event_Event_1, class ANWXGameModeBase* CallFunc_GetNWXGameModeBase_ReturnValue, bool CallFunc_IsManagerExpected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "ExecuteUbergraph_BP_SimulationMonitorComponent");

	Params::UBP_SimulationMonitorComponent_C_ExecuteUbergraph_BP_SimulationMonitorComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Event = K2Node_Event_Event;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetGameMode_GameMode = CallFunc_GetGameMode_GameMode;
	Parms.K2Node_DynamicCast_AsBP_Game_Mode = K2Node_DynamicCast_AsBP_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_Event_1 = K2Node_Event_Event_1;
	Parms.CallFunc_GetNWXGameModeBase_ReturnValue = CallFunc_GetNWXGameModeBase_ReturnValue;
	Parms.CallFunc_IsManagerExpected_ReturnValue = CallFunc_IsManagerExpected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRealmVisualSeedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RealmVisualSeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnRealmVisualSeedChanged__DelegateSignature(int32 RealmVisualSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnRealmVisualSeedChanged__DelegateSignature");

	Params::UBP_SimulationMonitorComponent_C_OnRealmVisualSeedChanged__DelegateSignature_Params Parms{};

	Parms.RealmVisualSeed = RealmVisualSeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnProfile_Component_RandomizeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Profile_Component_RandomizeProfile_Component_Randomize                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnProfile_Component_RandomizeChanged__DelegateSignature(const struct FS_Profile_Component_Randomize& Profile_Component_Randomize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnProfile_Component_RandomizeChanged__DelegateSignature");

	Params::UBP_SimulationMonitorComponent_C_OnProfile_Component_RandomizeChanged__DelegateSignature_Params Parms{};

	Parms.Profile_Component_Randomize = Profile_Component_Randomize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnDayNightChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnDayNightChanged__DelegateSignature(bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnDayNightChanged__DelegateSignature");

	Params::UBP_SimulationMonitorComponent_C_OnDayNightChanged__DelegateSignature_Params Parms{};

	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnSeasonRandomChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewSeasonRandom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnSeasonRandomChanged__DelegateSignature(double NewSeasonRandom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnSeasonRandomChanged__DelegateSignature");

	Params::UBP_SimulationMonitorComponent_C_OnSeasonRandomChanged__DelegateSignature_Params Parms{};

	Parms.NewSeasonRandom = NewSeasonRandom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnColorRowRandomChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewColorRowRandom                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnColorRowRandomChanged__DelegateSignature(int32 NewColorRowRandom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnColorRowRandomChanged__DelegateSignature");

	Params::UBP_SimulationMonitorComponent_C_OnColorRowRandomChanged__DelegateSignature_Params Parms{};

	Parms.NewColorRowRandom = NewColorRowRandom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRealmProfileChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewRealmProfile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimulationMonitorComponent_C::OnRealmProfileChanged__DelegateSignature(int32 NewRealmProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SimulationMonitorComponent_C", "OnRealmProfileChanged__DelegateSignature");

	Params::UBP_SimulationMonitorComponent_C_OnRealmProfileChanged__DelegateSignature_Params Parms{};

	Parms.NewRealmProfile = NewRealmProfile;

	UObject::ProcessEvent(Func, &Parms);

}

}


