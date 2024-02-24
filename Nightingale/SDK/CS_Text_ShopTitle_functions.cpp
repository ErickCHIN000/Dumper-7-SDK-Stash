#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Text_ShopTitle.CS_Text_ShopTitle_C
// (None)

class UClass* UCS_Text_ShopTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Text_ShopTitle_C");

	return Clss;
}


// CS_Text_ShopTitle_C CS_Text_ShopTitle.Default__CS_Text_ShopTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Text_ShopTitle_C* UCS_Text_ShopTitle_C::GetDefaultObj()
{
	static class UCS_Text_ShopTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Text_ShopTitle_C*>(UCS_Text_ShopTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


