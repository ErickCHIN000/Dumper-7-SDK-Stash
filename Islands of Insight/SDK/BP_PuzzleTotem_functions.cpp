#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PuzzleTotem.BP_PuzzleTotem_C
// (Actor)

class UClass* ABP_PuzzleTotem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PuzzleTotem_C");

	return Clss;
}


// BP_PuzzleTotem_C BP_PuzzleTotem.Default__BP_PuzzleTotem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PuzzleTotem_C* ABP_PuzzleTotem_C::GetDefaultObj()
{
	static class ABP_PuzzleTotem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PuzzleTotem_C*>(ABP_PuzzleTotem_C::StaticClass()->DefaultObject);

	return Default;
}

}


