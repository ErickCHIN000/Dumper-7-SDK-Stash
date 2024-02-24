#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class JWTPlugin.JWTGenerator
// (None)

class UClass* UJWTGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JWTGenerator");

	return Clss;
}


// JWTGenerator JWTPlugin.Default__JWTGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UJWTGenerator* UJWTGenerator::GetDefaultObj()
{
	static class UJWTGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UJWTGenerator*>(UJWTGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Function JWTPlugin.JWTGenerator.SetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::SetType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "SetType");

	Params::UJWTGenerator_SetType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.SetSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Subject                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::SetSubject(const class FString& Subject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "SetSubject");

	Params::UJWTGenerator_SetSubject_Params Parms{};

	Parms.Subject = Subject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.SetNotBefore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::SetNotBefore(int32 Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "SetNotBefore");

	Params::UJWTGenerator_SetNotBefore_Params Parms{};

	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.SetKeyID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      KeyID                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::SetKeyID(const class FString& KeyID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "SetKeyID");

	Params::UJWTGenerator_SetKeyID_Params Parms{};

	Parms.KeyID = KeyID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.SetID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::SetID(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "SetID");

	Params::UJWTGenerator_SetID_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.SetContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::SetContentType(const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "SetContentType");

	Params::UJWTGenerator_SetContentType_Params Parms{};

	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.SetAudience
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Audience                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::SetAudience(const class FString& Audience)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "SetAudience");

	Params::UJWTGenerator_SetAudience_Params Parms{};

	Parms.Audience = Audience;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.GenerateToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlgorithm              Algorithm                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IATClaim                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JWT                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::GenerateToken(const class FString& Key, enum class EAlgorithm Algorithm, bool IATClaim, class FString* JWT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "GenerateToken");

	Params::UJWTGenerator_GenerateToken_Params Parms{};

	Parms.Key = Key;
	Parms.Algorithm = Algorithm;
	Parms.IATClaim = IATClaim;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (JWT != nullptr)
		*JWT = std::move(Parms.JWT);

}


// Function JWTPlugin.JWTGenerator.ExpireAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::ExpireAt(int32 Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "ExpireAt");

	Params::UJWTGenerator_ExpireAt_Params Parms{};

	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.AddHeaderClaims
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Claims                                                           (Parm, NativeAccessSpecifierPublic)

void UJWTGenerator::AddHeaderClaims(TMap<class FString, class FString> Claims)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "AddHeaderClaims");

	Params::UJWTGenerator_AddHeaderClaims_Params Parms{};

	Parms.Claims = Claims;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.AddHeaderClaim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::AddHeaderClaim(const class FString& Name, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "AddHeaderClaim");

	Params::UJWTGenerator_AddHeaderClaim_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.AddClaims
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Claims                                                           (Parm, NativeAccessSpecifierPublic)

void UJWTGenerator::AddClaims(TMap<class FString, class FString> Claims)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "AddClaims");

	Params::UJWTGenerator_AddClaims_Params Parms{};

	Parms.Claims = Claims;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTGenerator.AddClaim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTGenerator::AddClaim(const class FString& Name, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTGenerator", "AddClaim");

	Params::UJWTGenerator_AddClaim_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class JWTPlugin.JWTPluginBPLibrary
// (None)

class UClass* UJWTPluginBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JWTPluginBPLibrary");

	return Clss;
}


// JWTPluginBPLibrary JWTPlugin.Default__JWTPluginBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UJWTPluginBPLibrary* UJWTPluginBPLibrary::GetDefaultObj()
{
	static class UJWTPluginBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UJWTPluginBPLibrary*>(UJWTPluginBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function JWTPlugin.JWTPluginBPLibrary.GetClaims
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      JWTToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> UJWTPluginBPLibrary::GetClaims(const class FString& JWTToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTPluginBPLibrary", "GetClaims");

	Params::UJWTPluginBPLibrary_GetClaims_Params Parms{};

	Parms.JWTToken = JWTToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlgorithm              Algorithm                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJWTVerifier*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJWTVerifier* UJWTPluginBPLibrary::CreateVerifier(const class FString& Key, enum class EAlgorithm Algorithm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTPluginBPLibrary", "CreateVerifier");

	Params::UJWTPluginBPLibrary_CreateVerifier_Params Parms{};

	Parms.Key = Key;
	Parms.Algorithm = Algorithm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJWTGenerator*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJWTGenerator* UJWTPluginBPLibrary::CreateGenerator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTPluginBPLibrary", "CreateGenerator");

	Params::UJWTPluginBPLibrary_CreateGenerator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class JWTPlugin.JWTVerifier
// (None)

class UClass* UJWTVerifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JWTVerifier");

	return Clss;
}


// JWTVerifier JWTPlugin.Default__JWTVerifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UJWTVerifier* UJWTVerifier::GetDefaultObj()
{
	static class UJWTVerifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UJWTVerifier*>(UJWTVerifier::StaticClass()->DefaultObject);

	return Default;
}


// Function JWTPlugin.JWTVerifier.WithSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Subject                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTVerifier::WithSubject(const class FString& Subject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "WithSubject");

	Params::UJWTVerifier_WithSubject_Params Parms{};

	Parms.Subject = Subject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTVerifier.WithIssuer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Issuer                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTVerifier::WithIssuer(const class FString& Issuer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "WithIssuer");

	Params::UJWTVerifier_WithIssuer_Params Parms{};

	Parms.Issuer = Issuer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTVerifier.WithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTVerifier::WithID(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "WithID");

	Params::UJWTVerifier_WithID_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTVerifier.WithCustomClaim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTVerifier::WithCustomClaim(const class FString& Name, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "WithCustomClaim");

	Params::UJWTVerifier_WithCustomClaim_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTVerifier.WithAudience
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Audience                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTVerifier::WithAudience(const class FString& Audience)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "WithAudience");

	Params::UJWTVerifier_WithAudience_Params Parms{};

	Parms.Audience = Audience;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTVerifier.VerifyJWT
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Input                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJWTVerifier::VerifyJWT(const class FString& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "VerifyJWT");

	Params::UJWTVerifier_VerifyJWT_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JWTPlugin.JWTVerifier.SetLeeway
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Leeway                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTVerifier::SetLeeway(int32 Leeway)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "SetLeeway");

	Params::UJWTVerifier_SetLeeway_Params Parms{};

	Parms.Leeway = Leeway;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JWTPlugin.JWTVerifier.SetAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlgorithm              Algorithm                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJWTVerifier::SetAlgorithm(const class FString& Key, enum class EAlgorithm Algorithm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JWTVerifier", "SetAlgorithm");

	Params::UJWTVerifier_SetAlgorithm_Params Parms{};

	Parms.Key = Key;
	Parms.Algorithm = Algorithm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


