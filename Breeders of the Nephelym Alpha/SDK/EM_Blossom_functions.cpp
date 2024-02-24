#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_Blossom.EM_Blossom_C
// (Actor)

class UClass* AEM_Blossom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_Blossom_C");

	return Clss;
}


// EM_Blossom_C EM_Blossom.Default__EM_Blossom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_Blossom_C* AEM_Blossom_C::GetDefaultObj()
{
	static class AEM_Blossom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_Blossom_C*>(AEM_Blossom_C::StaticClass()->DefaultObject);

	return Default;
}

}


