#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AssetLookupRuntime.UniquelyIdentifiableDataAsset
// (None)

class UClass* UUniquelyIdentifiableDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniquelyIdentifiableDataAsset");

	return Clss;
}


// UniquelyIdentifiableDataAsset AssetLookupRuntime.Default__UniquelyIdentifiableDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniquelyIdentifiableDataAsset* UUniquelyIdentifiableDataAsset::GetDefaultObj()
{
	static class UUniquelyIdentifiableDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniquelyIdentifiableDataAsset*>(UUniquelyIdentifiableDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function AssetLookupRuntime.UniquelyIdentifiableDataAsset.GetUID
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UUniquelyIdentifiableDataAsset::GetUID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniquelyIdentifiableDataAsset", "GetUID");

	Params::UUniquelyIdentifiableDataAsset_GetUID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AssetLookupRuntime.AssetLookupFake
// (None)

class UClass* UAssetLookupFake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetLookupFake");

	return Clss;
}


// AssetLookupFake AssetLookupRuntime.Default__AssetLookupFake
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetLookupFake* UAssetLookupFake::GetDefaultObj()
{
	static class UAssetLookupFake* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetLookupFake*>(UAssetLookupFake::StaticClass()->DefaultObject);

	return Default;
}


// Class AssetLookupRuntime.AssetLookupInterface
// (None)

class UClass* IAssetLookupInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetLookupInterface");

	return Clss;
}


// AssetLookupInterface AssetLookupRuntime.Default__AssetLookupInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAssetLookupInterface* IAssetLookupInterface::GetDefaultObj()
{
	static class IAssetLookupInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAssetLookupInterface*>(IAssetLookupInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AssetLookupRuntime.AssetLookupSubSystem
// (None)

class UClass* UAssetLookupSubSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetLookupSubSystem");

	return Clss;
}


// AssetLookupSubSystem AssetLookupRuntime.Default__AssetLookupSubSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetLookupSubSystem* UAssetLookupSubSystem::GetDefaultObj()
{
	static class UAssetLookupSubSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetLookupSubSystem*>(UAssetLookupSubSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class AssetLookupRuntime.UniquelyIdentifiableAsset
// (None)

class UClass* UUniquelyIdentifiableAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniquelyIdentifiableAsset");

	return Clss;
}


// UniquelyIdentifiableAsset AssetLookupRuntime.Default__UniquelyIdentifiableAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniquelyIdentifiableAsset* UUniquelyIdentifiableAsset::GetDefaultObj()
{
	static class UUniquelyIdentifiableAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniquelyIdentifiableAsset*>(UUniquelyIdentifiableAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AssetLookupRuntime.UniquelyIdentifiableInterface
// (None)

class UClass* IUniquelyIdentifiableInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniquelyIdentifiableInterface");

	return Clss;
}


// UniquelyIdentifiableInterface AssetLookupRuntime.Default__UniquelyIdentifiableInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IUniquelyIdentifiableInterface* IUniquelyIdentifiableInterface::GetDefaultObj()
{
	static class IUniquelyIdentifiableInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IUniquelyIdentifiableInterface*>(IUniquelyIdentifiableInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AssetLookupRuntime.UniquelyIdentifiablePrimaryDataAsset
// (None)

class UClass* UUniquelyIdentifiablePrimaryDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniquelyIdentifiablePrimaryDataAsset");

	return Clss;
}


// UniquelyIdentifiablePrimaryDataAsset AssetLookupRuntime.Default__UniquelyIdentifiablePrimaryDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniquelyIdentifiablePrimaryDataAsset* UUniquelyIdentifiablePrimaryDataAsset::GetDefaultObj()
{
	static class UUniquelyIdentifiablePrimaryDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniquelyIdentifiablePrimaryDataAsset*>(UUniquelyIdentifiablePrimaryDataAsset::StaticClass()->DefaultObject);

	return Default;
}

}


