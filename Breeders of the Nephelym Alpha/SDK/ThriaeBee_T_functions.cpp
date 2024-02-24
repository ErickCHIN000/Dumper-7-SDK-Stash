#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThriaeBee_T.ThriaeBee_T_C
// (None)

class UClass* UThriaeBee_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThriaeBee_T_C");

	return Clss;
}


// ThriaeBee_T_C ThriaeBee_T.Default__ThriaeBee_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThriaeBee_T_C* UThriaeBee_T_C::GetDefaultObj()
{
	static class UThriaeBee_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThriaeBee_T_C*>(UThriaeBee_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


