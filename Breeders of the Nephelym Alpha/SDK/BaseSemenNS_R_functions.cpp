#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNS_R.BaseSemenNS_R_C
// (None)

class UClass* UBaseSemenNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNS_R_C");

	return Clss;
}


// BaseSemenNS_R_C BaseSemenNS_R.Default__BaseSemenNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNS_R_C* UBaseSemenNS_R_C::GetDefaultObj()
{
	static class UBaseSemenNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNS_R_C*>(UBaseSemenNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


