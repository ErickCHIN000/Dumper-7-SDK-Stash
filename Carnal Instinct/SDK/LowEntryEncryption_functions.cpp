#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine
// (None)

class UClass* ULowEntryEncryptionAesFastEngine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryEncryptionAesFastEngine");

	return Clss;
}


// LowEntryEncryptionAesFastEngine LowEntryEncryption.Default__LowEntryEncryptionAesFastEngine
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryEncryptionAesFastEngine* ULowEntryEncryptionAesFastEngine::GetDefaultObj()
{
	static class ULowEntryEncryptionAesFastEngine* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryEncryptionAesFastEngine*>(ULowEntryEncryptionAesFastEngine::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine1D
// (None)

class UClass* ULowEntryEncryptionAesFastEngine1D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryEncryptionAesFastEngine1D");

	return Clss;
}


// LowEntryEncryptionAesFastEngine1D LowEntryEncryption.Default__LowEntryEncryptionAesFastEngine1D
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryEncryptionAesFastEngine1D* ULowEntryEncryptionAesFastEngine1D::GetDefaultObj()
{
	static class ULowEntryEncryptionAesFastEngine1D* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryEncryptionAesFastEngine1D*>(ULowEntryEncryptionAesFastEngine1D::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryEncryption.LowEntryEncryptionAesKey
// (None)

class UClass* ULowEntryEncryptionAesKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryEncryptionAesKey");

	return Clss;
}


// LowEntryEncryptionAesKey LowEntryEncryption.Default__LowEntryEncryptionAesKey
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryEncryptionAesKey* ULowEntryEncryptionAesKey::GetDefaultObj()
{
	static class ULowEntryEncryptionAesKey* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryEncryptionAesKey*>(ULowEntryEncryptionAesKey::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryEncryption.LowEntryEncryptionAesKey1D
// (None)

class UClass* ULowEntryEncryptionAesKey1D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryEncryptionAesKey1D");

	return Clss;
}


// LowEntryEncryptionAesKey1D LowEntryEncryption.Default__LowEntryEncryptionAesKey1D
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryEncryptionAesKey1D* ULowEntryEncryptionAesKey1D::GetDefaultObj()
{
	static class ULowEntryEncryptionAesKey1D* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryEncryptionAesKey1D*>(ULowEntryEncryptionAesKey1D::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryEncryption.LowEntryEncryptionLibrary
// (None)

class UClass* ULowEntryEncryptionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryEncryptionLibrary");

	return Clss;
}


// LowEntryEncryptionLibrary LowEntryEncryption.Default__LowEntryEncryptionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryEncryptionLibrary* ULowEntryEncryptionLibrary::GetDefaultObj()
{
	static class ULowEntryEncryptionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryEncryptionLibrary*>(ULowEntryEncryptionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.VerifySignatureRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Signature                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      ExpectedHash                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPublicKey*       PublicKey                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryEncryptionLibrary::VerifySignatureRsa(TArray<uint8>& Signature, TArray<uint8>& ExpectedHash, class ULowEntryRsaPublicKey* PublicKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "VerifySignatureRsa");

	Params::ULowEntryEncryptionLibrary_VerifySignatureRsa_Params Parms{};

	Parms.Signature = Signature;
	Parms.ExpectedHash = ExpectedHash;
	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.SignRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Hash                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*      PrivateKey                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::SignRsa(TArray<uint8>& Hash, class ULowEntryRsaPrivateKey* PrivateKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "SignRsa");

	Params::ULowEntryEncryptionLibrary_SignRsa_Params Parms{};

	Parms.Hash = Hash;
	Parms.PrivateKey = PrivateKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPublicKeyToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryRsaPublicKey*       PublicKey                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "RsaPublicKeyToBytes");

	Params::ULowEntryEncryptionLibrary_RsaPublicKeyToBytes_Params Parms{};

	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPrivateKeyToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryRsaPrivateKey*      PrivateKey                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "RsaPrivateKeyToBytes");

	Params::ULowEntryEncryptionLibrary_RsaPrivateKeyToBytes_Params Parms{};

	Parms.PrivateKey = PrivateKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytesRandomLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinLength                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLength                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::GenerateSecureRandomBytesRandomLength(int32 MinLength, int32 MaxLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "GenerateSecureRandomBytesRandomLength");

	Params::ULowEntryEncryptionLibrary_GenerateSecureRandomBytesRandomLength_Params Parms{};

	Parms.MinLength = MinLength;
	Parms.MaxLength = MaxLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Length                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::GenerateSecureRandomBytes(int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "GenerateSecureRandomBytes");

	Params::ULowEntryEncryptionLibrary_GenerateSecureRandomBytes_Params Parms{};

	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateKeysRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryRsaPublicKey*       PublicKey                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*      PrivateKey                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bits                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryEncryptionLibrary::GenerateKeysRsa(class ULowEntryRsaPublicKey** PublicKey, class ULowEntryRsaPrivateKey** PrivateKey, int32 Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "GenerateKeysRsa");

	Params::ULowEntryEncryptionLibrary_GenerateKeysRsa_Params Parms{};

	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PublicKey != nullptr)
		*PublicKey = Parms.PublicKey;

	if (PrivateKey != nullptr)
		*PrivateKey = Parms.PrivateKey;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPublicKey*       PublicKey                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::EncryptRsa(TArray<uint8>& Data, class ULowEntryRsaPublicKey* PublicKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "EncryptRsa");

	Params::ULowEntryEncryptionLibrary_EncryptRsa_Params Parms{};

	Parms.Data = Data;
	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptAes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Key                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               AddHash                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::EncryptAes(TArray<uint8>& Data, TArray<uint8>& Key, bool AddHash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "EncryptAes");

	Params::ULowEntryEncryptionLibrary_EncryptAes_Params Parms{};

	Parms.Data = Data;
	Parms.Key = Key;
	Parms.AddHash = AddHash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      EncryptedData                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*      PrivateKey                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::DecryptRsa(TArray<uint8>& EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "DecryptRsa");

	Params::ULowEntryEncryptionLibrary_DecryptRsa_Params Parms{};

	Parms.EncryptedData = EncryptedData;
	Parms.PrivateKey = PrivateKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptAes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      EncryptedData                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Key                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               AddedHash                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::DecryptAes(TArray<uint8>& EncryptedData, TArray<uint8>& Key, bool AddedHash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "DecryptAes");

	Params::ULowEntryEncryptionLibrary_DecryptAes_Params Parms{};

	Parms.EncryptedData = EncryptedData;
	Parms.Key = Key;
	Parms.AddedHash = AddedHash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPublicKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryRsaPublicKey*       PublicKey                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryEncryptionLibrary::BytesToRsaPublicKey(bool* Success, class ULowEntryRsaPublicKey** PublicKey, TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "BytesToRsaPublicKey");

	Params::ULowEntryEncryptionLibrary_BytesToRsaPublicKey_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (PublicKey != nullptr)
		*PublicKey = Parms.PublicKey;

}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPrivateKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*      PrivateKey                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryEncryptionLibrary::BytesToRsaPrivateKey(bool* Success, class ULowEntryRsaPrivateKey** PrivateKey, TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryEncryptionLibrary", "BytesToRsaPrivateKey");

	Params::ULowEntryEncryptionLibrary_BytesToRsaPrivateKey_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (PrivateKey != nullptr)
		*PrivateKey = Parms.PrivateKey;

}


// Class LowEntryEncryption.LowEntryRsaKeys
// (None)

class UClass* ULowEntryRsaKeys::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryRsaKeys");

	return Clss;
}


// LowEntryRsaKeys LowEntryEncryption.Default__LowEntryRsaKeys
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryRsaKeys* ULowEntryRsaKeys::GetDefaultObj()
{
	static class ULowEntryRsaKeys* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryRsaKeys*>(ULowEntryRsaKeys::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryEncryption.LowEntryRsaPrivateKey
// (None)

class UClass* ULowEntryRsaPrivateKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryRsaPrivateKey");

	return Clss;
}


// LowEntryRsaPrivateKey LowEntryEncryption.Default__LowEntryRsaPrivateKey
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryRsaPrivateKey* ULowEntryRsaPrivateKey::GetDefaultObj()
{
	static class ULowEntryRsaPrivateKey* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryRsaPrivateKey*>(ULowEntryRsaPrivateKey::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryEncryption.LowEntryRsaPublicKey
// (None)

class UClass* ULowEntryRsaPublicKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryRsaPublicKey");

	return Clss;
}


// LowEntryRsaPublicKey LowEntryEncryption.Default__LowEntryRsaPublicKey
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryRsaPublicKey* ULowEntryRsaPublicKey::GetDefaultObj()
{
	static class ULowEntryRsaPublicKey* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryRsaPublicKey*>(ULowEntryRsaPublicKey::StaticClass()->DefaultObject);

	return Default;
}

}


