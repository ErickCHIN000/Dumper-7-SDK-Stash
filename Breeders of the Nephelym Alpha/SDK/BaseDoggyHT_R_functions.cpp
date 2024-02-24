#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHT_R.BaseDoggyHT_R_C
// (None)

class UClass* UBaseDoggyHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHT_R_C");

	return Clss;
}


// BaseDoggyHT_R_C BaseDoggyHT_R.Default__BaseDoggyHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHT_R_C* UBaseDoggyHT_R_C::GetDefaultObj()
{
	static class UBaseDoggyHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHT_R_C*>(UBaseDoggyHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


