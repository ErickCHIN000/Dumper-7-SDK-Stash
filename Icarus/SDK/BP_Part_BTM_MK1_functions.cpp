#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Part_BTM_MK1.BP_Part_BTM_MK1_C
// (Actor)

class UClass* ABP_Part_BTM_MK1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Part_BTM_MK1_C");

	return Clss;
}


// BP_Part_BTM_MK1_C BP_Part_BTM_MK1.Default__BP_Part_BTM_MK1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Part_BTM_MK1_C* ABP_Part_BTM_MK1_C::GetDefaultObj()
{
	static class ABP_Part_BTM_MK1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Part_BTM_MK1_C*>(ABP_Part_BTM_MK1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.OnRep_TakeoffThrusterFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_BTM_MK1_C::OnRep_TakeoffThrusterFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_BTM_MK1_C", "OnRep_TakeoffThrusterFX");

	Params::ABP_Part_BTM_MK1_C_OnRep_TakeoffThrusterFX_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.OnRep_LandingThrusterFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_BTM_MK1_C::OnRep_LandingThrusterFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_BTM_MK1_C", "OnRep_LandingThrusterFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.TriggerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropShipActionsEnum        Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Part_BTM_MK1_C::TriggerEvent(const struct FDropShipActionsEnum& Actions, bool K2Node_SwitchRowEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_BTM_MK1_C", "TriggerEvent");

	Params::ABP_Part_BTM_MK1_C_TriggerEvent_Params Parms{};

	Parms.Actions = Actions;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_BTM_MK1_C::GetMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_BTM_MK1_C", "GetMesh");

	Params::ABP_Part_BTM_MK1_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}

}


