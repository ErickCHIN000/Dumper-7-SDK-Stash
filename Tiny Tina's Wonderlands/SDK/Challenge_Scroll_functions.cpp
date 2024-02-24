#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Scroll.Challenge_Scroll_C
// (None)

class UClass* UChallenge_Scroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Scroll_C");

	return Clss;
}


// Challenge_Scroll_C Challenge_Scroll.Default__Challenge_Scroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Scroll_C* UChallenge_Scroll_C::GetDefaultObj()
{
	static class UChallenge_Scroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Scroll_C*>(UChallenge_Scroll_C::StaticClass()->DefaultObject);

	return Default;
}

}


