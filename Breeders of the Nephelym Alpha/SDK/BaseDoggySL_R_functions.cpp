#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySL_R.BaseDoggySL_R_C
// (None)

class UClass* UBaseDoggySL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySL_R_C");

	return Clss;
}


// BaseDoggySL_R_C BaseDoggySL_R.Default__BaseDoggySL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySL_R_C* UBaseDoggySL_R_C::GetDefaultObj()
{
	static class UBaseDoggySL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySL_R_C*>(UBaseDoggySL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


