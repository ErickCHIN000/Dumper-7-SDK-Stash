#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Electro_WoodImpact.Electro_WoodImpact_C
// (Actor)

class UClass* AElectro_WoodImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Electro_WoodImpact_C");

	return Clss;
}


// Electro_WoodImpact_C Electro_WoodImpact.Default__Electro_WoodImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AElectro_WoodImpact_C* AElectro_WoodImpact_C::GetDefaultObj()
{
	static class AElectro_WoodImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AElectro_WoodImpact_C*>(AElectro_WoodImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


