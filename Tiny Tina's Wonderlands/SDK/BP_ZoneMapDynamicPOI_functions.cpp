#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_ZoneMapDynamicPOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMapDynamicPOI_C");

	return Clss;
}


// BP_ZoneMapDynamicPOI_C BP_ZoneMapDynamicPOI.Default__BP_ZoneMapDynamicPOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ZoneMapDynamicPOI_C* UBP_ZoneMapDynamicPOI_C::GetDefaultObj()
{
	static class UBP_ZoneMapDynamicPOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ZoneMapDynamicPOI_C*>(UBP_ZoneMapDynamicPOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ZoneMapDynamicPOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapDynamicPOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ExecuteUbergraph_BP_ZoneMapDynamicPOI
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZoneMapViewer*              K2Node_DynamicCast_AsZone_Map_Viewer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZoneMapDynamicPOI_C::ExecuteUbergraph_BP_ZoneMapDynamicPOI(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AZoneMapViewer* K2Node_DynamicCast_AsZone_Map_Viewer, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapDynamicPOI_C", "ExecuteUbergraph_BP_ZoneMapDynamicPOI");

	Params::UBP_ZoneMapDynamicPOI_C_ExecuteUbergraph_BP_ZoneMapDynamicPOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsZone_Map_Viewer = K2Node_DynamicCast_AsZone_Map_Viewer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


