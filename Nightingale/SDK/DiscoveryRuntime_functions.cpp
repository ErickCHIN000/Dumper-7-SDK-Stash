#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DiscoveryRuntime.DiscoveryDataAsset
// (None)

class UClass* UDiscoveryDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiscoveryDataAsset");

	return Clss;
}


// DiscoveryDataAsset DiscoveryRuntime.Default__DiscoveryDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UDiscoveryDataAsset* UDiscoveryDataAsset::GetDefaultObj()
{
	static class UDiscoveryDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiscoveryDataAsset*>(UDiscoveryDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryRuntime.DiscoverySystemInterface
// (None)

class UClass* IDiscoverySystemInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiscoverySystemInterface");

	return Clss;
}


// DiscoverySystemInterface DiscoveryRuntime.Default__DiscoverySystemInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IDiscoverySystemInterface* IDiscoverySystemInterface::GetDefaultObj()
{
	static class IDiscoverySystemInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IDiscoverySystemInterface*>(IDiscoverySystemInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryRuntime.DiscoverySystemInterface.IsDiscoveryDataLoaded
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IDiscoverySystemInterface::IsDiscoveryDataLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoverySystemInterface", "IsDiscoveryDataLoaded");

	Params::IDiscoverySystemInterface_IsDiscoveryDataLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryRuntime.DiscoverySystemInterface.IsDiscoveryComplete
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDiscoveryDataAsset*         DiscoveryDataAsset                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IDiscoverySystemInterface::IsDiscoveryComplete(class UDiscoveryDataAsset* DiscoveryDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoverySystemInterface", "IsDiscoveryComplete");

	Params::IDiscoverySystemInterface_IsDiscoveryComplete_Params Parms{};

	Parms.DiscoveryDataAsset = DiscoveryDataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryRuntime.DiscoverySystemInterface.IsDataLoadInProgress
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IDiscoverySystemInterface::IsDataLoadInProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoverySystemInterface", "IsDataLoadInProgress");

	Params::IDiscoverySystemInterface_IsDataLoadInProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryRuntime.DiscoverySystemInterface.GetConditionHandleFromDiscovery
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDiscoveryDataAsset*         DiscoveryDataAsset                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       OutHandle                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IDiscoverySystemInterface::GetConditionHandleFromDiscovery(class UDiscoveryDataAsset* DiscoveryDataAsset, struct FGuid* OutHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoverySystemInterface", "GetConditionHandleFromDiscovery");

	Params::IDiscoverySystemInterface_GetConditionHandleFromDiscovery_Params Parms{};

	Parms.DiscoveryDataAsset = DiscoveryDataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHandle != nullptr)
		*OutHandle = std::move(Parms.OutHandle);

}


// Function DiscoveryRuntime.DiscoverySystemInterface.GetAllDiscoveryConditionHandles
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGuid>               OutHandles                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IDiscoverySystemInterface::GetAllDiscoveryConditionHandles(TArray<struct FGuid>* OutHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoverySystemInterface", "GetAllDiscoveryConditionHandles");

	Params::IDiscoverySystemInterface_GetAllDiscoveryConditionHandles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHandles != nullptr)
		*OutHandles = std::move(Parms.OutHandles);

}


// Function DiscoveryRuntime.DiscoverySystemInterface.ClearLoadedDiscoveries
// (Native, Public, BlueprintCallable)
// Parameters:

void IDiscoverySystemInterface::ClearLoadedDiscoveries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoverySystemInterface", "ClearLoadedDiscoveries");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryRuntime.DiscoverySystemInterface.AddDiscoveries
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDiscoveryDataAsset*> TestDiscoveries                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IDiscoverySystemInterface::AddDiscoveries(TArray<class UDiscoveryDataAsset*>& TestDiscoveries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoverySystemInterface", "AddDiscoveries");

	Params::IDiscoverySystemInterface_AddDiscoveries_Params Parms{};

	Parms.TestDiscoveries = TestDiscoveries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryRuntime.DiscoveryAccessInterface
// (None)

class UClass* IDiscoveryAccessInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiscoveryAccessInterface");

	return Clss;
}


// DiscoveryAccessInterface DiscoveryRuntime.Default__DiscoveryAccessInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IDiscoveryAccessInterface* IDiscoveryAccessInterface::GetDefaultObj()
{
	static class IDiscoveryAccessInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IDiscoveryAccessInterface*>(IDiscoveryAccessInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryRuntime.DiscoveryAccessInterface.GetDiscoverySystem
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IDiscoverySystemInterface>DiscoverySystemInterface                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IDiscoveryAccessInterface::GetDiscoverySystem(TScriptInterface<class IDiscoverySystemInterface>* DiscoverySystemInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscoveryAccessInterface", "GetDiscoverySystem");

	Params::IDiscoveryAccessInterface_GetDiscoverySystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DiscoverySystemInterface != nullptr)
		*DiscoverySystemInterface = Parms.DiscoverySystemInterface;

}

}


