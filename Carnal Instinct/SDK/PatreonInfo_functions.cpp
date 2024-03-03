#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PatreonInfo.PatreonInfoHandler
// (None)

class UClass* UPatreonInfoHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatreonInfoHandler");

	return Clss;
}


// PatreonInfoHandler PatreonInfo.Default__PatreonInfoHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatreonInfoHandler* UPatreonInfoHandler::GetDefaultObj()
{
	static class UPatreonInfoHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatreonInfoHandler*>(UPatreonInfoHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function PatreonInfo.PatreonInfoHandler.GetPatreonInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Token                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPatreonInfoHandler::GetPatreonInfo(const class FString& Token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PatreonInfoHandler", "GetPatreonInfo");

	Params::UPatreonInfoHandler_GetPatreonInfo_Params Parms{};

	Parms.Token = Token;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PatreonInfo.PatreonInfoLibrary
// (None)

class UClass* UPatreonInfoLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatreonInfoLibrary");

	return Clss;
}


// PatreonInfoLibrary PatreonInfo.Default__PatreonInfoLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatreonInfoLibrary* UPatreonInfoLibrary::GetDefaultObj()
{
	static class UPatreonInfoLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatreonInfoLibrary*>(UPatreonInfoLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PatreonInfo.PatreonInfoLibrary.SavePatreonInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UPatreonInfoLibrary::SavePatreonInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PatreonInfoLibrary", "SavePatreonInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PatreonInfo.PatreonInfoLibrary.OpenBrowserForPatreonKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UPatreonInfoLibrary::OpenBrowserForPatreonKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PatreonInfoLibrary", "OpenBrowserForPatreonKey");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PatreonInfo.PatreonInfoLibrary.GetClipboardContents
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPatreonInfoLibrary::GetClipboardContents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PatreonInfoLibrary", "GetClipboardContents");

	Params::UPatreonInfoLibrary_GetClipboardContents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PatreonInfo.PatreonInfoLibrary.CreatePatreonInfoHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPatreonInfoHandler*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPatreonInfoHandler* UPatreonInfoLibrary::CreatePatreonInfoHandler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PatreonInfoLibrary", "CreatePatreonInfoHandler");

	Params::UPatreonInfoLibrary_CreatePatreonInfoHandler_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PatreonInfo.PatreonInfoSaveGame
// (None)

class UClass* UPatreonInfoSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatreonInfoSaveGame");

	return Clss;
}


// PatreonInfoSaveGame PatreonInfo.Default__PatreonInfoSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatreonInfoSaveGame* UPatreonInfoSaveGame::GetDefaultObj()
{
	static class UPatreonInfoSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatreonInfoSaveGame*>(UPatreonInfoSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class PatreonInfo.PatreonInfoSettings
// (None)

class UClass* UPatreonInfoSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatreonInfoSettings");

	return Clss;
}


// PatreonInfoSettings PatreonInfo.Default__PatreonInfoSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatreonInfoSettings* UPatreonInfoSettings::GetDefaultObj()
{
	static class UPatreonInfoSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatreonInfoSettings*>(UPatreonInfoSettings::StaticClass()->DefaultObject);

	return Default;
}

}


