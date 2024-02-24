#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySN_R.BaseDoggySN_R_C
// (None)

class UClass* UBaseDoggySN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySN_R_C");

	return Clss;
}


// BaseDoggySN_R_C BaseDoggySN_R.Default__BaseDoggySN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySN_R_C* UBaseDoggySN_R_C::GetDefaultObj()
{
	static class UBaseDoggySN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySN_R_C*>(UBaseDoggySN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


