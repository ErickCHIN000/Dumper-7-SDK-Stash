#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNT_R.BaseSemenNT_R_C
// (None)

class UClass* UBaseSemenNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNT_R_C");

	return Clss;
}


// BaseSemenNT_R_C BaseSemenNT_R.Default__BaseSemenNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNT_R_C* UBaseSemenNT_R_C::GetDefaultObj()
{
	static class UBaseSemenNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNT_R_C*>(UBaseSemenNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


