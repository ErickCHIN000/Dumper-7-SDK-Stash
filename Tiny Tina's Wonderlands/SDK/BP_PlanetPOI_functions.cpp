#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlanetPOI.BP_PlanetPOI_C
// (Actor)

class UClass* ABP_PlanetPOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlanetPOI_C");

	return Clss;
}


// BP_PlanetPOI_C BP_PlanetPOI.Default__BP_PlanetPOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlanetPOI_C* ABP_PlanetPOI_C::GetDefaultObj()
{
	static class ABP_PlanetPOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlanetPOI_C*>(ABP_PlanetPOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ZoneMap_C*               K2Node_DynamicCast_AsBP_Zone_Map                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 CallFunc_GetZoneMeshOnPlanet_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlanetPOI_C::UserConstructionScript(class ABP_ZoneMap_C* K2Node_DynamicCast_AsBP_Zone_Map, bool K2Node_DynamicCast_bSuccess, class UStaticMesh* CallFunc_GetZoneMeshOnPlanet_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "UserConstructionScript");

	Params::ABP_PlanetPOI_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Zone_Map = K2Node_DynamicCast_AsBP_Zone_Map;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetZoneMeshOnPlanet_ReturnValue = CallFunc_GetZoneMeshOnPlanet_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Select__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlanetPOI_C::Select__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "Select__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Select__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlanetPOI_C::Select__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "Select__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlanetPOI_C::Activate_POI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "Activate POI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlanetPOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlanetPOI_C::End_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "End Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlanetPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "Begin Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Highlight POI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlanetPOI_C::Highlight_POI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "Highlight POI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlanetPOI.BP_PlanetPOI_C.ExecuteUbergraph_BP_PlanetPOI
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlanetPOI_C::ExecuteUbergraph_BP_PlanetPOI(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlanetPOI_C", "ExecuteUbergraph_BP_PlanetPOI");

	Params::ABP_PlanetPOI_C_ExecuteUbergraph_BP_PlanetPOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


