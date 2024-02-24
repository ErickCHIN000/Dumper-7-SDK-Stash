#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideTelepathySexT.PrideTelepathySexT_C
// (None)

class UClass* UPrideTelepathySexT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideTelepathySexT_C");

	return Clss;
}


// PrideTelepathySexT_C PrideTelepathySexT.Default__PrideTelepathySexT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideTelepathySexT_C* UPrideTelepathySexT_C::GetDefaultObj()
{
	static class UPrideTelepathySexT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideTelepathySexT_C*>(UPrideTelepathySexT_C::StaticClass()->DefaultObject);

	return Default;
}

}


