#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_Alcohol_00.ba_aa_Alcohol_00_C
// (Actor)

class UClass* Aba_aa_Alcohol_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_Alcohol_00_C");

	return Clss;
}


// ba_aa_Alcohol_00_C ba_aa_Alcohol_00.Default__ba_aa_Alcohol_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_Alcohol_00_C* Aba_aa_Alcohol_00_C::GetDefaultObj()
{
	static class Aba_aa_Alcohol_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_Alcohol_00_C*>(Aba_aa_Alcohol_00_C::StaticClass()->DefaultObject);

	return Default;
}

}


