#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NekoCondo.NekoCondo_C
// (None)

class UClass* UNekoCondo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NekoCondo_C");

	return Clss;
}


// NekoCondo_C NekoCondo.Default__NekoCondo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNekoCondo_C* UNekoCondo_C::GetDefaultObj()
{
	static class UNekoCondo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNekoCondo_C*>(UNekoCondo_C::StaticClass()->DefaultObject);

	return Default;
}

}


