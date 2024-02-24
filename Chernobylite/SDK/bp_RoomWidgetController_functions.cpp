#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_RoomWidgetController.bp_RoomWidgetController_C
// (Actor)

class UClass* Abp_RoomWidgetController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_RoomWidgetController_C");

	return Clss;
}


// bp_RoomWidgetController_C bp_RoomWidgetController.Default__bp_RoomWidgetController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_RoomWidgetController_C* Abp_RoomWidgetController_C::GetDefaultObj()
{
	static class Abp_RoomWidgetController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_RoomWidgetController_C*>(Abp_RoomWidgetController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_RoomWidgetController.bp_RoomWidgetController_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_RoomWidgetController_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_RoomWidgetController_C", "OnInteractionPressedComponent");

	Params::Abp_RoomWidgetController_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_RoomWidgetController.bp_RoomWidgetController_C.ExecuteUbergraph_bp_RoomWidgetController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_RoomWidgetController_C::ExecuteUbergraph_bp_RoomWidgetController(int32 EntryPoint, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_RoomWidgetController_C", "ExecuteUbergraph_bp_RoomWidgetController");

	Params::Abp_RoomWidgetController_C_ExecuteUbergraph_bp_RoomWidgetController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}

}


