#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EmojiImageDecorator.BP_EmojiImageDecorator_C
// (None)

class UClass* UBP_EmojiImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EmojiImageDecorator_C");

	return Clss;
}


// BP_EmojiImageDecorator_C BP_EmojiImageDecorator.Default__BP_EmojiImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EmojiImageDecorator_C* UBP_EmojiImageDecorator_C::GetDefaultObj()
{
	static class UBP_EmojiImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EmojiImageDecorator_C*>(UBP_EmojiImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


