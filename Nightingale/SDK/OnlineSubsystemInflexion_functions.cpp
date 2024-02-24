#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemInflexion.OnlineIdentityServiceLibrary
// (None)

class UClass* UOnlineIdentityServiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineIdentityServiceLibrary");

	return Clss;
}


// OnlineIdentityServiceLibrary OnlineSubsystemInflexion.Default__OnlineIdentityServiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineIdentityServiceLibrary* UOnlineIdentityServiceLibrary::GetDefaultObj()
{
	static class UOnlineIdentityServiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineIdentityServiceLibrary*>(UOnlineIdentityServiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction OnlineSubsystemInflexion.OnlineIdentityServiceLibrary.OnLoginPlayerWithProfileComplete__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FOnlineServiceStatus        Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineIdentityServiceLibrary::OnLoginPlayerWithProfileComplete__DelegateSignature(struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineIdentityServiceLibrary", "OnLoginPlayerWithProfileComplete__DelegateSignature");

	Params::UOnlineIdentityServiceLibrary_OnLoginPlayerWithProfileComplete__DelegateSignature_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemInflexion.OnlineIdentityServiceLibrary.LogoutPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineIdentityServiceLibrary::LogoutPlayer(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineIdentityServiceLibrary", "LogoutPlayer");

	Params::UOnlineIdentityServiceLibrary_LogoutPlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemInflexion.OnlineIdentityServiceLibrary.LoginPlayerWithProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AccountId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AccountToken                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSelectableProfile          Profile                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineIdentityServiceLibrary::LoginPlayerWithProfile(class UObject* WorldContextObject, const class FString& AccountId, const class FString& AccountToken, struct FSelectableProfile& Profile, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineIdentityServiceLibrary", "LoginPlayerWithProfile");

	Params::UOnlineIdentityServiceLibrary_LoginPlayerWithProfile_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AccountId = AccountId;
	Parms.AccountToken = AccountToken;
	Parms.Profile = Profile;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


