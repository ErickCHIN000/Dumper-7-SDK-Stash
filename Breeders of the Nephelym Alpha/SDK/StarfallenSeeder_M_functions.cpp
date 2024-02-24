#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StarfallenSeeder_M.StarfallenSeeder_M_C
// (None)

class UClass* UStarfallenSeeder_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StarfallenSeeder_M_C");

	return Clss;
}


// StarfallenSeeder_M_C StarfallenSeeder_M.Default__StarfallenSeeder_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStarfallenSeeder_M_C* UStarfallenSeeder_M_C::GetDefaultObj()
{
	static class UStarfallenSeeder_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStarfallenSeeder_M_C*>(UStarfallenSeeder_M_C::StaticClass()->DefaultObject);

	return Default;
}

}


