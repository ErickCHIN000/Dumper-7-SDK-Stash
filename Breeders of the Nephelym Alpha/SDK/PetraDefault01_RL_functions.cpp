#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraDefault01_RL.PetraDefault01_RL_C
// (None)

class UClass* UPetraDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraDefault01_RL_C");

	return Clss;
}


// PetraDefault01_RL_C PetraDefault01_RL.Default__PetraDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraDefault01_RL_C* UPetraDefault01_RL_C::GetDefaultObj()
{
	static class UPetraDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraDefault01_RL_C*>(UPetraDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


