#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DuffleBag.BP_DuffleBag_C
// (Actor)

class UClass* ABP_DuffleBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DuffleBag_C");

	return Clss;
}


// BP_DuffleBag_C BP_DuffleBag.Default__BP_DuffleBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DuffleBag_C* ABP_DuffleBag_C::GetDefaultObj()
{
	static class ABP_DuffleBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DuffleBag_C*>(ABP_DuffleBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


