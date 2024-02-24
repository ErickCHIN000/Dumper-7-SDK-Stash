#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MushroomsField.MushroomsField_C
// (Actor)

class UClass* AMushroomsField_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MushroomsField_C");

	return Clss;
}


// MushroomsField_C MushroomsField.Default__MushroomsField_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMushroomsField_C* AMushroomsField_C::GetDefaultObj()
{
	static class AMushroomsField_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMushroomsField_C*>(AMushroomsField_C::StaticClass()->DefaultObject);

	return Default;
}

}


