#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDefault01_RL.RomyDefault01_RL_C
// (None)

class UClass* URomyDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDefault01_RL_C");

	return Clss;
}


// RomyDefault01_RL_C RomyDefault01_RL.Default__RomyDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDefault01_RL_C* URomyDefault01_RL_C::GetDefaultObj()
{
	static class URomyDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDefault01_RL_C*>(URomyDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


