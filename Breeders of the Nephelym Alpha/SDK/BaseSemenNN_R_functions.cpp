#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNN_R.BaseSemenNN_R_C
// (None)

class UClass* UBaseSemenNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNN_R_C");

	return Clss;
}


// BaseSemenNN_R_C BaseSemenNN_R.Default__BaseSemenNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNN_R_C* UBaseSemenNN_R_C::GetDefaultObj()
{
	static class UBaseSemenNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNN_R_C*>(UBaseSemenNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


