#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ManagerRuntime.ManagerBase
// (Actor)

class UClass* AManagerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManagerBase");

	return Clss;
}


// ManagerBase ManagerRuntime.Default__ManagerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AManagerBase* AManagerBase::GetDefaultObj()
{
	static class AManagerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AManagerBase*>(AManagerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ManagerRuntime.ManagerBase.MarkReady
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AManagerBase::MarkReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManagerBase", "MarkReady");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManagerRuntime.ManagerBase.InitializeManager
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void AManagerBase::InitializeManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManagerBase", "InitializeManager");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManagerRuntime.ManagerProviderInterface
// (None)

class UClass* IManagerProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManagerProviderInterface");

	return Clss;
}


// ManagerProviderInterface ManagerRuntime.Default__ManagerProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IManagerProviderInterface* IManagerProviderInterface::GetDefaultObj()
{
	static class IManagerProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IManagerProviderInterface*>(IManagerProviderInterface::StaticClass()->DefaultObject);

	return Default;
}

}


