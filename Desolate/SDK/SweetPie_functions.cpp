#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SweetPie.SweetPie_C
// (Actor)

class UClass* ASweetPie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SweetPie_C");

	return Clss;
}


// SweetPie_C SweetPie.Default__SweetPie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASweetPie_C* ASweetPie_C::GetDefaultObj()
{
	static class ASweetPie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASweetPie_C*>(ASweetPie_C::StaticClass()->DefaultObject);

	return Default;
}

}


