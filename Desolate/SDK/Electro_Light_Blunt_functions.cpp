#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Electro_Light_Blunt.Electro_Light_Blunt_C
// (Actor)

class UClass* AElectro_Light_Blunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Electro_Light_Blunt_C");

	return Clss;
}


// Electro_Light_Blunt_C Electro_Light_Blunt.Default__Electro_Light_Blunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AElectro_Light_Blunt_C* AElectro_Light_Blunt_C::GetDefaultObj()
{
	static class AElectro_Light_Blunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AElectro_Light_Blunt_C*>(AElectro_Light_Blunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


