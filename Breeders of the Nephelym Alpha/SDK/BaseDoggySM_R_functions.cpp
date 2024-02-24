#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySM_R.BaseDoggySM_R_C
// (None)

class UClass* UBaseDoggySM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySM_R_C");

	return Clss;
}


// BaseDoggySM_R_C BaseDoggySM_R.Default__BaseDoggySM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySM_R_C* UBaseDoggySM_R_C::GetDefaultObj()
{
	static class UBaseDoggySM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySM_R_C*>(UBaseDoggySM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


