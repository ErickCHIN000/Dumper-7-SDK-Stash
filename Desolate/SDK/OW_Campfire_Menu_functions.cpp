#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OW_Campfire_Menu.OW_Campfire_Menu_C
// (Actor)

class UClass* AOW_Campfire_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OW_Campfire_Menu_C");

	return Clss;
}


// OW_Campfire_Menu_C OW_Campfire_Menu.Default__OW_Campfire_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOW_Campfire_Menu_C* AOW_Campfire_Menu_C::GetDefaultObj()
{
	static class AOW_Campfire_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOW_Campfire_Menu_C*>(AOW_Campfire_Menu_C::StaticClass()->DefaultObject);

	return Default;
}

}


