#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonPopUp.CommonPopUp_C
// (Actor)

class UClass* ACommonPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonPopUp_C");

	return Clss;
}


// CommonPopUp_C CommonPopUp.Default__CommonPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACommonPopUp_C* ACommonPopUp_C::GetDefaultObj()
{
	static class ACommonPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACommonPopUp_C*>(ACommonPopUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


