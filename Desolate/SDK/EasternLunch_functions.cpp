#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EasternLunch.EasternLunch_C
// (Actor)

class UClass* AEasternLunch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EasternLunch_C");

	return Clss;
}


// EasternLunch_C EasternLunch.Default__EasternLunch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEasternLunch_C* AEasternLunch_C::GetDefaultObj()
{
	static class AEasternLunch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEasternLunch_C*>(AEasternLunch_C::StaticClass()->DefaultObject);

	return Default;
}

}


