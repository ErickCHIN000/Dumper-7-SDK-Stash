#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HeadPrisoner1.BP_HeadPrisoner1_C
// (Actor)

class UClass* ABP_HeadPrisoner1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HeadPrisoner1_C");

	return Clss;
}


// BP_HeadPrisoner1_C BP_HeadPrisoner1.Default__BP_HeadPrisoner1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HeadPrisoner1_C* ABP_HeadPrisoner1_C::GetDefaultObj()
{
	static class ABP_HeadPrisoner1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HeadPrisoner1_C*>(ABP_HeadPrisoner1_C::StaticClass()->DefaultObject);

	return Default;
}

}


