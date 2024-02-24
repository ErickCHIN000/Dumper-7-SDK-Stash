#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaAyu_T.LeylannaAyu_T_C
// (None)

class UClass* ULeylannaAyu_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaAyu_T_C");

	return Clss;
}


// LeylannaAyu_T_C LeylannaAyu_T.Default__LeylannaAyu_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaAyu_T_C* ULeylannaAyu_T_C::GetDefaultObj()
{
	static class ULeylannaAyu_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaAyu_T_C*>(ULeylannaAyu_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


