#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseTentacle_NM_R.BaseTentacle_NM_R_C
// (None)

class UClass* UBaseTentacle_NM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseTentacle_NM_R_C");

	return Clss;
}


// BaseTentacle_NM_R_C BaseTentacle_NM_R.Default__BaseTentacle_NM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseTentacle_NM_R_C* UBaseTentacle_NM_R_C::GetDefaultObj()
{
	static class UBaseTentacle_NM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseTentacle_NM_R_C*>(UBaseTentacle_NM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


