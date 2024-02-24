#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySS_R.BaseDoggySS_R_C
// (None)

class UClass* UBaseDoggySS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySS_R_C");

	return Clss;
}


// BaseDoggySS_R_C BaseDoggySS_R.Default__BaseDoggySS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySS_R_C* UBaseDoggySS_R_C::GetDefaultObj()
{
	static class UBaseDoggySS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySS_R_C*>(UBaseDoggySS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


