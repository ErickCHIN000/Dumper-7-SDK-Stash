#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanGoblinF.SylvanGoblinF_C
// (None)

class UClass* USylvanGoblinF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanGoblinF_C");

	return Clss;
}


// SylvanGoblinF_C SylvanGoblinF.Default__SylvanGoblinF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanGoblinF_C* USylvanGoblinF_C::GetDefaultObj()
{
	static class USylvanGoblinF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanGoblinF_C*>(USylvanGoblinF_C::StaticClass()->DefaultObject);

	return Default;
}

}


