#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Radar_Electric.BP_Radar_Electric_C
// (Actor)

class UClass* ABP_Radar_Electric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Radar_Electric_C");

	return Clss;
}


// BP_Radar_Electric_C BP_Radar_Electric.Default__BP_Radar_Electric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Radar_Electric_C* ABP_Radar_Electric_C::GetDefaultObj()
{
	static class ABP_Radar_Electric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Radar_Electric_C*>(ABP_Radar_Electric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Radar_Electric.BP_Radar_Electric_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnergyComponent*            CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActivateResourceComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Radar_Electric_C::Deployable_Interact(class AActor* Interactor, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ActivateResourceComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Radar_Electric_C", "Deployable_Interact");

	Params::ABP_Radar_Electric_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ActivateResourceComponent_ReturnValue = CallFunc_ActivateResourceComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Radar_Electric.BP_Radar_Electric_C.EnergyNetworkStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Radar_Electric_C::EnergyNetworkStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Radar_Electric_C", "EnergyNetworkStateUpdate");

	Params::ABP_Radar_Electric_C_EnergyNetworkStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Radar_Electric.BP_Radar_Electric_C.OnRadarStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnergyComponent*            CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Radar_Electric_C::OnRadarStateUpdated(enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Radar_Electric_C", "OnRadarStateUpdated");

	Params::ABP_Radar_Electric_C_OnRadarStateUpdated_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


