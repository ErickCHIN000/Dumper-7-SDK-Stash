#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNT_R.BaseDoggyNT_R_C
// (None)

class UClass* UBaseDoggyNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNT_R_C");

	return Clss;
}


// BaseDoggyNT_R_C BaseDoggyNT_R.Default__BaseDoggyNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNT_R_C* UBaseDoggyNT_R_C::GetDefaultObj()
{
	static class UBaseDoggyNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNT_R_C*>(UBaseDoggyNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


