#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MotherSandwich.MotherSandwich_C
// (Actor)

class UClass* AMotherSandwich_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotherSandwich_C");

	return Clss;
}


// MotherSandwich_C MotherSandwich.Default__MotherSandwich_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMotherSandwich_C* AMotherSandwich_C::GetDefaultObj()
{
	static class AMotherSandwich_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMotherSandwich_C*>(AMotherSandwich_C::StaticClass()->DefaultObject);

	return Default;
}

}


