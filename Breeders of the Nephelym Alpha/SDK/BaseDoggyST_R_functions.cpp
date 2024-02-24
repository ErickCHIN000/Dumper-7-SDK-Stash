#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyST_R.BaseDoggyST_R_C
// (None)

class UClass* UBaseDoggyST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyST_R_C");

	return Clss;
}


// BaseDoggyST_R_C BaseDoggyST_R.Default__BaseDoggyST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyST_R_C* UBaseDoggyST_R_C::GetDefaultObj()
{
	static class UBaseDoggyST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyST_R_C*>(UBaseDoggyST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


