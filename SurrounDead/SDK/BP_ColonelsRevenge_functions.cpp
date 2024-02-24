#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevenge.BP_ColonelsRevenge_C
// (Actor)

class UClass* ABP_ColonelsRevenge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevenge_C");

	return Clss;
}


// BP_ColonelsRevenge_C BP_ColonelsRevenge.Default__BP_ColonelsRevenge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevenge_C* ABP_ColonelsRevenge_C::GetDefaultObj()
{
	static class ABP_ColonelsRevenge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevenge_C*>(ABP_ColonelsRevenge_C::StaticClass()->DefaultObject);

	return Default;
}

}


