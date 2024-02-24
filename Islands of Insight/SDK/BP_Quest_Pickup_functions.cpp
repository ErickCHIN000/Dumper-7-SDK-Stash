#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Quest_Pickup.BP_Quest_Pickup_C
// (Actor)

class UClass* ABP_Quest_Pickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Quest_Pickup_C");

	return Clss;
}


// BP_Quest_Pickup_C BP_Quest_Pickup.Default__BP_Quest_Pickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Quest_Pickup_C* ABP_Quest_Pickup_C::GetDefaultObj()
{
	static class ABP_Quest_Pickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Quest_Pickup_C*>(ABP_Quest_Pickup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Quest_Pickup.BP_Quest_Pickup_C.SetUntargetEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Quest_Pickup_C::SetUntargetEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Quest_Pickup_C", "SetUntargetEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Quest_Pickup.BP_Quest_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Quest_Pickup_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Quest_Pickup_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Quest_Pickup.BP_Quest_Pickup_C.Initialize
// (BlueprintEvent)
// Parameters:
// class AQuestVendor*                SpawningVendor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              QuestType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Quest_Pickup_C::Initialize(class AQuestVendor* SpawningVendor, uint8 QuestType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Quest_Pickup_C", "Initialize");

	Params::ABP_Quest_Pickup_C_Initialize_Params Parms{};

	Parms.SpawningVendor = SpawningVendor;
	Parms.QuestType = QuestType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Quest_Pickup.BP_Quest_Pickup_C.SetTargetEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Quest_Pickup_C::SetTargetEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Quest_Pickup_C", "SetTargetEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Quest_Pickup.BP_Quest_Pickup_C.ExecuteUbergraph_BP_Quest_Pickup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestVendor*                K2Node_Event_spawningVendor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_questType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Quest_Pickup_C::ExecuteUbergraph_BP_Quest_Pickup(int32 EntryPoint, class AQuestVendor* K2Node_Event_spawningVendor, uint8 K2Node_Event_questType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Quest_Pickup_C", "ExecuteUbergraph_BP_Quest_Pickup");

	Params::ABP_Quest_Pickup_C_ExecuteUbergraph_BP_Quest_Pickup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_spawningVendor = K2Node_Event_spawningVendor;
	Parms.K2Node_Event_questType = K2Node_Event_questType;

	UObject::ProcessEvent(Func, &Parms);

}

}


