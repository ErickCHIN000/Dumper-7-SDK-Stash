#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BrokenGlass.BP_BrokenGlass_C
// (Actor)

class UClass* ABP_BrokenGlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BrokenGlass_C");

	return Clss;
}


// BP_BrokenGlass_C BP_BrokenGlass.Default__BP_BrokenGlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BrokenGlass_C* ABP_BrokenGlass_C::GetDefaultObj()
{
	static class ABP_BrokenGlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BrokenGlass_C*>(ABP_BrokenGlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


