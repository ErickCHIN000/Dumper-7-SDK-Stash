#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_ZoneMap_LegendaryPOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMap_LegendaryPOI_C");

	return Clss;
}


// BP_ZoneMap_LegendaryPOI_C BP_ZoneMap_LegendaryPOI.Default__BP_ZoneMap_LegendaryPOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ZoneMap_LegendaryPOI_C* UBP_ZoneMap_LegendaryPOI_C::GetDefaultObj()
{
	static class UBP_ZoneMap_LegendaryPOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ZoneMap_LegendaryPOI_C*>(UBP_ZoneMap_LegendaryPOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ZoneMap_LegendaryPOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_LegendaryPOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C.ExecuteUbergraph_BP_ZoneMap_LegendaryPOI
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZoneMapViewer*              K2Node_DynamicCast_AsZone_Map_Viewer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZoneMap_LegendaryPOI_C::ExecuteUbergraph_BP_ZoneMap_LegendaryPOI(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AZoneMapViewer* K2Node_DynamicCast_AsZone_Map_Viewer, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_LegendaryPOI_C", "ExecuteUbergraph_BP_ZoneMap_LegendaryPOI");

	Params::UBP_ZoneMap_LegendaryPOI_C_ExecuteUbergraph_BP_ZoneMap_LegendaryPOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsZone_Map_Viewer = K2Node_DynamicCast_AsZone_Map_Viewer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


