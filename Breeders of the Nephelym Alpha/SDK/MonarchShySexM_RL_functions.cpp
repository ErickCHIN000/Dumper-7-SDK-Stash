#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchShySexM_RL.MonarchShySexM_RL_C
// (None)

class UClass* UMonarchShySexM_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchShySexM_RL_C");

	return Clss;
}


// MonarchShySexM_RL_C MonarchShySexM_RL.Default__MonarchShySexM_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchShySexM_RL_C* UMonarchShySexM_RL_C::GetDefaultObj()
{
	static class UMonarchShySexM_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchShySexM_RL_C*>(UMonarchShySexM_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


