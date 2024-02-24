#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SteyrAug.BP_SteyrAug_C
// (Actor)

class UClass* ABP_SteyrAug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SteyrAug_C");

	return Clss;
}


// BP_SteyrAug_C BP_SteyrAug.Default__BP_SteyrAug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SteyrAug_C* ABP_SteyrAug_C::GetDefaultObj()
{
	static class ABP_SteyrAug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SteyrAug_C*>(ABP_SteyrAug_C::StaticClass()->DefaultObject);

	return Default;
}

}


