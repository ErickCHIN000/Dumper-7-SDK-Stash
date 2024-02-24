#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThriaeBee_F.ThriaeBee_F_C
// (None)

class UClass* UThriaeBee_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThriaeBee_F_C");

	return Clss;
}


// ThriaeBee_F_C ThriaeBee_F.Default__ThriaeBee_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThriaeBee_F_C* UThriaeBee_F_C::GetDefaultObj()
{
	static class UThriaeBee_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThriaeBee_F_C*>(UThriaeBee_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


