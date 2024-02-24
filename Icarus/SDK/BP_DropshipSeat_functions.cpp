#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DropshipSeat.BP_DropshipSeat_C
// (Actor)

class UClass* ABP_DropshipSeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DropshipSeat_C");

	return Clss;
}


// BP_DropshipSeat_C BP_DropshipSeat.Default__BP_DropshipSeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DropshipSeat_C* ABP_DropshipSeat_C::GetDefaultObj()
{
	static class ABP_DropshipSeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DropshipSeat_C*>(ABP_DropshipSeat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DropshipSeat.BP_DropshipSeat_C.OnRep_SyncedTransform
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetActorRelativeTransform_SweepHitResult             (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_DropshipSeat_C::OnRep_SyncedTransform(const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DropshipSeat_C", "OnRep_SyncedTransform");

	Params::ABP_DropshipSeat_C_OnRep_SyncedTransform_Params Parms{};

	Parms.CallFunc_K2_SetActorRelativeTransform_SweepHitResult = CallFunc_K2_SetActorRelativeTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DropshipSeat.BP_DropshipSeat_C.EnterSeat
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnterSeat_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_DropshipSeat_C::EnterSeat(class AIcarusPlayerCharacter* PlayerCharacter, bool CallFunc_EnterSeat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DropshipSeat_C", "EnterSeat");

	Params::ABP_DropshipSeat_C_EnterSeat_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_EnterSeat_ReturnValue = CallFunc_EnterSeat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DropshipSeat.BP_DropshipSeat_C.ServerInteract
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DropshipSeat_C::ServerInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DropshipSeat_C", "ServerInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DropshipSeat.BP_DropshipSeat_C.ExecuteUbergraph_BP_DropshipSeat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DropshipSeat_C::ExecuteUbergraph_BP_DropshipSeat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DropshipSeat_C", "ExecuteUbergraph_BP_DropshipSeat");

	Params::ABP_DropshipSeat_C_ExecuteUbergraph_BP_DropshipSeat_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


