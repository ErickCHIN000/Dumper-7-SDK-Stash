#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceST_R.BaseLapDanceST_R_C
// (None)

class UClass* UBaseLapDanceST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceST_R_C");

	return Clss;
}


// BaseLapDanceST_R_C BaseLapDanceST_R.Default__BaseLapDanceST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceST_R_C* UBaseLapDanceST_R_C::GetDefaultObj()
{
	static class UBaseLapDanceST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceST_R_C*>(UBaseLapDanceST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


