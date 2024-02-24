#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcStartPussyScene.OrcStartPussyScene_C
// (None)

class UClass* UOrcStartPussyScene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcStartPussyScene_C");

	return Clss;
}


// OrcStartPussyScene_C OrcStartPussyScene.Default__OrcStartPussyScene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcStartPussyScene_C* UOrcStartPussyScene_C::GetDefaultObj()
{
	static class UOrcStartPussyScene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcStartPussyScene_C*>(UOrcStartPussyScene_C::StaticClass()->DefaultObject);

	return Default;
}

}


