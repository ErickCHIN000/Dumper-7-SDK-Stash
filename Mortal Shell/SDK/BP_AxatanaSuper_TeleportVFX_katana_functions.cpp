#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AxatanaSuper_TeleportVFX_katana.BP_AxatanaSuper_TeleportVFX_katana_C
// (Actor)

class UClass* ABP_AxatanaSuper_TeleportVFX_katana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AxatanaSuper_TeleportVFX_katana_C");

	return Clss;
}


// BP_AxatanaSuper_TeleportVFX_katana_C BP_AxatanaSuper_TeleportVFX_katana.Default__BP_AxatanaSuper_TeleportVFX_katana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AxatanaSuper_TeleportVFX_katana_C* ABP_AxatanaSuper_TeleportVFX_katana_C::GetDefaultObj()
{
	static class ABP_AxatanaSuper_TeleportVFX_katana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AxatanaSuper_TeleportVFX_katana_C*>(ABP_AxatanaSuper_TeleportVFX_katana_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AxatanaSuper_TeleportVFX_katana.BP_AxatanaSuper_TeleportVFX_katana_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInterpControlPoint         K2Node_MakeStruct_InterpControlPoint                             (NoDestructor)
// struct FInterpControlPoint         K2Node_MakeStruct_InterpControlPoint_1                           (NoDestructor)
// TArray<struct FInterpControlPoint> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void ABP_AxatanaSuper_TeleportVFX_katana_C::UserConstructionScript(const struct FInterpControlPoint& K2Node_MakeStruct_InterpControlPoint, const struct FInterpControlPoint& K2Node_MakeStruct_InterpControlPoint_1, TArray<struct FInterpControlPoint>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AxatanaSuper_TeleportVFX_katana_C", "UserConstructionScript");

	Params::ABP_AxatanaSuper_TeleportVFX_katana_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeStruct_InterpControlPoint = K2Node_MakeStruct_InterpControlPoint;
	Parms.K2Node_MakeStruct_InterpControlPoint_1 = K2Node_MakeStruct_InterpControlPoint_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AxatanaSuper_TeleportVFX_katana.BP_AxatanaSuper_TeleportVFX_katana_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AxatanaSuper_TeleportVFX_katana_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AxatanaSuper_TeleportVFX_katana_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AxatanaSuper_TeleportVFX_katana.BP_AxatanaSuper_TeleportVFX_katana_C.BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AxatanaSuper_TeleportVFX_katana_C::BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AxatanaSuper_TeleportVFX_katana_C", "BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature");

	Params::ABP_AxatanaSuper_TeleportVFX_katana_C_BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AxatanaSuper_TeleportVFX_katana.BP_AxatanaSuper_TeleportVFX_katana_C.BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AxatanaSuper_TeleportVFX_katana_C::BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AxatanaSuper_TeleportVFX_katana_C", "BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature");

	Params::ABP_AxatanaSuper_TeleportVFX_katana_C_BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AxatanaSuper_TeleportVFX_katana.BP_AxatanaSuper_TeleportVFX_katana_C.ExecuteUbergraph_BP_AxatanaSuper_TeleportVFX_katana
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_ComponentBoundEvent_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_ComponentBoundEvent_PSystem                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AxatanaSuper_TeleportVFX_katana_C::ExecuteUbergraph_BP_AxatanaSuper_TeleportVFX_katana(int32 EntryPoint, class UActorComponent* K2Node_ComponentBoundEvent_Component, class UParticleSystemComponent* K2Node_ComponentBoundEvent_PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AxatanaSuper_TeleportVFX_katana_C", "ExecuteUbergraph_BP_AxatanaSuper_TeleportVFX_katana");

	Params::ABP_AxatanaSuper_TeleportVFX_katana_C_ExecuteUbergraph_BP_AxatanaSuper_TeleportVFX_katana_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Component = K2Node_ComponentBoundEvent_Component;
	Parms.K2Node_ComponentBoundEvent_PSystem = K2Node_ComponentBoundEvent_PSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}


