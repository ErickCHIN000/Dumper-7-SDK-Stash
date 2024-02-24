#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Marker_Airdrop.BP_Marker_Airdrop_C
// (Actor)

class UClass* ABP_Marker_Airdrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Marker_Airdrop_C");

	return Clss;
}


// BP_Marker_Airdrop_C BP_Marker_Airdrop.Default__BP_Marker_Airdrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Marker_Airdrop_C* ABP_Marker_Airdrop_C::GetDefaultObj()
{
	static class ABP_Marker_Airdrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Marker_Airdrop_C*>(ABP_Marker_Airdrop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Marker_Airdrop.BP_Marker_Airdrop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Marker_Airdrop_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Marker_Airdrop_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Marker_Airdrop.BP_Marker_Airdrop_C.AddMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Marker_Airdrop_C::AddMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Marker_Airdrop_C", "AddMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Marker_Airdrop.BP_Marker_Airdrop_C.ExecuteUbergraph_BP_Marker_Airdrop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_MarkerType>    K2Node_MakeArray_Array                                           (ReferenceParm)
// class UBPC_MinimapSystem_C*        CallFunc_Get_Minimap_Component_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_MarkerData               K2Node_MakeStruct_S_MarkerData                                   (HasGetValueTypeHash)
// TArray<class UW_POIMarker_C*>      CallFunc_Add_POI_Marker_Markers                                  (ReferenceParm, ContainsInstancedReference)
// class UW_POIMarker_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Marker_Airdrop_C::ExecuteUbergraph_BP_Marker_Airdrop(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, TArray<class UW_POIMarker_C*>& CallFunc_Add_POI_Marker_Markers, class UW_POIMarker_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Marker_Airdrop_C", "ExecuteUbergraph_BP_Marker_Airdrop");

	Params::ABP_Marker_Airdrop_C_ExecuteUbergraph_BP_Marker_Airdrop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Get_Minimap_Component_ReturnValue = CallFunc_Get_Minimap_Component_ReturnValue;
	Parms.K2Node_MakeStruct_S_MarkerData = K2Node_MakeStruct_S_MarkerData;
	Parms.CallFunc_Add_POI_Marker_Markers = CallFunc_Add_POI_Marker_Markers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


