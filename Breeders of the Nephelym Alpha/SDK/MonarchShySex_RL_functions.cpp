#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchShySex_RL.MonarchShySex_RL_C
// (None)

class UClass* UMonarchShySex_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchShySex_RL_C");

	return Clss;
}


// MonarchShySex_RL_C MonarchShySex_RL.Default__MonarchShySex_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchShySex_RL_C* UMonarchShySex_RL_C::GetDefaultObj()
{
	static class UMonarchShySex_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchShySex_RL_C*>(UMonarchShySex_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


