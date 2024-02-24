#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OkPopUp.OkPopUp_C
// (Actor)

class UClass* AOkPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OkPopUp_C");

	return Clss;
}


// OkPopUp_C OkPopUp.Default__OkPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOkPopUp_C* AOkPopUp_C::GetDefaultObj()
{
	static class AOkPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOkPopUp_C*>(AOkPopUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


