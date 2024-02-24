#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C
// (Actor, Pawn)

class UClass* ABP_Zombie_Infected_Horde_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Zombie_Infected_Horde_C");

	return Clss;
}


// BP_Zombie_Infected_Horde_C BP_Zombie_Infected_Horde.Default__BP_Zombie_Infected_Horde_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Zombie_Infected_Horde_C* ABP_Zombie_Infected_Horde_C::GetDefaultObj()
{
	static class ABP_Zombie_Infected_Horde_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Zombie_Infected_Horde_C*>(ABP_Zombie_Infected_Horde_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.OnNotifyEnd_B68543284987CD1D13B41E99F9665966
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Infected_Horde_C::OnNotifyEnd_B68543284987CD1D13B41E99F9665966(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "OnNotifyEnd_B68543284987CD1D13B41E99F9665966");

	Params::ABP_Zombie_Infected_Horde_C_OnNotifyEnd_B68543284987CD1D13B41E99F9665966_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.OnNotifyBegin_B68543284987CD1D13B41E99F9665966
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Infected_Horde_C::OnNotifyBegin_B68543284987CD1D13B41E99F9665966(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "OnNotifyBegin_B68543284987CD1D13B41E99F9665966");

	Params::ABP_Zombie_Infected_Horde_C_OnNotifyBegin_B68543284987CD1D13B41E99F9665966_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.OnInterrupted_B68543284987CD1D13B41E99F9665966
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Infected_Horde_C::OnInterrupted_B68543284987CD1D13B41E99F9665966(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "OnInterrupted_B68543284987CD1D13B41E99F9665966");

	Params::ABP_Zombie_Infected_Horde_C_OnInterrupted_B68543284987CD1D13B41E99F9665966_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.OnBlendOut_B68543284987CD1D13B41E99F9665966
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Infected_Horde_C::OnBlendOut_B68543284987CD1D13B41E99F9665966(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "OnBlendOut_B68543284987CD1D13B41E99F9665966");

	Params::ABP_Zombie_Infected_Horde_C_OnBlendOut_B68543284987CD1D13B41E99F9665966_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.OnCompleted_B68543284987CD1D13B41E99F9665966
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Infected_Horde_C::OnCompleted_B68543284987CD1D13B41E99F9665966(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "OnCompleted_B68543284987CD1D13B41E99F9665966");

	Params::ABP_Zombie_Infected_Horde_C_OnCompleted_B68543284987CD1D13B41E99F9665966_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Zombie_Infected_Horde_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.Event_PlayerDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Zombie_Infected_Horde_C::Event_PlayerDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "Event_PlayerDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C.ExecuteUbergraph_BP_Zombie_Infected_Horde
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Infected_Horde_C::ExecuteUbergraph_BP_Zombie_Infected_Horde(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Infected_Horde_C", "ExecuteUbergraph_BP_Zombie_Infected_Horde");

	Params::ABP_Zombie_Infected_Horde_C_ExecuteUbergraph_BP_Zombie_Infected_Horde_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


