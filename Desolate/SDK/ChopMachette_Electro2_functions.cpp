#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChopMachette_Electro2.ChopMachette_Electro2_C
// (Actor)

class UClass* AChopMachette_Electro2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChopMachette_Electro2_C");

	return Clss;
}


// ChopMachette_Electro2_C ChopMachette_Electro2.Default__ChopMachette_Electro2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopMachette_Electro2_C* AChopMachette_Electro2_C::GetDefaultObj()
{
	static class AChopMachette_Electro2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopMachette_Electro2_C*>(AChopMachette_Electro2_C::StaticClass()->DefaultObject);

	return Default;
}

}


