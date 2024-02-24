#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNT_G.BaseDoggyNT_G_C
// (None)

class UClass* UBaseDoggyNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNT_G_C");

	return Clss;
}


// BaseDoggyNT_G_C BaseDoggyNT_G.Default__BaseDoggyNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNT_G_C* UBaseDoggyNT_G_C::GetDefaultObj()
{
	static class UBaseDoggyNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNT_G_C*>(UBaseDoggyNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


