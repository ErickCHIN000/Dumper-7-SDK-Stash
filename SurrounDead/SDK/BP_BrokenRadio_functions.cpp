#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BrokenRadio.BP_BrokenRadio_C
// (Actor)

class UClass* ABP_BrokenRadio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BrokenRadio_C");

	return Clss;
}


// BP_BrokenRadio_C BP_BrokenRadio.Default__BP_BrokenRadio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BrokenRadio_C* ABP_BrokenRadio_C::GetDefaultObj()
{
	static class ABP_BrokenRadio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BrokenRadio_C*>(ABP_BrokenRadio_C::StaticClass()->DefaultObject);

	return Default;
}

}


