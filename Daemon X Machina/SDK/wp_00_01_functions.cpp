#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wp_00_01.wp_00_01_c
// (Actor)

class UClass* AWp_00_01_c::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wp_00_01_c");

	return Clss;
}


// wp_00_01_c wp_00_01.Default__wp_00_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWp_00_01_c* AWp_00_01_c::GetDefaultObj()
{
	static class AWp_00_01_c* Default = nullptr;

	if (!Default)
		Default = static_cast<AWp_00_01_c*>(AWp_00_01_c::StaticClass()->DefaultObject);

	return Default;
}

}


