#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuMap_Env.MenuMap_Env_C
// (Actor)

class UClass* AMenuMap_Env_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuMap_Env_C");

	return Clss;
}


// MenuMap_Env_C MenuMap_Env.Default__MenuMap_Env_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMenuMap_Env_C* AMenuMap_Env_C::GetDefaultObj()
{
	static class AMenuMap_Env_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMenuMap_Env_C*>(AMenuMap_Env_C::StaticClass()->DefaultObject);

	return Default;
}

}


