#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConquestGameState.BP_ConquestGameState_C
// (Actor)

class UClass* ABP_ConquestGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConquestGameState_C");

	return Clss;
}


// BP_ConquestGameState_C BP_ConquestGameState.Default__BP_ConquestGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ConquestGameState_C* ABP_ConquestGameState_C::GetDefaultObj()
{
	static class ABP_ConquestGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ConquestGameState_C*>(ABP_ConquestGameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


