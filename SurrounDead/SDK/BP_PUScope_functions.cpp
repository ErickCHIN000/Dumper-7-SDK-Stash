#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PUScope.BP_PUScope_C
// (Actor)

class UClass* ABP_PUScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PUScope_C");

	return Clss;
}


// BP_PUScope_C BP_PUScope.Default__BP_PUScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PUScope_C* ABP_PUScope_C::GetDefaultObj()
{
	static class ABP_PUScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PUScope_C*>(ABP_PUScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


