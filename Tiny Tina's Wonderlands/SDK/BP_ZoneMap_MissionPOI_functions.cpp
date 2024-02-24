#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C
// (Actor)

class UClass* ABP_ZoneMap_MissionPOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMap_MissionPOI_C");

	return Clss;
}


// BP_ZoneMap_MissionPOI_C BP_ZoneMap_MissionPOI.Default__BP_ZoneMap_MissionPOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZoneMap_MissionPOI_C* ABP_ZoneMap_MissionPOI_C::GetDefaultObj()
{
	static class ABP_ZoneMap_MissionPOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZoneMap_MissionPOI_C*>(ABP_ZoneMap_MissionPOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ABP_ZoneMap_MissionPOI_C::UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_MissionPOI_C", "UserConstructionScript");

	Params::ABP_ZoneMap_MissionPOI_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_MissionPOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_MissionPOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.BeginZoneMapCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_MissionPOI_C::BeginZoneMapCursorOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_MissionPOI_C", "BeginZoneMapCursorOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.EndZoneMapCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_MissionPOI_C::EndZoneMapCursorOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_MissionPOI_C", "EndZoneMapCursorOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.K2_OnWaypointUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_MissionPOI_C::K2_OnWaypointUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_MissionPOI_C", "K2_OnWaypointUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ExecuteUbergraph_BP_ZoneMap_MissionPOI
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EZoneMapMissionStatus   CallFunc_GetMissionStatus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EZoneMapMissionStatus   CallFunc_GetMissionStatus_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_MissionPOI_C::ExecuteUbergraph_BP_ZoneMap_MissionPOI(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, enum class EZoneMapMissionStatus CallFunc_GetMissionStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EZoneMapMissionStatus CallFunc_GetMissionStatus_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_MissionPOI_C", "ExecuteUbergraph_BP_ZoneMap_MissionPOI");

	Params::ABP_ZoneMap_MissionPOI_C_ExecuteUbergraph_BP_ZoneMap_MissionPOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMissionStatus_ReturnValue = CallFunc_GetMissionStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetMissionStatus_ReturnValue1 = CallFunc_GetMissionStatus_ReturnValue1;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


