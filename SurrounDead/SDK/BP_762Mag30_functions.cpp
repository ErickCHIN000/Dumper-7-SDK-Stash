#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_762Mag30.BP_762Mag30_C
// (Actor)

class UClass* ABP_762Mag30_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_762Mag30_C");

	return Clss;
}


// BP_762Mag30_C BP_762Mag30.Default__BP_762Mag30_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_762Mag30_C* ABP_762Mag30_C::GetDefaultObj()
{
	static class ABP_762Mag30_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_762Mag30_C*>(ABP_762Mag30_C::StaticClass()->DefaultObject);

	return Default;
}

}

