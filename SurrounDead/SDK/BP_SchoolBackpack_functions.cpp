#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SchoolBackpack.BP_SchoolBackpack_C
// (Actor)

class UClass* ABP_SchoolBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SchoolBackpack_C");

	return Clss;
}


// BP_SchoolBackpack_C BP_SchoolBackpack.Default__BP_SchoolBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SchoolBackpack_C* ABP_SchoolBackpack_C::GetDefaultObj()
{
	static class ABP_SchoolBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SchoolBackpack_C*>(ABP_SchoolBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


