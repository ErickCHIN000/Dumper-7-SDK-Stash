#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScientistDocuments.ScientistDocuments_C
// (Actor)

class UClass* AScientistDocuments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScientistDocuments_C");

	return Clss;
}


// ScientistDocuments_C ScientistDocuments.Default__ScientistDocuments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScientistDocuments_C* AScientistDocuments_C::GetDefaultObj()
{
	static class AScientistDocuments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScientistDocuments_C*>(AScientistDocuments_C::StaticClass()->DefaultObject);

	return Default;
}

}


