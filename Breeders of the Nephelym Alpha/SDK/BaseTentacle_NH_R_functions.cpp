#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseTentacle_NH_R.BaseTentacle_NH_R_C
// (None)

class UClass* UBaseTentacle_NH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseTentacle_NH_R_C");

	return Clss;
}


// BaseTentacle_NH_R_C BaseTentacle_NH_R.Default__BaseTentacle_NH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseTentacle_NH_R_C* UBaseTentacle_NH_R_C::GetDefaultObj()
{
	static class UBaseTentacle_NH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseTentacle_NH_R_C*>(UBaseTentacle_NH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


