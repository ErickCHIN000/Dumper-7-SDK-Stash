#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanGoblinT.SylvanGoblinT_C
// (None)

class UClass* USylvanGoblinT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanGoblinT_C");

	return Clss;
}


// SylvanGoblinT_C SylvanGoblinT.Default__SylvanGoblinT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanGoblinT_C* USylvanGoblinT_C::GetDefaultObj()
{
	static class USylvanGoblinT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanGoblinT_C*>(USylvanGoblinT_C::StaticClass()->DefaultObject);

	return Default;
}

}


