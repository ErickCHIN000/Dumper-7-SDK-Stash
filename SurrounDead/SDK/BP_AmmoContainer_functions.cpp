#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AmmoContainer.BP_AmmoContainer_C
// (Actor)

class UClass* ABP_AmmoContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AmmoContainer_C");

	return Clss;
}


// BP_AmmoContainer_C BP_AmmoContainer.Default__BP_AmmoContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AmmoContainer_C* ABP_AmmoContainer_C::GetDefaultObj()
{
	static class ABP_AmmoContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AmmoContainer_C*>(ABP_AmmoContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


