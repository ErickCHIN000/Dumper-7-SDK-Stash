#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Marker_Death.BP_Marker_Death_C
// (Actor)

class UClass* ABP_Marker_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Marker_Death_C");

	return Clss;
}


// BP_Marker_Death_C BP_Marker_Death.Default__BP_Marker_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Marker_Death_C* ABP_Marker_Death_C::GetDefaultObj()
{
	static class ABP_Marker_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Marker_Death_C*>(ABP_Marker_Death_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Marker_Death.BP_Marker_Death_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Marker_Death_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Marker_Death_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Marker_Death.BP_Marker_Death_C.AddMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Marker_Death_C::AddMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Marker_Death_C", "AddMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Marker_Death.BP_Marker_Death_C.ExecuteUbergraph_BP_Marker_Death
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_POIMarker_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_MarkerType>    K2Node_MakeArray_Array                                           (ReferenceParm)
// class UBPC_MinimapSystem_C*        CallFunc_Get_Minimap_Component_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_MarkerData               K2Node_MakeStruct_S_MarkerData                                   (HasGetValueTypeHash)
// TArray<class UW_POIMarker_C*>      CallFunc_Add_POI_Marker_Markers                                  (ReferenceParm, ContainsInstancedReference)

void ABP_Marker_Death_C::ExecuteUbergraph_BP_Marker_Death(int32 EntryPoint, class UW_POIMarker_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, TArray<class UW_POIMarker_C*>& CallFunc_Add_POI_Marker_Markers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Marker_Death_C", "ExecuteUbergraph_BP_Marker_Death");

	Params::ABP_Marker_Death_C_ExecuteUbergraph_BP_Marker_Death_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Get_Minimap_Component_ReturnValue = CallFunc_Get_Minimap_Component_ReturnValue;
	Parms.K2Node_MakeStruct_S_MarkerData = K2Node_MakeStruct_S_MarkerData;
	Parms.CallFunc_Add_POI_Marker_Markers = CallFunc_Add_POI_Marker_Markers;

	UObject::ProcessEvent(Func, &Parms);

}

}


