#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YesNoPopUp.YesNoPopUp_C
// (Actor)

class UClass* AYesNoPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YesNoPopUp_C");

	return Clss;
}


// YesNoPopUp_C YesNoPopUp.Default__YesNoPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AYesNoPopUp_C* AYesNoPopUp_C::GetDefaultObj()
{
	static class AYesNoPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AYesNoPopUp_C*>(AYesNoPopUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


