#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Surprise_FG_TR_NL_R.Surprise_FG_TR_NL_R_C
// (None)

class UClass* USurprise_FG_TR_NL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Surprise_FG_TR_NL_R_C");

	return Clss;
}


// Surprise_FG_TR_NL_R_C Surprise_FG_TR_NL_R.Default__Surprise_FG_TR_NL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USurprise_FG_TR_NL_R_C* USurprise_FG_TR_NL_R_C::GetDefaultObj()
{
	static class USurprise_FG_TR_NL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USurprise_FG_TR_NL_R_C*>(USurprise_FG_TR_NL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}

