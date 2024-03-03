#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass seshat_placeholder.seshat_placeholder_C
// (Actor)

class UClass* ASeshat_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("seshat_placeholder_C");

	return Clss;
}


// seshat_placeholder_C seshat_placeholder.Default__seshat_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASeshat_placeholder_C* ASeshat_placeholder_C::GetDefaultObj()
{
	static class ASeshat_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASeshat_placeholder_C*>(ASeshat_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


