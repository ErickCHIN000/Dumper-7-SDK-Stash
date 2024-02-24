#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseTentacle_NL_G.BaseTentacle_NL_G_C
// (None)

class UClass* UBaseTentacle_NL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseTentacle_NL_G_C");

	return Clss;
}


// BaseTentacle_NL_G_C BaseTentacle_NL_G.Default__BaseTentacle_NL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseTentacle_NL_G_C* UBaseTentacle_NL_G_C::GetDefaultObj()
{
	static class UBaseTentacle_NL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseTentacle_NL_G_C*>(UBaseTentacle_NL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


