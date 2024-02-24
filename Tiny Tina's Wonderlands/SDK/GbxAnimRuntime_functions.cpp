#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxAnimRuntime.AnimNotify_Delegate
// (None)

class UClass* UAnimNotify_Delegate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_Delegate");

	return Clss;
}


// AnimNotify_Delegate GbxAnimRuntime.Default__AnimNotify_Delegate
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_Delegate* UAnimNotify_Delegate::GetDefaultObj()
{
	static class UAnimNotify_Delegate* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_Delegate*>(UAnimNotify_Delegate::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAnimRuntime.AnimNotify_GbxCustomEvent
// (None)

class UClass* UAnimNotify_GbxCustomEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_GbxCustomEvent");

	return Clss;
}


// AnimNotify_GbxCustomEvent GbxAnimRuntime.Default__AnimNotify_GbxCustomEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_GbxCustomEvent* UAnimNotify_GbxCustomEvent::GetDefaultObj()
{
	static class UAnimNotify_GbxCustomEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_GbxCustomEvent*>(UAnimNotify_GbxCustomEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAnimRuntime.AnimNotify_GbxClosedCaptionEvent
// (None)

class UClass* UAnimNotify_GbxClosedCaptionEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_GbxClosedCaptionEvent");

	return Clss;
}


// AnimNotify_GbxClosedCaptionEvent GbxAnimRuntime.Default__AnimNotify_GbxClosedCaptionEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_GbxClosedCaptionEvent* UAnimNotify_GbxClosedCaptionEvent::GetDefaultObj()
{
	static class UAnimNotify_GbxClosedCaptionEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_GbxClosedCaptionEvent*>(UAnimNotify_GbxClosedCaptionEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAnimRuntime.AnimNotify_ToggleClothEnvironmentCollision
// (None)

class UClass* UAnimNotify_ToggleClothEnvironmentCollision::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_ToggleClothEnvironmentCollision");

	return Clss;
}


// AnimNotify_ToggleClothEnvironmentCollision GbxAnimRuntime.Default__AnimNotify_ToggleClothEnvironmentCollision
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_ToggleClothEnvironmentCollision* UAnimNotify_ToggleClothEnvironmentCollision::GetDefaultObj()
{
	static class UAnimNotify_ToggleClothEnvironmentCollision* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_ToggleClothEnvironmentCollision*>(UAnimNotify_ToggleClothEnvironmentCollision::StaticClass()->DefaultObject);

	return Default;
}

}


