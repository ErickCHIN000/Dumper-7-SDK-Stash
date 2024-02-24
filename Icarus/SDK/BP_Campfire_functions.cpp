#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Campfire.BP_Campfire_C
// (Actor)

class UClass* ABP_Campfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Campfire_C");

	return Clss;
}


// BP_Campfire_C BP_Campfire.Default__BP_Campfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Campfire_C* ABP_Campfire_C::GetDefaultObj()
{
	static class ABP_Campfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Campfire_C*>(ABP_Campfire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Campfire.BP_Campfire_C.GeneratorStateUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UThermalComponent*           CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Campfire_C::GeneratorStateUpdate(bool Active, enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_RandomFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "GeneratorStateUpdate");

	Params::ABP_Campfire_C_GeneratorStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Campfire.BP_Campfire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Campfire_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Campfire.BP_Campfire_C.Snow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Campfire_C::Snow(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "Snow");

	Params::ABP_Campfire_C_Snow_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Campfire.BP_Campfire_C.DeactivateCampfire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Campfire_C::DeactivateCampfire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "DeactivateCampfire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Campfire.BP_Campfire_C.Rain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Millilitres                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Campfire_C::Rain(int32 Millilitres)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "Rain");

	Params::ABP_Campfire_C_Rain_Params Parms{};

	Parms.Millilitres = Millilitres;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Campfire.BP_Campfire_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Campfire_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Campfire.BP_Campfire_C.OnThermalComponentActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Campfire_C::OnThermalComponentActivated(class UActorComponent* Component, bool bReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "OnThermalComponentActivated");

	Params::ABP_Campfire_C_OnThermalComponentActivated_Params Parms{};

	Parms.Component = Component;
	Parms.bReset = bReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Campfire.BP_Campfire_C.OnThermalComponentDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Campfire_C::OnThermalComponentDeactivated(class UActorComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "OnThermalComponentDeactivated");

	Params::ABP_Campfire_C_OnThermalComponentDeactivated_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Campfire.BP_Campfire_C.ExecuteUbergraph_BP_Campfire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Intensity                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Millilitres                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             K2Node_CustomEvent_Component_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bReset                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             K2Node_CustomEvent_Component                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UThermalComponent*           CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Campfire_C::ExecuteUbergraph_BP_Campfire(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_Intensity, bool CallFunc_IsServer_ReturnValue, bool Temp_wildcard_Variable, int32 K2Node_Event_Millilitres, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UActorComponent* K2Node_CustomEvent_Component_1, bool K2Node_CustomEvent_bReset, bool CallFunc_BooleanAND_ReturnValue, class UActorComponent* K2Node_CustomEvent_Component, enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Campfire_C", "ExecuteUbergraph_BP_Campfire");

	Params::ABP_Campfire_C_ExecuteUbergraph_BP_Campfire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_Intensity = K2Node_Event_Intensity;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_Event_Millilitres = K2Node_Event_Millilitres;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Component_1 = K2Node_CustomEvent_Component_1;
	Parms.K2Node_CustomEvent_bReset = K2Node_CustomEvent_bReset;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Component = K2Node_CustomEvent_Component;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


