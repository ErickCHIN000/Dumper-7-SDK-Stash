#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_762Suppressor.BP_762Suppressor_C
// (Actor)

class UClass* ABP_762Suppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_762Suppressor_C");

	return Clss;
}


// BP_762Suppressor_C BP_762Suppressor.Default__BP_762Suppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_762Suppressor_C* ABP_762Suppressor_C::GetDefaultObj()
{
	static class ABP_762Suppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_762Suppressor_C*>(ABP_762Suppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


