#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ML_JoshsMacroLibrary.ML_JoshsMacroLibrary_C
// (Actor)

class UClass* AML_JoshsMacroLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ML_JoshsMacroLibrary_C");

	return Clss;
}


// ML_JoshsMacroLibrary_C ML_JoshsMacroLibrary.Default__ML_JoshsMacroLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AML_JoshsMacroLibrary_C* AML_JoshsMacroLibrary_C::GetDefaultObj()
{
	static class AML_JoshsMacroLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AML_JoshsMacroLibrary_C*>(AML_JoshsMacroLibrary_C::StaticClass()->DefaultObject);

	return Default;
}

}


