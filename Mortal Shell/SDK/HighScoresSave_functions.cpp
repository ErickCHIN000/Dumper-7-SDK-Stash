#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HighScoresSave.HighScoresSave_C
// (None)

class UClass* UHighScoresSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighScoresSave_C");

	return Clss;
}


// HighScoresSave_C HighScoresSave.Default__HighScoresSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHighScoresSave_C* UHighScoresSave_C::GetDefaultObj()
{
	static class UHighScoresSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighScoresSave_C*>(UHighScoresSave_C::StaticClass()->DefaultObject);

	return Default;
}

}


