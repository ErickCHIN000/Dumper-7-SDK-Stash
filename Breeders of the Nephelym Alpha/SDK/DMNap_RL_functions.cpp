#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMNap_RL.DMNap_RL_C
// (None)

class UClass* UDMNap_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMNap_RL_C");

	return Clss;
}


// DMNap_RL_C DMNap_RL.Default__DMNap_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMNap_RL_C* UDMNap_RL_C::GetDefaultObj()
{
	static class UDMNap_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMNap_RL_C*>(UDMNap_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


