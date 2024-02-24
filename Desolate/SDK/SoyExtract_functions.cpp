#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoyExtract.SoyExtract_C
// (Actor)

class UClass* ASoyExtract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoyExtract_C");

	return Clss;
}


// SoyExtract_C SoyExtract.Default__SoyExtract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoyExtract_C* ASoyExtract_C::GetDefaultObj()
{
	static class ASoyExtract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoyExtract_C*>(ASoyExtract_C::StaticClass()->DefaultObject);

	return Default;
}

}


