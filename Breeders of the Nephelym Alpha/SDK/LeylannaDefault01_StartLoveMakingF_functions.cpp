#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_StartLoveMakingF.LeylannaDefault01_StartLoveMakingF_C
// (None)

class UClass* ULeylannaDefault01_StartLoveMakingF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_StartLoveMakingF_C");

	return Clss;
}


// LeylannaDefault01_StartLoveMakingF_C LeylannaDefault01_StartLoveMakingF.Default__LeylannaDefault01_StartLoveMakingF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_StartLoveMakingF_C* ULeylannaDefault01_StartLoveMakingF_C::GetDefaultObj()
{
	static class ULeylannaDefault01_StartLoveMakingF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_StartLoveMakingF_C*>(ULeylannaDefault01_StartLoveMakingF_C::StaticClass()->DefaultObject);

	return Default;
}

}


