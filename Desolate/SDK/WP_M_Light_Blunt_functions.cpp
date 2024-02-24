#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_M_Light_Blunt.WP_M_Light_Blunt_C
// (Actor)

class UClass* AWP_M_Light_Blunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_M_Light_Blunt_C");

	return Clss;
}


// WP_M_Light_Blunt_C WP_M_Light_Blunt.Default__WP_M_Light_Blunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWP_M_Light_Blunt_C* AWP_M_Light_Blunt_C::GetDefaultObj()
{
	static class AWP_M_Light_Blunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWP_M_Light_Blunt_C*>(AWP_M_Light_Blunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


