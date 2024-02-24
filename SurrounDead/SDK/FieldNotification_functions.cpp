#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FieldNotification.NotifyFieldValueChanged
// (None)

class UClass* INotifyFieldValueChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotifyFieldValueChanged");

	return Clss;
}


// NotifyFieldValueChanged FieldNotification.Default__NotifyFieldValueChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class INotifyFieldValueChanged* INotifyFieldValueChanged::GetDefaultObj()
{
	static class INotifyFieldValueChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<INotifyFieldValueChanged*>(INotifyFieldValueChanged::StaticClass()->DefaultObject);

	return Default;
}

}


