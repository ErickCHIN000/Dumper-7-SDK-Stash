#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextWithImageDecorator.TextWithImageDecorator_C
// (None)

class UClass* UTextWithImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextWithImageDecorator_C");

	return Clss;
}


// TextWithImageDecorator_C TextWithImageDecorator.Default__TextWithImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextWithImageDecorator_C* UTextWithImageDecorator_C::GetDefaultObj()
{
	static class UTextWithImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextWithImageDecorator_C*>(UTextWithImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


