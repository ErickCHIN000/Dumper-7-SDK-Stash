#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_ctrl_CGPlayerController.bp_ctrl_CGPlayerController_C
// (Actor, PlayerController)

class UClass* Abp_ctrl_CGPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_ctrl_CGPlayerController_C");

	return Clss;
}


// bp_ctrl_CGPlayerController_C bp_ctrl_CGPlayerController.Default__bp_ctrl_CGPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_ctrl_CGPlayerController_C* Abp_ctrl_CGPlayerController_C::GetDefaultObj()
{
	static class Abp_ctrl_CGPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_ctrl_CGPlayerController_C*>(Abp_ctrl_CGPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_ctrl_CGPlayerController.bp_ctrl_CGPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_ctrl_CGPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_ctrl_CGPlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_ctrl_CGPlayerController.bp_ctrl_CGPlayerController_C.ExecuteUbergraph_bp_ctrl_CGPlayerController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_ctrl_CGPlayerController_C::ExecuteUbergraph_bp_ctrl_CGPlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_ctrl_CGPlayerController_C", "ExecuteUbergraph_bp_ctrl_CGPlayerController");

	Params::Abp_ctrl_CGPlayerController_C_ExecuteUbergraph_bp_ctrl_CGPlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


