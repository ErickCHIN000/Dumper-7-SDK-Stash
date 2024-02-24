#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeSuckJugs_RL.AmberMaeSuckJugs_RL_C
// (None)

class UClass* UAmberMaeSuckJugs_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeSuckJugs_RL_C");

	return Clss;
}


// AmberMaeSuckJugs_RL_C AmberMaeSuckJugs_RL.Default__AmberMaeSuckJugs_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeSuckJugs_RL_C* UAmberMaeSuckJugs_RL_C::GetDefaultObj()
{
	static class UAmberMaeSuckJugs_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeSuckJugs_RL_C*>(UAmberMaeSuckJugs_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


