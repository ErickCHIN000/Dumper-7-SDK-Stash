#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wp_09_00.wp_09_00_c
// (Actor)

class UClass* AWp_09_00_c::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wp_09_00_c");

	return Clss;
}


// wp_09_00_c wp_09_00.Default__wp_09_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWp_09_00_c* AWp_09_00_c::GetDefaultObj()
{
	static class AWp_09_00_c* Default = nullptr;

	if (!Default)
		Default = static_cast<AWp_09_00_c*>(AWp_09_00_c::StaticClass()->DefaultObject);

	return Default;
}

}


