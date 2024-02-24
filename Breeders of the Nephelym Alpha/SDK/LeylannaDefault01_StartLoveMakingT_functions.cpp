#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_StartLoveMakingT.LeylannaDefault01_StartLoveMakingT_C
// (None)

class UClass* ULeylannaDefault01_StartLoveMakingT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_StartLoveMakingT_C");

	return Clss;
}


// LeylannaDefault01_StartLoveMakingT_C LeylannaDefault01_StartLoveMakingT.Default__LeylannaDefault01_StartLoveMakingT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_StartLoveMakingT_C* ULeylannaDefault01_StartLoveMakingT_C::GetDefaultObj()
{
	static class ULeylannaDefault01_StartLoveMakingT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_StartLoveMakingT_C*>(ULeylannaDefault01_StartLoveMakingT_C::StaticClass()->DefaultObject);

	return Default;
}

}


