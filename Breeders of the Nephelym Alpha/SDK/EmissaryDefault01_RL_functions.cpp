#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_RL.EmissaryDefault01_RL_C
// (None)

class UClass* UEmissaryDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_RL_C");

	return Clss;
}


// EmissaryDefault01_RL_C EmissaryDefault01_RL.Default__EmissaryDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_RL_C* UEmissaryDefault01_RL_C::GetDefaultObj()
{
	static class UEmissaryDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_RL_C*>(UEmissaryDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


