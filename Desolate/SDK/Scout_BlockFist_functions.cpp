#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BlockFist.Scout_BlockFist_C
// (None)

class UClass* UScout_BlockFist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BlockFist_C");

	return Clss;
}


// Scout_BlockFist_C Scout_BlockFist.Default__Scout_BlockFist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BlockFist_C* UScout_BlockFist_C::GetDefaultObj()
{
	static class UScout_BlockFist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BlockFist_C*>(UScout_BlockFist_C::StaticClass()->DefaultObject);

	return Default;
}

}


