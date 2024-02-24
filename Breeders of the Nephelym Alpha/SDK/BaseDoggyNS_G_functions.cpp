#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNS_G.BaseDoggyNS_G_C
// (None)

class UClass* UBaseDoggyNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNS_G_C");

	return Clss;
}


// BaseDoggyNS_G_C BaseDoggyNS_G.Default__BaseDoggyNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNS_G_C* UBaseDoggyNS_G_C::GetDefaultObj()
{
	static class UBaseDoggyNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNS_G_C*>(UBaseDoggyNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


