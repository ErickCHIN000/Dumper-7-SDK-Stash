#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyML_G.BaseDoggyML_G_C
// (None)

class UClass* UBaseDoggyML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyML_G_C");

	return Clss;
}


// BaseDoggyML_G_C BaseDoggyML_G.Default__BaseDoggyML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyML_G_C* UBaseDoggyML_G_C::GetDefaultObj()
{
	static class UBaseDoggyML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyML_G_C*>(UBaseDoggyML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


