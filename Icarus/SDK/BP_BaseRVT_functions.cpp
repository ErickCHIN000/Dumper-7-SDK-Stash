#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseRVT.BP_BaseRVT_C
// (Actor)

class UClass* ABP_BaseRVT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseRVT_C");

	return Clss;
}


// BP_BaseRVT_C BP_BaseRVT.Default__BP_BaseRVT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BaseRVT_C* ABP_BaseRVT_C::GetDefaultObj()
{
	static class ABP_BaseRVT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BaseRVT_C*>(ABP_BaseRVT_C::StaticClass()->DefaultObject);

	return Default;
}

}


