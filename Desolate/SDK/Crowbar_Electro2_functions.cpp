#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar_Electro2.Crowbar_Electro2_C
// (Actor)

class UClass* ACrowbar_Electro2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_Electro2_C");

	return Clss;
}


// Crowbar_Electro2_C Crowbar_Electro2.Default__Crowbar_Electro2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_Electro2_C* ACrowbar_Electro2_C::GetDefaultObj()
{
	static class ACrowbar_Electro2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_Electro2_C*>(ACrowbar_Electro2_C::StaticClass()->DefaultObject);

	return Default;
}

}


