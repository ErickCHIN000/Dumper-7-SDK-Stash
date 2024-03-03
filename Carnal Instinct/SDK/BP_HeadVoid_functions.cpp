#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HeadVoid.BP_HeadVoid_C
// (Actor)

class UClass* ABP_HeadVoid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HeadVoid_C");

	return Clss;
}


// BP_HeadVoid_C BP_HeadVoid.Default__BP_HeadVoid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HeadVoid_C* ABP_HeadVoid_C::GetDefaultObj()
{
	static class ABP_HeadVoid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HeadVoid_C*>(ABP_HeadVoid_C::StaticClass()->DefaultObject);

	return Default;
}

}


