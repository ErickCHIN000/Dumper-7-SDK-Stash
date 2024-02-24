#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDefault_RL.DMDefault_RL_C
// (None)

class UClass* UDMDefault_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDefault_RL_C");

	return Clss;
}


// DMDefault_RL_C DMDefault_RL.Default__DMDefault_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDefault_RL_C* UDMDefault_RL_C::GetDefaultObj()
{
	static class UDMDefault_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDefault_RL_C*>(UDMDefault_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


