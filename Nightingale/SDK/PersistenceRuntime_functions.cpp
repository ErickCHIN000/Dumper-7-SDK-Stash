#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PersistenceRuntime.PersistentDataObject
// (None)

class UClass* IPersistentDataObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentDataObject");

	return Clss;
}


// PersistentDataObject PersistenceRuntime.Default__PersistentDataObject
// (Public, ClassDefaultObject, ArchetypeObject)

class IPersistentDataObject* IPersistentDataObject::GetDefaultObj()
{
	static class IPersistentDataObject* Default = nullptr;

	if (!Default)
		Default = static_cast<IPersistentDataObject*>(IPersistentDataObject::StaticClass()->DefaultObject);

	return Default;
}


// Class PersistenceRuntime.PersistentDataComponent
// (None)

class UClass* UPersistentDataComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentDataComponent");

	return Clss;
}


// PersistentDataComponent PersistenceRuntime.Default__PersistentDataComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPersistentDataComponent* UPersistentDataComponent::GetDefaultObj()
{
	static class UPersistentDataComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPersistentDataComponent*>(UPersistentDataComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PersistenceRuntime.PersistentDataHelper
// (None)

class UClass* UPersistentDataHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentDataHelper");

	return Clss;
}


// PersistentDataHelper PersistenceRuntime.Default__PersistentDataHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UPersistentDataHelper* UPersistentDataHelper::GetDefaultObj()
{
	static class UPersistentDataHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UPersistentDataHelper*>(UPersistentDataHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function PersistenceRuntime.PersistentDataHelper.GetOwnerPersistableProperties
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UPersistentDataHelper::GetOwnerPersistableProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentDataHelper", "GetOwnerPersistableProperties");

	Params::UPersistentDataHelper_GetOwnerPersistableProperties_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


