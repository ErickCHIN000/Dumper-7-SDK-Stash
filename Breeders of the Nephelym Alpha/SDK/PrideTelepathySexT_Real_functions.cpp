#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideTelepathySexT_Real.PrideTelepathySexT_Real_C
// (None)

class UClass* UPrideTelepathySexT_Real_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideTelepathySexT_Real_C");

	return Clss;
}


// PrideTelepathySexT_Real_C PrideTelepathySexT_Real.Default__PrideTelepathySexT_Real_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideTelepathySexT_Real_C* UPrideTelepathySexT_Real_C::GetDefaultObj()
{
	static class UPrideTelepathySexT_Real_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideTelepathySexT_Real_C*>(UPrideTelepathySexT_Real_C::StaticClass()->DefaultObject);

	return Default;
}

}


