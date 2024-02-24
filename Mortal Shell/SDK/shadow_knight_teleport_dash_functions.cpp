#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass shadow_knight_teleport_dash.shadow_knight_teleport_dash_C
// (Actor)

class UClass* AShadow_knight_teleport_dash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("shadow_knight_teleport_dash_C");

	return Clss;
}


// shadow_knight_teleport_dash_C shadow_knight_teleport_dash.Default__shadow_knight_teleport_dash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShadow_knight_teleport_dash_C* AShadow_knight_teleport_dash_C::GetDefaultObj()
{
	static class AShadow_knight_teleport_dash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShadow_knight_teleport_dash_C*>(AShadow_knight_teleport_dash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInterpControlPoint         K2Node_MakeStruct_InterpControlPoint                             (NoDestructor)
// struct FInterpControlPoint         K2Node_MakeStruct_InterpControlPoint_1                           (NoDestructor)
// TArray<struct FInterpControlPoint> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void AShadow_knight_teleport_dash_C::UserConstructionScript(const struct FInterpControlPoint& K2Node_MakeStruct_InterpControlPoint, const struct FInterpControlPoint& K2Node_MakeStruct_InterpControlPoint_1, TArray<struct FInterpControlPoint>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("shadow_knight_teleport_dash_C", "UserConstructionScript");

	Params::AShadow_knight_teleport_dash_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeStruct_InterpControlPoint = K2Node_MakeStruct_InterpControlPoint;
	Parms.K2Node_MakeStruct_InterpControlPoint_1 = K2Node_MakeStruct_InterpControlPoint_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AShadow_knight_teleport_dash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("shadow_knight_teleport_dash_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShadow_knight_teleport_dash_C::BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("shadow_knight_teleport_dash_C", "BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature");

	Params::AShadow_knight_teleport_dash_C_BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShadow_knight_teleport_dash_C::BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("shadow_knight_teleport_dash_C", "BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature");

	Params::AShadow_knight_teleport_dash_C_BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.ExecuteUbergraph_shadow_knight_teleport_dash
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_ComponentBoundEvent_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_ComponentBoundEvent_PSystem                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShadow_knight_teleport_dash_C::ExecuteUbergraph_shadow_knight_teleport_dash(int32 EntryPoint, class UActorComponent* K2Node_ComponentBoundEvent_Component, class UParticleSystemComponent* K2Node_ComponentBoundEvent_PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("shadow_knight_teleport_dash_C", "ExecuteUbergraph_shadow_knight_teleport_dash");

	Params::AShadow_knight_teleport_dash_C_ExecuteUbergraph_shadow_knight_teleport_dash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Component = K2Node_ComponentBoundEvent_Component;
	Parms.K2Node_ComponentBoundEvent_PSystem = K2Node_ComponentBoundEvent_PSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}


