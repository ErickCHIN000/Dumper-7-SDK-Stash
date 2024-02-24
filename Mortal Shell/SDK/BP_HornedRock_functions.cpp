#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HornedRock.BP_HornedRock_C
// (Actor)

class UClass* ABP_HornedRock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HornedRock_C");

	return Clss;
}


// BP_HornedRock_C BP_HornedRock.Default__BP_HornedRock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HornedRock_C* ABP_HornedRock_C::GetDefaultObj()
{
	static class ABP_HornedRock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HornedRock_C*>(ABP_HornedRock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HornedRock.BP_HornedRock_C.BeginOutlineFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BeginOutlineFocus_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HornedRock_C::BeginOutlineFocus(bool* Success, bool CallFunc_BeginOutlineFocus_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HornedRock_C", "BeginOutlineFocus");

	Params::ABP_HornedRock_C_BeginOutlineFocus_Params Parms{};

	Parms.CallFunc_BeginOutlineFocus_Success = CallFunc_BeginOutlineFocus_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


