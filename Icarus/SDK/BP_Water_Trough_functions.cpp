#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Water_Trough.BP_Water_Trough_C
// (Actor)

class UClass* ABP_Water_Trough_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Water_Trough_C");

	return Clss;
}


// BP_Water_Trough_C BP_Water_Trough.Default__BP_Water_Trough_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Water_Trough_C* ABP_Water_Trough_C::GetDefaultObj()
{
	static class ABP_Water_Trough_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Water_Trough_C*>(ABP_Water_Trough_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Water_Trough.BP_Water_Trough_C.UpdateWaterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Water_Trough_C::UpdateWaterVisibility(bool Visible, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "UpdateWaterVisibility");

	Params::ABP_Water_Trough_C_UpdateWaterVisibility_Params Parms{};

	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Water_Trough.BP_Water_Trough_C.OnRep_TroughContainsWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Water_Trough_C::OnRep_TroughContainsWater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "OnRep_TroughContainsWater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Water_Trough.BP_Water_Trough_C.UpdateProxyMeshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFillableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Water_Trough_C::UpdateProxyMeshVisibility(enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "UpdateProxyMeshVisibility");

	Params::ABP_Water_Trough_C_UpdateProxyMeshVisibility_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Water_Trough.BP_Water_Trough_C.Snow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Water_Trough_C::Snow(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "Snow");

	Params::ABP_Water_Trough_C_Snow_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Water_Trough.BP_Water_Trough_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Water_Trough_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Water_Trough.BP_Water_Trough_C.OnDynamicDataUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Water_Trough_C::OnDynamicDataUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "OnDynamicDataUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Water_Trough.BP_Water_Trough_C.Rain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Millilitres                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Water_Trough_C::Rain(int32 Millilitres)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "Rain");

	Params::ABP_Water_Trough_C_Rain_Params Parms{};

	Parms.Millilitres = Millilitres;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Water_Trough.BP_Water_Trough_C.ExecuteUbergraph_BP_Water_Trough
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Intensity                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Millilitres                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFillableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ContainerCurrentlyAcceptsType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddContainerActorCapacity_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Water_Trough_C::ExecuteUbergraph_BP_Water_Trough(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Intensity, int32 K2Node_Event_Millilitres, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_ContainerCurrentlyAcceptsType_ReturnValue, int32 CallFunc_AddContainerActorCapacity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Water_Trough_C", "ExecuteUbergraph_BP_Water_Trough");

	Params::ABP_Water_Trough_C_ExecuteUbergraph_BP_Water_Trough_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Intensity = K2Node_Event_Intensity;
	Parms.K2Node_Event_Millilitres = K2Node_Event_Millilitres;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.CallFunc_ContainerCurrentlyAcceptsType_ReturnValue = CallFunc_ContainerCurrentlyAcceptsType_ReturnValue;
	Parms.CallFunc_AddContainerActorCapacity_ReturnValue = CallFunc_AddContainerActorCapacity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


