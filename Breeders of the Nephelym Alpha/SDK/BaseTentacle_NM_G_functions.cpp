#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseTentacle_NM_G.BaseTentacle_NM_G_C
// (None)

class UClass* UBaseTentacle_NM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseTentacle_NM_G_C");

	return Clss;
}


// BaseTentacle_NM_G_C BaseTentacle_NM_G.Default__BaseTentacle_NM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseTentacle_NM_G_C* UBaseTentacle_NM_G_C::GetDefaultObj()
{
	static class UBaseTentacle_NM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseTentacle_NM_G_C*>(UBaseTentacle_NM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}

