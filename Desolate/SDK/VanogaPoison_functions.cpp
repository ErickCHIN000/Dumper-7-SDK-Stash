#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VanogaPoison.VanogaPoison_C
// (Actor)

class UClass* AVanogaPoison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VanogaPoison_C");

	return Clss;
}


// VanogaPoison_C VanogaPoison.Default__VanogaPoison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanogaPoison_C* AVanogaPoison_C::GetDefaultObj()
{
	static class AVanogaPoison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanogaPoison_C*>(AVanogaPoison_C::StaticClass()->DefaultObject);

	return Default;
}

}


