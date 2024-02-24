#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C
// (None)

class UClass* IBPInterface_PlayerInputActions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInterface_PlayerInputActions_C");

	return Clss;
}


// BPInterface_PlayerInputActions_C BPInterface_PlayerInputActions.Default__BPInterface_PlayerInputActions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPInterface_PlayerInputActions_C* IBPInterface_PlayerInputActions_C::GetDefaultObj()
{
	static class IBPInterface_PlayerInputActions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPInterface_PlayerInputActions_C*>(IBPInterface_PlayerInputActions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.MeleeStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPInterface_PlayerInputActions_C::MeleeStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "MeleeStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.ow_Player_RE_Stun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPInterface_PlayerInputActions_C::Ow_Player_RE_Stun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "ow_Player_RE_Stun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.ow_camera_reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPInterface_PlayerInputActions_C::Ow_camera_reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "ow_camera_reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.ow_camera_zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPInterface_PlayerInputActions_C::Ow_camera_zoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "ow_camera_zoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.UseBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPInterface_PlayerInputActions_C::UseBanner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "UseBanner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.ReturnToOverworldTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReturning                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPInterface_PlayerInputActions_C::ReturnToOverworldTransition(bool IsReturning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "ReturnToOverworldTransition");

	Params::IBPInterface_PlayerInputActions_C_ReturnToOverworldTransition_Params Parms{};

	Parms.IsReturning = IsReturning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.RandomEncounterTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEncountering                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPInterface_PlayerInputActions_C::RandomEncounterTransition(bool IsEncountering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "RandomEncounterTransition");

	Params::IBPInterface_PlayerInputActions_C_RandomEncounterTransition_Params Parms{};

	Parms.IsEncountering = IsEncountering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.DoMelee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPInterface_PlayerInputActions_C::DoMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "DoMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.GroundSlam_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPInterface_PlayerInputActions_C::GroundSlam_End(float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_PlayerInputActions_C", "GroundSlam_End");

	Params::IBPInterface_PlayerInputActions_C_GroundSlam_End_Params Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}

}


