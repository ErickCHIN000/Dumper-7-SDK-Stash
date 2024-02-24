#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpaceMenuCamera.BP_SpaceMenuCamera_C
// (Actor, Pawn)

class UClass* ABP_SpaceMenuCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpaceMenuCamera_C");

	return Clss;
}


// BP_SpaceMenuCamera_C BP_SpaceMenuCamera.Default__BP_SpaceMenuCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpaceMenuCamera_C* ABP_SpaceMenuCamera_C::GetDefaultObj()
{
	static class ABP_SpaceMenuCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpaceMenuCamera_C*>(ABP_SpaceMenuCamera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpaceMenuCamera.BP_SpaceMenuCamera_C.CaptureScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpaceMenuCamera_C::CaptureScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceMenuCamera_C", "CaptureScene");



	UObject::ProcessEvent(Func, nullptr);

}

}


