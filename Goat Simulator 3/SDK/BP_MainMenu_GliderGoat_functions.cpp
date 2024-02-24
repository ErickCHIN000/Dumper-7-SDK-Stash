#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenu_GliderGoat.BP_MainMenu_GliderGoat_C
// (Actor)

class UClass* ABP_MainMenu_GliderGoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenu_GliderGoat_C");

	return Clss;
}


// BP_MainMenu_GliderGoat_C BP_MainMenu_GliderGoat.Default__BP_MainMenu_GliderGoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainMenu_GliderGoat_C* ABP_MainMenu_GliderGoat_C::GetDefaultObj()
{
	static class ABP_MainMenu_GliderGoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainMenu_GliderGoat_C*>(ABP_MainMenu_GliderGoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


