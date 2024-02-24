#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FireAudio.BP_FireAudio_C
// (Actor)

class UClass* ABP_FireAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FireAudio_C");

	return Clss;
}


// BP_FireAudio_C BP_FireAudio.Default__BP_FireAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FireAudio_C* ABP_FireAudio_C::GetDefaultObj()
{
	static class ABP_FireAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FireAudio_C*>(ABP_FireAudio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FireAudio.BP_FireAudio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FireAudio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FireAudio.BP_FireAudio_C.AddFlammableInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireAudio_C::AddFlammableInstance(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "AddFlammableInstance");

	Params::ABP_FireAudio_C_AddFlammableInstance_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireAudio.BP_FireAudio_C.AddNode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireAudio_C::AddNode(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "AddNode");

	Params::ABP_FireAudio_C_AddNode_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireAudio.BP_FireAudio_C.OnFireInstanceDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FireAudio_C::OnFireInstanceDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "OnFireInstanceDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FireAudio.BP_FireAudio_C.OnFlammableTransferredAway
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireAudio_C::OnFlammableTransferredAway(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "OnFlammableTransferredAway");

	Params::ABP_FireAudio_C_OnFlammableTransferredAway_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireAudio.BP_FireAudio_C.OnFlammableExtinguished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireAudio_C::OnFlammableExtinguished(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "OnFlammableExtinguished");

	Params::ABP_FireAudio_C_OnFlammableExtinguished_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireAudio.BP_FireAudio_C.RemoveNode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireAudio_C::RemoveNode(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "RemoveNode");

	Params::ABP_FireAudio_C_RemoveNode_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireAudio.BP_FireAudio_C.DelayedDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FireAudio_C::DelayedDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "DelayedDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FireAudio.BP_FireAudio_C.ExecuteUbergraph_BP_FireAudio
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          K2Node_CustomEvent_Instance_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_CustomEvent_Instance_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          K2Node_CustomEvent_Instance_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_CustomEvent_Instance_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          K2Node_CustomEvent_Instance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void ABP_FireAudio_C::ExecuteUbergraph_BP_FireAudio(int32 EntryPoint, class UFMODAudioComponent* CallFunc_GetAudioComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFlammableInstance* K2Node_CustomEvent_Instance_4, bool CallFunc_IsCurrentState_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, class UFlammableInstance* K2Node_CustomEvent_Instance_3, class UFlammableState* K2Node_CustomEvent_State_1, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class UFlammableInstance* K2Node_CustomEvent_Instance_2, class UFlammableInstance* K2Node_CustomEvent_Instance_1, class UFlammableState* K2Node_CustomEvent_State, bool Temp_bool_IsClosed_Variable, class UFlammableInstance* K2Node_CustomEvent_Instance, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireAudio_C", "ExecuteUbergraph_BP_FireAudio");

	Params::ABP_FireAudio_C_ExecuteUbergraph_BP_FireAudio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Instance_4 = K2Node_CustomEvent_Instance_4;
	Parms.CallFunc_IsCurrentState_ReturnValue = CallFunc_IsCurrentState_ReturnValue;
	Parms.CallFunc_GetFlammableState_ReturnValue = CallFunc_GetFlammableState_ReturnValue;
	Parms.K2Node_CustomEvent_Instance_3 = K2Node_CustomEvent_Instance_3;
	Parms.K2Node_CustomEvent_State_1 = K2Node_CustomEvent_State_1;
	Parms.CallFunc_GetFlammableState_ReturnValue_1 = CallFunc_GetFlammableState_ReturnValue_1;
	Parms.CallFunc_GetFlammableState_ReturnValue_2 = CallFunc_GetFlammableState_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_Instance_2 = K2Node_CustomEvent_Instance_2;
	Parms.K2Node_CustomEvent_Instance_1 = K2Node_CustomEvent_Instance_1;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_Instance = K2Node_CustomEvent_Instance;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


