#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Credits.BP_Credits_C
// (Actor)

class UClass* ABP_Credits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Credits_C");

	return Clss;
}


// BP_Credits_C BP_Credits.Default__BP_Credits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Credits_C* ABP_Credits_C::GetDefaultObj()
{
	static class ABP_Credits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Credits_C*>(ABP_Credits_C::StaticClass()->DefaultObject);

	return Default;
}

}


