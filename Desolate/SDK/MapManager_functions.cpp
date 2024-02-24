#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MapManager.MapManager_C
// (Actor)

class UClass* AMapManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapManager_C");

	return Clss;
}


// MapManager_C MapManager.Default__MapManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMapManager_C* AMapManager_C::GetDefaultObj()
{
	static class AMapManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMapManager_C*>(AMapManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapManager.MapManager_C.GeneranteMapObjectsTable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMapManager_C::GeneranteMapObjectsTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapManager_C", "GeneranteMapObjectsTable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapManager.MapManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMapManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapManager_C", "ReceiveTick");

	Params::AMapManager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapManager.MapManager_C.ExecuteUbergraph_MapManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMapManager_C::ExecuteUbergraph_MapManager(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapManager_C", "ExecuteUbergraph_MapManager");

	Params::AMapManager_C_ExecuteUbergraph_MapManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


