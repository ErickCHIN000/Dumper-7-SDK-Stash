#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PatrolBackpack.BP_PatrolBackpack_C
// (Actor)

class UClass* ABP_PatrolBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PatrolBackpack_C");

	return Clss;
}


// BP_PatrolBackpack_C BP_PatrolBackpack.Default__BP_PatrolBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PatrolBackpack_C* ABP_PatrolBackpack_C::GetDefaultObj()
{
	static class ABP_PatrolBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PatrolBackpack_C*>(ABP_PatrolBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


