#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNS_R.BaseDoggyNS_R_C
// (None)

class UClass* UBaseDoggyNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNS_R_C");

	return Clss;
}


// BaseDoggyNS_R_C BaseDoggyNS_R.Default__BaseDoggyNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNS_R_C* UBaseDoggyNS_R_C::GetDefaultObj()
{
	static class UBaseDoggyNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNS_R_C*>(UBaseDoggyNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


