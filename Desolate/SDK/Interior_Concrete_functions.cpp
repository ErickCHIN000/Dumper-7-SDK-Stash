#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Concrete.Interior_Concrete_C
// (Actor)

class UClass* AInterior_Concrete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Concrete_C");

	return Clss;
}


// Interior_Concrete_C Interior_Concrete.Default__Interior_Concrete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Concrete_C* AInterior_Concrete_C::GetDefaultObj()
{
	static class AInterior_Concrete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Concrete_C*>(AInterior_Concrete_C::StaticClass()->DefaultObject);

	return Default;
}

}


