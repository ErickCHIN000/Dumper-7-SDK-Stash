#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySH_R.BaseDoggySH_R_C
// (None)

class UClass* UBaseDoggySH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySH_R_C");

	return Clss;
}


// BaseDoggySH_R_C BaseDoggySH_R.Default__BaseDoggySH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySH_R_C* UBaseDoggySH_R_C::GetDefaultObj()
{
	static class UBaseDoggySH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySH_R_C*>(UBaseDoggySH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


