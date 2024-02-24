#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LaptopEventManager.BP_LaptopEventManager_C
// (Actor)

class UClass* ABP_LaptopEventManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LaptopEventManager_C");

	return Clss;
}


// BP_LaptopEventManager_C BP_LaptopEventManager.Default__BP_LaptopEventManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LaptopEventManager_C* ABP_LaptopEventManager_C::GetDefaultObj()
{
	static class ABP_LaptopEventManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LaptopEventManager_C*>(ABP_LaptopEventManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LaptopEventManager.BP_LaptopEventManager_C.CallRandomEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNarrativeComponent*         CallFunc_GetNarrativeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Random_OutItem                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuest*                      CallFunc_BeginQuest_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LaptopEventManager_C::CallRandomEvent(class UNarrativeComponent* CallFunc_GetNarrativeComponent_ReturnValue, class UClass* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UQuest* CallFunc_BeginQuest_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LaptopEventManager_C", "CallRandomEvent");

	Params::ABP_LaptopEventManager_C_CallRandomEvent_Params Parms{};

	Parms.CallFunc_GetNarrativeComponent_ReturnValue = CallFunc_GetNarrativeComponent_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_BeginQuest_ReturnValue = CallFunc_BeginQuest_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LaptopEventManager.BP_LaptopEventManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LaptopEventManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LaptopEventManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LaptopEventManager.BP_LaptopEventManager_C.Event_Random
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LaptopEventManager_C::Event_Random()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LaptopEventManager_C", "Event_Random");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LaptopEventManager.BP_LaptopEventManager_C.ExecuteUbergraph_BP_LaptopEventManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LaptopEventManager_C::ExecuteUbergraph_BP_LaptopEventManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LaptopEventManager_C", "ExecuteUbergraph_BP_LaptopEventManager");

	Params::ABP_LaptopEventManager_C_ExecuteUbergraph_BP_LaptopEventManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LaptopEventManager.BP_LaptopEventManager_C.SelectCertainLocation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_LaptopEventMaster_C*     Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LaptopEventManager_C::SelectCertainLocation__DelegateSignature(class AActor* Actor, class ABP_LaptopEventMaster_C* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LaptopEventManager_C", "SelectCertainLocation__DelegateSignature");

	Params::ABP_LaptopEventManager_C_SelectCertainLocation__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;
	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LaptopEventManager.BP_LaptopEventManager_C.RandomEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LaptopEventManager_C::RandomEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LaptopEventManager_C", "RandomEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


