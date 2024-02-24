#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerMarker.BP_PlayerMarker_C
// (Actor)

class UClass* ABP_PlayerMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerMarker_C");

	return Clss;
}


// BP_PlayerMarker_C BP_PlayerMarker.Default__BP_PlayerMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerMarker_C* ABP_PlayerMarker_C::GetDefaultObj()
{
	static class ABP_PlayerMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerMarker_C*>(ABP_PlayerMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerMarker.BP_PlayerMarker_C.ComponentsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (Parm, OutParm, ContainsInstancedReference)

void ABP_PlayerMarker_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMarker_C", "ComponentsToSave");

	Params::ABP_PlayerMarker_C_ComponentsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Components != nullptr)
		*Components = std::move(Parms.Components);

}


// Function BP_PlayerMarker.BP_PlayerMarker_C.ActorPreSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerMarker_C::ActorPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMarker_C", "ActorPreSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMarker.BP_PlayerMarker_C.ActorSaved
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerMarker_C::ActorSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMarker_C", "ActorSaved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMarker.BP_PlayerMarker_C.Event_AddMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerMarker_C::Event_AddMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMarker_C", "Event_AddMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMarker.BP_PlayerMarker_C.ActorLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerMarker_C::ActorLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMarker_C", "ActorLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMarker.BP_PlayerMarker_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PlayerMarker_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMarker_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMarker.BP_PlayerMarker_C.ExecuteUbergraph_BP_PlayerMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBPC_MinimapSystem_C*        CallFunc_Get_Minimap_Component_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBPC_MinimapSystem_C*        CallFunc_Get_Minimap_Component_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_PlayerMarker_C*>   CallFunc_Add_Saved_Player_Marker_Markers                         (ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CompassMarker_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CompassMarker_C*         CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_PlayerMarker_C*>   CallFunc_Add_Player_Marker_Markers                               (ReferenceParm, ContainsInstancedReference)

void ABP_PlayerMarker_C::ExecuteUbergraph_BP_PlayerMarker(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue_1, TArray<class UW_PlayerMarker_C*>& CallFunc_Add_Saved_Player_Marker_Markers, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CompassMarker_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_CompassMarker_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UW_PlayerMarker_C*>& CallFunc_Add_Player_Marker_Markers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMarker_C", "ExecuteUbergraph_BP_PlayerMarker");

	Params::ABP_PlayerMarker_C_ExecuteUbergraph_BP_PlayerMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Get_Minimap_Component_ReturnValue = CallFunc_Get_Minimap_Component_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Get_Minimap_Component_ReturnValue_1 = CallFunc_Get_Minimap_Component_ReturnValue_1;
	Parms.CallFunc_Add_Saved_Player_Marker_Markers = CallFunc_Add_Saved_Player_Marker_Markers;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_Player_Marker_Markers = CallFunc_Add_Player_Marker_Markers;

	UObject::ProcessEvent(Func, &Parms);

}

}


