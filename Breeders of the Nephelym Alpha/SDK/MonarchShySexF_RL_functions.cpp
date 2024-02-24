#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchShySexF_RL.MonarchShySexF_RL_C
// (None)

class UClass* UMonarchShySexF_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchShySexF_RL_C");

	return Clss;
}


// MonarchShySexF_RL_C MonarchShySexF_RL.Default__MonarchShySexF_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchShySexF_RL_C* UMonarchShySexF_RL_C::GetDefaultObj()
{
	static class UMonarchShySexF_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchShySexF_RL_C*>(UMonarchShySexF_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


