#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gun3.Gun3_C
// (Actor)

class UClass* AGun3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gun3_C");

	return Clss;
}


// Gun3_C Gun3.Default__Gun3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGun3_C* AGun3_C::GetDefaultObj()
{
	static class AGun3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGun3_C*>(AGun3_C::StaticClass()->DefaultObject);

	return Default;
}

}


