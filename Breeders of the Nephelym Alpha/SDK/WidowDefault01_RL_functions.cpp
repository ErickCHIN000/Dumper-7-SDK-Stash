#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowDefault01_RL.WidowDefault01_RL_C
// (None)

class UClass* UWidowDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowDefault01_RL_C");

	return Clss;
}


// WidowDefault01_RL_C WidowDefault01_RL.Default__WidowDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowDefault01_RL_C* UWidowDefault01_RL_C::GetDefaultObj()
{
	static class UWidowDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowDefault01_RL_C*>(UWidowDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


