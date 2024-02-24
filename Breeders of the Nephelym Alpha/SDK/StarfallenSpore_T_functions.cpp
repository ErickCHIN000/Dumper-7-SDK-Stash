#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StarfallenSpore_T.StarfallenSpore_T_C
// (None)

class UClass* UStarfallenSpore_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StarfallenSpore_T_C");

	return Clss;
}


// StarfallenSpore_T_C StarfallenSpore_T.Default__StarfallenSpore_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStarfallenSpore_T_C* UStarfallenSpore_T_C::GetDefaultObj()
{
	static class UStarfallenSpore_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStarfallenSpore_T_C*>(UStarfallenSpore_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


