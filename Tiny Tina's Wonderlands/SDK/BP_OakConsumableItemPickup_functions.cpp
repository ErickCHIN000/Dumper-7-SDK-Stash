#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C
// (Actor)

class UClass* ABP_OakConsumableItemPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OakConsumableItemPickup_C");

	return Clss;
}


// BP_OakConsumableItemPickup_C BP_OakConsumableItemPickup.Default__BP_OakConsumableItemPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OakConsumableItemPickup_C* ABP_OakConsumableItemPickup_C::GetDefaultObj()
{
	static class ABP_OakConsumableItemPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OakConsumableItemPickup_C*>(ABP_OakConsumableItemPickup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_OakConsumableItemPickup_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakConsumableItemPickup_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OakConsumableItemPickup_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakConsumableItemPickup_C", "ReceiveEndPlay");

	Params::ABP_OakConsumableItemPickup_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.OnPickedUpEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      WasPickedUpBy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OakConsumableItemPickup_C::OnPickedUpEvent(class AActor* WasPickedUpBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakConsumableItemPickup_C", "OnPickedUpEvent");

	Params::ABP_OakConsumableItemPickup_C_OnPickedUpEvent_Params Parms{};

	Parms.WasPickedUpBy = WasPickedUpBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ExecuteUbergraph_BP_OakConsumableItemPickup
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_WasPickedUpBy                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OakConsumableItemPickup_C::ExecuteUbergraph_BP_OakConsumableItemPickup(int32 EntryPoint, class AActor* K2Node_Event_WasPickedUpBy, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakConsumableItemPickup_C", "ExecuteUbergraph_BP_OakConsumableItemPickup");

	Params::ABP_OakConsumableItemPickup_C_ExecuteUbergraph_BP_OakConsumableItemPickup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WasPickedUpBy = K2Node_Event_WasPickedUpBy;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


