#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLN_R.BaseLapDanceLN_R_C
// (None)

class UClass* UBaseLapDanceLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLN_R_C");

	return Clss;
}


// BaseLapDanceLN_R_C BaseLapDanceLN_R.Default__BaseLapDanceLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLN_R_C* UBaseLapDanceLN_R_C::GetDefaultObj()
{
	static class UBaseLapDanceLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLN_R_C*>(UBaseLapDanceLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


