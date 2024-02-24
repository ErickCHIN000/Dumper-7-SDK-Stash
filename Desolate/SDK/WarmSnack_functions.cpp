#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WarmSnack.WarmSnack_C
// (Actor)

class UClass* AWarmSnack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WarmSnack_C");

	return Clss;
}


// WarmSnack_C WarmSnack.Default__WarmSnack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWarmSnack_C* AWarmSnack_C::GetDefaultObj()
{
	static class AWarmSnack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWarmSnack_C*>(AWarmSnack_C::StaticClass()->DefaultObject);

	return Default;
}

}


