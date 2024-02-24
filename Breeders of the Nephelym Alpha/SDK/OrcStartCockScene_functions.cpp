#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcStartCockScene.OrcStartCockScene_C
// (None)

class UClass* UOrcStartCockScene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcStartCockScene_C");

	return Clss;
}


// OrcStartCockScene_C OrcStartCockScene.Default__OrcStartCockScene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcStartCockScene_C* UOrcStartCockScene_C::GetDefaultObj()
{
	static class UOrcStartCockScene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcStartCockScene_C*>(UOrcStartCockScene_C::StaticClass()->DefaultObject);

	return Default;
}

}


