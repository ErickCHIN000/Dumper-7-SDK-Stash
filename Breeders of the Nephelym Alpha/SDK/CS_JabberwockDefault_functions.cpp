#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_JabberwockDefault.CS_JabberwockDefault_C
// (None)

class UClass* UCS_JabberwockDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_JabberwockDefault_C");

	return Clss;
}


// CS_JabberwockDefault_C CS_JabberwockDefault.Default__CS_JabberwockDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_JabberwockDefault_C* UCS_JabberwockDefault_C::GetDefaultObj()
{
	static class UCS_JabberwockDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_JabberwockDefault_C*>(UCS_JabberwockDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


