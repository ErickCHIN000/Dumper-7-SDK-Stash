#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_762Mag60.BP_762Mag60_C
// (Actor)

class UClass* ABP_762Mag60_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_762Mag60_C");

	return Clss;
}


// BP_762Mag60_C BP_762Mag60.Default__BP_762Mag60_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_762Mag60_C* ABP_762Mag60_C::GetDefaultObj()
{
	static class ABP_762Mag60_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_762Mag60_C*>(ABP_762Mag60_C::StaticClass()->DefaultObject);

	return Default;
}

}


