#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tentacle_NL_T_G.Tentacle_NL_T_G_C
// (None)

class UClass* UTentacle_NL_T_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tentacle_NL_T_G_C");

	return Clss;
}


// Tentacle_NL_T_G_C Tentacle_NL_T_G.Default__Tentacle_NL_T_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTentacle_NL_T_G_C* UTentacle_NL_T_G_C::GetDefaultObj()
{
	static class UTentacle_NL_T_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTentacle_NL_T_G_C*>(UTentacle_NL_T_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


