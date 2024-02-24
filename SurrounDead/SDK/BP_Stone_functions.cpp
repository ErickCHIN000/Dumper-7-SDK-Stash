#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Stone.BP_Stone_C
// (Actor)

class UClass* ABP_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Stone_C");

	return Clss;
}


// BP_Stone_C BP_Stone.Default__BP_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Stone_C* ABP_Stone_C::GetDefaultObj()
{
	static class ABP_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Stone_C*>(ABP_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


