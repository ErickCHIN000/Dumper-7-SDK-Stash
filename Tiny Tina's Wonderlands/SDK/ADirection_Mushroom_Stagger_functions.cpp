#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ADirection_Mushroom_Stagger.ADirection_Mushroom_Stagger_C
// (None)

class UClass* UADirection_Mushroom_Stagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ADirection_Mushroom_Stagger_C");

	return Clss;
}


// ADirection_Mushroom_Stagger_C ADirection_Mushroom_Stagger.Default__ADirection_Mushroom_Stagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UADirection_Mushroom_Stagger_C* UADirection_Mushroom_Stagger_C::GetDefaultObj()
{
	static class UADirection_Mushroom_Stagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UADirection_Mushroom_Stagger_C*>(UADirection_Mushroom_Stagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


