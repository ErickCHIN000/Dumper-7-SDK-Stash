#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MP7.BP_MP7_C
// (Actor)

class UClass* ABP_MP7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MP7_C");

	return Clss;
}


// BP_MP7_C BP_MP7.Default__BP_MP7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MP7_C* ABP_MP7_C::GetDefaultObj()
{
	static class ABP_MP7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MP7_C*>(ABP_MP7_C::StaticClass()->DefaultObject);

	return Default;
}

}


