#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baton_Electro1.Baton_Electro1_C
// (Actor)

class UClass* ABaton_Electro1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baton_Electro1_C");

	return Clss;
}


// Baton_Electro1_C Baton_Electro1.Default__Baton_Electro1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaton_Electro1_C* ABaton_Electro1_C::GetDefaultObj()
{
	static class ABaton_Electro1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaton_Electro1_C*>(ABaton_Electro1_C::StaticClass()->DefaultObject);

	return Default;
}

}


