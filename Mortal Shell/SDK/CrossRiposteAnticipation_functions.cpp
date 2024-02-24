#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CrossRiposteAnticipation.CrossRiposteAnticipation_C
// (None)

class UClass* UCrossRiposteAnticipation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrossRiposteAnticipation_C");

	return Clss;
}


// CrossRiposteAnticipation_C CrossRiposteAnticipation.Default__CrossRiposteAnticipation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrossRiposteAnticipation_C* UCrossRiposteAnticipation_C::GetDefaultObj()
{
	static class UCrossRiposteAnticipation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrossRiposteAnticipation_C*>(UCrossRiposteAnticipation_C::StaticClass()->DefaultObject);

	return Default;
}

}


