#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Tape.BP_Tape_C
// (Actor)

class UClass* ABP_Tape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Tape_C");

	return Clss;
}


// BP_Tape_C BP_Tape.Default__BP_Tape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Tape_C* ABP_Tape_C::GetDefaultObj()
{
	static class ABP_Tape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Tape_C*>(ABP_Tape_C::StaticClass()->DefaultObject);

	return Default;
}

}


