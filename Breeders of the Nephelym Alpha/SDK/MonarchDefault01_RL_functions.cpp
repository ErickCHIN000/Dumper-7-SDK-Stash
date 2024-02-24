#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchDefault01_RL.MonarchDefault01_RL_C
// (None)

class UClass* UMonarchDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchDefault01_RL_C");

	return Clss;
}


// MonarchDefault01_RL_C MonarchDefault01_RL.Default__MonarchDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchDefault01_RL_C* UMonarchDefault01_RL_C::GetDefaultObj()
{
	static class UMonarchDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchDefault01_RL_C*>(UMonarchDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


