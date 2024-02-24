#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhotoModeController.BP_PhotoModeController_C
// (Actor)

class UClass* ABP_PhotoModeController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhotoModeController_C");

	return Clss;
}


// BP_PhotoModeController_C BP_PhotoModeController.Default__BP_PhotoModeController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PhotoModeController_C* ABP_PhotoModeController_C::GetDefaultObj()
{
	static class ABP_PhotoModeController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PhotoModeController_C*>(ABP_PhotoModeController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PhotoModeController.BP_PhotoModeController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModeController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeController_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModeController.BP_PhotoModeController_C.OnEnterPhotoMode
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PhotoModeController_C::OnEnterPhotoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeController_C", "OnEnterPhotoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModeController.BP_PhotoModeController_C.OnExitPhotoMode
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PhotoModeController_C::OnExitPhotoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeController_C", "OnExitPhotoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModeController.BP_PhotoModeController_C.ExecuteUbergraph_BP_PhotoModeController
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhotoModeState             CallFunc_GetPhotoModeState_ReturnValue                           (None)

void ABP_PhotoModeController_C::ExecuteUbergraph_BP_PhotoModeController(int32 EntryPoint, const struct FPhotoModeState& CallFunc_GetPhotoModeState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeController_C", "ExecuteUbergraph_BP_PhotoModeController");

	Params::ABP_PhotoModeController_C_ExecuteUbergraph_BP_PhotoModeController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPhotoModeState_ReturnValue = CallFunc_GetPhotoModeState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


