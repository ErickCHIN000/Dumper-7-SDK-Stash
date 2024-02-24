#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NWXOnlineServices.AccountAPIService
// (None)

class UClass* UAccountAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AccountAPIService");

	return Clss;
}


// AccountAPIService NWXOnlineServices.Default__AccountAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UAccountAPIService* UAccountAPIService::GetDefaultObj()
{
	static class UAccountAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UAccountAPIService*>(UAccountAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.AccountAPIService.RemoveRoleFromAccount_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemoveRoleFromAccountRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::RemoveRoleFromAccount_BP(struct FRemoveRoleFromAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "RemoveRoleFromAccount_BP");

	Params::UAccountAPIService_RemoveRoleFromAccount_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.RemoveProviderByAccountID_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemoveProviderByAccountIDRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::RemoveProviderByAccountID_BP(struct FRemoveProviderByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "RemoveProviderByAccountID_BP");

	Params::UAccountAPIService_RemoveProviderByAccountID_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.ListRoles_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListRolesRequest           Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::ListRoles_BP(struct FListRolesRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "ListRoles_BP");

	Params::UAccountAPIService_ListRoles_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.ListAccountsWithRole_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListAccountsWithRoleRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::ListAccountsWithRole_BP(struct FListAccountsWithRoleRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "ListAccountsWithRole_BP");

	Params::UAccountAPIService_ListAccountsWithRole_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.GetProvidersByAccountID_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetProvidersByAccountIDRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::GetProvidersByAccountID_BP(struct FGetProvidersByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "GetProvidersByAccountID_BP");

	Params::UAccountAPIService_GetProvidersByAccountID_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.GetProviderByAccountID_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetProviderByAccountIDRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::GetProviderByAccountID_BP(struct FGetProviderByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "GetProviderByAccountID_BP");

	Params::UAccountAPIService_GetProviderByAccountID_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.GetAccountByProviderID_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetAccountByProviderIDRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::GetAccountByProviderID_BP(struct FGetAccountByProviderIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "GetAccountByProviderID_BP");

	Params::UAccountAPIService_GetAccountByProviderID_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.GetAccountByID_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetAccountByIDRequest      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::GetAccountByID_BP(struct FGetAccountByIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "GetAccountByID_BP");

	Params::UAccountAPIService_GetAccountByID_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.CreateAccount_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateAccountRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::CreateAccount_BP(struct FCreateAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "CreateAccount_BP");

	Params::UAccountAPIService_CreateAccount_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.AddRoleToAccount_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAddRoleToAccountRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::AddRoleToAccount_BP(struct FAddRoleToAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "AddRoleToAccount_BP");

	Params::UAccountAPIService_AddRoleToAccount_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.AddProviderByAccountID_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAddProviderByAccountIDRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::AddProviderByAccountID_BP(struct FAddProviderByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "AddProviderByAccountID_BP");

	Params::UAccountAPIService_AddProviderByAccountID_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AccountAPIService.AcceptEULAForAccount_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAcceptEULAForAccountRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccountAPIService::AcceptEULAForAccount_BP(struct FAcceptEULAForAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountAPIService", "AcceptEULAForAccount_BP");

	Params::UAccountAPIService_AcceptEULAForAccount_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.AuthenticateAPIService
// (None)

class UClass* UAuthenticateAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuthenticateAPIService");

	return Clss;
}


// AuthenticateAPIService NWXOnlineServices.Default__AuthenticateAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UAuthenticateAPIService* UAuthenticateAPIService::GetDefaultObj()
{
	static class UAuthenticateAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UAuthenticateAPIService*>(UAuthenticateAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.AuthenticateAPIService.AuthWithXbox_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAuthWithXboxRequest        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthenticateAPIService::AuthWithXbox_BP(struct FAuthWithXboxRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthenticateAPIService", "AuthWithXbox_BP");

	Params::UAuthenticateAPIService_AuthWithXbox_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthenticateAPIService.AuthWithSteam_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAuthWithSteamRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthenticateAPIService::AuthWithSteam_BP(struct FAuthWithSteamRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthenticateAPIService", "AuthWithSteam_BP");

	Params::UAuthenticateAPIService_AuthWithSteam_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthenticateAPIService.AuthWithPSN_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAuthWithPSNRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthenticateAPIService::AuthWithPSN_BP(struct FAuthWithPSNRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthenticateAPIService", "AuthWithPSN_BP");

	Params::UAuthenticateAPIService_AuthWithPSN_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthenticateAPIService.AuthWithGoogle_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAuthWithGoogleRequest      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthenticateAPIService::AuthWithGoogle_BP(struct FAuthWithGoogleRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthenticateAPIService", "AuthWithGoogle_BP");

	Params::UAuthenticateAPIService_AuthWithGoogle_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthenticateAPIService.AuthWithEOS_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAuthWithEOSRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthenticateAPIService::AuthWithEOS_BP(struct FAuthWithEOSRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthenticateAPIService", "AuthWithEOS_BP");

	Params::UAuthenticateAPIService_AuthWithEOS_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthenticateAPIService.AcceptEULA_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAcceptEULARequest          Request                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthenticateAPIService::AcceptEULA_BP(struct FAcceptEULARequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthenticateAPIService", "AcceptEULA_BP");

	Params::UAuthenticateAPIService_AcceptEULA_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.AuthServiceLibrary
// (None)

class UClass* UAuthServiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuthServiceLibrary");

	return Clss;
}


// AuthServiceLibrary NWXOnlineServices.Default__AuthServiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAuthServiceLibrary* UAuthServiceLibrary::GetDefaultObj()
{
	static class UAuthServiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAuthServiceLibrary*>(UAuthServiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction NWXOnlineServices.AuthServiceLibrary.OnFetchSteamAuthBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<uint8>                      AppTicket                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAuthServiceLibrary::OnFetchSteamAuthBP__DelegateSignature(TArray<uint8>& AppTicket, struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "OnFetchSteamAuthBP__DelegateSignature");

	Params::UAuthServiceLibrary_OnFetchSteamAuthBP__DelegateSignature_Params Parms{};

	Parms.AppTicket = AppTicket;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction NWXOnlineServices.AuthServiceLibrary.OnFetchEOSAuthBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// class FString                      IdToken                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAuthServiceLibrary::OnFetchEOSAuthBP__DelegateSignature(const class FString& IdToken, struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "OnFetchEOSAuthBP__DelegateSignature");

	Params::UAuthServiceLibrary_OnFetchEOSAuthBP__DelegateSignature_Params Parms{};

	Parms.IdToken = IdToken;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NWXOnlineServices.AuthServiceLibrary.ListDeployments
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Complete                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthServiceLibrary::ListDeployments(FDelegateProperty_& Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "ListDeployments");

	Params::UAuthServiceLibrary_ListDeployments_Params Parms{};

	Parms.Complete = Complete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthServiceLibrary.IsSteamAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAuthServiceLibrary::IsSteamAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "IsSteamAvailable");

	Params::UAuthServiceLibrary_IsSteamAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.AuthServiceLibrary.IsEosAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAuthServiceLibrary::IsEosAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "IsEosAvailable");

	Params::UAuthServiceLibrary_IsEosAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.AuthServiceLibrary.IsAutoEnterGameRequested
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAuthServiceLibrary::IsAutoEnterGameRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "IsAutoEnterGameRequested");

	Params::UAuthServiceLibrary_IsAutoEnterGameRequested_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.AuthServiceLibrary.GetTagValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              DeploymentTags                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TagName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutTagValue                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludePrefix                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DefaultValue                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAuthServiceLibrary::GetTagValue(TArray<class FString>& DeploymentTags, const class FString& TagName, class FString* OutTagValue, bool bIncludePrefix, const class FString& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "GetTagValue");

	Params::UAuthServiceLibrary_GetTagValue_Params Parms{};

	Parms.DeploymentTags = DeploymentTags;
	Parms.TagName = TagName;
	Parms.bIncludePrefix = bIncludePrefix;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTagValue != nullptr)
		*OutTagValue = std::move(Parms.OutTagValue);

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.AuthServiceLibrary.GetSteamIdBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAuthServiceLibrary::GetSteamIdBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "GetSteamIdBP");

	Params::UAuthServiceLibrary_GetSteamIdBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.AuthServiceLibrary.GetNetworkCompatibleChangelist
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAuthServiceLibrary::GetNetworkCompatibleChangelist()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "GetNetworkCompatibleChangelist");

	Params::UAuthServiceLibrary_GetNetworkCompatibleChangelist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.AuthServiceLibrary.FetchSteamAuthBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthServiceLibrary::FetchSteamAuthBP(FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "FetchSteamAuthBP");

	Params::UAuthServiceLibrary_FetchSteamAuthBP_Params Parms{};

	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthServiceLibrary.FetchEosAuthBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthServiceLibrary::FetchEosAuthBP(class UObject* WorldContextObject, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "FetchEosAuthBP");

	Params::UAuthServiceLibrary_FetchEosAuthBP_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.AuthServiceLibrary.CacheAccountTokens
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AccountId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AccessToken                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAuthServiceLibrary::CacheAccountTokens(const class FString& AccountId, const class FString& AccessToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuthServiceLibrary", "CacheAccountTokens");

	Params::UAuthServiceLibrary_CacheAccountTokens_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.AccessToken = AccessToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.BailiffAPIService
// (None)

class UClass* UBailiffAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BailiffAPIService");

	return Clss;
}


// BailiffAPIService NWXOnlineServices.Default__BailiffAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UBailiffAPIService* UBailiffAPIService::GetDefaultObj()
{
	static class UBailiffAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UBailiffAPIService*>(UBailiffAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.BailiffAPIService.RemovePlayersFromRoom_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemovePlayersFromRoomRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::RemovePlayersFromRoom_BP(struct FRemovePlayersFromRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "RemovePlayersFromRoom_BP");

	Params::UBailiffAPIService_RemovePlayersFromRoom_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BailiffAPIService.MakeAnnouncement_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMakeAnnouncementRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::MakeAnnouncement_BP(struct FMakeAnnouncementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "MakeAnnouncement_BP");

	Params::UBailiffAPIService_MakeAnnouncement_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BailiffAPIService.InvitePlayerToRealmViaChat_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInvitePlayerToRealmViaChatRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::InvitePlayerToRealmViaChat_BP(struct FInvitePlayerToRealmViaChatRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "InvitePlayerToRealmViaChat_BP");

	Params::UBailiffAPIService_InvitePlayerToRealmViaChat_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BailiffAPIService.InvitePlayersToRoom_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInvitePlayersToRoomRequest Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::InvitePlayersToRoom_BP(struct FInvitePlayersToRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "InvitePlayersToRoom_BP");

	Params::UBailiffAPIService_InvitePlayersToRoom_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BailiffAPIService.GetRoomsForPlayer_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetRoomsForPlayerRequest   Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::GetRoomsForPlayer_BP(struct FGetRoomsForPlayerRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "GetRoomsForPlayer_BP");

	Params::UBailiffAPIService_GetRoomsForPlayer_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BailiffAPIService.GetPlayersInRoom_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetPlayersInRoomRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::GetPlayersInRoom_BP(struct FGetPlayersInRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "GetPlayersInRoom_BP");

	Params::UBailiffAPIService_GetPlayersInRoom_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BailiffAPIService.GetPlayerOnlineStatus_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetPlayerOnlineStatusRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::GetPlayerOnlineStatus_BP(struct FGetPlayerOnlineStatusRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "GetPlayerOnlineStatus_BP");

	Params::UBailiffAPIService_GetPlayerOnlineStatus_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BailiffAPIService.CreateRoom_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateRoomRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBailiffAPIService::CreateRoom_BP(struct FCreateRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BailiffAPIService", "CreateRoom_BP");

	Params::UBailiffAPIService_CreateRoom_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.BarkerAPIService
// (None)

class UClass* UBarkerAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BarkerAPIService");

	return Clss;
}


// BarkerAPIService NWXOnlineServices.Default__BarkerAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UBarkerAPIService* UBarkerAPIService::GetDefaultObj()
{
	static class UBarkerAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UBarkerAPIService*>(UBarkerAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.BarkerAPIService.GetNews_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetNewsRequest             Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBarkerAPIService::GetNews_BP(struct FGetNewsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BarkerAPIService", "GetNews_BP");

	Params::UBarkerAPIService_GetNews_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.BarkerAPIService.GetMessageOfTheDay_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetMessageOfTheDayRequest  Request                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBarkerAPIService::GetMessageOfTheDay_BP(struct FGetMessageOfTheDayRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BarkerAPIService", "GetMessageOfTheDay_BP");

	Params::UBarkerAPIService_GetMessageOfTheDay_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.DeployAPIService
// (None)

class UClass* UDeployAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeployAPIService");

	return Clss;
}


// DeployAPIService NWXOnlineServices.Default__DeployAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeployAPIService* UDeployAPIService::GetDefaultObj()
{
	static class UDeployAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeployAPIService*>(UDeployAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.DeployAPIService.StopDeploy_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStopDeployRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::StopDeploy_BP(struct FStopDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "StopDeploy_BP");

	Params::UDeployAPIService_StopDeploy_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.StopAllDeploys_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStopAllDeploysRequest      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::StopAllDeploys_BP(struct FStopAllDeploysRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "StopAllDeploys_BP");

	Params::UDeployAPIService_StopAllDeploys_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.SetDeployScore_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSetDeployScoreRequest      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::SetDeployScore_BP(struct FSetDeployScoreRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "SetDeployScore_BP");

	Params::UDeployAPIService_SetDeployScore_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.SetDeployAnnotations_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSetDeployAnnotationsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::SetDeployAnnotations_BP(struct FSetDeployAnnotationsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "SetDeployAnnotations_BP");

	Params::UDeployAPIService_SetDeployAnnotations_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.RestartDeployOp_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRestartDeployRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::RestartDeployOp_BP(struct FRestartDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "RestartDeployOp_BP");

	Params::UDeployAPIService_RestartDeployOp_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.RestartDeploy_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRestartDeployRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::RestartDeploy_BP(struct FRestartDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "RestartDeploy_BP");

	Params::UDeployAPIService_RestartDeploy_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.ResolveDeploySetOp_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FResolveDeploySetRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::ResolveDeploySetOp_BP(struct FResolveDeploySetRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "ResolveDeploySetOp_BP");

	Params::UDeployAPIService_ResolveDeploySetOp_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.ResolveDeploySet_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FResolveDeploySetRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::ResolveDeploySet_BP(struct FResolveDeploySetRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "ResolveDeploySet_BP");

	Params::UDeployAPIService_ResolveDeploySet_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.RecordDeployPlayers_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRecordDeployPlayersRequest Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::RecordDeployPlayers_BP(struct FRecordDeployPlayersRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "RecordDeployPlayers_BP");

	Params::UDeployAPIService_RecordDeployPlayers_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.RecordDeployEvents_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRecordDeployEventsRequest  Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::RecordDeployEvents_BP(struct FRecordDeployEventsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "RecordDeployEvents_BP");

	Params::UDeployAPIService_RecordDeployEvents_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.ListDeployRecords_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListDeployRecordsRequest   Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::ListDeployRecords_BP(struct FListDeployRecordsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "ListDeployRecords_BP");

	Params::UDeployAPIService_ListDeployRecords_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.ListDeployEvents_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListDeployEventsRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::ListDeployEvents_BP(struct FListDeployEventsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "ListDeployEvents_BP");

	Params::UDeployAPIService_ListDeployEvents_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.GetOperation_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetOperationRequest        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::GetOperation_BP(struct FGetOperationRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "GetOperation_BP");

	Params::UDeployAPIService_GetOperation_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.GetDeployRecordByName_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetDeployRecordByNameRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::GetDeployRecordByName_BP(struct FGetDeployRecordByNameRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "GetDeployRecordByName_BP");

	Params::UDeployAPIService_GetDeployRecordByName_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.GetDeployRecord_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetDeployRecordRequest     Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::GetDeployRecord_BP(struct FGetDeployRecordRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "GetDeployRecord_BP");

	Params::UDeployAPIService_GetDeployRecord_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.GetDeploy_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetDeployRequest           Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::GetDeploy_BP(struct FGetDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "GetDeploy_BP");

	Params::UDeployAPIService_GetDeploy_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.CreateDeployOp_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateDeployRequest        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::CreateDeployOp_BP(struct FCreateDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "CreateDeployOp_BP");

	Params::UDeployAPIService_CreateDeployOp_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.DeployAPIService.CreateDeploy_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateDeployRequest        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeployAPIService::CreateDeploy_BP(struct FCreateDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployAPIService", "CreateDeploy_BP");

	Params::UDeployAPIService_CreateDeploy_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.DeploymentInformationProvider
// (None)

class UClass* IDeploymentInformationProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeploymentInformationProvider");

	return Clss;
}


// DeploymentInformationProvider NWXOnlineServices.Default__DeploymentInformationProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IDeploymentInformationProvider* IDeploymentInformationProvider::GetDefaultObj()
{
	static class IDeploymentInformationProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IDeploymentInformationProvider*>(IDeploymentInformationProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.DeploymentInformationProvider.GetDeploymentInformation
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDeploymentInformation      ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FDeploymentInformation IDeploymentInformationProvider::GetDeploymentInformation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentInformationProvider", "GetDeploymentInformation");

	Params::IDeploymentInformationProvider_GetDeploymentInformation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXOnlineServices.DeploymentServiceLibrary
// (None)

class UClass* UDeploymentServiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeploymentServiceLibrary");

	return Clss;
}


// DeploymentServiceLibrary NWXOnlineServices.Default__DeploymentServiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeploymentServiceLibrary* UDeploymentServiceLibrary::GetDefaultObj()
{
	static class UDeploymentServiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeploymentServiceLibrary*>(UDeploymentServiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.DeploymentServiceLibrary.CreateDeployWithTemporalConfigBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTemporalConfig             TemporalConfig                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutDeploymentName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeploymentServiceLibrary::CreateDeployWithTemporalConfigBP(class UObject* WorldContextObject, const class FString& MapName, struct FTemporalConfig& TemporalConfig, FDelegateProperty_& OnComplete, class FString* OutDeploymentName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentServiceLibrary", "CreateDeployWithTemporalConfigBP");

	Params::UDeploymentServiceLibrary_CreateDeployWithTemporalConfigBP_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapName = MapName;
	Parms.TemporalConfig = TemporalConfig;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDeploymentName != nullptr)
		*OutDeploymentName = std::move(Parms.OutDeploymentName);

}


// Class NWXOnlineServices.EntitlementAPIService
// (None)

class UClass* UEntitlementAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntitlementAPIService");

	return Clss;
}


// EntitlementAPIService NWXOnlineServices.Default__EntitlementAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntitlementAPIService* UEntitlementAPIService::GetDefaultObj()
{
	static class UEntitlementAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntitlementAPIService*>(UEntitlementAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.EntitlementAPIService.RemoveProfileEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemoveProfileEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::RemoveProfileEntitlements_BP(struct FRemoveProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "RemoveProfileEntitlements_BP");

	Params::UEntitlementAPIService_RemoveProfileEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.RemoveAccountEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemoveAccountEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::RemoveAccountEntitlements_BP(struct FRemoveAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "RemoveAccountEntitlements_BP");

	Params::UEntitlementAPIService_RemoveAccountEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.ListProfilesWithEntitlement_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListProfilesWithEntitlementRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::ListProfilesWithEntitlement_BP(struct FListProfilesWithEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "ListProfilesWithEntitlement_BP");

	Params::UEntitlementAPIService_ListProfilesWithEntitlement_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.ListEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListEntitlementsRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::ListEntitlements_BP(struct FListEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "ListEntitlements_BP");

	Params::UEntitlementAPIService_ListEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.ListAccountsWithEntitlement_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListAccountsWithEntitlementRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::ListAccountsWithEntitlement_BP(struct FListAccountsWithEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "ListAccountsWithEntitlement_BP");

	Params::UEntitlementAPIService_ListAccountsWithEntitlement_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.GetProfileEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetProfileEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::GetProfileEntitlements_BP(struct FGetProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "GetProfileEntitlements_BP");

	Params::UEntitlementAPIService_GetProfileEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.GetMyProfileEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetMyProfileEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::GetMyProfileEntitlements_BP(struct FGetMyProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "GetMyProfileEntitlements_BP");

	Params::UEntitlementAPIService_GetMyProfileEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.GetMyAccountEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetMyAccountEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::GetMyAccountEntitlements_BP(struct FGetMyAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "GetMyAccountEntitlements_BP");

	Params::UEntitlementAPIService_GetMyAccountEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.GetAccountEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetAccountEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::GetAccountEntitlements_BP(struct FGetAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "GetAccountEntitlements_BP");

	Params::UEntitlementAPIService_GetAccountEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.DoesProfileHaveEntitlement_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoesProfileHaveEntitlementRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::DoesProfileHaveEntitlement_BP(struct FDoesProfileHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "DoesProfileHaveEntitlement_BP");

	Params::UEntitlementAPIService_DoesProfileHaveEntitlement_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.DoesMyProfileHaveEntitlement_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoesMyProfileHaveEntitlementRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::DoesMyProfileHaveEntitlement_BP(struct FDoesMyProfileHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "DoesMyProfileHaveEntitlement_BP");

	Params::UEntitlementAPIService_DoesMyProfileHaveEntitlement_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.DoesMyAccountHaveEntitlement_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoesMyAccountHaveEntitlementRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::DoesMyAccountHaveEntitlement_BP(struct FDoesMyAccountHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "DoesMyAccountHaveEntitlement_BP");

	Params::UEntitlementAPIService_DoesMyAccountHaveEntitlement_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.DoesAccountHaveEntitlement_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoesAccountHaveEntitlementRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::DoesAccountHaveEntitlement_BP(struct FDoesAccountHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "DoesAccountHaveEntitlement_BP");

	Params::UEntitlementAPIService_DoesAccountHaveEntitlement_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.AddProfileEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAddProfileEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::AddProfileEntitlements_BP(struct FAddProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "AddProfileEntitlements_BP");

	Params::UEntitlementAPIService_AddProfileEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.EntitlementAPIService.AddAccountEntitlements_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAddAccountEntitlementsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntitlementAPIService::AddAccountEntitlements_BP(struct FAddAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntitlementAPIService", "AddAccountEntitlements_BP");

	Params::UEntitlementAPIService_AddAccountEntitlements_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.FeedbackAPIService
// (None)

class UClass* UFeedbackAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeedbackAPIService");

	return Clss;
}


// FeedbackAPIService NWXOnlineServices.Default__FeedbackAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UFeedbackAPIService* UFeedbackAPIService::GetDefaultObj()
{
	static class UFeedbackAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeedbackAPIService*>(UFeedbackAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.FeedbackAPIService.SubmitJira_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmitJiraRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFeedbackAPIService::SubmitJira_BP(struct FSubmitJiraRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeedbackAPIService", "SubmitJira_BP");

	Params::UFeedbackAPIService_SubmitJira_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.FeedbackAPIService.AttachFileToJira_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAttachFileToJiraRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFeedbackAPIService::AttachFileToJira_BP(struct FAttachFileToJiraRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeedbackAPIService", "AttachFileToJira_BP");

	Params::UFeedbackAPIService_AttachFileToJira_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.GroupAPIService
// (None)

class UClass* UGroupAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupAPIService");

	return Clss;
}


// GroupAPIService NWXOnlineServices.Default__GroupAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupAPIService* UGroupAPIService::GetDefaultObj()
{
	static class UGroupAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupAPIService*>(UGroupAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.GroupAPIService.RemoveProfile_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemoveProfileRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroupAPIService::RemoveProfile_BP(struct FRemoveProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroupAPIService", "RemoveProfile_BP");

	Params::UGroupAPIService_RemoveProfile_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.GroupAPIService.GetGroupsWithNameForProfile_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetGroupsWithNameForProfileRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroupAPIService::GetGroupsWithNameForProfile_BP(struct FGetGroupsWithNameForProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroupAPIService", "GetGroupsWithNameForProfile_BP");

	Params::UGroupAPIService_GetGroupsWithNameForProfile_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.GroupAPIService.GetGroupsForProfile_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetGroupsForProfileRequest Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroupAPIService::GetGroupsForProfile_BP(struct FGetGroupsForProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroupAPIService", "GetGroupsForProfile_BP");

	Params::UGroupAPIService_GetGroupsForProfile_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.GroupAPIService.GetGroupDetails_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetGroupDetailsRequest     Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroupAPIService::GetGroupDetails_BP(struct FGetGroupDetailsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroupAPIService", "GetGroupDetails_BP");

	Params::UGroupAPIService_GetGroupDetails_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.GroupAPIService.Delete_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDeleteRequest              Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroupAPIService::Delete_BP(struct FDeleteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroupAPIService", "Delete_BP");

	Params::UGroupAPIService_Delete_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.GroupAPIService.Create_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateRequest              Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroupAPIService::Create_BP(struct FCreateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroupAPIService", "Create_BP");

	Params::UGroupAPIService_Create_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.GroupAPIService.AddProfile_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAddProfileRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroupAPIService::AddProfile_BP(struct FAddProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroupAPIService", "AddProfile_BP");

	Params::UGroupAPIService_AddProfile_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.JiraBlueprintLibrary
// (None)

class UClass* UJiraBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JiraBlueprintLibrary");

	return Clss;
}


// JiraBlueprintLibrary NWXOnlineServices.Default__JiraBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UJiraBlueprintLibrary* UJiraBlueprintLibrary::GetDefaultObj()
{
	static class UJiraBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UJiraBlueprintLibrary*>(UJiraBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.JiraBlueprintLibrary.CreateIssue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Subject                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Body                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              Labels                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              Attachments                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Complete                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJiraBlueprintLibrary::CreateIssue(const class FString& Subject, TArray<class FString>& Body, TArray<class FString>& Labels, TArray<class FString>& Attachments, FDelegateProperty_& Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JiraBlueprintLibrary", "CreateIssue");

	Params::UJiraBlueprintLibrary_CreateIssue_Params Parms{};

	Parms.Subject = Subject;
	Parms.Body = Body;
	Parms.Labels = Labels;
	Parms.Attachments = Attachments;
	Parms.Complete = Complete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.ModerateAPIService
// (None)

class UClass* UModerateAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModerateAPIService");

	return Clss;
}


// ModerateAPIService NWXOnlineServices.Default__ModerateAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UModerateAPIService* UModerateAPIService::GetDefaultObj()
{
	static class UModerateAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UModerateAPIService*>(UModerateAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.ModerateAPIService.ReportPlayerAction_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReportPlayerActionRequest  Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModerateAPIService::ReportPlayerAction_BP(struct FReportPlayerActionRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModerateAPIService", "ReportPlayerAction_BP");

	Params::UModerateAPIService_ReportPlayerAction_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ModerateAPIService.ReportPlayer_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReportPlayerRequest        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModerateAPIService::ReportPlayer_BP(struct FReportPlayerRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModerateAPIService", "ReportPlayer_BP");

	Params::UModerateAPIService_ReportPlayer_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ModerateAPIService.ModerateText_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModerateTextRequest        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModerateAPIService::ModerateText_BP(struct FModerateTextRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModerateAPIService", "ModerateText_BP");

	Params::UModerateAPIService_ModerateText_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.ModerateServiceLibrary
// (None)

class UClass* UModerateServiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModerateServiceLibrary");

	return Clss;
}


// ModerateServiceLibrary NWXOnlineServices.Default__ModerateServiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModerateServiceLibrary* UModerateServiceLibrary::GetDefaultObj()
{
	static class UModerateServiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModerateServiceLibrary*>(UModerateServiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.ModerateServiceLibrary.ModerateInGameTextBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerGeneratedText                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerProfileId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Complete                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModerateServiceLibrary::ModerateInGameTextBP(class UObject* WorldContextObject, const class FString& PlayerGeneratedText, const class FString& PlayerProfileId, FDelegateProperty_ Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModerateServiceLibrary", "ModerateInGameTextBP");

	Params::UModerateServiceLibrary_ModerateInGameTextBP_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerGeneratedText = PlayerGeneratedText;
	Parms.PlayerProfileId = PlayerProfileId;
	Parms.Complete = Complete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.ProfileAPIService
// (None)

class UClass* UProfileAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProfileAPIService");

	return Clss;
}


// ProfileAPIService NWXOnlineServices.Default__ProfileAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UProfileAPIService* UProfileAPIService::GetDefaultObj()
{
	static class UProfileAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UProfileAPIService*>(UProfileAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.ProfileAPIService.ValidateProposedProfileName_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FValidateProposedProfileNameRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::ValidateProposedProfileName_BP(struct FValidateProposedProfileNameRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "ValidateProposedProfileName_BP");

	Params::UProfileAPIService_ValidateProposedProfileName_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.UpdateProfileMetadata_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUpdateProfileMetadataRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::UpdateProfileMetadata_BP(struct FUpdateProfileMetadataRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "UpdateProfileMetadata_BP");

	Params::UProfileAPIService_UpdateProfileMetadata_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.UpdateProfile_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUpdateProfileRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::UpdateProfile_BP(struct FUpdateProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "UpdateProfile_BP");

	Params::UProfileAPIService_UpdateProfile_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.SetRespite_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSetRespiteRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::SetRespite_BP(struct FSetRespiteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "SetRespite_BP");

	Params::UProfileAPIService_SetRespite_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.SetProfileMetadata_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSetProfileMetadataRequest  Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::SetProfileMetadata_BP(struct FSetProfileMetadataRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "SetProfileMetadata_BP");

	Params::UProfileAPIService_SetProfileMetadata_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.SearchProfiles_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSearchProfilesRequest      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::SearchProfiles_BP(struct FSearchProfilesRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "SearchProfiles_BP");

	Params::UProfileAPIService_SearchProfiles_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.QueryProfiles_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQueryProfilesRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::QueryProfiles_BP(struct FQueryProfilesRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "QueryProfiles_BP");

	Params::UProfileAPIService_QueryProfiles_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.ListAllProfilesForAccount_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListAllProfilesForAccountRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::ListAllProfilesForAccount_BP(struct FListAllProfilesForAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "ListAllProfilesForAccount_BP");

	Params::UProfileAPIService_ListAllProfilesForAccount_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.GetRespite_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetRespiteRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::GetRespite_BP(struct FGetRespiteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "GetRespite_BP");

	Params::UProfileAPIService_GetRespite_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.GetProfilesForAccount_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetProfilesForAccountRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::GetProfilesForAccount_BP(struct FGetProfilesForAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "GetProfilesForAccount_BP");

	Params::UProfileAPIService_GetProfilesForAccount_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.GetProfileNamesByIds_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetProfileNamesByIdsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::GetProfileNamesByIds_BP(struct FGetProfileNamesByIdsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "GetProfileNamesByIds_BP");

	Params::UProfileAPIService_GetProfileNamesByIds_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.GetProfileNameById_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetProfileNameByIdRequest  Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::GetProfileNameById_BP(struct FGetProfileNameByIdRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "GetProfileNameById_BP");

	Params::UProfileAPIService_GetProfileNameById_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.GetProfileById_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetProfileByIdRequest      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::GetProfileById_BP(struct FGetProfileByIdRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "GetProfileById_BP");

	Params::UProfileAPIService_GetProfileById_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.GetPlayersWithRespite_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetPlayersWithRespiteRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::GetPlayersWithRespite_BP(struct FGetPlayersWithRespiteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "GetPlayersWithRespite_BP");

	Params::UProfileAPIService_GetPlayersWithRespite_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.GetOnlineProfileNamesByIds_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetOnlineProfileNamesByIdsRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::GetOnlineProfileNamesByIds_BP(struct FGetOnlineProfileNamesByIdsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "GetOnlineProfileNamesByIds_BP");

	Params::UProfileAPIService_GetOnlineProfileNamesByIds_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.DeleteProfile_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDeleteProfileRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::DeleteProfile_BP(struct FDeleteProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "DeleteProfile_BP");

	Params::UProfileAPIService_DeleteProfile_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.CreateProfile_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateProfileRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::CreateProfile_BP(struct FCreateProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "CreateProfile_BP");

	Params::UProfileAPIService_CreateProfile_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileAPIService.ClearProfileMetadata_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FClearProfileMetadataRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileAPIService::ClearProfileMetadata_BP(struct FClearProfileMetadataRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileAPIService", "ClearProfileMetadata_BP");

	Params::UProfileAPIService_ClearProfileMetadata_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.ProfileNameServiceLibrary
// (None)

class UClass* UProfileNameServiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProfileNameServiceLibrary");

	return Clss;
}


// ProfileNameServiceLibrary NWXOnlineServices.Default__ProfileNameServiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UProfileNameServiceLibrary* UProfileNameServiceLibrary::GetDefaultObj()
{
	static class UProfileNameServiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UProfileNameServiceLibrary*>(UProfileNameServiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.ProfileNameServiceLibrary.GetPublicNameWithoutDiscriminator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueName                 UniqueName                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UProfileNameServiceLibrary::GetPublicNameWithoutDiscriminator(struct FUniqueName& UniqueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileNameServiceLibrary", "GetPublicNameWithoutDiscriminator");

	Params::UProfileNameServiceLibrary_GetPublicNameWithoutDiscriminator_Params Parms{};

	Parms.UniqueName = UniqueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.ProfileNameServiceLibrary.GetPublicNameWithDiscriminator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueName                 UniqueName                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UProfileNameServiceLibrary::GetPublicNameWithDiscriminator(struct FUniqueName& UniqueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileNameServiceLibrary", "GetPublicNameWithDiscriminator");

	Params::UProfileNameServiceLibrary_GetPublicNameWithDiscriminator_Params Parms{};

	Parms.UniqueName = UniqueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXOnlineServices.ProfileNameServiceLibrary.GetProfileNamesForIds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              IDs                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Complete                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileNameServiceLibrary::GetProfileNamesForIds(class UObject* WorldContextObject, TArray<class FString>& IDs, FDelegateProperty_& Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileNameServiceLibrary", "GetProfileNamesForIds");

	Params::UProfileNameServiceLibrary_GetProfileNamesForIds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.IDs = IDs;
	Parms.Complete = Complete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.ProfileServiceLibrary
// (None)

class UClass* UProfileServiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProfileServiceLibrary");

	return Clss;
}


// ProfileServiceLibrary NWXOnlineServices.Default__ProfileServiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UProfileServiceLibrary* UProfileServiceLibrary::GetDefaultObj()
{
	static class UProfileServiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UProfileServiceLibrary*>(UProfileServiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction NWXOnlineServices.ProfileServiceLibrary.OnDeleteProfileComplete__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FOnlineServiceStatus        Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UProfileServiceLibrary::OnDeleteProfileComplete__DelegateSignature(struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileServiceLibrary", "OnDeleteProfileComplete__DelegateSignature");

	Params::UProfileServiceLibrary_OnDeleteProfileComplete__DelegateSignature_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction NWXOnlineServices.ProfileServiceLibrary.OnCreateProfileComplete__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FSelectableProfile          Profile                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UProfileServiceLibrary::OnCreateProfileComplete__DelegateSignature(struct FSelectableProfile& Profile, struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileServiceLibrary", "OnCreateProfileComplete__DelegateSignature");

	Params::UProfileServiceLibrary_OnCreateProfileComplete__DelegateSignature_Params Parms{};

	Parms.Profile = Profile;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction NWXOnlineServices.ProfileServiceLibrary.FetchProfilesComplete__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FSelectableProfile>  Profiles                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UProfileServiceLibrary::FetchProfilesComplete__DelegateSignature(TArray<struct FSelectableProfile>& Profiles, struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileServiceLibrary", "FetchProfilesComplete__DelegateSignature");

	Params::UProfileServiceLibrary_FetchProfilesComplete__DelegateSignature_Params Parms{};

	Parms.Profiles = Profiles;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NWXOnlineServices.ProfileServiceLibrary.FetchProfiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AccountId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ShardId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileServiceLibrary::FetchProfiles(const class FString& AccountId, const class FString& ShardId, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileServiceLibrary", "FetchProfiles");

	Params::UProfileServiceLibrary_FetchProfiles_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.ShardId = ShardId;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ProfileServiceLibrary.DeleteProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSelectableProfile          Profile                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProfileServiceLibrary::DeleteProfile(struct FSelectableProfile& Profile, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfileServiceLibrary", "DeleteProfile");

	Params::UProfileServiceLibrary_DeleteProfile_Params Parms{};

	Parms.Profile = Profile;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.ProfileSyncAPIService
// (None)

class UClass* UProfileSyncAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProfileSyncAPIService");

	return Clss;
}


// ProfileSyncAPIService NWXOnlineServices.Default__ProfileSyncAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UProfileSyncAPIService* UProfileSyncAPIService::GetDefaultObj()
{
	static class UProfileSyncAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UProfileSyncAPIService*>(UProfileSyncAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXOnlineServices.RedemptionsAPIService
// (None)

class UClass* URedemptionsAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedemptionsAPIService");

	return Clss;
}


// RedemptionsAPIService NWXOnlineServices.Default__RedemptionsAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class URedemptionsAPIService* URedemptionsAPIService::GetDefaultObj()
{
	static class URedemptionsAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<URedemptionsAPIService*>(URedemptionsAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.RedemptionsAPIService.ListRewards_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListRewardsRequest         Request                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::ListRewards_BP(struct FListRewardsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "ListRewards_BP");

	Params::URedemptionsAPIService_ListRewards_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.ListRedemptions_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListRedemptionsRequest     Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::ListRedemptions_BP(struct FListRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "ListRedemptions_BP");

	Params::URedemptionsAPIService_ListRedemptions_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.GetMyClaimableRedemptions_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetMyClaimableRedemptionsRequestRequest                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::GetMyClaimableRedemptions_BP(struct FGetMyClaimableRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "GetMyClaimableRedemptions_BP");

	Params::URedemptionsAPIService_GetMyClaimableRedemptions_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.CreateReward_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateRewardRequest        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::CreateReward_BP(struct FCreateRewardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "CreateReward_BP");

	Params::URedemptionsAPIService_CreateReward_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.CreateRedemptions_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateRedemptionsRequest   Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::CreateRedemptions_BP(struct FCreateRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "CreateRedemptions_BP");

	Params::URedemptionsAPIService_CreateRedemptions_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.CreateCode_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateCodeRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::CreateCode_BP(struct FCreateCodeRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "CreateCode_BP");

	Params::URedemptionsAPIService_CreateCode_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.ClaimRedemptions_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FClaimRedemptionsRequest    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::ClaimRedemptions_BP(struct FClaimRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "ClaimRedemptions_BP");

	Params::URedemptionsAPIService_ClaimRedemptions_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.ClaimCode_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FClaimCodeRequest           Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::ClaimCode_BP(struct FClaimCodeRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "ClaimCode_BP");

	Params::URedemptionsAPIService_ClaimCode_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.RedemptionsAPIService.AssignMyTwitchRedemptions_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAssignMyTwitchRedemptionsRequestRequest                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionsAPIService::AssignMyTwitchRedemptions_BP(struct FAssignMyTwitchRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionsAPIService", "AssignMyTwitchRedemptions_BP");

	Params::URedemptionsAPIService_AssignMyTwitchRedemptions_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.ShardAPIService
// (None)

class UClass* UShardAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShardAPIService");

	return Clss;
}


// ShardAPIService NWXOnlineServices.Default__ShardAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UShardAPIService* UShardAPIService::GetDefaultObj()
{
	static class UShardAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UShardAPIService*>(UShardAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.ShardAPIService.UpdateShardVersions_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUpdateShardVersionsRequest Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UShardAPIService::UpdateShardVersions_BP(struct FUpdateShardVersionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShardAPIService", "UpdateShardVersions_BP");

	Params::UShardAPIService_UpdateShardVersions_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ShardAPIService.UpdateShard_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUpdateShardRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UShardAPIService::UpdateShard_BP(struct FUpdateShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShardAPIService", "UpdateShard_BP");

	Params::UShardAPIService_UpdateShard_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ShardAPIService.ListShards_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FListShardsRequest          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UShardAPIService::ListShards_BP(struct FListShardsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShardAPIService", "ListShards_BP");

	Params::UShardAPIService_ListShards_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ShardAPIService.GetShardsForClientVersion_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetShardsForClientVersionRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UShardAPIService::GetShardsForClientVersion_BP(struct FGetShardsForClientVersionRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShardAPIService", "GetShardsForClientVersion_BP");

	Params::UShardAPIService_GetShardsForClientVersion_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ShardAPIService.GetShard_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetShardRequest            Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UShardAPIService::GetShard_BP(struct FGetShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShardAPIService", "GetShard_BP");

	Params::UShardAPIService_GetShard_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ShardAPIService.DeleteShard_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDeleteShardRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UShardAPIService::DeleteShard_BP(struct FDeleteShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShardAPIService", "DeleteShard_BP");

	Params::UShardAPIService_DeleteShard_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.ShardAPIService.CreateShard_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateShardRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UShardAPIService::CreateShard_BP(struct FCreateShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShardAPIService", "CreateShard_BP");

	Params::UShardAPIService_CreateShard_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.TestAPIService
// (None)

class UClass* UTestAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestAPIService");

	return Clss;
}


// TestAPIService NWXOnlineServices.Default__TestAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestAPIService* UTestAPIService::GetDefaultObj()
{
	static class UTestAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestAPIService*>(UTestAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.TestAPIService.UnaryCallWithParams_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUnaryCallWithParamsRequest Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestAPIService::UnaryCallWithParams_BP(struct FUnaryCallWithParamsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestAPIService", "UnaryCallWithParams_BP");

	Params::UTestAPIService_UnaryCallWithParams_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.TestAPIService.UnaryCall_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUnaryCallRequest           Request                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestAPIService::UnaryCall_BP(struct FUnaryCallRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestAPIService", "UnaryCall_BP");

	Params::UTestAPIService_UnaryCall_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.WorldStateAPIService
// (None)

class UClass* UWorldStateAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldStateAPIService");

	return Clss;
}


// WorldStateAPIService NWXOnlineServices.Default__WorldStateAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldStateAPIService* UWorldStateAPIService::GetDefaultObj()
{
	static class UWorldStateAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldStateAPIService*>(UWorldStateAPIService::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXOnlineServices.WorldStateAPIService.SetWorldState_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSetWorldStateRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateAPIService::SetWorldState_BP(struct FSetWorldStateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateAPIService", "SetWorldState_BP");

	Params::UWorldStateAPIService_SetWorldState_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.WorldStateAPIService.GetWorldState_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGetWorldStateRequest       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateAPIService::GetWorldState_BP(struct FGetWorldStateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateAPIService", "GetWorldState_BP");

	Params::UWorldStateAPIService_GetWorldState_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXOnlineServices.WorldStateAPIService.CopyWorldState_BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCopyWorldStateRequest      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TokenKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnComplete                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateAPIService::CopyWorldState_BP(struct FCopyWorldStateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateAPIService", "CopyWorldState_BP");

	Params::UWorldStateAPIService_CopyWorldState_BP_Params Parms{};

	Parms.Request = Request;
	Parms.TokenKey = TokenKey;
	Parms.OnComplete = OnComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXOnlineServices.WorldStateSyncAPIService
// (None)

class UClass* UWorldStateSyncAPIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldStateSyncAPIService");

	return Clss;
}


// WorldStateSyncAPIService NWXOnlineServices.Default__WorldStateSyncAPIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldStateSyncAPIService* UWorldStateSyncAPIService::GetDefaultObj()
{
	static class UWorldStateSyncAPIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldStateSyncAPIService*>(UWorldStateSyncAPIService::StaticClass()->DefaultObject);

	return Default;
}

}


