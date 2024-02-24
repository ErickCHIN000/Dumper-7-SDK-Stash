#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WordFilter.ProfanityFilter
// (None)

class UClass* UProfanityFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProfanityFilter");

	return Clss;
}


// ProfanityFilter WordFilter.Default__ProfanityFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UProfanityFilter* UProfanityFilter::GetDefaultObj()
{
	static class UProfanityFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UProfanityFilter*>(UProfanityFilter::StaticClass()->DefaultObject);

	return Default;
}


// Function WordFilter.ProfanityFilter.InitializeFromOnlineList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Environment                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfanityFilter::InitializeFromOnlineList(const class FString& Environment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfanityFilter", "InitializeFromOnlineList");

	Params::UProfanityFilter_InitializeFromOnlineList_Params Parms{};

	Parms.Environment = Environment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WordFilter.ProfanityFilter.Initialize
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              BadWords                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UProfanityFilter::Initialize(TArray<class FString>& BadWords)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfanityFilter", "Initialize");

	Params::UProfanityFilter_Initialize_Params Parms{};

	Parms.BadWords = BadWords;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WordFilter.ProfanityFilter.Censor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InputString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UProfanityFilter::Censor(const class FString& InputString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfanityFilter", "Censor");

	Params::UProfanityFilter_Censor_Params Parms{};

	Parms.InputString = InputString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


