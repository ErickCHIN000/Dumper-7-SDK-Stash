#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C
// (Actor)

class UClass* ABP_ZoneMap_Galaxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMap_Galaxy_C");

	return Clss;
}


// BP_ZoneMap_Galaxy_C BP_ZoneMap_Galaxy.Default__BP_ZoneMap_Galaxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZoneMap_Galaxy_C* ABP_ZoneMap_Galaxy_C::GetDefaultObj()
{
	static class ABP_ZoneMap_Galaxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZoneMap_Galaxy_C*>(ABP_ZoneMap_Galaxy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlanetMapData_C*            Planet_Map_Data                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_Galaxy_C::UserConstructionScript(class UPlanetMapData_C* Planet_Map_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "UserConstructionScript");

	Params::ABP_ZoneMap_Galaxy_C_UserConstructionScript_Params Parms{};

	Parms.Planet_Map_Data = Planet_Map_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Galaxy_C::Animate_Galaxy_Map_Components__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "Animate Galaxy Map Components__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Galaxy_C::Animate_Galaxy_Map_Components__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "Animate Galaxy Map Components__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Galaxy_C::Transition_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "Transition In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Galaxy_C::Interrupt_Transition_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "Interrupt Transition In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Galaxy_C::Transition_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "Transition Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Galaxy_C::Interrupt_Transition_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "Interrupt Transition Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Galaxy_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_Galaxy_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "ReceiveTick");

	Params::ABP_ZoneMap_Galaxy_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ExecuteUbergraph_BP_ZoneMap_Galaxy
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_Galaxy_C::ExecuteUbergraph_BP_ZoneMap_Galaxy(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Galaxy_C", "ExecuteUbergraph_BP_ZoneMap_Galaxy");

	Params::ABP_ZoneMap_Galaxy_C_ExecuteUbergraph_BP_ZoneMap_Galaxy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


