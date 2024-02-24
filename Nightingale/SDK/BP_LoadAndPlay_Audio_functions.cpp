#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C
// (None)

class UClass* UBP_LoadAndPlay_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LoadAndPlay_Audio_C");

	return Clss;
}


// BP_LoadAndPlay_Audio_C BP_LoadAndPlay_Audio.Default__BP_LoadAndPlay_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LoadAndPlay_Audio_C* UBP_LoadAndPlay_Audio_C::GetDefaultObj()
{
	static class UBP_LoadAndPlay_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LoadAndPlay_Audio_C*>(UBP_LoadAndPlay_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.ApplyRTPCs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<class UAkRtpc*, double>       RTPCs                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UAkRtpc*>             CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkRtpc*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LoadAndPlay_Audio_C::ApplyRTPCs(class UAkComponent* AkComponent, TMap<class UAkRtpc*, double> RTPCs, TArray<class UAkRtpc*>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UAkRtpc* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "ApplyRTPCs");

	Params::UBP_LoadAndPlay_Audio_C_ApplyRTPCs_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.RTPCs = RTPCs;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load Switches And Event, Apply RTPC, Then Play Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UAkSwitchValue>>Switches                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      Optional_Switches                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class UAkRtpc*, double>       RTPCs                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               StopWhenOwnerDestroyed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_LoadAndPlay_Audio_C::Load_Switches_And_Event__Apply_RTPC__Then_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Event, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, const struct FVector& Location, TArray<class UAkSwitchValue*>& Optional_Switches, TMap<class UAkRtpc*, double> RTPCs, bool StopWhenOwnerDestroyed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "Load Switches And Event, Apply RTPC, Then Play Event");

	Params::UBP_LoadAndPlay_Audio_C_Load_Switches_And_Event__Apply_RTPC__Then_Play_Event_Params Parms{};

	Parms.Event = Event;
	Parms.Switches = Switches;
	Parms.Location = Location;
	Parms.Optional_Switches = Optional_Switches;
	Parms.RTPCs = RTPCs;
	Parms.StopWhenOwnerDestroyed = StopWhenOwnerDestroyed;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load Switches and Event, then Play Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UAkSwitchValue>>Switches                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      Optional_Switches                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_LoadAndPlay_Audio_C::Load_Switches_and_Event__then_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Event, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, const struct FVector& Location, TArray<class UAkSwitchValue*>& Optional_Switches, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "Load Switches and Event, then Play Event");

	Params::UBP_LoadAndPlay_Audio_C_Load_Switches_and_Event__then_Play_Event_Params Parms{};

	Parms.Event = Event;
	Parms.Switches = Switches;
	Parms.Location = Location;
	Parms.Optional_Switches = Optional_Switches;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load, Switch and Play Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>Soft_Ak_Event                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      Switches                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_LoadAndPlay_Audio_C::Load__Switch_and_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Soft_Ak_Event, TArray<class UAkSwitchValue*>& Switches, const struct FVector& Location, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "Load, Switch and Play Event");

	Params::UBP_LoadAndPlay_Audio_C_Load__Switch_and_Play_Event_Params Parms{};

	Parms.Soft_Ak_Event = Soft_Ak_Event;
	Parms.Switches = Switches;
	Parms.Location = Location;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load and Play Event
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>Soft_Ak_Event                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_LoadAndPlay_Audio_C::Load_and_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Soft_Ak_Event, const struct FVector& Location, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "Load and Play Event");

	Params::UBP_LoadAndPlay_Audio_C_Load_and_Play_Event_Params Parms{};

	Parms.Soft_Ak_Event = Soft_Ak_Event;
	Parms.Location = Location;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.On Audio Event Loaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               Audio_Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_LoadAndPlay_Audio_C::On_Audio_Event_Loaded(class UAkAudioEvent* Audio_Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "On Audio Event Loaded");

	Params::UBP_LoadAndPlay_Audio_C_On_Audio_Event_Loaded_Params Parms{};

	Parms.Audio_Event = Audio_Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.On Audio Event and Switches Loaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               Audio_Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      Switches                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_LoadAndPlay_Audio_C::On_Audio_Event_and_Switches_Loaded(class UAkAudioEvent* Audio_Event, TArray<class UAkSwitchValue*>& Switches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "On Audio Event and Switches Loaded");

	Params::UBP_LoadAndPlay_Audio_C_On_Audio_Event_and_Switches_Loaded_Params Parms{};

	Parms.Audio_Event = Audio_Event;
	Parms.Switches = Switches;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.On Audio Event, Switches And RTPCs Loaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               Audio_Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      Switches                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_LoadAndPlay_Audio_C::On_Audio_Event__Switches_And_RTPCs_Loaded(class UAkAudioEvent* Audio_Event, TArray<class UAkSwitchValue*>& Switches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "On Audio Event, Switches And RTPCs Loaded");

	Params::UBP_LoadAndPlay_Audio_C_On_Audio_Event__Switches_And_RTPCs_Loaded_Params Parms{};

	Parms.Audio_Event = Audio_Event;
	Parms.Switches = Switches;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.ExecuteUbergraph_BP_LoadAndPlay_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_CustomEvent_Audio_Event                                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      K2Node_CustomEvent_Switches                                      (ConstParm, ReferenceParm)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_CustomEvent_Audio_Event_1                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      K2Node_CustomEvent_Switches_1                                    (ConstParm, ReferenceParm)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_CustomEvent_Audio_Event_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_2          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LoadAndPlay_Audio_C::ExecuteUbergraph_BP_LoadAndPlay_Audio(int32 EntryPoint, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UAkAudioEvent* K2Node_CustomEvent_Audio_Event, TArray<class UAkSwitchValue*>& K2Node_CustomEvent_Switches, bool CallFunc_PostAkEventScoped_ReturnValue, class UAkAudioEvent* K2Node_CustomEvent_Audio_Event_1, TArray<class UAkSwitchValue*>& K2Node_CustomEvent_Switches_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue_1, class UAkAudioEvent* K2Node_CustomEvent_Audio_Event_2, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_2, bool CallFunc_PostAkEventScoped_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadAndPlay_Audio_C", "ExecuteUbergraph_BP_LoadAndPlay_Audio");

	Params::UBP_LoadAndPlay_Audio_C_ExecuteUbergraph_BP_LoadAndPlay_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Audio_Event = K2Node_CustomEvent_Audio_Event;
	Parms.K2Node_CustomEvent_Switches = K2Node_CustomEvent_Switches;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.K2Node_CustomEvent_Audio_Event_1 = K2Node_CustomEvent_Audio_Event_1;
	Parms.K2Node_CustomEvent_Switches_1 = K2Node_CustomEvent_Switches_1;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1 = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_1 = CallFunc_PostAkEventScoped_ReturnValue_1;
	Parms.K2Node_CustomEvent_Audio_Event_2 = K2Node_CustomEvent_Audio_Event_2;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_2 = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_2;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_2 = CallFunc_PostAkEventScoped_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


