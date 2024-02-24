#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C
// (Actor)

class UClass* ABP_ZoneMap_VehiclePOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMap_VehiclePOI_C");

	return Clss;
}


// BP_ZoneMap_VehiclePOI_C BP_ZoneMap_VehiclePOI.Default__BP_ZoneMap_VehiclePOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZoneMap_VehiclePOI_C* ABP_ZoneMap_VehiclePOI_C::GetDefaultObj()
{
	static class ABP_ZoneMap_VehiclePOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZoneMap_VehiclePOI_C*>(ABP_ZoneMap_VehiclePOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ABP_ZoneMap_VehiclePOI_C::UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_VehiclePOI_C", "UserConstructionScript");

	Params::ABP_ZoneMap_VehiclePOI_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_VehiclePOI_C::Activate_POI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_VehiclePOI_C", "Activate POI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_VehiclePOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_VehiclePOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_VehiclePOI_C::Begin_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_VehiclePOI_C", "Begin Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_VehiclePOI_C::End_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_VehiclePOI_C", "End Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ExecuteUbergraph_BP_ZoneMap_VehiclePOI
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_VehiclePOI_C::ExecuteUbergraph_BP_ZoneMap_VehiclePOI(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_VehiclePOI_C", "ExecuteUbergraph_BP_ZoneMap_VehiclePOI");

	Params::ABP_ZoneMap_VehiclePOI_C_ExecuteUbergraph_BP_ZoneMap_VehiclePOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


