#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C
// (Actor)

class UClass* ABP_FogOfDiscoveryCapture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FogOfDiscoveryCapture_C");

	return Clss;
}


// BP_FogOfDiscoveryCapture_C BP_FogOfDiscoveryCapture.Default__BP_FogOfDiscoveryCapture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FogOfDiscoveryCapture_C* ABP_FogOfDiscoveryCapture_C::GetDefaultObj()
{
	static class ABP_FogOfDiscoveryCapture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FogOfDiscoveryCapture_C*>(ABP_FogOfDiscoveryCapture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.FinishZoneMapFoD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FogOfDiscoveryCapture_C::FinishZoneMapFoD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "FinishZoneMapFoD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.CaptureZoneMapFoD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FogOfDiscoveryCapture_C::CaptureZoneMapFoD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "CaptureZoneMapFoD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FogOfDiscoveryCapture_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.GetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FogOfDiscoveryCapture_C::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "GetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.OnFogLevelLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UZoneMapData*                UpdatedZoneMap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogOfDiscoveryCapture_C::OnFogLevelLoaded(class UZoneMapData* UpdatedZoneMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "OnFogLevelLoaded");

	Params::ABP_FogOfDiscoveryCapture_C_OnFogLevelLoaded_Params Parms{};

	Parms.UpdatedZoneMap = UpdatedZoneMap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogOfDiscoveryCapture_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "ReceiveEndPlay");

	Params::ABP_FogOfDiscoveryCapture_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FogOfDiscoveryCapture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ExecuteUbergraph_BP_FogOfDiscoveryCapture
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneMapData*                K2Node_Event_UpdatedZoneMap                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogOfDiscoveryCapture_C::ExecuteUbergraph_BP_FogOfDiscoveryCapture(int32 EntryPoint, class UZoneMapData* K2Node_Event_UpdatedZoneMap, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FogOfDiscoveryCapture_C", "ExecuteUbergraph_BP_FogOfDiscoveryCapture");

	Params::ABP_FogOfDiscoveryCapture_C_ExecuteUbergraph_BP_FogOfDiscoveryCapture_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_UpdatedZoneMap = K2Node_Event_UpdatedZoneMap;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


