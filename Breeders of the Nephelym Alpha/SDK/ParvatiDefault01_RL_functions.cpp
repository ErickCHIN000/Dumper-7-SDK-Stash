#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDefault01_RL.ParvatiDefault01_RL_C
// (None)

class UClass* UParvatiDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDefault01_RL_C");

	return Clss;
}


// ParvatiDefault01_RL_C ParvatiDefault01_RL.Default__ParvatiDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDefault01_RL_C* UParvatiDefault01_RL_C::GetDefaultObj()
{
	static class UParvatiDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDefault01_RL_C*>(UParvatiDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


